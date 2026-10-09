"""Write the exp1 report (markdown) from the arm results: python3 tools/swarm/exp1_report.py > queue/exp1/REPORT.md"""
import csv, glob, json, os, re
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)

def load(b):
    p = "queue/%s/results.jsonl" % b
    out = {}
    if os.path.exists(p):
        for l in open(p):
            r = json.loads(l)
            if r["verified"] != "ERROR": out[r["func"]] = r     # last real outcome wins
    return out

pairs = [tuple(l.split()[:2]) for l in open("queue/exp1/functions.txt") if l.strip()]
funcs = [f for f, _ in pairs]; F = set(funcs); S = set(pairs)       # names are unique within exp1
diff = {r["func"]: int(r["difficulty"]) for r in csv.DictReader(open("queue/functions.csv")) if (r["func"], r["segment"]) in S}
A, B, C = load("exp1_a"), load("exp1_b"), load("exp1_c")
P = {k: v for k, v in load("permute").items() if k in F}
won = lambda d: {f for f, r in d.items() if r["verified"] == "MATCH"}
cost = lambda d, fs=None: sum((r.get("cost_usd_equiv") or 0) for f, r in d.items() if fs is None or f in fs)
landed = {f for f, seg in pairs if os.path.exists("matched/%s/%s.c" % (seg, f))}

a, c, p = won(A), won(C), won(P) - won(A)
b_runs = {f for f in B if f not in a}
b = a | (won(B) & b_runs)
d_sonnet = b_runs - p                                  # D's Sonnet stage: A's failures the permuter didn't win
d = a | p | (won(B) & d_sonnet)
arms = [
    ("A", "Haiku only", a, len(A), 0, cost(A)),
    ("B", "Haiku → Sonnet", b, len(A), len(b_runs), cost(A) + cost(B, b_runs)),
    ("C", "Sonnet only", c, 0, len(C), cost(C)),
    ("D", "Haiku → permuter → Sonnet", d, len(A), len(d_sonnet), cost(A) + cost(B, d_sonnet)),
]
n = len(funcs)
print("# Experiment exp1: Haiku vs Sonnet vs escalation on 60 hard functions\n")
print("Run %s. Functions: %d fresh **hard-tier** functions (difficulty %d–%d, median %d), never attempted before, from %d segments, "
      "sampled evenly across the tier. Functions with jump tables or float constants were excluded: the build can't yet place "
      "IDO's `.rodata` at the original address, so they can't pass the exact check whoever writes them.\n"
      % (open("queue/exp1/usage.log").readline()[:10], n, min(diff.values()), max(diff.values()),
         sorted(diff.values())[n // 2], len({l.split()[1] for l in open("queue/exp1/functions.txt") if l.strip()})))
print("Haiku: 10 checks per function. Sonnet: 15 checks. Permuter: 10 minutes per near-miss (≥ 80 % of instructions), CPU only. "
      "Every match is verified independently (instructions and resolved addresses). Nothing was integrated until every arm "
      "had finished, so no arm could see another's matches.\n")
print("## Results\n")
print("| Arm | Pipeline | Matched | Rate | Haiku runs | Sonnet runs | Cost (API-equiv.) | $ per match |")
print("|---|---|---|---|---|---|---|---|")
for k, name, w, hr, sr, cst in arms:
    print("| %s | %s | %d / %d | %.0f%% | %d | %d | $%.2f | %s |" % (k, name, len(w), n, 100 * len(w) / n, hr, sr, cst,
          "$%.2f" % (cst / len(w)) if w else "—"))
print("\nD reuses B's Sonnet runs: in both arms Sonnet starts from the same Haiku attempt with the same prompt, so D's Sonnet "
      "stage is B's Sonnet results restricted to the functions the permuter didn't win.\n")
print("## Stages\n")
near = len([1 for l in open("queue/exp1/permute.out") if re.match(r"(MATCH|FAIL) ", l)]) if os.path.exists("queue/exp1/permute.out") else 0
print("- Haiku (A): %d matched, %d failed." % (len(a), len(A) - len(a)))
print("- Permuter on A's near-misses: %d tried, %d won." % (near, len(p)))
print("- Sonnet after Haiku (B): %d of %d runs matched." % (len(won(B) & b_runs), len(b_runs)))
print("- Sonnet from scratch (C): %d of %d runs matched." % (len(c), len(C)))
print("- Overlap: %d matched by both Haiku-first (B) and Sonnet-only (C); %d only by B; %d only by C; %d by nobody."
      % (len(b & c), len(b - c), len(c - b), n - len(b | c | d)))
print("\n## By difficulty\n")
bands = [(100, 150), (150, 200), (200, 300)]
print("| Difficulty | Functions | A | B | C | D |\n|---|---|---|---|---|---|")
for lo, hi in bands:
    fs = {f for f in funcs if lo <= diff[f] < hi}
    print("| %d–%d | %d | %s |" % (lo, hi - 1, len(fs), " | ".join(str(len(w & fs)) for _, _, w, *_ in arms)))
print("\n## Usage (subscription meter)\n")
print("```")
for l in open("queue/exp1/usage.log"):
    m = re.match(r"(\S+) (.*?): .*weekly (\d+)%.*5-hour (\d+)%", l)
    if m: print("%s  %-24s weekly %s%%  5-hour %s%%" % (m.group(1)[11:16] + "Z", m.group(2), m.group(3), m.group(4)))
print("```\n")
print("## In the build\n")
print("%d of the %d functions matched by any arm are now in the build (the rest match alone but clash with declarations "
      "already in their source file; see `queue/rejected.jsonl`)." % (len(landed & (a | b | c | d)), len(a | b | c | d)))
