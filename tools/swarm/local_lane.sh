#!/bin/bash
# local_lane.sh BATCH: the free local-model lane (workstation GPU, Strata, Qwen3.8 Flash Next IQ3_XXS; 10-28).
# One worker at a time (single GPU) through queue/BATCH/functions.txt, from the best earlier attempt with the wall
# diagnosis and IDO levers; resumes where it left off; stops when queue/BATCH/STOP exists. Matches are integrated by
# the loop like any other lane. Kept alive by cron through flock (queue/BATCH/lane.lock).
# Never restarts the workstation or its server (that needs a sign-in there); see docs/NOTEBOOK.md 10-28.
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
B=$1; Q=queue/$B; [ -f "$Q/functions.txt" ] || exit 1
export BATCH=$B INNER=run_one_oc.sh OC_MODEL=strata/qwen3.8-flash-next FROM=best INFILE=1 DIAG=1 LEARNINGS=1 LEVERS=1 WALLNOTE=1
export OC_TIMEOUT=${OC_TIMEOUT:-5400} OC_IDLE=${OC_IDLE:-1200} OC_BACKOFF=120 CHECK_LIMIT=${CHECK_LIMIT:-40}
while read -r FUNC SEG; do
  [ -f "$Q/STOP" ] && { echo "$(date -u +%FT%H:%MZ) STOP file: stopping" >> "$Q/lane.log"; exit 0; }
  [ -z "$FUNC" ] && continue
  grep -q "\"func\": \"$FUNC\", \"segment\": \"$SEG\"" "$Q/results.jsonl" 2>/dev/null && continue   # resume
  [ -f "matched/$SEG/$FUNC.c" ] && continue                                                           # matched meanwhile
  rm -f "$HOME/.oc/COOLDOWN.strata"   # a local server has no quota: one failed run must not block the next
  echo "$(date -u +%FT%H:%MZ) $FUNC $SEG" >> "$Q/lane.log"
  tools/swarm/run_one_from.sh "$FUNC" "$SEG" > /dev/null 2>&1
  tail -1 "$Q/results.jsonl" 2>/dev/null | cut -c1-200 >> "$Q/lane.log"
done < "$Q/functions.txt"
echo "$(date -u +%FT%H:%MZ) list finished" >> "$Q/lane.log"; touch "$Q/DONE"
