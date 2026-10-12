#!/bin/bash
# exp13.sh [N] [CAP]: 2x2 factorial over the worker: lean flags (--tools Read,Write,Edit,Bash --strict-mcp-config
# --disable-slash-commands) x diagnosis-grade check (DIAG=1). pick.py's top 4N fresh picks are dealt round-robin into
# four arms (same difficulty/payoff mix); all four run fresh Haiku with HARNESS2 side by side. Integration waits until
# the always-on loop is paused (queue/loop/status.md) so only one process writes matched/. Report: queue/exp13/REPORT.md
N=${1:-60}; CAP=${2:-97}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
ARMS="exp13_np exp13_nd exp13_lp exp13_ld"      # normal/lean x plain/DIAG
mkdir -p queue/exp13; for a in $ARMS; do mkdir -p queue/$a; done; L=queue/exp13/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
.venv/bin/python tools/hh/pick.py exp13 -n $((4 * N)) --kind fresh > queue/exp13/pick.out
i=0; for a in $ARMS; do awk -v k=$i 'NR % 4 == k' queue/exp13/functions.txt > queue/$a/functions.txt; i=$((i+1)); done
LEAN='--tools Read,Write,Edit,Bash --strict-mcp-config --disable-slash-commands'
export NO_INTEGRATE=1 INFILE=1 MODEL=claude-haiku-5-5 RUN_ONE=run_one3.sh HARNESS2=1
u start
tools/swarm/run_batch2.sh exp13_np 10 "$CAP" > queue/exp13_np/runner.out 2>&1 &
DIAG=1 tools/swarm/run_batch2.sh exp13_nd 10 "$CAP" > queue/exp13_nd/runner.out 2>&1 &
WORKER_FLAGS="$LEAN" tools/swarm/run_batch2.sh exp13_lp 10 "$CAP" > queue/exp13_lp/runner.out 2>&1 &
WORKER_FLAGS="$LEAN" DIAG=1 tools/swarm/run_batch2.sh exp13_ld 10 "$CAP" > queue/exp13_ld/runner.out 2>&1 &
wait; u "all four arms done"
.venv/bin/python - > queue/exp13/REPORT.md <<'PY'
import json, csv
rows = {(r["segment"], r["func"]): r for r in csv.DictReader(open("queue/functions.csv"))}
print("# exp13: lean worker x diagnosis check (fresh Haiku, HARNESS2, pick.py picks dealt round-robin)\n")
print("| arm | worker | check | tried | matches | match bytes | checks | turns | $ | $/match | bytes/$ |\n|---|---|---|---|---|---|---|---|---|---|---|")
for arm, w, c in (("exp13_np", "normal", "plain"), ("exp13_nd", "normal", "DIAG"), ("exp13_lp", "lean", "plain"), ("exp13_ld", "lean", "DIAG")):
    rs = [r for r in map(json.loads, open("queue/%s/results.jsonl" % arm)) if r.get("verified") != "ERROR"]
    win = [r for r in rs if r.get("verified") in ("MATCH", "ALONE")]
    b = sum(int(rows[(r["segment"], r["func"])]["size"]) for r in win)
    cost = sum(float(r.get("cost_usd_equiv") or 0) for r in rs); ch = sum(int(r.get("checks") or 0) for r in rs)
    tu = sum(int(r.get("turns") or 0) for r in rs)
    print("| %s | %s | %s | %d | %d | %d | %d | %d | %.2f | %.3f | %.0f |" % (arm, w, c, len(rs), len(win), b, ch, tu, cost,
          cost / max(1, len(win)), b / cost if cost else 0))
PY
u "report written; waiting for the loop to pause before integrating"
until grep -q "^- paused" queue/loop/status.md 2>/dev/null || ! pgrep -f "tools/swarm/loop.py" >/dev/null; do sleep 30; done
unset NO_INTEGRATE
.venv/bin/python tools/swarm/integrate.py $ARMS >> queue/exp13/integrate.log 2>&1
u "integrated: $(tail -1 queue/exp13/integrate.log)"; touch queue/exp13/DONE
