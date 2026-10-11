# exp7: more checks + "one theory, one change" (Haiku retry)

100 tried-but-unmatched easy/medium functions (none in exp5/exp6, none with a >= 90 % twin). Both arms: Haiku,
in-file check, from the same previous attempt, snapshots of every attempt. A: 10 checks. B: 30 checks plus
`tools/swarm/theory_note.md` (one hypothesis and one change per check, logged; go back to the best snapshot when a
change makes it worse).

| Arm | Matched | Cost (API-equiv.) | Median checks |
|---|---|---|---|
| A: 10 checks | 18 | $2.02 | 7 |
| B: 30 checks + theory | **24** | $2.94 | 7 |

14 both, 4 only A, 10 only B. Only 1 of B's matches needed more than 10 checks (27 runs used more without matching),
so the gain is the working method, not the budget. Snapshots recovered nothing here (no run lost a match).
