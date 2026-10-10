"""exp2/exp3 report: Haiku tag teams (relay and swarm) against Sonnet.
  python3 tools/swarm/exp2_report.py EXP SONNET_BATCH > queue/EXP/REPORT.md
EXP's arms are queue/EXP_r1..3 (relay) and queue/EXP_n1..3 (swarm); SONNET_BATCH is a Sonnet run on the same functions."""
import csv, json, os, re, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
E, SB = sys.argv[1], sys.argv[2]

def load(b):
    p = "queue/%s/results.jsonl" % b; out = {}
    if os.path.exists(p):
        for l in open(p):
            r = json.loads(l)
            if r["verified"] != "ERROR": out[r["func"]] = r
    return out
won = lambda d: {f for f, r in d.items() if r["verified"] == "MATCH"}
cost = lambda d: sum((r.get("cost_usd_equiv") or 0) for r in d.values())

pairs = [tuple(l.split()[:2]) for l in open("queue/%s/functions.txt" % E) if l.strip()]
F = {f for f, _ in pairs}; n = len(F); S = set(pairs)
diff = {r["func"]: int(r["difficulty"]) for r in csv.DictReader(open("queue/functions.csv")) if (r["func"], r["segment"]) in S}
R = [load("%s_r%d" % (E, k)) for k in (1, 2, 3)]
N = [load("%s_n%d" % (E, k)) for k in (1, 2, 3)]
SON = {f: r for f, r in load(SB).items() if f in F}

print("# %s: Haiku tag teams vs Sonnet\n" % E)
print("%d functions (difficulty %d–%d, median %d): the ones a first fresh Haiku run did **not** match. "
      "Haiku: 10 checks per run. Every match verified independently; nothing integrated until all arms finished.\n"
      % (n, min(diff.values()), max(diff.values()), sorted(diff.values())[n // 2]))
print("- **Relay:** leg k starts from leg k−1's last attempt (leg 1 from the first Haiku's), with a note to not just repeat it. "
      "Only still-unmatched functions go on to the next leg.")
print("- **Swarm:** independent fresh Haiku runs on every function; a function counts once any run matches (best of k).")
print("- **Sonnet:** one Sonnet run (15 checks) from the first Haiku's attempt, same functions (`%s`).\n" % SB)
print("| Arm | Matched | Rate | Runs | Cost (API-equiv.) | $ per match |\n|---|---|---|---|---|---|")
acc, runs, c = set(), 0, 0.0
for k, d in enumerate(R, 1):
    if not d: continue
    acc |= won(d); runs += len(d); c += cost(d)
    print("| Relay, %d leg%s | %d / %d | %.0f%% | %d | $%.2f | %s |" % (k, "s" if k > 1 else "", len(acc), n, 100 * len(acc) / n, runs, c,
          "$%.2f" % (c / len(acc)) if acc else "—"))
acc, runs, c = set(), 0, 0.0
for k, d in enumerate(N, 1):
    if not d: continue
    acc |= won(d); runs += len(d); c += cost(d)
    print("| Swarm, best of %d | %d / %d | %.0f%% | %d | $%.2f | %s |" % (k, len(acc), n, 100 * len(acc) / n, runs, c,
          "$%.2f" % (c / len(acc)) if acc else "—"))
if SON:
    print("| Sonnet, 1 run | %d / %d | %.0f%% | %d | $%.2f | %s |" % (len(won(SON)), n, 100 * len(won(SON)) / n, len(SON), cost(SON),
          "$%.2f" % (cost(SON) / len(won(SON))) if won(SON) else "—"))
rel = set().union(*map(won, R)); sw = set().union(*map(won, N)); so = won(SON)
print("\nOverlap: relay ∪ swarm = %d; relay ∩ swarm = %d; Sonnet-only (neither Haiku team) = %d; Haiku teams but not Sonnet = %d.\n"
      % (len(rel | sw), len(rel & sw), len(so - rel - sw), len((rel | sw) - so)))
print("## By difficulty\n\n| Difficulty | Functions | Relay | Swarm | Sonnet |\n|---|---|---|---|---|")
lo_hi = sorted(set(diff.values())); cuts = [lo_hi[0], lo_hi[len(lo_hi) // 3], lo_hi[2 * len(lo_hi) // 3], lo_hi[-1] + 1]
for lo, hi in zip(cuts, cuts[1:]):
    fs = {f for f in F if lo <= diff[f] < hi}
    print("| %d–%d | %d | %d | %d | %d |" % (lo, hi - 1, len(fs), len(rel & fs), len(sw & fs), len(so & fs)))
if os.path.exists("queue/%s/usage.log" % E):
    print("\n## Usage (subscription meter)\n\n```")
    for l in open("queue/%s/usage.log" % E):
        m = re.match(r"(\S+) (.*?): .*weekly (\d+)%.*5-hour (\d+)%", l)
        if m: print("%s  %-14s weekly %s%%  5-hour %s%%" % (m.group(1)[11:16] + "Z", m.group(2), m.group(3), m.group(4)))
    print("```")
