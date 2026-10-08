# Haiku pilot: results (2026-10-08)

Setup: 50 unique functions from game overlays, 0x20–0xC0 bytes, no jump tables; stratified 20 easy / 20 medium / 10 harder.
Each run was one headless `claude -p` session on claude-haiku-5-5 with a cap of 10 compile-and-compare checks, 4 in parallel.
Every claimed match was re-verified independently, then integrated by a script that rebuilds the full ROM and checks its SHA-1.

functions run: 50, matched: 32 (64%)
API-equivalent cost: $0.523 total, $0.0105 per attempt, $0.0164 per match
median seconds 22.0, median checks 2.0, false MATCH claims 0
tokens: output 308392, cache read 11348325, cache write 1278203

| bucket | matched | avg API-equiv cost | avg checks |
|---|---|---|---|
| easy (difficulty < 30) | 14/20 | $0.0083 | 3.8 |
| medium (30–60) | 15/20 | $0.0095 | 3.6 |
| harder (60+) | 3/10 | $0.0167 | 6.7 |

- Wall clock: about 7.5 minutes for all 50 (4 workers in parallel).
- Subscription: weekly usage read 67% before and after (no visible change). The 5-hour window reset during the run, so its delta can't be read.
- Integration: 31 of 32 verified matches applied with the ROM still byte-identical. Rejected: func_803762CC, the last function of an
  original source file; its end-of-file alignment padding is lost while overlays are compiled as one C file each (fix: split src/ at
  file boundaries).
- No worker ever claimed a match it didn't have. One worker correctly diagnosed a harness bug (wrong overlay compared) in the smoke test.

## Escalation result (Opus, same day)
The literal-zero blocker was solved: `func_801C0B8C` takes ONE 64-bit argument (passed in $a0:$a1, high word 0),
a time/duration such as 3,800,000. m2c shows it as `func_801C0B8C(0, X)`; the real call is `func_801C0B8C(X)`.
With the prototype fixed, 4 of the pilot's failures matched immediately. **Pilot after escalation: 36/50 (72%).**
1,126 functions call it, so it went into `include/functions.h` (included by common.h) and into every worker's draft.

## Failure patterns (for escalation)
- Literal-zero argument loaded as `addiu $aN, $zero, 0` in the original vs `move` from our compile: at least 4 fails are exactly
  1 instruction off on this. It is concentrated in the enemy overlays (file027: 79 sites vs about 6 per other segment). It is not a compiler
  version or flag difference (IDO 5.3/7.1, -O1/-O2/-O3, -mips1, -g3 all tested) and not the argument's spelling (casts, NULL,
  locals, register, unprototyped/varargs callees all tested). **Solved, see above.**
