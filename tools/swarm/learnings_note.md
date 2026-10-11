
## IDO 7.1 habits that decide matches (condensed from cdlewis's Snowboard Kids DECOMPILATION_LEARNINGS.md)
Control flow
- `if (c) { A } else { B }`: IDO branches to B when c is false and falls into A. Flip conditions to match the target's branch layout.
- Counted `for`/`while` loops get unrolled; a label + `if (p != end) goto label;` loop doesn't. Plain `bne` do-while in the target -> write the goto form.
- A signed range test usually matches as two fail-fast gotos (`if (d >= HI) goto next; if (d < LO) goto next;`), not `&&`.
- `x << 3 << 5` gives two `sll`; count the target's shifts. `x * 0x60000` lets IDO pick the target's strength reduction.
Registers (only once instructions and control flow already match)
- Statement order sets temp numbering: reorder independent statements first (declaration order rarely matters).
- Don't cache in a local a value the target reloads after a call; read the field again. Reuse a just-stored lvalue (`D_x = p + 2; v = D_x + ...`).
- Swap operands of commutative ops (`a + b` vs `b + a`, `|`), or use `temp = (field += n);` to steer the result register.
- A local alias of a parameter (`T *p = arg0;`) pushes it into an s-register.
Types and data
- `u16` fields load with `lhu`, `s16` with `lh`; `lb` vs `lbu` likewise: pick the type from the load instruction.
- Hex constants above 0x7FFFFFFF are unsigned (gives `sltu`); write them as negative or cast to s32 to get `slt`.
- Narrow parameters (u8/s16...) are stored to their stack slot at entry; type the parameter the way the target homes it.
- A global used as `global->field` or passed by address (`addiu`) should be declared `extern T global[]` (an array), not a pointer.
- One `lui $at` shared by two stores = one aggregate in the same file; a fresh `lui` per store = separate globals.
- Use typed struct access (`->`, `.`, `[i]`) with offsets checked against the asm, not manual pointer arithmetic.
- `arr[i][0]` and `((s16 *)arr)[i * 2]` give different code: keep the spelling the target's multiply shape implies.
Stack frame
- Locals get stack slots top-down in declaration order; an unused or narrow local can be what makes the frame size right.
