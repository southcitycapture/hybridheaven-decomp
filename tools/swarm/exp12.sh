#!/bin/bash
# exp12.sh [N] [CAP]: does the diagnosis-grade check (DIAG=1: aligned verdict + frame map) raise matches or cut cost
# matches? pick.py's top 2N fresh picks are dealt alternately into two arms (same difficulty/payoff mix); both run
# fresh Haiku side by side, both with HARNESS2=1, arm b DIAG. Nothing integrates until both are done. Report: queue/exp12/REPORT.md
N=${1:-60}; CAP=${2:-88}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
mkdir -p queue/exp12 queue/exp12_a queue/exp12_b; L=queue/exp12/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
.venv/bin/python tools/hh/pick.py exp12 -n $((2 * N)) --kind fresh > queue/exp12/pick.out
awk 'NR % 2 == 1' queue/exp12/functions.txt > queue/exp12_a/functions.txt
awk 'NR % 2 == 0' queue/exp12/functions.txt > queue/exp12_b/functions.txt
export NO_INTEGRATE=1 INFILE=1 MODEL=claude-haiku-5-5 RUN_ONE=run_one3.sh
u start
HARNESS2=1 tools/swarm/run_batch2.sh exp12_a 10 "$CAP" > queue/exp12_a/runner.out 2>&1 &
HARNESS2=1 DIAG=1 tools/swarm/run_batch2.sh exp12_b 10 "$CAP" > queue/exp12_b/runner.out 2>&1 &
wait; u "both arms done"
.venv/bin/python - > queue/exp12/REPORT.md <<'PY'
import json, csv
rows = {(r["segment"], r["func"]): r for r in csv.DictReader(open("queue/functions.csv"))}
print("# exp12: diagnosis-grade check (DIAG) vs plain check (both HARNESS2) (fresh Haiku, pick.py picks dealt alternately)\n")
print("| arm | tried | matches | match bytes | checks | $ | $/match | bytes/$ |\n|---|---|---|---|---|---|---|---|")
for arm, name in (("exp12_a", "plain check"), ("exp12_b", "DIAG check")):
    rs = [json.loads(l) for l in open("queue/%s/results.jsonl" % arm)]
    rs = [r for r in rs if r.get("verified") != "ERROR"]
    win = [r for r in rs if r.get("verified") in ("MATCH", "ALONE")]
    b = sum(int(rows[(r["segment"], r["func"])]["size"]) for r in win)
    c = sum(float(r.get("cost_usd_equiv") or 0) for r in rs); ch = sum(int(r.get("checks") or 0) for r in rs)
    print("| %s | %d | %d | %d | %d | %.2f | %.3f | %.0f |" % (name, len(rs), len(win), b, ch, c, c / max(1, len(win)), b / c if c else 0))
PY
unset NO_INTEGRATE
for b in exp12_a exp12_b; do .venv/bin/python tools/swarm/integrate.py $b >> queue/exp12/integrate.log 2>&1; done
u done; touch queue/exp12/DONE
