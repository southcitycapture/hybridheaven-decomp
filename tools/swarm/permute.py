"""Run decomp-permuter on near-miss worker attempts (CPU only, no model usage).

  permute.py [--min 0.8] [--min-aligned 0.95] [--minutes 15] [--jobs 2] [--parallel 3] [--list]

Finds failed worker attempts whose current attempt.c scores at least --min (fraction of matching
instructions), sets up a permuter directory for each under queue/permute/work/<func>/, runs the
permuter at the lowest CPU priority until it finds an exact match or the time limit runs out, splices
the winning function back into the worker's C, and verifies it with the exact check. Verified wins are
written to queue/permute/results.jsonl in the same format as worker batches, so srcbuild/integrate.py
can add them.
"""
import argparse, glob, json, os, re, shutil, signal, subprocess, sys, time
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
sys.path.insert(0, os.path.join(HH, "tools/hh")); import workdir
PERM = os.path.join(HH, "tools/decomp-permuter")
OUT = os.path.join(HH, "queue/permute")
PY = os.path.join(HH, ".venv/bin/python")
CC = os.path.join(HH, "tools/ido/7.1/cc")

def score(func, seg, src):
    r = subprocess.run([PY, "tools/hh/try_func.py", func, src, "--seg", seg], capture_output=True, text=True)
    line = (r.stdout.strip().splitlines() or [""])[0]
    if line == "MATCH": return 1.0
    m = re.match(r"score (\d+)/(\d+)", line)
    return int(m.group(1)) / int(m.group(2)) if m else 0.0

def aligned_score(func, seg, src):
    """Similarity of the compiled attempt to the target as instruction sequences (difflib over opcodes), so one
    inserted or missing instruction costs one instruction, not everything after it (the positional score can
    read 12% for an attempt that is 94% right)."""
    import difflib, tempfile
    sys.path.insert(0, os.path.join(HH, "tools/hh")); import try_func as T
    try:
        off, size, vram, asm = T.find_func(func, None, seg)
        with tempfile.TemporaryDirectory() as td:
            T.compile_c(src, "7.1", "-O2", os.path.join(td, "f.o")); mine, _ = T.func_bytes(os.path.join(td, "f.o"), func)
    except (SystemExit, Exception): return 0.0
    orig = open(os.path.join(HH, "build/expanded.bin"), "rb").read()[off:off + size]
    def ops(b):
        w = [int.from_bytes(b[i:i + 4], "big") for i in range(0, len(b) - 3, 4)]
        return [(x >> 26, x & 0x3F if x >> 26 == 0 else (x >> 16) & 0x1F if x >> 26 == 1 else 0) for x in w]
    a, b = ops(mine), ops(orig)
    while a and a[-1] == (0, 0) and len(a) > len(b): a.pop()
    return difflib.SequenceMatcher(None, a, b, autojunk=False).ratio()

def candidates(min_score, batches=None, min_aligned=0.95):
    done = {tuple(p[:-2].split("/")[1:]) for p in glob.glob("matched/*/*.c")}       # (segment, func)
    tried = set()
    if os.path.exists(OUT + "/results.jsonl"):
        tried = {(json.loads(l)["segment"], json.loads(l)["func"]) for l in open(OUT + "/results.jsonl")}
    seen, out = set(), []
    for res in sorted(glob.glob("queue/*/results.jsonl"), key=os.path.getmtime, reverse=True):
        batch = res.split("/")[1]
        if batch == "permute" or (batches and batch not in batches): continue
        for l in open(res):
            r = json.loads(l)
            f, seg = r["func"], r["segment"]
            if r["verified"] != "FAIL" or (seg, f) in done or (seg, f) in tried or (seg, f) in seen: continue
            src = workdir.attempt(batch, f, seg)
            if not src: continue
            seen.add((seg, f)); out.append((f, seg, src))
    # near-misses by either measure: positional (the checker's score) or aligned (insertions cost one)
    with Pool(max(1, os.cpu_count() - 4)) as p:
        pos = p.starmap(score, out); ali = p.starmap(aligned_score, out)
    # the score passed on is the positional one: run_one treats 1.0 as "matches already" and skips permuting
    scored = [(sp, f, seg, src, sa) for (f, seg, src), sp, sa in zip(out, pos, ali) if sp >= min_score or sa >= min_aligned]
    return [c[:4] for c in sorted(scored, key=lambda c: (-max(c[0], c[4]), c[1]))]

