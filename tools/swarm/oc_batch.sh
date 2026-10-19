#!/bin/bash
# oc_batch.sh BATCH MODEL [PARALLEL]: run free OpenCode workers over queue/BATCH/functions.txt. Retries functions that
# ended in a provider ERROR (up to OC_ROUNDS passes). No integration, no commits: matches stay in queue/BATCH/work.
{ # whole script in one block: bash parses it before running, so editing this file cannot break live runs
BATCH=$1; MODEL=$2; P=${3:-4}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
for d in $HOME/.oc/tmp/run.*; do [ -d "$d" ] && ! kill -0 "${d##*.}" 2>/dev/null && rm -rf "$d"; done   # killed runs' temp dirs
flock -n $HOME/.oc/gate.lock tools/swarm/oc_gate.sh > /dev/null 2>&1 &     # one gate for all free batches
export BATCH OC_MODEL=$MODEL HARNESS2=1 DIAG=1 INFILE=1; Q=queue/$BATCH; rm -f $Q/STOP
for round in $(seq 1 ${OC_ROUNDS:-8}); do
  done_list=$(python3 -c "import json;print(' '.join(r['func'] for r in map(json.loads, open('$Q/results.jsonl')) if r['verified'] != 'ERROR'))" 2>/dev/null)
  todo=$(while read -r f seg rest; do [[ " $done_list " == *" $f "* ]] || echo "$f $seg"; done < $Q/functions.txt)
  [ -z "$todo" ] && break
  echo "$(date -Is) round $round: $(echo "$todo" | wc -l) to do" >> $Q/oc.log
  echo "$todo" | xargs -P "$P" -L 1 bash -c '[ -f "queue/$BATCH/STOP" ] && exit 0; tools/swarm/run_one_oc.sh "$0" "$1" > /dev/null 2>&1'
done
echo "$(date -Is) finished" >> $Q/oc.log; touch $Q/DONE
exit; }
