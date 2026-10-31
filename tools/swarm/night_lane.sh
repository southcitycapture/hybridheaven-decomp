#!/bin/bash
# night_lane.sh BATCH: ONE Claude worker (Sonnet) through queue/BATCH/functions.txt, paced for Zach's plan (2026-10-29):
#   - only outside work hours: weekdays 19:00-07:00 America/New_York, all weekend (Sat 00:00 - Mon 07:00)
#   - only while the weekly meter is under the schedule's ceiling (tools/swarm/weekly_cap.py, the ramp in
#     queue/loop/schedule.json: 8% now -> 30% Mon 9am); pauses at the ceiling with one Ping, resumes by itself
#   - queue/BATCH/STOP stops it; resumes where it left off; matches are integrated by the loop like any lane.
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
B=$1; Q=queue/$B; L=$Q/lane.log; [ -f "$Q/functions.txt" ] || exit 1
export BATCH=$B MODEL=${MODEL:-claude-sonnet-5-5} FROM=best INFILE=1 DIAG=1 LEARNINGS=1 CHECK_LIMIT=${CHECK_LIMIT:-60} DEADLINE_MIN=${DEADLINE_MIN:-25}
export WORKER_FLAGS="${WORKER_FLAGS:---tools Read,Write,Edit,Bash${LEAD:+,Agent} --strict-mcp-config --disable-slash-commands --effort high}"
window() { .venv/bin/python - <<'PY'
import datetime as dt, sys
from zoneinfo import ZoneInfo
t = dt.datetime.now(ZoneInfo("America/New_York")); d, h = t.weekday(), t.hour      # Mon=0 .. Sun=6
weekend = d in (5, 6) or (d == 0 and h < 7) or (d == 4 and h >= 19)
sys.exit(0 if weekend or h >= 19 or h < 7 else 1)
PY
}
meter() { $(command -v ~/bin/usage-gate || echo true) --brief 100 100 >/dev/null 2>&1
          python3 -c "import json;print(int(json.load(open('$HOME/.cache/usage-gate.json'))['data']['seven_day']['utilization']))"; }
pinged=
while read -r FUNC SEG; do
  [ -z "$FUNC" ] && continue
  grep -q "\"func\": \"$FUNC\", \"segment\": \"$SEG\"" "$Q/results.jsonl" 2>/dev/null && continue   # resume
  [ -f "matched/$SEG/$FUNC.c" ] && continue
  while :; do
    [ -f "$Q/STOP" ] && { echo "$(date -u +%FT%H:%MZ) STOP file: stopping" >> "$L"; exit 0; }
    if ! window; then sleep 600; continue; fi
    used=$(meter); cap=$(.venv/bin/python tools/swarm/weekly_cap.py weekly ${CEILING_MAX:-30})
    if [ -n "$used" ] && [ "$used" -lt "$cap" ]; then pinged=; break; fi
    if [ -z "$pinged" ]; then
      echo "$(date -u +%FT%H:%MZ) paused at the ceiling: weekly ${used}% >= ${cap}%" >> "$L"
      $(command -v ~/bin/ping-me || echo true) "Claude night worker paused" "Weekly usage ${used}% reached tonight's ceiling (${cap}%); it resumes by itself as the ceiling rises." info
      pinged=1
    fi
    sleep 1800
  done
  echo "$(date -u +%FT%H:%MZ) $FUNC $SEG (weekly ${used}%, ceiling ${cap}%)" >> "$L"
  tools/swarm/run_one_from.sh "$FUNC" "$SEG" > /dev/null 2>&1
  tail -1 "$Q/results.jsonl" 2>/dev/null | cut -c1-160 >> "$L"
done < "$Q/functions.txt"
echo "$(date -u +%FT%H:%MZ) list finished" >> "$L"; touch "$Q/DONE"
