#!/bin/bash
# lane_run.sh BATCH [VAR=value ...]: run queue/BATCH/functions.txt, 4 at a time, from the best earlier attempt
# (FROM=best), logging the usage meter at start and end. Used for the 10-28 lane plan (Sonnet A/B on the levers
# guide + wall diagnosis, Terra max as the free lane). Extra VAR=value arguments are exported (MODEL, LEVERS, ...).
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
B=$1; shift; Q=queue/$B; L=$Q/run.log
meter() { $(command -v ~/bin/usage-gate || echo true) --brief 100 100 >/dev/null 2>&1
          python3 -c "import json;d=json.load(open('$HOME/.cache/usage-gate.json'))['data'];print('weekly %s%% five-hour %s%%'%(d['seven_day']['utilization'],d['five_hour']['utilization']))"; }
echo "$(date -u +%FT%H:%MZ) start: $(meter)" >> "$L"
export BATCH=$B FROM=best INFILE=1 DIAG=1 LEARNINGS=1 CHECK_LIMIT=60 DEADLINE_MIN=25
export WORKER_FLAGS="--tools Read,Write,Edit,Bash --strict-mcp-config --disable-slash-commands --effort high"
for kv in "$@"; do export "$kv"; done
xargs -P 4 -L 1 tools/swarm/run_one_from.sh < "$Q/functions.txt" > /dev/null 2>&1
echo "$(date -u +%FT%H:%MZ) end: $(grep -c '"MATCH"' "$Q/results.jsonl")/$(grep -c . "$Q/results.jsonl") matched; $(meter)" >> "$L"
touch "$Q/DONE"
