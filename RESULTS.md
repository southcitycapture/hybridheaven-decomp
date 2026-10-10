# Research results

Progress as of 2026-10-10: **14.21% of the code** (3400 of 15890 functions, including duplicates).

**9865 model runs, 4928 verified matches (50%), $190.32 API-equivalent in total (≈ $0.039 per match)**; plus 147 matches from decomp-permuter at no model cost.

| Batch | What | Model | Runs | Matched | Rate | API-equiv cost | Per match | Weekly usage |
|---|---|---|---|---|---|---|---|---|
| `pilot` | Pilot: 50 small functions | haiku-5-5 | 50 | 32 | 64% | $0.52 | $0.016 | 67% → 67% |
| `batch1` | 300 easy/medium | haiku-5-5 | 300 | 222 | 74% | $2.92 | $0.013 | 67% → 68% |
| `batch2` | 1,000 easy/medium | haiku-5-5 | 1000 | 725 | 72% | $10.33 | $0.014 | 67% → 68% |
| `fix1` | Repair pass: declaration conflicts | haiku-5-5 | 242 | 218 | 90% | $1.85 | $0.008 | 69% → 69% |
| `batch3` | 300 easy/medium | haiku-5-5 | 299 | 196 | 66% | $3.44 | $0.018 | 68% → 69% |
| `batch4` | 2,474 easy/medium (with context.h) | haiku-5-5 | 2474 | 1465 | 59% | $27.49 | $0.019 | 69% → 71% |
| `exp0_h` | Hard tier, ladder stage 1 | haiku-5-5 | 40 | 11 | 28% | $0.79 | $0.072 | 71% → 71% |
| `exp0_s` | Hard tier, ladder stage 3 (on Haiku's failures) | sonnet-5-5 | 29 | 11 | 38% | $11.37 | $1.034 | 71% → 72% |
| `batch5n` | 673 never-tried easy/medium (incl. main) | haiku-5-5 | 671 | 302 | 45% | $8.20 | $0.027 | 72% → 74% |
| `cloud1` | cloud1 | haiku-5-5 (cloud subagent) | 136 | 112 | 82% | $0.00 | – |  |
| `batch5r` | 2,148 easy/medium second attempts | haiku-5-5 | 2148 | 1029 | 48% | $38.33 | $0.037 | 72% → 76% |
| `permute2` | permute2 | decomp-permuter | 94 | 94 | 100% | $0.00 | – |  |
| `permute3` | permute3 | decomp-permuter | 8 | 8 | 100% | $0.00 | – |  |
| `exp1_a` | exp1_a | haiku-5-5 | 60 | 4 | 7% | $1.55 | $0.389 | 79% → 79% |
| `exp1_c` | exp1_c | sonnet-5-5 | 60 | 10 | 17% | $21.89 | $2.189 | 79% → 80% |
| `permute` | decomp-permuter on near-misses | decomp-permuter | 424 | 45 | 11% | $0.00 | – |  |
| `reconcile1` | reconcile1 | reconcile (no model) | 695 | 320 | 46% | $0.00 | – |  |
| `exp1_b` | exp1_b | sonnet-5-5 | 56 | 12 | 21% | $26.74 | $2.228 | 80% → 81% |
| `reconcile2` | reconcile2 | reconcile (no model) | 394 | 0 | 0% | $0.00 | – |  |
| `exp2_n1` | exp2_n1 | haiku-5-5 | 56 | 4 | 7% | $1.41 | $0.353 | 82% → 82% |
| `exp2_r1` | exp2_r1 | haiku-5-5 | 56 | 4 | 7% | $1.87 | $0.467 | 82% → 82% |
| `exp2_n2` | exp2_n2 | haiku-5-5 | 56 | 2 | 4% | $1.46 | $0.732 | 82% → 82% |
| `exp2_r2` | exp2_r2 | haiku-5-5 | 52 | 0 | 0% | $1.66 | – | 82% → 82% |
| `exp2_n3` | exp2_n3 | haiku-5-5 | 56 | 1 | 2% | $1.40 | $1.399 | 82% → 82% |
| `exp2_r3` | exp2_r3 | haiku-5-5 | 52 | 1 | 2% | $1.60 | $1.604 | 82% → 82% |
| `exp3_a` | exp3_a | haiku-5-5 | 29 | 0 | 0% | $0.91 | – | 82% → 83% |
| `exp3t_n1` | exp3t_n1 | haiku-5-5 | 29 | 0 | 0% | $1.05 | – | 83% → 83% |
| `exp3t_r1` | exp3t_r1 | haiku-5-5 | 28 | 1 | 4% | $1.08 | $1.080 | 83% → 83% |
| `exp3_s` | exp3_s | sonnet-5-5 | 29 | 2 | 7% | $17.75 | $8.875 | 83% → 84% |
| `exp3t_n2` | exp3t_n2 | haiku-5-5 | 29 | 0 | 0% | $1.25 | – | 83% → 84% |
| `exp3t_r2` | exp3t_r2 | haiku-5-5 | 28 | 0 | 0% | $1.08 | – | 83% → 84% |
| `exp3t_n3` | exp3t_n3 | haiku-5-5 | 29 | 0 | 0% | $1.25 | – | 84% → 84% |
| `exp3t_r3` | exp3t_r3 | haiku-5-5 | 28 | 0 | 0% | $1.09 | – | 84% → 84% |
| `reconcile3` | reconcile3 | reconcile (no model) | 394 | 7 | 2% | $0.00 | – |  |
| `cloud2` | cloud2 | haiku-5-5 (cloud subagent) | 230 | 207 | 90% | $0.00 | – |  |
| `cloud2b` | cloud2b | haiku-5-5 (cloud subagent) | 30 | 30 | 100% | $0.00 | – |  |

Every match counted here passed the independent exact check (instructions and resolved addresses). `Weekly usage` is the Claude subscription's weekly meter at the start and end of each batch; batches overlapped, so readings are shared. Raw per-run data: `queue/<batch>/results.jsonl`.
