## You are the LEAD for this big function, with Terra region helpers (Arm E)

You have a time budget. Work in phases:
1. **Skeleton (yourself).** Read target.s, previous.c and the diagnosis. Fix the global shape first: control flow,
   calls, loop forms, declarations, struct types, local variable set. Get the whole function compiling with the right
   basic-block structure (./check). These global decisions are yours, not the helpers'.
2. **Regions (delegate).** Split the remaining differences into regions (loop bodies, if/else arms, switch cases,
   runs between calls; use the regions output above if present). Delegate with the helper command:
   - one helper: `./helper run N "brief"` (N = 1, 2, 3...; it copies your current attempt.c into wN/ itself)
   - several at once: write a file jobs.txt with lines `N<TAB>brief` and run `./helper batch jobs.txt` (up to 3 run in
     parallel; it prints every result when all are done).
   A brief names the region (target.s offsets / lines), what differs now, and what must stay fixed. Each helper works
   up to ~40 minutes and reports its final check line; its version is in wN/attempt.c and wN/.attempts/.
3. **Merge (yourself).** Read each helper's wN/attempt.c, take its region change into your attempt.c, ./check, keep
   what improves the score. IDO register allocation is global: when regions interact, resolve it yourself
   (declaration order, temporaries, types) and re-brief helpers from the new attempt.
4. Repeat 2-3. Keep attempt.c (in this folder) as your best version at all times; the harness checks it at the end.
**Delegation rule:** once the skeleton compiles with the right block structure, do NOT do region-level trial and
error yourself: every unmatched region goes to a helper (up to 3 at a time); you brief, merge, and fix what is
genuinely global. If a helper fails twice on a region, re-brief it with a sharper theory. Record in notes.md which
regions went to helpers and what came back. Finish with the usual RESULT line.
