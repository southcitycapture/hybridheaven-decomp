# exp3t: Haiku tag teams vs Sonnet

27 functions (difficulty 307–696, median 378): the ones a first fresh Haiku run did **not** match. Haiku: 10 checks per run. Every match verified independently; nothing integrated until all arms finished.

- **Relay:** leg k starts from leg k−1's last attempt (leg 1 from the first Haiku's), with a note to not just repeat it. Only still-unmatched functions go on to the next leg.
- **Swarm:** independent fresh Haiku runs on every function; a function counts once any run matches (best of k).
- **Sonnet:** one Sonnet run (15 checks) from the first Haiku's attempt, same functions (`exp3_s`).

| Arm | Matched | Rate | Runs | Cost (API-equiv.) | $ per match |
|---|---|---|---|---|---|
| Relay, 1 leg | 1 / 27 | 4% | 27 | $1.05 | $1.05 |
| Relay, 2 legs | 1 / 27 | 4% | 53 | $2.06 | $2.06 |
| Relay, 3 legs | 1 / 27 | 4% | 79 | $3.09 | $3.09 |
| Swarm, best of 1 | 0 / 27 | 0% | 27 | $0.99 | — |
| Swarm, best of 2 | 0 / 27 | 0% | 54 | $2.18 | — |
| Swarm, best of 3 | 0 / 27 | 0% | 81 | $3.37 | — |
| Sonnet, 1 run | 2 / 27 | 7% | 27 | $16.89 | $8.44 |

Overlap: relay ∪ swarm = 1; relay ∩ swarm = 0; Sonnet-only (neither Haiku team) = 1; Haiku teams but not Sonnet = 0.

## By difficulty

| Difficulty | Functions | Relay | Swarm | Sonnet |
|---|---|---|---|---|
| 307–364 | 10 | 0 | 0 | 1 |
| 365–440 | 8 | 0 | 0 | 0 |
| 441–696 | 9 | 1 | 0 | 1 |

## Usage (subscription meter)

```
02:39Z  start          weekly 83%  5-hour 1%
02:48Z  after leg 1    weekly 83%  5-hour 5%
02:59Z  after leg 2    weekly 84%  5-hour 10%
03:10Z  after leg 3    weekly 84%  5-hour 11%
```

## Findings

- **Very hard functions (difficulty 300+) are beyond today's pipeline.** A fresh Haiku matched 0 of 30; three relay
  legs found 1, three swarm runs 0, one Sonnet run 2 (7 %, $8.44 per match).
- Only 55 very-hard functions had no jump table or float constant at all: almost all of this tier needs the
  per-file rodata support (branch `rodata`, see RODATA_NOTES.md) before any model can match it.
- **Usage:** about 2 weekly points (82 % → 84 %), mostly Sonnet and the lead session.
