
## This is an honest-C repair of a function that already matches

previous.c compiles to exactly the target, but its source relies on a trick that steers IDO instead of saying what
the original programmer wrote. The landing gate now refuses these tricks. Your job: keep the match, remove the trick.
The `RULE HITS` section below lists exactly what was flagged in this function.

**Never allowed** (the gate refuses them): `if (0)`, empty `if (...) { }` / `else { }` / `{ }` blocks, a bare `;`,
`x = x;`, `x = (x = y)`, `+ 0`, `* 1`, `!!x`, `(0, x)`, `register` or `volatile` on locals (hardware-register casts
like `(volatile u32 *)0xA4000000` are fine), a local that is declared and never used (`pad`, `unused`, `sp28`), a
cast to the same type, macros that redefine keywords. Do not trade one trick for another.

### What each trick usually hides, and what to try instead
- **Unused / padding local** (`s32 pad;`, `u8 unused[8];`): the frame is a few bytes too small without it. The
  original had a *real* variable there: a local the code uses (often a temp the compiler kept on the stack, a struct
  or array passed by address, a value saved across a call), or a wider type for an existing local. Look at the stack
  offsets in target.s: which `sp+N` slots are written and read? Give that slot a meaningful variable.
- **Empty `if (cond) { }`**: it forces the compiler to evaluate or keep something. Usually the original used the
  value: a real `if` with a body, a different condition order, a `?:`, or a call whose result is used (`x = f();`).
  If only a call remains, `f();` is the honest form.
- **`register` / `volatile` on a local**: steering allocation or forcing a reload. Usually the real cause is the
  declaration order of locals, a type width (`s16` vs `s32`, `u8` vs `s32`), a temp with a meaning, or a pointer
  re-read through a struct member. Try declaration order first: IDO allocates in declaration order.
- **`x * 1`, `+ 0`, `!!x`, `(0, x)`**: changing an expression's type or evaluation order. Usually a type: an
  index of the wrong width, a missing cast to the real type, a field that is really an array, or an
  intermediate value with a meaning (`idx = a + b; arr[idx]`).
- **Self-assignment (`x = x;`)**: keeping a value live across a point. Usually a variable that is really two
  (split it: one local per meaning), or a statement order the original had differently.
- **Same-type cast**: a wrong declared type somewhere; fix the declaration instead.

### How to work
1. Read previous.c and target.s. Find exactly which instructions the trick affects (try the source without it and
   diff: `./check` shows where it diverges). That tells you what the original source had to do there.
2. Change the *meaning-bearing* source: types, declaration order, local census, statement grouping, struct members.
3. `./check` after each idea. Stop when it matches without any flagged trick, or report the best honest attempt and
   what still differs (RESULT: FAIL n/m and the instruction that differs).
A clean, honest version that matches is the only success. A match that keeps a trick counts as a failure.
