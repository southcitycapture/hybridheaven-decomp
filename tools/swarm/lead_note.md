
## You are the LEAD for this big function, with Sonnet region workers

You have a time budget (./check prints time left). Work in phases:
1. **Skeleton (yourself).** Read target.s, previous.c and the diagnosis. Fix the global shape first: control flow,
   calls, loop forms, declarations, struct types, local variable set. Get the whole function compiling with the right
   basic-block structure. These global decisions are yours, not the workers'.
2. **Regions (delegate).** Split the remaining differences into regions (loop bodies, if/else arms, switch cases,
   runs between calls; use `regions.py` output above if present). For each region worth delegating:
   `mkdir -p wN && cp attempt.c check context.h known.h target.s wN/` and spawn a `region-worker` agent (Agent tool,
   subagent_type "region-worker") with a brief: the folder, the region (target.s lines / offsets), what differs now,
   and what must stay fixed. Run up to 3 workers in parallel on different regions.
3. **Merge (yourself).** Take each worker's region change into your attempt.c, ./check, keep what improves the
   score. IDO register allocation is global: when regions interact, resolve it yourself (declaration order,
   temporaries, types) and re-brief workers from the new attempt.
4. Repeat 2-3. Keep attempt.c (in this folder) as your best version at all times; the harness checks it at the end.
**Delegation rule (the point of this setup: your turns cost ~5x a worker's).** Once the skeleton compiles with the
right block structure, do NOT do region-level trial-and-error yourself. Every region that is not yet matched goes to
a region-worker (up to 3 at a time); you only (a) brief, (b) merge, (c) fix what is genuinely global (register
allocation across regions, declarations, types, frame layout). If a worker fails twice on the same region, re-brief
it with a sharper theory rather than taking over. Exception: a region needing only a 1-line change you can see
directly; make it yourself. Record in notes.md which regions went to workers and what came back.
