#!/bin/bash
# ab_harness.sh: the 11-07 harness A/B on the workstation model: Pi (run_one_pi.sh, sandboxed) vs OpenCode
# (run_one_oc.sh), same Qwen server, same 20 functions (queue/localAB/functions.txt), same pinned starting attempts
# (BEST_BEFORE), same prompt switches and limits as the main local lane. Paired: every function runs in both arms,
# alternating which goes first; results in queue/piAB and queue/ocAB. Holds the main lane (queue/localU1/HOLD) and
# waits until no other Strata run is active before each run. Stop with queue/localAB/STOP (the main lane's
# queue/localU1/STOP pauses it too). Releases the hold when finished.
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
L=queue/localAB/ab.log; touch queue/localU1/HOLD
export BEST_BEFORE=${BEST_BEFORE:-$(date +%s)} FROM=best INFILE=1 DIAG=1 LEARNINGS=1 LEVERS=1 WALLNOTE=1 AB_NOSKIP=1
export OC_TIMEOUT=5400 OC_IDLE=1200 OC_BACKOFF=120 CHECK_LIMIT=40 OC_MODEL=strata/qwen3.8-flash-next
echo "$(date -u +%FT%H:%MZ) start, BEST_BEFORE=$BEST_BEFORE" >> "$L"
# the bracketed letters keep grep from matching its own command line (11-07: busy() matched itself and waited forever)
busy() { ps -eo args | grep -q -e '^/home/claude/.local/bin/[o]pencode run --pure -m strata/' -e '[/]pi/node_modules/.bin/pi '; }
i=0
while read -r FUNC SEG; do
  [ -z "$FUNC" ] && continue
  for a in $( [ $((i % 2)) = 0 ] && echo "pi oc" || echo "oc pi" ); do
    [ -f queue/localAB/STOP ] || [ -f queue/localU1/STOP ] && { echo "$(date -u +%FT%H:%MZ) STOP" >> "$L"; rm -f queue/localU1/HOLD; exit 0; }
    B=${a}AB; grep -q "\"func\": \"$FUNC\", \"segment\": \"$SEG\"" "queue/$B/results.jsonl" 2>/dev/null && continue   # resume
    while busy; do sleep 60; done
    rm -f "$HOME/.oc/COOLDOWN.strata"
    echo "$(date -u +%FT%H:%MZ) $a $FUNC $SEG" >> "$L"
    mkdir -p "queue/$B"
    INNER=$([ $a = pi ] && echo run_one_pi.sh || echo run_one_oc.sh) BATCH=$B tools/swarm/run_one_from.sh "$FUNC" "$SEG" > /dev/null 2>&1
    tail -1 "queue/$B/results.jsonl" 2>/dev/null | cut -c1-220 >> "$L"
  done
  i=$((i + 1))
done < queue/localAB/functions.txt
echo "$(date -u +%FT%H:%MZ) finished" >> "$L"; rm -f queue/localU1/HOLD
