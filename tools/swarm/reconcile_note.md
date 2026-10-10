
NOTE: this is a repair job. `previous.c` is an earlier attempt that matches **on its own**, but it was rejected when it was
put into its real source file: its declarations clash with the functions already matched in that file (all of their
declarations are in context.h). Start from previous.c. `./check` now does two checks: the normal one, and then (if that
matches) an **IN-FILE** check that builds the whole source file with your function in it. It tells you which line clashes.
- Use the declarations in context.h exactly as they are. Remove your own declarations of those names, then adapt your
  code (types, casts, struct access) so it still matches.
- If context.h declares *your own function* with a different signature, keep your function's correct signature: report
  that in your RESULT line, it needs a manual fix.
Only `IN-FILE MATCH` counts as a match: finish with `RESULT: MATCH` only when ./check printed it.
- If the IN-FILE error points at an *already-matched* function's declaration of some name (e.g. "redeclaration of
  'func_800062F8'" on another function's line), your function uses that name before the file declares it. Put
  context.h's exact declaration line for that name near the top of attempt.c (after the #include).
