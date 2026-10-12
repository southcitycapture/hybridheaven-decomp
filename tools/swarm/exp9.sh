#!/bin/bash
# exp9.sh [CAP]: does pick.py's ranking beat easiest-first? Two fresh Haiku arms of 60 (queue/exp9_ranked = pick.py
# top fresh picks, queue/exp9_easy = lowest difficulty), run side by side, integrated, then propagate.py credits each
# arm with the copies its matches unlock. Report: queue/exp9/REPORT.md (tools/swarm/exp9_report.py).
CAP=${1:-88}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh; mkdir -p queue/exp9; L=queue/exp9/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
export NO_INTEGRATE=1 INFILE=1 MODEL=claude-haiku-5-5 RUN_ONE=run_one3.sh
u start
tools/swarm/run_batch2.sh exp9_ranked 10 "$CAP" > queue/exp9_ranked/runner.out 2>&1 &
tools/swarm/run_batch2.sh exp9_easy 10 "$CAP" > queue/exp9_easy/runner.out 2>&1 &
wait; u "both arms done"
.venv/bin/python tools/swarm/exp9_report.py snapshot                  # registry before integration
unset NO_INTEGRATE
for b in exp9_ranked exp9_easy; do .venv/bin/python tools/swarm/integrate.py $b >> queue/exp9/integrate.log 2>&1; done
.venv/bin/python tools/hh/propagate.py prop_exp9 --apply > queue/exp9/propagate.out 2>&1
.venv/bin/python tools/hh/srcbuild.py all > queue/exp9/build.log 2>&1 && make -j8 >> queue/exp9/build.log 2>&1
grep -h ": OK\|FAILED" queue/exp9/build.log | tail -1 >> $L
.venv/bin/python tools/swarm/exp9_report.py > queue/exp9/REPORT.md
u done; touch queue/exp9/DONE
