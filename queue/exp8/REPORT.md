# exp8: start from a >= 90 % twin instead of the function's own previous attempt

60 tried-but-unmatched easy/medium functions that have an already-matched function whose asm is >= 90 % the same.
Both arms: Haiku, 10 checks, in-file check. A: from the function's own previous attempt. B: from the twin's matching
C, renamed (`TWIN=1`, `tools/hh/similar.py --twin`, `tools/swarm/twin_note.md`).

| Arm | Matched | Cost (API-equiv.) | Median checks |
|---|---|---|---|
| A: own previous attempt | 38 | $0.86 | 3 |
| B: twin's C | **46** (77 %) | **$0.62** | 2 |

34 both, 3 only A, 11 only B. Contrast with exp5, where look-alikes offered as optional reading were ignored: as the
starting point they work, and they make runs cheaper.
