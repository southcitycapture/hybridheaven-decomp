
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
With `REGIONS=1`, `./check` also prints fixed target region IDs, line ranges and
the first differing instruction in each. Start with the best nearly matched
region; change only its source, check, and retain the regional improvement.
The JSON reports are in `.regions.json` and `.attempts/N.regions.json`.
Region scores use independent block alignments, so an insertion elsewhere does
not shift all later scores. Branch layout is normalized; external outgoing edge
identity, ambiguous repeated blocks, file layout and readonly data still need
the ordinary whole-function and in-file checks. A regional match is a checkpoint,
not permission to land a function. Use the remaining time to work register and
scheduling differences too; preserve your best source and explain stuck regions.
