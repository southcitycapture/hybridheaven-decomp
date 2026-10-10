# exp2: Haiku tag teams vs Sonnet

56 functions (difficulty 100–292, median 140): the ones a first fresh Haiku run did **not** match. Haiku: 10 checks per run. Every match verified independently; nothing integrated until all arms finished.

- **Relay:** leg k starts from leg k−1's last attempt (leg 1 from the first Haiku's), with a note to not just repeat it. Only still-unmatched functions go on to the next leg.
- **Swarm:** independent fresh Haiku runs on every function; a function counts once any run matches (best of k).
- **Sonnet:** one Sonnet run (15 checks) from the first Haiku's attempt, same functions (`exp1_b`).

| Arm | Matched | Rate | Runs | Cost (API-equiv.) | $ per match |
|---|---|---|---|---|---|
| Relay, 1 leg | 4 / 56 | 7% | 56 | $1.87 | $0.47 |
| Relay, 2 legs | 4 / 56 | 7% | 108 | $3.53 | $0.88 |
| Relay, 3 legs | 5 / 56 | 9% | 160 | $5.14 | $1.03 |
| Swarm, best of 1 | 4 / 56 | 7% | 56 | $1.41 | $0.35 |
| Swarm, best of 2 | 5 / 56 | 9% | 112 | $2.88 | $0.58 |
| Swarm, best of 3 | 5 / 56 | 9% | 168 | $4.28 | $0.86 |
| Sonnet, 1 run | 12 / 56 | 21% | 56 | $26.74 | $2.23 |

Overlap: relay ∪ swarm = 6; relay ∩ swarm = 4; Sonnet-only (neither Haiku team) = 7; Haiku teams but not Sonnet = 1.

## By difficulty

| Difficulty | Functions | Relay | Swarm | Sonnet |
|---|---|---|---|---|
| 100–127 | 20 | 3 | 2 | 7 |
| 128–169 | 18 | 2 | 3 | 5 |
| 170–292 | 18 | 0 | 0 | 0 |

## Usage (subscription meter)

```
01:52Z  start          weekly 82%  5-hour 18%
02:07Z  after leg 1    weekly 82%  5-hour 20%
02:20Z  after leg 2    weekly 82%  5-hour 21%
02:32Z  after leg 3    weekly 82%  5-hour 23%
```

## Findings

- **Haiku tag teams are cheaper per match than Sonnet but hit a ceiling.** Both teams found 5 of the 56 (9 %), at
  $0.86–1.03 per match, against Sonnet's 12 (21 %) at $2.23. Most of the gain comes from the second Haiku: leg 3
  added one function to the relay and nothing to the swarm.
- **They reach a different (easier) set:** 7 of Sonnet's 12 were matched by no Haiku team; only 1 Haiku-team match
  was missed by Sonnet.
- **Difficulty 170+ is out of reach for both** (0 of 18).
- **Usage:** 328 Haiku runs did not move the weekly meter (82 % → 82 %).
- **Recommendation for the hard tier:** one fresh Haiku, then one more Haiku (relay or fresh, equal), then Sonnet on
  what's left. More Haiku legs than that are wasted.
