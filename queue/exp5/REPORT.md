# exp5: do already-matched look-alike functions help Haiku?

100 tried-but-unmatched easy/medium functions that have a matched look-alike (>= 45 % similar by `tools/hh/similar.py`).
Both arms: Haiku, 10 checks, in-file check, starting from the same newest earlier attempt; only `exp5_ref` got
`similar/` (up to 3 look-alikes: their asm and their matching C) plus a prompt note.

| Similarity | Functions | With references | Without |
|---|---|---|---|
| 45–60 % | 30 | 7 | 7 |
| 60–75 % | 23 | 5 | 3 |
| 75–90 % | 30 | 13 | 14 |
| 90 %+ | 17 | 11 | 10 |
| **All** | 100 | **36** | **34** |

Cost about $1.65 per arm (API-equivalent); the weekly meter didn't move (85 %). 34 new functions landed.

**Finding: no effect, because the references were mostly ignored.** Only 8 of the 100 reference-arm attempts took
anything recognisable from a reference (and only field names). Starting from a previous attempt, Haiku iterates on
that attempt and doesn't go and study other files. Many remaining failures are pure register-allocation differences.
Ideas not tested yet: make a >= 90 % look-alike's C the starting point (transplant) instead of an optional example.
