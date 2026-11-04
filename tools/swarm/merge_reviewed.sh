#!/bin/bash
# merge_reviewed.sh COMMIT "message": merge a reviewed engineering commit (Sol / Opus worktree) into master between
# loop cycles. Holds the loop's cycle lock; regenerates everything the split map and blocks need (make setup,
# libultra stubs, gen_blocks) before building; commits only if the ROM matches and the tests pass; otherwise rolls
# master back to where it was and regenerates again so the old layout is fully restored. (10-30/31: three merges
# failed until setup + gen_blocks were part of every merge.)
C=${1:?usage: merge_reviewed.sh COMMIT MESSAGE}; MSG=${2:?message}
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
exec 9>queue/loop/cycle.lock; flock 9; echo "== lock $(date -u +%H:%M)"
OLD=$(git rev-parse HEAD)
regen() { make setup > build/merge_setup.log 2>&1; .venv/bin/python tools/hh/gen_libultra.py --stubs > /dev/null 2>&1; .venv/bin/python tools/hh/gen_blocks.py 2>&1 | tail -1; }
.venv/bin/python tools/hh/progress.py 2>&1 | grep -E '^(code|data|fully)'
if ! git merge --no-ff --no-commit "$C" > build/merge.out 2>&1; then
  c=$(git diff --name-only --diff-filter=U); echo "conflicts: $c"
  for f in $c; do   # KEEP_OURS="a b": files where master's side wins (e.g. docs/HARD_FUNCTIONS_PLAN.md statuses)
    if [ "$f" = SOL_REPORT.md ]; then git checkout --theirs "$f"; git add "$f"
    elif [[ " $KEEP_OURS " == *" $f "* ]]; then git checkout --ours "$f"; git add "$f"
    else git merge --abort; echo "ABORTED on $f"; exit 1; fi
  done
fi
[ -f SOL_REPORT.md ] && { mkdir -p docs/sol; git mv -f SOL_REPORT.md "docs/sol/report-$(git rev-parse --short "$C").md"; }
regen
make -j8 2>&1 | grep -E 'Error|error:|OK$' | tail -4 | tee build/merge_make.log
# publish.sh refuses real disassembly anywhere it publishes (11-02: a Task 23 test fixture blocked every publish for
# a day, unnoticed): refuse it here first. Test fixtures may use synthetic addresses 0x80000000-0x800000FF only.
leak=$(grep -rInE '/\* [0-9A-F]{6} [0-9A-F]{8} [0-9A-F]{8} \*/' src matched include tools/hh tools/swarm contrib docs 2>/dev/null \
       | grep -vE '^tools/hh/test_[a-z0-9_]+\.py:[0-9]+:.*/\* [0-9A-F]{6} 800000[0-9A-F]{2} [0-9A-F]{8} \*/' | head -3)
# reserved functions (blocklist lines marked "reserved:", e.g. the file036 finale) must not be defined as C in src/
# (11-04: Task 33 landed all four by editing src/ directly; held back by hand)
for kv in $(awk '/reserved:/ && $1 !~ /^#/ {print $1":"$2}' queue/link_blocklist.txt); do
  if grep -qE "^[A-Za-z_][^;]*\b${kv#*:}\s*\([^;]*$" src/${kv%%:*}/*.c 2>/dev/null; then
    leak="${leak:+$leak
}reserved function defined as C: ${kv/:/ }"; fi
done
[ -n "$leak" ] && echo "refused (disassembly in published paths, or a reserved function in C):
$leak" >> build/merge_make.log
if [ -z "$leak" ] && grep -q 'z64: OK' build/merge_make.log && .venv/bin/python -m unittest discover -s tools/hh -p 'test_*.py' 2>&1 | tail -1 | grep -q '^OK'; then
  git commit -q -m "$MSG

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>
Claude-Session: https://claude.ai/code/session_012QMfxWK1cnmK7U8jmgxKKK" && git log --oneline -1
  .venv/bin/python tools/hh/progress.py 2>&1 | grep -E '^(code|data|fully)'
else
  echo "ROM, tests or publish scan FAILED: rolling back to $OLD"; grep -A4 "^refused" build/merge_make.log
  .venv/bin/python -m unittest discover -s tools/hh -p 'test_*.py' 2>&1 | grep -E '^(FAIL|ERROR):' | head -5
  git merge --abort 2>/dev/null; git reset -q --keep "$OLD"; regen; make -j8 2>&1 | tail -1
fi
