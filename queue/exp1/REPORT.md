# Experiment exp1: Haiku vs Sonnet vs escalation on 60 hard functions

Run 2026-10-09. Functions: 60 fresh **hard-tier** functions (difficulty 100–292, median 140), never attempted before, from 17 segments, sampled evenly across the tier. Functions with jump tables or float constants were excluded: the build can't yet place IDO's `.rodata` at the original address, so they can't pass the exact check whoever writes them.

Haiku: 10 checks per function. Sonnet: 15 checks. Permuter: 10 minutes per near-miss (≥ 80 % of instructions), CPU only. Every match is verified independently (instructions and resolved addresses). Nothing was integrated until every arm had finished, so no arm could see another's matches.

## Results

| Arm | Pipeline | Matched | Rate | Haiku runs | Sonnet runs | Cost (API-equiv.) | $ per match |
|---|---|---|---|---|---|---|---|
| A | Haiku only | 4 / 60 | 7% | 60 | 0 | $1.55 | $0.39 |
| B | Haiku → Sonnet | 16 / 60 | 27% | 60 | 56 | $28.29 | $1.77 |
| C | Sonnet only | 10 / 60 | 17% | 0 | 60 | $21.89 | $2.19 |
| D | Haiku → permuter → Sonnet | 16 / 60 | 27% | 60 | 55 | $28.08 | $1.75 |

D reuses B's Sonnet runs: in both arms Sonnet starts from the same Haiku attempt with the same prompt, so D's Sonnet stage is B's Sonnet results restricted to the functions the permuter didn't win.

## Stages

- Haiku (A): 4 matched, 56 failed.
- Permuter on A's near-misses: 6 tried, 1 won.
- Sonnet after Haiku (B): 12 of 56 runs matched.
- Sonnet from scratch (C): 10 of 60 runs matched.
- Overlap: 9 matched by both Haiku-first (B) and Sonnet-only (C); 7 only by B; 1 only by C; 43 by nobody.

## By difficulty

| Difficulty | Functions | A | B | C | D |
|---|---|---|---|---|---|
| 100–149 | 35 | 2 | 13 | 8 | 13 |
| 150–199 | 12 | 0 | 1 | 1 | 1 |
| 200–299 | 13 | 2 | 2 | 1 | 2 |

## Usage (subscription meter)

```
22:07Z  start                    weekly 79%  5-hour 0%
22:17Z  after A (haiku)          weekly 79%  5-hour 2%
22:25Z  after C (sonnet only)    weekly 80%  5-hour 8%
22:35Z  after P (permuter)       weekly 80%  5-hour 9%
22:46Z  after B (haiku->sonnet)  weekly 81%  5-hour 16%
23:08Z  integrated               weekly 81%  5-hour 17%
```

## In the build

8 of the 17 functions matched by any arm are now in the build (the rest match alone but clash with declarations already in their source file; see `queue/rejected.jsonl`).

## Findings

- **Haiku first, then Sonnet, is the best pipeline on hard functions:** 16 matches against Sonnet alone's 10, and cheaper per
  match ($1.77 vs $2.19). Starting Sonnet from Haiku's attempt beats starting it from the m2c draft; 7 functions were matched
  only that way. The Haiku pass costs about $1.55 for 60 functions and didn't move the weekly meter.
- **Haiku alone is not enough here** (7%, against about 60% on easy and medium functions).
- **The permuter added nothing on top** (D = B): only 6 of Haiku's hard attempts were ≥ 80 % close, and its one win was also
  matched by Sonnet. Its value is on medium-tier near-misses, not this tier.
- **Difficulty 150+ is a wall for everyone** (3 of 25 at best). Those need better tooling (shared structs, jump tables,
  floats), not more model runs.
- **Usage:** the whole experiment (176 runs, 116 of them Sonnet) moved the weekly meter 2 points (79% → 81%).
- **Integration is the real bottleneck:** only 8 of 17 matches survived in their source file. The model-free reconcile pass
  (`tools/hh/reconcile.py`, added the same night) fixes most clashes of this kind.
