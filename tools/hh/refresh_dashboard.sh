#!/bin/bash
# Rebuild progress data for the dashboard (objdiff report + data.json + history point).
cd "$(dirname "$0")/../.." && . ./env.sh && python3 tools/hh/progress.py > /dev/null && python3 tools/hh/dashboard_data.py
