
## Recovered shared types (TYPES=1)

The end of context.h has a `TYPES=1` block: struct types recovered from every function that uses the same
objects (tools/hh/types_db.py), typed `extern` declarations for this function's globals that context.h did not
declare yet, and a note on which recovered type each parameter has. Offsets and access widths come from the
target asm of all functions, so `p->unk24` in a recovered type has the width and signedness the game uses there.
Prefer these types over new ad-hoc structs and pointer casts when they cover the fields you need; `unkXX` names
are placeholders. If a global is already declared differently above, keep that declaration (do not redeclare it).
