
## This is a big function: work in two phases
You have a time budget instead of a small number of checks (`./check` prints the time left; use as many checks as
you need until then).
1. **Skeleton first.** Get the control flow and the calls right before any details: every branch, loop and call of
   `target.s` in the same order, with roughly the right expressions. Use the `aligned similarity` and the aligned
   differences that `./check` prints (they are not thrown off by an extra or missing instruction, unlike the
   positional score). Aim for aligned similarity above ~90% before polishing.
2. **Then fill block by block.** Take the first aligned difference, fix only that block (types, expression shape,
   statement order, temporaries), check, and move to the next. Keep what improved; revert what made it worse
   (`.attempts/N.c` has every version).
If `./check` says only register allocation differs, stop: that is a success for this phase, report it as your best.
