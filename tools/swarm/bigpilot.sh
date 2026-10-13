#!/bin/bash
# bigpilot.sh BATCH [N] [MINUTES] [PARALLEL] [CAP]: the big-function method on fresh difficulty 300-700 functions.
# Opus at high effort, lean worker, a visible time budget (DEADLINE_MIN) instead of a check budget, skeleton-then-fill
# note (BIGFUNC), look-alike matched functions as references (SIMILAR), IDO learnings (static + growing, GROW), and the
# diagnosis-grade ./check (DIAG). Baseline at this difficulty: Haiku 0.5%, Sonnet 7% (10-15 checks).
B=${1:?batch}; N=${2:-20}; MIN=${3:-40}; P=${4:-5}; CAP=${5:-97}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
mkdir -p queue/$B
[ -s queue/$B/functions.txt ] || .venv/bin/python tools/hh/pick.py $B -n $N --kind fresh --min-diff ${MIN_DIFF:-300} --max-diff ${MAX_DIFF:-700} --model sonnet --allow-switch > queue/$B/pick.out
export NO_INTEGRATE=1 INFILE=1 RUN_ONE=run_one3.sh MODEL=claude-opus-5-5 DEADLINE_MIN=$MIN CHECK_LIMIT=200 \
       BIGFUNC=1 SIMILAR=1 LEARNINGS=1 GROW=1 DIAG=1 \
       WORKER_FLAGS="--tools Read,Write,Edit,Bash --strict-mcp-config --disable-slash-commands --effort high"
echo "$(date -Is) start: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> queue/$B/usage.log
tools/swarm/run_batch2.sh $B $P "$CAP" > queue/$B/runner.out 2>&1
echo "$(date -Is) done: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> queue/$B/usage.log
