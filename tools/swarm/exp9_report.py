"""exp9 report. `snapshot` saves the registry before integration; without arguments, writes REPORT.md to stdout:
per arm, matches by the agents, copies propagate.py then matched from them (same fp), bytes, and $ spent."""
import csv, glob, json, os, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
reg = lambda: {tuple(p[:-2].split("/")[1:]) for p in glob.glob("matched/*/*.c")}
if sys.argv[1:] == ["snapshot"]:
    json.dump(sorted(reg()), open("queue/exp9/before.json", "w")); sys.exit()
rows = {(r["segment"], r["func"]): r for r in csv.DictReader(open("queue/functions.csv"))}
before = {tuple(k) for k in json.load(open("queue/exp9/before.json"))}
now = reg(); new = now - before
out = ["# exp9: pick.py ranking vs easiest-first (fresh Haiku, 60 functions each)", "",
       "| arm | tried | agent matches | agent bytes | copies propagated | copy bytes | total bytes | $ | bytes/$ |",
       "|---|---|---|---|---|---|---|---|---|"]
for arm in ("exp9_ranked", "exp9_easy"):
    res = [json.loads(l) for l in open("queue/%s/results.jsonl" % arm)]
    won = {(r["segment"], r["func"]) for r in res if (r["segment"], r["func"]) in new}
    fps = {rows[k]["fp"] for k in won}
    copies = {k for k in new - won if k in rows and rows[k]["fp"] in fps}
    ab = sum(int(rows[k]["size"]) for k in won); cb = sum(int(rows[k]["size"]) for k in copies)
    cost = sum(float(r.get("cost_usd_equiv") or 0) for r in res)
    out.append("| %s | %d | %d | %d | %d | %d | %d | %.2f | %.0f |" % (arm, len(res), len(won), ab, len(copies), cb,
               ab + cb, cost, (ab + cb) / cost if cost else 0))
out += ["", "Predicted by pick.py for the ranked arm: see queue/exp9_ranked/PICK.md (Expected line)."]
print("\n".join(out))
