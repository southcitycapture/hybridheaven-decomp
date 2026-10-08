#!/bin/bash
# ladder.sh EXP [PARALLEL] [WEEKLY_CAP]: escalation ladder over queue/EXP/functions.txt
#   1. Haiku (10 checks)  2. decomp-permuter on Haiku's near-misses (10 min)  3. Sonnet (15 checks) on the rest,
#   starting from Haiku's best attempt. Usage is logged around every stage; everything integrates at the end.
EXP=$1; P=${2:-12}; CAP=${3:-76}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
L=queue/$EXP/ladder.log; mkdir -p queue/${EXP}_h queue/${EXP}_s
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1 | sed -n 's/.*\(weekly [0-9]*%\).*\(5-hour [0-9]*%\).*/\1, \2/p')" >> $L; }
u "start"
cp queue/$EXP/functions.txt queue/${EXP}_h/functions.txt
RUN_ONE=run_one3.sh MODEL=claude-haiku-5-5 tools/swarm/run_batch2.sh ${EXP}_h "$P" "$CAP" > queue/${EXP}_h/runner.out 2>&1
u "after haiku"
.venv/bin/python tools/swarm/permute.py --batches ${EXP}_h --min 0.8 --minutes 10 --parallel 10 --jobs 2 > queue/$EXP/permute.out 2>&1
u "after permuter"
# whatever neither Haiku nor the permuter matched goes to Sonnet, starting from Haiku's attempt
python3 - "$EXP" <<'PY'
import json, os, sys
e = sys.argv[1]
won = {json.loads(l)["func"] for l in open("queue/%s_h/results.jsonl" % e) if json.loads(l)["verified"] == "MATCH"}
if os.path.exists("queue/permute/results.jsonl"):
    won |= {json.loads(l)["func"] for l in open("queue/permute/results.jsonl") if json.loads(l)["verified"] == "MATCH"}
rest = [l for l in open("queue/%s/functions.txt" % e) if l.split()[0] not in won]
open("queue/%s_s/functions.txt" % e, "w").write("".join(rest))
print(len(rest), "to Sonnet")
PY
[ -f queue/${EXP}_h/STOP ] || CHECK_LIMIT=15 NOTE_FILE=escalate_note.md FIXMODE=1 RUN_ONE=run_one3.sh MODEL=claude-sonnet-5-5 \
  tools/swarm/run_batch2.sh ${EXP}_s "$P" "$CAP" > queue/${EXP}_s/runner.out 2>&1
u "after sonnet"
.venv/bin/python tools/swarm/integrate.py permute >> queue/$EXP/integrate.log 2>&1
tools/hh/refresh_dashboard.sh > /dev/null 2>&1
touch queue/$EXP/DONE
$(command -v ~/bin/ping-me || echo true) "Hybrid Heaven ladder $EXP finished" "$(python3 tools/swarm/ladder_summary.py $EXP | head -4 | tr '\n' ' ')" success > /dev/null 2>&1
