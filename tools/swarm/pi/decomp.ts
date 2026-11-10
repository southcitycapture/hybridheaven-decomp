/**
 * decomp.ts: Pi extension for Hybrid Heaven matching-decomp workers (2026-11-10, "Pi modded for decomp").
 *
 * 1. `check` tool: runs the worker's ./check (compile attempt.c with IDO 7.1, compare with the original ROM bytes)
 *    and returns a compact, structured result: score, verdict, the first differing instructions, the best attempt
 *    so far and the checks left. Saves the model from parsing raw bash output and from re-reading old checks.
 * 2. Deterministic compaction: when the context fills, the summary is built from the work directory itself (target,
 *    best attempt with its score and source, every attempt's score, the last check), not from a lossy LLM summary of
 *    the conversation. The model keeps exactly what it needs to continue.
 *
 * No package imports (the extension is loaded from the repo inside the bubblewrap sandbox): plain JSON-schema
 * parameters and Node built-ins only. Used by tools/swarm/run_one_pi.sh when PI_MOD=1.
 */
import { existsSync, readdirSync, readFileSync } from "node:fs";
import { join } from "node:path";

const CHECK_LIMIT = Number(process.env.CHECK_LIMIT || 40);

function read(p: string, max = 1 << 20): string {
	try {
		const t = readFileSync(p, "utf8");
		return t.length > max ? t.slice(0, max) + "\n[...truncated]" : t;
	} catch {
		return "";
	}
}

function scoreOf(line: string): number {
	if (line.startsWith("MATCH")) return 1;
	const m = line.match(/^score (\d+)\/(\d+)/);
	return m && Number(m[2]) ? Number(m[1]) / Number(m[2]) : 0;
}

function attempts(dir: string): { n: number; res: string; score: number }[] {
	const d = join(dir, ".attempts");
	if (!existsSync(d)) return [];
	return readdirSync(d)
		.filter((f) => f.endsWith(".res"))
		.map((f) => {
			const res = read(join(d, f)).split("\n")[0] || "";
			return { n: Number(f.replace(".res", "")), res, score: scoreOf(res) };
		})
		.sort((a, b) => a.n - b.n);
}

function compact(out: string, dir: string): string {
	const lines = out.split("\n").filter((l) => l.trim());
	const first = lines[0] || "(no output)";
	const diffs = lines.filter((l) => /^\s+\+0x[0-9A-F]+/.test(l)).slice(0, 10);
	const notes = lines.filter((l) => /^(VERDICT|IN-FILE|aligned|hint|LEVER|WALL|note|diagnosis)/i.test(l)).slice(0, 6);
	const rest = lines.filter((l) => !diffs.includes(l) && !notes.includes(l) && l !== first && !l.startsWith("(attempt"));
	const used = Number(read(join(dir, ".checks")).trim() || 0);
	const all = attempts(dir);
	const best = all.reduce((b, a) => (a.score > (b?.score ?? -1) ? a : b), undefined as any);
	const parts = [
		`RESULT OF THIS CHECK: ${first}`,
		diffs.length ? `First differences (mine vs target):\n${diffs.join("\n")}` : "",
		notes.length ? notes.join("\n") : "",
		rest.length && !diffs.length ? rest.slice(0, 8).join("\n") : "",
		best ? `Best so far: .attempts/${best.n}.c (${best.res})` : "",
		`Checks used: ${used}/${CHECK_LIMIT}.` + (first.startsWith("MATCH") ? " MATCHED: finish with the line `RESULT: MATCH`." : ""),
	];
	return parts.filter(Boolean).join("\n");
}

export default function (pi: any) {
	pi.registerTool({
		name: "check",
		label: "Check",
		description:
			"Compile attempt.c with the original compiler and compare the function with the original ROM. Returns the " +
			"score (matching instructions / total), the first differing instructions (mine vs target), the best attempt so " +
			"far and how many checks are left. Call it after every meaningful edit of attempt.c.",
		parameters: { type: "object", properties: {}, additionalProperties: false },
		async execute(_id: string, _params: any, signal: any, _onUpdate: any, _ctx: any) {
			const dir = process.cwd();
			const r = await pi.exec("bash", ["-c", "./check 2>&1"], { signal, timeout: 240000 });
			const out = `${r?.stdout ?? ""}${r?.stderr ?? ""}`;
			return { content: [{ type: "text", text: compact(out, dir) }], details: { raw: out.slice(0, 4000) } };
		},
	});

	pi.on("session_before_compact", async (event: any, _ctx: any) => {
		const dir = process.cwd();
		const { preparation } = event;
		const target = read(join(dir, "target.s"));
		const fn = (target.match(/glabel (func_[0-9A-F]{8})/) || [])[1] || "the target function";
		const all = attempts(dir);
		const best = all.reduce((b, a) => (a.score > (b?.score ?? -1) ? a : b), undefined as any);
		const bestSrc = best ? read(join(dir, ".attempts", `${best.n}.c`), 12000) : read(join(dir, "attempt.c"), 12000);
		const summary = [
			"## Progress so far (summary built from the work directory; earlier messages were dropped)",
			`Task: make attempt.c compile to exactly ${fn} (target.s), then finish with one line \`RESULT: MATCH\` or ` +
				"`RESULT: FAIL <best score> <one-line reason>`. prompt.md has the full task and context.h the declarations.",
			`Checks used: ${read(join(dir, ".checks")).trim() || 0}/${CHECK_LIMIT}.`,
			all.length ? `Attempt scores: ${all.map((a) => `#${a.n} ${a.res.startsWith("MATCH") ? "MATCH" : (a.res.match(/\d+\/\d+/) || ["no compile"])[0]}`).join(", ")}` : "No checked attempts yet.",
			best ? `Best attempt: .attempts/${best.n}.c (${best.res}). Its source:` : "Current attempt.c:",
			"```c\n" + bestSrc.trim() + "\n```",
			`Last check output:\n${read(join(dir, ".lastcheck"), 3000).trim()}`,
			"Continue from the best attempt: copy it to attempt.c if attempt.c is worse, make one targeted change at a time " +
				"and call the check tool. Do not re-read files you already know unless you need a detail.",
		].join("\n\n");
		return { compaction: { summary, firstKeptEntryId: preparation.firstKeptEntryId, tokensBefore: preparation.tokensBefore } };
	});
}
