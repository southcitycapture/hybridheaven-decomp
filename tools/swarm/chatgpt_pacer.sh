#!/bin/bash
# chatgpt_pacer.sh: keep the swarm's use of Zach's ChatGPT plan on an agreed line (2026-11-08, Zach: "I don't want
# to drain it quickly... we need to be careful with it"). Every 15 minutes it reads the plan meter (cx_meter.sh, which
# counts Zach's own use and Sol tasks too) and compares it with the allowed line:
#   ramp:  FROM_PCT at START -> TARGET_PCT at UNTIL (linear); 1 Terra worker, paused while the meter is at/over the line
#   drain: DRAIN_START..DRAIN_END, up to DRAIN_MAX_PCT with DRAIN_PAR workers in total
# After DRAIN_END, or once the meter reaches DRAIN_MAX_PCT, every Terra lane gets STOP and the pacer exits.
# Pausing uses queue/BATCH/PAUSE (run_one_from.sh waits on it before each function; a running function finishes).
# New Terra batches come from terra_wave.sh (Terra-untried leftovers). Log: queue/chatgpt_pacer.log.
cd "$(dirname "$0")/../.." || exit 1
: "${START:?}" "${FROM_PCT:?}" "${UNTIL:?}" "${TARGET_PCT:?}" "${DRAIN_START:?}" "${DRAIN_END:?}" "${DRAIN_MAX_PCT:?}" "${DRAIN_PAR:=6}"
L=queue/chatgpt_pacer.log; log() { echo "$(date -u +%FT%H:%MZ) $*" >> "$L"; }
ts() { date -d "$1" +%s; }
S=$(ts "$START"); U=$(ts "$UNTIL"); DS=$(ts "$DRAIN_START"); DE=$(ts "$DRAIN_END")
lanes() { ps -eo args | grep -o '^/bin/bash [^ ]*lane_run.sh terra[A-Za-z0-9]*' | awk '{print $3}' | sort -u; }
start_wave() {   # $1 = workers
  n=1; while [ -e "queue/terraP$n" ]; do n=$((n + 1)); done
  log "start terraP$n with $1 worker(s)"
  mkdir -p "queue/terraP$n"; echo "$1" > "queue/terraP$n/PAR"
  setsid tools/swarm/terra_wave.sh "terraP$n" "$1" > /dev/null 2>&1 < /dev/null &
  sleep 30
  if [ "$(grep -c . "queue/terraP$n/functions.txt" 2>/dev/null)" = 0 ] && [ -z "$RETRY" ]; then
    RETRY=1; export RETRY; log "terraP$n: no Terra-untried leftovers left; switching to second-pass waves (RETRY=1)"
  elif [ "$(grep -c . "queue/terraP$n/functions.txt" 2>/dev/null)" = 0 ]; then
    POOL_EMPTY=1; log "terraP$n: second-pass pool empty too; not starting more lanes"
  fi
}
log "pacer start: $FROM_PCT% @ $START -> $TARGET_PCT% @ $UNTIL; drain $DRAIN_START..$DRAIN_END to $DRAIN_MAX_PCT% with $DRAIN_PAR"
while :; do
  now=$(date +%s)
  read -r used _ < <(tools/swarm/cx_meter.sh) || { log "meter unreadable: pausing"; for b in $(lanes); do touch "queue/$b/PAUSE"; done; sleep 900; continue; }
  if [ $now -ge $DE ] || awk "BEGIN{exit !($used >= $DRAIN_MAX_PCT)}"; then
    for b in $(lanes); do touch "queue/$b/STOP"; rm -f "queue/$b/PAUSE"; done
    log "done: meter $used% (drain end or max reached); Terra lanes stopped"; exit 0
  fi
  if [ $now -ge $DS ]; then allowed=$DRAIN_MAX_PCT; want=$DRAIN_PAR
  else allowed=$(awk "BEGIN{f=($now-$S)/($U-$S); if(f<0)f=0; if(f>1)f=1; print $FROM_PCT+($TARGET_PCT-$FROM_PCT)*f}"); want=1; fi
  active=$(lanes); have=0
  for b in $active; do have=$((have + $(cat "queue/$b/PAR" 2>/dev/null || echo 1))); done   # workers per lane
  if awk "BEGIN{exit !($used >= $allowed)}"; then
    for b in $active; do [ -f "queue/$b/PAUSE" ] || { touch "queue/$b/PAUSE"; log "pause $b: meter $used% >= line ${allowed}%"; }; done
  else
    for b in $active; do [ -f "queue/$b/PAUSE" ] && { rm -f "queue/$b/PAUSE"; log "resume $b: meter $used% < line ${allowed}%"; }; done
    [ "$have" -lt "$want" ] && [ -z "$POOL_EMPTY" ] && start_wave $((want - have))
  fi
  log "meter $used% line ${allowed}% workers $have/$want lanes: $(echo $active)"
  sleep 900
done
