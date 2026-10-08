#!/bin/bash
# run_batch.sh BATCH [PARALLEL] [WEEKLY_CAP]
#   Runs Haiku workers over queue/BATCH/functions.txt ("func segment ..." per line), stops launching new
#   workers once weekly usage reaches WEEKLY_CAP %, then integrates verified matches and refreshes the dashboard.
BATCH=$1; P=${2:-4}; CAP=${3:-72}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
export BATCH; Q=queue/$BATCH; L=$Q/usage.log; rm -f $Q/STOP
weekly() { $(command -v ~/bin/usage-gate || echo true) --brief 2>&1 | sed -n 's/.*weekly \([0-9]*\)%.*/\1/p'; }
echo "$(date -Is) start  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
# usage guard: every 2 minutes, log usage and set STOP once weekly >= CAP
( while [ ! -f $Q/DONE ]; do w=$(weekly); echo "$(date -Is) usage  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
    [ -n "$w" ] && [ "$w" -ge "$CAP" ] && { touch $Q/STOP; echo "$(date -Is) STOP weekly ${w}% >= cap ${CAP}%" >> $L; }
    sleep 120; done ) &
done_list=$(python3 -c "import json;print(' '.join(json.loads(l)['func'] for l in open('$Q/results.jsonl')))" 2>/dev/null)
while read -r f seg rest; do [[ " $done_list " == *" $f "* ]] || echo "$f $seg"; done < $Q/functions.txt |
  xargs -P "$P" -L 1 bash -c '[ -f "queue/$BATCH/STOP" ] && exit 0; tools/swarm/run_one.sh "$0" "$1" > /dev/null 2>&1'
echo "$(date -Is) workers finished  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
.venv/bin/python tools/swarm/integrate.py "$BATCH" >> $Q/integrate.log 2>&1
echo "$(date -Is) integrated: $(tail -1 $Q/integrate.log)" >> $L
touch $Q/DONE
tools/hh/refresh_dashboard.sh > /dev/null 2>&1
git add -A > /dev/null 2>&1; git commit -q -m "Batch $BATCH: $(tail -1 $Q/integrate.log)

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>" > /dev/null 2>&1
$(command -v ~/bin/ping-me || echo true) "Hybrid Heaven batch $BATCH finished" "$(BATCH=$BATCH python3 tools/swarm/summary.py | head -2 | tr '\n' ' ') $(grep -E 'start|finished' $L | sed -n 's/.*weekly \([0-9]*%\).*/\1/p' | tr '\n' ' ' | sed 's/ $//; s/ / -> /')" success > /dev/null 2>&1
