This function's structure is already 90-98% right (shape similarity); the saved attempt you start from is the best one so far.
Close the remaining gap without changing what the code does: control-flow shape (loop/if/switch form), local declarations
and their order, types and casts, expression order, and source line layout (as1 reads line numbers; a line break can move
an instruction). Run `try_func.py FUNC attempt.c --seg SEG --diagnose`: its frame-slot section lists stack slots the target
uses that yours never touches (a missing local or buffer), extra slots, and moved slots (declaration order).
Honest C only: no `if (0)`, padding/unused locals, volatile/register steering, self-assigns or `+ 0` tricks.
