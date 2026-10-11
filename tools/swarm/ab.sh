#!/bin/bash
# ab.sh EXP "ENV_A" "ENV_B" [CAP]: Haiku A/B over queue/EXP/functions.txt, both arms from queue/EXP_prev attempts unless
# an arm's env sets FROM_BATCH= (empty) to start fresh. Arms run side by side (10 workers each); integrated at the end.
E=$1; A=$2; B=$3; CAP=${4:-88}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh; L=queue/$E/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
mkdir -p queue/${E}_a queue/${E}_b; cp queue/$E/functions.txt queue/${E}_a/; cp queue/$E/functions.txt queue/${E}_b/
export NO_INTEGRATE=1 INFILE=1 MODEL=claude-haiku-5-5 NOTE_FILE=retry_note.md FROM_BATCH=${E}_prev RUN_ONE=run_one_from.sh
u start
env $A tools/swarm/run_batch2.sh ${E}_a 10 "$CAP" > queue/${E}_a/runner.out 2>&1 &
env $B tools/swarm/run_batch2.sh ${E}_b 10 "$CAP" > queue/${E}_b/runner.out 2>&1 &
wait; u "both arms done"
unset NO_INTEGRATE
for b in ${E}_a ${E}_b; do .venv/bin/python tools/swarm/integrate.py $b >> queue/$E/integrate.log 2>&1; done
grep -h "ROM" queue/$E/integrate.log | tail -1 >> $L; u integrated; touch queue/$E/DONE