def func_span(text, name):
    """(start, end) of the definition of `name` in C text (head through closing brace)."""
    m = re.search(r"^[^\n;{}]*\b%s\s*\([^;{]*\)\s*\{" % re.escape(name), text, re.M)
    if not m: return None
    i, depth = m.end(), 1
    while depth and i < len(text):
        depth += {"{": 1, "}": -1}.get(text[i], 0); i += 1
    return m.start(), i

def setup(func, seg, src, d):
    os.makedirs(d, exist_ok=True)
    work = os.path.dirname(os.path.abspath(src))
    pre = subprocess.run([CC, "-E", "-I", work, "-I", HH + "/include", src], capture_output=True, text=True).stdout
    base = "\n".join(l for l in pre.splitlines() if not l.startswith("#")) + "\n"
    open(d + "/base.c", "w").write(base)
    subprocess.run([PY, PERM + "/strip_other_fns.py", d + "/base.c", func], capture_output=True)
    asm = open(glob.glob("asm/nonmatchings/%s/*/%s.s" % (seg, func))[0]).read()
    open(d + "/target.s", "w").write('.include "macro.inc"\n.set noat\n.set noreorder\n.set gp=64\n.section .text\n' + asm)
    subprocess.run(["mips-linux-gnu-as", "-EB", "-march=vr4300", "-mabi=32", "-G", "0", "-I", HH + "/include",
                    "-o", d + "/target.o", d + "/target.s"], check=True)
    open(d + "/compile.sh", "w").write('#!/bin/bash\n"%s" -c -G 0 -non_shared -Xcpluscomm -mips2 -O2 "$1" -o "$3"\n' % CC)
    os.chmod(d + "/compile.sh", 0o755)
    open(d + "/settings.toml", "w").write('func_name = "%s"\ncompiler_type = "ido"\n' % func)

def run_one(args):
    sc, func, seg, src, minutes, jobs = args
    d = os.path.join(HH, workdir.path("permute", func, seg))     # FUNC@SEG for names several segments share
    shutil.rmtree(d, ignore_errors=True)
    if sc == 1.0:          # an earlier "failure" that matches now (e.g. after a shared-header fix)
        os.makedirs(d, exist_ok=True); shutil.copy(src, d + "/attempt.c")
        return dict(func=func, segment=seg, model="decomp-permuter", verified="MATCH", start_score=1.0, seconds=0,
                    checks=0, cost_usd_equiv=0.0, output_tokens=0, note="already matched; no permuting needed")
    try: setup(func, seg, src, d)
    except Exception as e: return dict(func=func, segment=seg, verified="FAIL", note="setup failed: %s" % e, start_score=sc)
    t0 = time.time()
    dbg = subprocess.run([PY, PERM + "/permuter.py", d, "--debug"], capture_output=True, text=True)
    m = re.search(r"base score = (\d+)", dbg.stdout + dbg.stderr)
    if m and m.group(1) == "0":
        # instructions already match; only an address (symbol/offset) is wrong, which permuting can't fix
        return dict(func=func, segment=seg, model="decomp-permuter", verified="FAIL", start_score=round(sc, 3),
                    seconds=0, checks=0, cost_usd_equiv=0.0, output_tokens=0, note="address-only mismatch: needs a model")
    # own process group, so a timeout also kills the permuter's -j helper processes (they used to be orphaned)
    proc = subprocess.Popen(["nice", "-n", "19", PY, PERM + "/permuter.py", d, "-j", str(jobs), "--stop-on-zero", "--best-only"],
                            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, start_new_session=True)
    try: proc.wait(timeout=minutes * 60)
    except subprocess.TimeoutExpired: pass
    finally:
        try: os.killpg(proc.pid, signal.SIGKILL)
        except ProcessLookupError: pass
    wins = sorted(glob.glob(d + "/output-0-*/source.c"))
    rec = dict(func=func, segment=seg, model="decomp-permuter", start_score=round(sc, 3), seconds=int(time.time() - t0),
               checks=0, cost_usd_equiv=0.0, output_tokens=0)
    if not wins:
        best = sorted(glob.glob(d + "/output-*/source.c"), key=lambda p: int(p.split("output-")[1].split("-")[0]))
        rec.update(verified="FAIL", note="no exact match in %d min" % minutes, best=best[0] if best else None)
        return rec
    # splice the winning function into the worker's own C (keeps its includes and declarations)
    win = open(wins[0]).read(); orig = open(src).read()
    ws, os_ = func_span(win, func), func_span(orig, func)
    if not ws or not os_:
        rec.update(verified="FAIL", note="could not splice winner"); return rec
    new = orig[:os_[0]] + win[ws[0]:ws[1]] + orig[os_[1]:]
    dst = os.path.join(OUT, "work", func, "attempt.c"); open(dst, "w").write(new)
    for h in ("context.h", "known.h"):   # the worker's C includes these; without them the exact check can't compile
        if os.path.exists(os.path.join(os.path.dirname(src), h)): shutil.copy(os.path.join(os.path.dirname(src), h), d)
    rec["verified"] = "MATCH" if score(func, seg, dst) == 1.0 else "FAIL"
    if rec["verified"] == "FAIL": rec["note"] = "permuter win did not survive the exact check"
    return rec

