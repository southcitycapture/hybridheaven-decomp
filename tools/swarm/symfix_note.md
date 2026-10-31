
## This is a narrow fix: the code is already right

previous.c already produces EXACTLY the target's instructions; only the symbol references listed in the automatic
diagnosis above differ (which global, constant or offset an instruction points at). Do not restructure anything.
Start from previous.c and change only what those references need, one at a time, checking after each:

- target names `D_XXXXXXXX` but yours is `<section .rodata>`: the original loaded a NAMED constant. Replace the
  float/double literal with `extern f32 D_XXXXXXXX;` / `extern f64 D_XXXXXXXX;` and use it (keep the same type).
- target `<section .rodata>` but yours names a symbol: the reverse; write the literal value instead.
- a different global of the same shape (two tables, two objects): use the target's symbol name; declare it
  `extern` with the type implied by how it is used.
- same symbol, different addend/offset: a field or index differs; fix the struct field, array index or cast.
- `B_`/`D_` address symbols must be spelled exactly as in the diagnosis.
Most of these need 1-3 checks. If a change alters any instruction (not just the reference), undo it.
