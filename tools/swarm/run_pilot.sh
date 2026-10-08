#!/bin/bash
# run_pilot.sh [PARALLEL]: run the Haiku pilot over queue/pilot/functions.txt, then integrate matches.
# Records subscription usage before/after in queue/pilot/usage.log.
P=${1:-4}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
L=queue/pilot/usage.log
echo "$(date -Is) before: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
done_list=$(python3 -c "import json;print(' '.join(json.loads(l)['func'] for l in open('queue/pilot/results.jsonl')))" 2>/dev/null)
while read -r f seg size diff; do
  [[ " $done_list " == *" $f "* ]] && continue
  echo "$f $seg"
done < queue/pilot/functions.txt | xargs -P "$P" -L 1 bash -c 'tools/swarm/run_one.sh "$0" "$1" > /dev/null 2>&1; echo "$(date -Is) finished $0"'
echo "$(date -Is) after:  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
# integrate verified matches one at a time (each rebuild must keep the ROM matching)
python3 - <<'PY' | while read -r f seg; do .venv/bin/python tools/hh/apply_match.py "$f" "queue/pilot/work/$f/attempt.c" "$seg" >> queue/pilot/integrate.log 2>&1; done
import json
seen=set()
for l in open("queue/pilot/results.jsonl"):
    r=json.loads(l)
    if r["verified"]=="MATCH" and r["func"] not in seen:
        seen.add(r["func"]); print(r["func"], r["segment"])
PY
echo "$(date -Is) integrated: $(grep -c APPLIED queue/pilot/integrate.log) applied, $(grep -c REJECTED queue/pilot/integrate.log) rejected" >> $L
tools/hh/refresh_dashboard.sh > /dev/null 2>&1
$(command -v ~/bin/ping-me || echo true) "Hybrid Heaven pilot finished" "$(python3 tools/swarm/summary.py | head -3 | tr '\n' ' ')" success > /dev/null 2>&1
