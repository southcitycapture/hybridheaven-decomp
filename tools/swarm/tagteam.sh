#!/bin/bash
# tagteam.sh EXP FIRST [PARALLEL] [WEEKLY_CAP]: Haiku tag-team arms over queue/EXP/functions.txt (FIRST = the first Haiku batch)
#   relay  R1..R3: each leg starts from the previous leg's attempt (R1 from exp1_a); only still-unmatched functions go on
#   swarm  N1..N3: three independent fresh Haiku runs on every function (best of 3)
# Legs run in pairs (Rk with Nk). Nothing integrates until the end.
EX=$1; FIRST=$2; P=${3:-10}; CAP=${4:-84}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
E=queue/$EX; L=$E/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
export NO_INTEGRATE=1 MODEL=claude-haiku-5-5
won() { python3 -c "
import json,sys,os
w=set()
for b in sys.argv[1:]:
    p='queue/%s/results.jsonl'%b
    if os.path.exists(p): w|={json.loads(l)['func'] for l in open(p) if json.loads(l)['verified']=='MATCH'}
print('\n'.join(sorted(w)))" "$@"; }
u "start"
prev=$FIRST
for k in 1 2 3; do
  mkdir -p queue/${EX}_r$k queue/${EX}_n$k
  grep -v -w -F -f <(won ${EX}_r1 ${EX}_r2 ${EX}_r3 | sed '/^$/d'; echo __none__) $E/functions.txt > queue/${EX}_r$k/functions.txt
  cp $E/functions.txt queue/${EX}_n$k/functions.txt
  [ -s queue/${EX}_r$k/functions.txt ] && NOTE_FILE=retry_note.md FROM_BATCH=$prev RUN_ONE=run_one_from.sh \
    tools/swarm/run_batch2.sh ${EX}_r$k "$P" "$CAP" > queue/${EX}_r$k/runner.out 2>&1 &
  RUN_ONE=run_one3.sh tools/swarm/run_batch2.sh ${EX}_n$k "$P" "$CAP" > queue/${EX}_n$k/runner.out 2>&1 &
  wait
  u "after leg $k"
  for b in ${EX}_r$k ${EX}_n$k; do [ -f queue/$b/STOP ] && { u "STOP (cap)"; break 2; }; done
  prev=${EX}_r$k
done
touch $E/DONE
