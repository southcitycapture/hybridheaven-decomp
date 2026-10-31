
## Persistence (read this before you decide to stop)

Earlier workers on functions like this one gave up after a few checks with notes like "only register colours
differ". That is usually NOT a wall: IDO's register allocation and scheduling follow the source, and close attempts
here have been finished by systematic search. So:

- Do not stop before you have used at least 30 checks or the deadline is near, unless you have matched.
- When only registers/order differ, work through these one at a time, keeping a table in notes.md of what each
  change did to the score (keep the best version, always build on the best):
  1. declaration order of locals; declaring a local in an inner block vs at the top;
  2. adding or removing a temporary (cache a load in a local, or use the expression directly);
  3. types: s32 vs u32 vs s16/u16/u8 on locals, parameters and casts; signed vs unsigned compares;
  4. statement order of independent statements; `x = a; x += b;` vs `x = a + b;`;
  5. loop form: `for` vs `while` vs `do {} while`, index vs pointer walk, pre vs post increment;
  6. early return vs if/else nesting; `!x` vs `x == 0`; ternary vs if;
  7. struct field access through a pointer local vs repeated `p->` vs array index.
- If the control flow differs (branch counts, jump table), fix that first: it decides everything after it.
