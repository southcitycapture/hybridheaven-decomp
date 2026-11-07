#!/bin/bash
# terra_budget.sh BATCH PAR MAX_USED_PERCENT MAX_HOURS: a Terra wave (terra_wave.sh) with a hard budget on Zach's
# ChatGPT plan. Every 30 minutes it reads the plan meter (cx_meter.sh); it puts queue/BATCH/STOP in place when the
# weekly meter reaches MAX_USED_PERCENT, when MAX_HOURS have passed, or when the meter can't be read twice in a row.
# Running workers finish their current function (<= OC_TIMEOUT, 20 min for Terra). 11-05: open-ended waves drained
# the week overnight; this is the replacement. Log: queue/BATCH/budget.log.
cd "$(dirname "$0")/../.." || exit 1
B=${1:?usage: terra_budget.sh BATCH PAR MAX_USED_PERCENT MAX_HOURS}; P=${2:-1}; MAX=${3:?max used %}; H=${4:?max hours}
mkdir -p "queue/$B"; L=queue/$B/budget.log
read -r used _ < <(tools/swarm/cx_meter.sh) || { echo "$(date -u +%FT%H:%MZ) meter unreadable: not starting" >> "$L"; exit 1; }
if awk "BEGIN{exit !($used >= $MAX)}"; then echo "$(date -u +%FT%H:%MZ) meter $used% >= $MAX%: not starting" >> "$L"; exit 0; fi
echo "$(date -u +%FT%H:%MZ) start: $P worker(s), meter $used%, stop at $MAX% or ${H} h" >> "$L"
setsid tools/swarm/terra_wave.sh "$B" "$P" > "queue/$B/runner.out" 2>&1 < /dev/null &
end=$(( $(date +%s) + H * 3600 )); bad=0
while sleep 1800; do
  [ -f "queue/$B/STOP" ] && { echo "$(date -u +%FT%H:%MZ) STOP present: guard exits" >> "$L"; exit 0; }
  if read -r used _ < <(tools/swarm/cx_meter.sh); then bad=0; else bad=$((bad + 1)); used=?; fi
  echo "$(date -u +%FT%H:%MZ) meter $used%" >> "$L"
  why=""
  [ "$used" != "?" ] && awk "BEGIN{exit !($used >= $MAX)}" && why="meter $used% >= $MAX%"
  [ $(date +%s) -ge $end ] && why="${why:+$why; }${H} h budget used"
  [ $bad -ge 2 ] && why="${why:+$why; }meter unreadable twice"
  if [ -n "$why" ]; then touch "queue/$B/STOP"; echo "$(date -u +%FT%H:%MZ) STOP: $why" >> "$L"; exit 0; fi
done
