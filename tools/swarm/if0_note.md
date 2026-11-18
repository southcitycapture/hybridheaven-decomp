
## This is a repair of a fakematch
previous.c matches the target, but only because of an `if (0) { ... }` block (empty, a dead call, or a dead assignment)
that steers IDO's register allocation or code layout. That is a fakematch and is refused at landing: **no `if (0)`, no
empty or dead blocks, no unused/padding locals, no `volatile` tricks, no macros that redefine keywords.** Find the real C
shape the original programmer wrote that produces the same code: a different temp/variable lifetime, statement order,
a real expression the dead code stood in for, a different loop/condition form, argument types, or a struct access. Keep
everything else from previous.c. Verify with the checker as usual.