WB = os.path.expanduser("~/work/tools-ext/wb-venv/bin/decomp-workbench")
FRIENDLY = {"allocation-mismatch", "schedule-mismatch", "commutative-order", "instruction-words-identical"}

def triage(args):
    """N64 Decomp Workbench verdict for a candidate attempt (tools/hh/wb_diag.sh), e.g. allocation-mismatch."""
    f, seg, src = args
    r = subprocess.run(["tools/hh/wb_diag.sh", f, seg, src], capture_output=True, text=True, timeout=300)
    m = re.search(r"^verdict=(\S+)", r.stdout, re.M)
    return m.group(1) if m else "unknown"

if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("--min", type=float, default=0.8); ap.add_argument("--min-aligned", type=float, default=0.95)
    ap.add_argument("--list", action="store_true", help="only print the candidates"); ap.add_argument("--minutes", type=int, default=15)
    ap.add_argument("--jobs", type=int, default=2); ap.add_argument("--parallel", type=int, default=3)
    ap.add_argument("--limit", type=int, default=0); ap.add_argument("--batches", default="")
    ap.add_argument("--no-triage", action="store_true", help="don't classify with N64 Decomp Workbench")
    a = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)
    cands = candidates(a.min, set(a.batches.split(",")) if a.batches else None, a.min_aligned)
    if a.limit: cands = cands[:a.limit]
    print("%d near-misses (positional >= %.0f%% or aligned >= %.0f%%)" % (len(cands), 100 * a.min, 100 * a.min_aligned), flush=True)
    if a.list:
        for sc, f, seg, src in cands: print("%.3f %s %s %s" % (sc, f, seg, src))
        sys.exit()
    jobs = [(sc, f, seg, src, a.minutes, a.jobs) for sc, f, seg, src in cands]
    if not a.no_triage and os.path.exists(WB):
        # Triage by the workbench's verdict (queue/permute/TRIAGE.md: over 403 past runs the permuter won 68 % of
        # register-allocation / scheduling mismatches but 22 % of structure and 26 % of wrong-symbol ones). The
        # permuter-friendly kinds go first with twice the time; the rest get a short try (a model is the better bet).
        with Pool(a.parallel * 2) as p:
            verdicts = p.map(triage, [(f, seg, src) for sc, f, seg, src in cands])
        jobs = sorted(((sc, f, seg, src, (2 * a.minutes if v in FRIENDLY else max(3, a.minutes // 3)), a.jobs, v)
                       for (sc, f, seg, src), v in zip(cands, verdicts)), key=lambda j: (j[6] not in FRIENDLY, -j[0]))
        print("triage:", {v: verdicts.count(v) for v in set(verdicts)}, flush=True)
        jobs = [j[:6] for j in jobs]
    with Pool(a.parallel) as p:
        for rec in p.imap_unordered(run_one, jobs):
            open(OUT + "/results.jsonl", "a").write(json.dumps(rec) + "\n")
            print("%s %s (start %.0f%%, %ss) %s" % (rec["verified"], rec["func"], 100 * rec.get("start_score", 0),
                                                   rec.get("seconds", "?"), rec.get("note", "")), flush=True)
