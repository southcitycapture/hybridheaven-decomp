#!/bin/bash
# run_one_from.sh FUNC SEGMENT: run_one3.sh, starting from this function's attempt in queue/$FROM_BATCH (escalation arms)
export PREVIOUS=$HOME/work/hybrid-heaven-decomp/queue/$FROM_BATCH/work/$1/attempt.c
[ -f "$PREVIOUS" ] || unset PREVIOUS
exec "$(dirname "$0")/run_one3.sh" "$@"
