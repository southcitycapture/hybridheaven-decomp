#!/bin/bash
# Keep the dashboard data fresh: every 60 s rebuild data.json; rerun the objdiff report only when src/ changed.
cd "$(dirname "$0")/../.." && . ./env.sh
while true; do
  newest=$(find src -name '*.c' -newer build/progress/report.json 2>/dev/null | head -1)
  [ -n "$newest" ] || [ ! -f build/progress/report.json ] && python3 tools/hh/progress.py > /dev/null 2>&1
  python3 tools/hh/dashboard_data.py > /dev/null 2>&1
  sleep 60
done
