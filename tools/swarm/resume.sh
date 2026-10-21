#!/bin/bash
# resume.sh (cron, every 10 min): relaunch batches run_batch3.sh stopped at the 5-hour window cap (queue/B/RESUME) once
# the window is back under RESUME_BELOW % (default 70) and the weekly meter under 93 %. Each relaunch skips the
# functions the batch already finished (run_batch3's done list). Opus near misses sat idle ~4 h before this existed.
# Once the work-week schedule is active (weekly_cap.py) it also relaunches batches the weekly ramp stopped: resume when
# the window is 20 points under the schedule's 5-hour cap and the weekly meter 2 points under the weekly cap.
{ # whole script in one block: bash parses it before running, so editing this file cannot break live runs
cd "$HOME/work/hybrid-heaven-decomp"
ls queue/*/RESUME > /dev/null 2>&1 || exit 0
g=$($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)
f=$(echo "$g" | sed -n 's/.*5-hour \([0-9]*\)%.*/\1/p'); w=$(echo "$g" | sed -n 's/.*weekly \([0-9]*\)%.*/\1/p')
fb=$(( $(python3 tools/swarm/weekly_cap.py five 60) - 20 )); [ -n "$RESUME_BELOW" ] && fb=$RESUME_BELOW
wb=$(( $(python3 tools/swarm/weekly_cap.py weekly 95) - 2 ))
[ -n "$f" ] && [ -n "$w" ] && [ "$f" -lt "$fb" ] && [ "$w" -lt "$wb" ] || exit 0
for r in queue/*/RESUME; do
  q=$(dirname "$r"); b=$(basename "$q")
  [ -x "$q/launch.sh" ] || continue
  pgrep -f "run_batch3.sh $b " > /dev/null && continue          # already running
  rm -f "$q/RESUME" "$q/STOP" "$q/DONE"
  echo "$(date -Is) resume $b (5-hour ${f}%, weekly ${w}%)" >> queue/resume.log
  setsid nohup "$q/launch.sh" > /dev/null 2>&1 < /dev/null &
done
exit; }
