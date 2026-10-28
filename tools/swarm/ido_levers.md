# IDO 7.1 -O2 -mips2: repository-evidence levers

Full evidence, before/after C and outcomes: `docs/IDO_LEVERS.md`.
Counts below are distinct cited functions per lever, not success rates.
M = worker MATCH; P = permuter standalone MATCH; L = linked acceptance;
O = observed in a failed attempt/probe. Several mutations can win together.

## Route from the diff
- Wrong calls/counts -> recover call shape. Wrong CFG -> recover loops/cases.
- Same operations/CFG -> allocation/schedule levers, then CPU permuter.
- Address-only -> symbols/file rodata/addrfix. Different ops -> types/constants.
- A saved wall row is historical; reclassify the actual source when needed.
- Make one hypothesis/change per check. Preserve the best aligned source.

## Calls
- C1 (4 M): constants sitting in a1-a3/f12-f14 may be earlier store values,
  not arguments. Remove m2c phantom args after checking the callee.
  Conversely unchanged incoming a0 may be a real first arg: `f(p)` -> `f(arg0,p)`.
  Examples: func_801E31C0, func_802322E8, func_80253C20, func_801E30F0.
- C2 (3 O): target call-site `andi` may require an actual u8/u16 parameter;
  casts on a constant under an s32 prototype can fold away. Entry sw/sh and
  andi/sll+sra distinguish homes and widths. K&R can compile under an s32
  prototype yet emit SIGNED shifts for unsigned narrow parameters. Not a cure.
  Examples: func_8037F42C, func_80374260, func_8001C0B0.
- C3 (1 O): cast call may emit la+jalr. A compatible direct declaration may
  restore jal; `extern void f();` does not universally erase ANSI prototypes.
  Example: func_801CE830.
- C4 (2 O): ignored return types still steer v0/v1 and branch operand order.
  Examples: func_80380CD8 (void/s32), func_80365AAC (s32/u16).
- C5 (1 O): too few jals after hoisting? Keep `if(c) f(x+K); else f(x-K);`.
  Example: func_8010FABC. Check compiled multiplicity; tails can still merge.

## Control flow
- F1 (4 M): target bne counter,bound vs attempt slti? Try `i != N`, not `< N`.
  Examples: func_801F58D4, func_801E2818, func_801E3114, func_8024C58C.
- F2 (6, M/O): do-while vs for changes counter/base-init order and unrolling.
  Peeled/repeated asm can come from one plain counted for. A 1-trip call loop
  can remain rolled. “Only last loop unrolls” is local evidence, not a law.
  Examples: func_801C659C, func_801E31C0, func_801E2D10, func_801E2E9C,
  func_801E2F70, func_8024C58C.
- F3 (1 M): offset starts at zero? `for(i=0;i<N;i++) a[i+K]`, not i=K.
  Example: func_801EAD90.
- F4 (4 L): indirect jump/table or missing cases? Restore the real switch,
  all case destinations and default before permuting. Check linked pool ownership.
  Examples: func_801C3070, func_801DAC84, func_80247B60, func_8024092C.
- F5 (3 M): missing b-to-next? `if(c) p=&A; else p=&B;` or a ternary can
  retain it; `p=&B; if(c) p=&A;` can drop it. Redundant else defaults matter.
  Examples: func_801DB868, func_80238928, func_8036EBB8.
- F6 (1 O): -O2 can tail-merge arm stores at the join. A volatile stack scalar
  stopped this in func_801F152C, but did NOT match. Volatile changes semantics;
  use as a diagnostic, retain only with target evidence.

## Registers / schedule / operation types
- R1 (4, M/O): u8 promotes to int; unsigned load does not imply unsigned math.
  srl/multu/sltiu vs sra/mult/slti -> inspect `(u32)width` at the operation.
  u16/s16, u8/s8 change extension, FP conversion paths and 0x8000 constants.
  Examples: func_8000BC78, func_801C39E0, func_8038CFFC, func_80249960.
- R2 (5 M): frame too large/spill four bytes wrong? Remove a named cache;
  repeat `(s32)SYM|0x40000000` so IDO uses its own CSE temp below named homes.
  Examples: func_80241C34, func_80253C20, func_8020FB98, func_80249A58,
  func_8024B5B0. Keep named temps when the target spills to their home slots.
- R3 (3, M/P/L): split a later loop counter i -> j to change sharing/preferences.
  Temp reuse is an allocator lever, not just readability. func_801F58D4 and
  func_801EAD90 matched; func_80147E34 won with a u8 temp PLUS empty global if.
