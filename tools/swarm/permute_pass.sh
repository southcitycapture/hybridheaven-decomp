#!/bin/bash
# One permuter pass over current near-misses, then integrate, commit and ping.
cd $HH; . ./env.sh
.venv/bin/python tools/swarm/permute.py --min 0.8 --minutes 15 --parallel 10 --jobs 2 >> /tmp/permute.log 2>&1
.venv/bin/python tools/swarm/integrate.py permute >> queue/permute/integrate.log 2>&1
tools/hh/refresh_dashboard.sh > /dev/null 2>&1
git add -A > /dev/null 2>&1; git commit -qm "Permuter pass: $(tail -1 queue/permute/integrate.log)

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>" > /dev/null 2>&1
$(command -v ~/bin/ping-me || echo true) "Hybrid Heaven permuter pass done" "$(tail -1 queue/permute/integrate.log)" success > /dev/null 2>&1
