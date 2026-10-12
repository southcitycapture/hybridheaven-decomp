#!/bin/bash
# exp10.sh [N] [CAP]: does HARNESS2 (no repeats, free compile errors, stall stop) cut cost per match without losing
# matches? pick.py's top 2N fresh picks are dealt alternately into two arms (same difficulty/payoff mix); both run
# fresh Haiku side by side, arm b with HARNESS2=1. Nothing integrates until both are done. Report: queue/exp10/REPORT.md
N=${1:-60}; CAP=${2:-88}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
mkdir -p queue/exp10 queue/exp10_a queue/exp10_b; L=queue/exp10/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
.venv/bin/python tools/hh/pick.py exp10 -n $((2 * N)) --kind fresh > queue/exp10/pick.out
awk 'NR % 2 == 1' queue/exp10/functions.txt > queue/exp10_a/functions.txt
awk 'NR % 2 == 0' queue/exp10/functions.txt > queue/exp10_b/functions.txt
export NO_INTEGRATE=1 INFILE=1 MODEL=claude-haiku-5-5 RUN_ONE=run_one3.sh
u start
tools/swarm/run_batch2.sh exp10_a 10 "$CAP" > queue/exp10_a/runner.out 2>&1 &
HARNESS2=1 tools/swarm/run_batch2.sh exp10_b 10 "$CAP" > queue/exp10_b/runner.out 2>&1 &
wait; u "both arms done"
.venv/bin/python - > queue/exp10/REPORT.md <<'PY'
import json, csv
rows = {(r["segment"], r["func"]): r for r in csv.DictReader(open("queue/functions.csv"))}
print("# exp10: HARNESS2 vs default harness (fresh Haiku, pick.py picks dealt alternately)\n")
print("| arm | tried | matches | match bytes | checks | $ | $/match | bytes/$ |\n|---|---|---|---|---|---|---|---|")
for arm, name in (("exp10_a", "default"), ("exp10_b", "HARNESS2")):
    rs = [json.loads(l) for l in open("queue/%s/results.jsonl" % arm)]
    rs = [r for r in rs if r.get("verified") != "ERROR"]
    win = [r for r in rs if r.get("verified") in ("MATCH", "ALONE")]
    b = sum(int(rows[(r["segment"], r["func"])]["size"]) for r in win)
    c = sum(float(r.get("cost_usd_equiv") or 0) for r in rs); ch = sum(int(r.get("checks") or 0) for r in rs)
    print("| %s | %d | %d | %d | %d | %.2f | %.3f | %.0f |" % (name, len(rs), len(win), b, ch, c, c / max(1, len(win)), b / c if c else 0))
PY
unset NO_INTEGRATE
for b in exp10_a exp10_b; do .venv/bin/python tools/swarm/integrate.py $b >> queue/exp10/integrate.log 2>&1; done
u done; touch queue/exp10/DONE