- R4 (3, P/L/O): target local memory residency? Try the evidenced address-taking
  shape. func_8021FB0C winner: `s16 *p=&sp46; ... use(*p)` instead of sp46.
  func_80363340 used `T *volatile p`; func_80365AAC used address-taken `T **`.
  Those are distinct hypotheses; don't sprinkle volatile generically.
- R5 (3, M/O): named/register-only locals can reserve homes in declaration order.
  Reorder narrow scalars/pads around structs; alignment may need TWO s32 pads.
  Some trailing unused slots trim. Count saves too: a missing saved FPR isn't pad.
  Examples: func_801DB868, func_80363340, func_8037F42C.
- R6 (3, M/O): word/unaligned copy topology -> struct assignment, not scalar stores.
  `d=c=b=a` makes successive stack temps (func_801DB868). Byte aggregate plus
  extern u8[] preserves unaligned stores (func_802322E8). func_801E2CA8 is O.
- R7 (2 O): 6-byte rodata copy lw+lhu/sw+sh -> initialized `u8 local[6]={...}`.
  Examples: func_8001C0B0, func_8037F42C. Use original bytes for acceptance.
- R8 (2, P/M): reorder independent stores to fix temps/schedule. func_8002AB10
  P win: u8=7,u0=0,uC=arg2 -> u8=7,uC=arg2,u0=0. func_802322E8 swapped
  halfword/byte assignments yet kept scheduled sb before sh.
- R9 (3, O/M): narrowing casts can consume temp numbers without emitted ops.
  Try `(u16)(a+K)&M` for a uniform later t-register offset; nesting isn't additive.
  Examples: func_8020C61C, func_80249960, func_8035CDA8.
- R10 (1 O): typed 12-byte `a[i]` can give multu+hoisted size where byte-pointer
  `i*12` gives shifts/adds. Example: func_8037F42C. Check other accesses too.
- R11 (2, P/O): empty `do{}while(0)` can alter priorities without emitted code.
  func_8036A134 standalone P inserted it between two divisions, but wasn't landed;
  wrapping a later call changed s-register order in func_801E3B30 (O).

## Symbols / rodata
- S1 (2 O): target one hoisted lwc1/ldc1 vs repeated extern reloads? Original
  readonly symbol may be a literal. Use its actual value and local pool placement.
  Examples: func_80241164, func_80137418. LUI-able placeholders misdiagnose loads.
- S2 (4, M/O): retain named placement but avoid alias reloads with a local right
  before stores: `f32 k=D_K; a->f=k; b->f=k;`. Different FPR/home than a literal.
  Examples: func_801EAD90, func_80249A58, func_8024B5B0, func_801E3F20.
- S3 (2 O): same-spelling constants can share; mixed `0.0f`/int `0` or
  `40.0f*t`/`40*t` changed sharing in func_80240A6C and func_801E3A10.
  Context-specific probes, not portable spelling rules.
- S4 (3 M): match relocation granularity: separate extern word vs base[5];
  `(s32)&G+K` keeps an explicit add where `(u8*)&G+K` folds the relocation.
  Numeric addresses can give lui/ori instead of symbolic lui/addiu.
  Examples: func_801F58D4, func_80238928, func_80253C20.
- S5 (2 O): function-static vs extern changed address CSE/rematerialization in
  func_801EF550 and func_801EAB64. Static probes got wrong/unresolved addresses:
  definitions own storage; don't replace externs without proving original layout.
- S6 (5, L/O): late_rodata includes float literals and switch tables, after
  regular data; per-object rodata is aligned/padded to 16. Correct text isn't
  enough. Ask `srcbuild.py switches SEG FUNC`; prepared JSON isn't placement.
  Examples: func_80002EF0, func_8024092C, func_80247DA0; unresolved historical
  gaps func_801F8008/func_801FC490. Final ASM donors can own neighbours' constants.
- S7 (3 M): standalone MATCH then in-file undefined/type error? Snapshot context
  includes later declarations. Add identical earlier externs/tag forwards, private
  access structs/macros; same layout doesn't make anonymous types compatible.
  Examples: func_801E31C0, func_80253C20, func_801E32D4.

## Finish
- Standalone MATCH, aligned 100%, registry membership and in-file MATCH differ.
- Recheck exact linked text+rodata and neighbours with shared srcbuild integration.
- Don't fix assembler VR4300 multiply nops by padding C.
- Per-lever counts overlap; do not add them into a “functions fixed” number.
