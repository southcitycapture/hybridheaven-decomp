"""Write RESULTS.md (every batch) and print the short README table, from queue/*/results.jsonl."""
import glob, json, os, re, sys, time
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
DESC = {"pilot": "Pilot: 50 small functions", "batch1": "300 easy/medium", "batch2": "1,000 easy/medium",
        "batch3": "300 easy/medium", "fix1": "Repair pass: declaration conflicts", "batch4": "2,474 easy/medium (with context.h)",
        "exp0_h": "Hard tier, ladder stage 1", "exp0_s": "Hard tier, ladder stage 3 (on Haiku's failures)",
        "permute": "decomp-permuter on near-misses", "batch5n": "673 never-tried easy/medium (incl. main)",
        "batch5r": "2,148 easy/medium second attempts"}
def weekly(b):
    p = "queue/%s/usage.log" % b
    if not os.path.exists(p): return ""
    w = re.findall(r"weekly (\d+)%", open(p).read())
    return "%s%% → %s%%" % (w[0], w[-1]) if w else ""
rows = []
for p in sorted(glob.glob("queue/*/results.jsonl"), key=os.path.getmtime):
    b = p.split("/")[1]
    R = [json.loads(l) for l in open(p)]; R = [r for r in R if r.get("verified") != "ERROR"]
    if not R: continue
    models = sorted({(r.get("model") or "").replace("claude-", "") for r in R})
    m = sum(r["verified"] == "MATCH" for r in R); c = sum(r.get("cost_usd_equiv") or 0 for r in R)
    rows.append((b, DESC.get(b, b), ", ".join(models), len(R), m, c, weekly(b)))
T = ["| Batch | What | Model | Runs | Matched | Rate | API-equiv cost | Per match | Weekly usage |", "|---|---|---|---|---|---|---|---|---|"]
for b, d, mo, n, m, c, w in rows:
    T.append("| `%s` | %s | %s | %d | %d | %.0f%% | $%.2f | %s | %s |" % (b, d, mo, n, m, 100 * m / n, c, "$%.3f" % (c / m) if m and c else "–", w))
tn = sum(r[3] for r in rows if "permuter" not in r[2]); tm = sum(r[4] for r in rows if "permuter" not in r[2])
tc = sum(r[5] for r in rows)
summary = ("**%d model runs, %d verified matches (%.0f%%), $%.2f API-equivalent in total (≈ $%.3f per match)**; "
           "plus %d matches from decomp-permuter at no model cost." % (tn, tm, 100 * tm / max(1, tn), tc, tc / max(1, tm),
           sum(r[4] for r in rows if "permuter" in r[2])))
rep = json.load(open("build/progress/report.json"))["measures"]
prog = "Progress as of %s: **%.2f%% of the code** (%s of %s functions, including duplicates)." % (
    time.strftime("%Y-%m-%d"), float(rep.get("matched_code_percent", 0)), rep.get("matched_functions", 0), rep.get("total_functions"))
open(sys.argv[1] if len(sys.argv) > 1 else "RESULTS.md", "w").write(
    "# Research results\n\n" + prog + "\n\n" + summary + "\n\n" + "\n".join(T) + "\n\n"
    "Every match counted here passed the independent exact check (instructions and resolved addresses). "
    "`Weekly usage` is the Claude subscription's weekly meter at the start and end of each batch; batches overlapped, "
    "so readings are shared. Raw per-run data: `queue/<batch>/results.jsonl`.\n")
print(prog + "\n\n" + summary + "\n\nPer-batch table: [RESULTS.md](RESULTS.md).")
