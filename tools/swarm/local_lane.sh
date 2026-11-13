#!/bin/bash
# local_lane.sh BATCH: the free local-model lane (workstation GPU, Strata, Qwen3.8 Flash Next IQ3_XXS; 10-28).
# One worker at a time (single GPU) through queue/BATCH/functions.txt, from the best earlier attempt with the wall
# diagnosis and IDO levers; resumes where it left off; stops when queue/BATCH/STOP exists. Matches are integrated by
# the loop like any other lane. Kept alive by cron through flock (queue/BATCH/lane.lock).
# Harness: Pi (run_one_pi.sh, sandboxed) since 11-10, when it beat OpenCode 6/20 vs 4/20 at ~2.4x the speed;
# LOCAL_INNER=run_one_oc.sh switches back. LOCAL_MODEL=strata/<id> runs whatever model the workstation is serving (11-03: deepseek-v4.1-flash A/B).
# Never restarts the workstation or its server (that needs a sign-in there); see docs/NOTEBOOK.md 10-28.
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
B=$1; Q=queue/$B; [ -f "$Q/functions.txt" ] || exit 1
export BATCH=$B INNER=${LOCAL_INNER:-run_one_pi.sh} OC_MODEL=${LOCAL_MODEL:-strata/qwen3.8-flash-next} FROM=best INFILE=1 DIAG=1 LEARNINGS=1 LEVERS=1 WALLNOTE=1
export OC_TIMEOUT=${OC_TIMEOUT:-5400} OC_IDLE=${OC_IDLE:-1200} OC_BACKOFF=120 CHECK_LIMIT=${CHECK_LIMIT:-40}
while read -r FUNC SEG; do
  # queue/localU1/STOP pauses every local batch (the workstation sessions use it for model swaps and Strata updates)
  # queue/localU1/HOLD pauses only the cron-kept main lane (11-07: the harness A/B needs the GPU to itself)
  [ "$B" != localAB ] && [ -f queue/localU1/HOLD ] && { echo "$(date -u +%FT%H:%MZ) HOLD: paused for the A/B" >> "$Q/lane.log"; exit 0; }
  [ -f "$Q/STOP" ] || [ -f queue/localU1/STOP ] && { echo "$(date -u +%FT%H:%MZ) STOP file: stopping" >> "$Q/lane.log"; exit 0; }
  [ -z "$FUNC" ] && continue
  # resume: skip functions with a real result; an ERROR (server or provider trouble) is retried (11-12)
  grep "\"func\": \"$FUNC\", \"segment\": \"$SEG\"" "$Q/results.jsonl" 2>/dev/null | grep -qv '"ERROR"' && continue
  [ -f "matched/$SEG/$FUNC.c" ] && continue                                                           # matched meanwhile
  # one request at a time on the single-slot server: wait while any other local run is active (e.g. an orphaned run
  # from a restarted lane, or an A/B arm)
  while ps -eo args | grep -q -e '^/home/claude/.local/bin/[o]pencode run --pure -m strata/' -e '[/]pi/node_modules/.bin/pi '; do sleep 60; done
  rm -f "$HOME/.oc/COOLDOWN.strata"   # a local server has no quota: one failed run must not block the next
  echo "$(date -u +%FT%H:%MZ) $FUNC $SEG" >> "$Q/lane.log"
  tools/swarm/run_one_from.sh "$FUNC" "$SEG" > /dev/null 2>&1
  tail -1 "$Q/results.jsonl" 2>/dev/null | cut -c1-200 >> "$Q/lane.log"
done < "$Q/functions.txt"
echo "$(date -u +%FT%H:%MZ) list finished" >> "$Q/lane.log"; touch "$Q/DONE"
# Second pass (11-05): rerun the functions whose first run hit the OC_TIMEOUT cap (exit 124) and are still unmatched,
# from their best attempt (FROM=best). exec keeps this process's flock, so it stays one lane.
if [ -z "$PASS2" ]; then
  P2=${B%[0-9]}2; mkdir -p "queue/$P2"
  python3 - "$Q/results.jsonl" > "queue/$P2/functions.txt" <<'PY2'
import json, os, sys
seen = set()
for l in open(sys.argv[1]):
    try: r = json.loads(l)
    except ValueError: continue
    k = (r["func"], r["segment"])
    if r.get("verified") == "FAIL" and str(r.get("exit")) == "124" and k not in seen and not os.path.exists("matched/%s/%s.c" % (k[1], k[0])):
        seen.add(k); print("%s %s" % k)
PY2
  echo "$(date -u +%FT%H:%MZ) second pass: $(grep -c . "queue/$P2/functions.txt") capped functions -> $P2" >> "$Q/lane.log"
  PASS2=1 exec "$0" "$P2"
fi
