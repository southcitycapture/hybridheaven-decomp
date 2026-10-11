# Research results

Progress as of 2026-10-11: **25.25% of the code** (10218 of 15833 functions, including duplicates).

**11564 model runs, 5571 verified matches (48%), $206.41 API-equivalent in total (≈ $0.037 per match)**; plus 148 matches from decomp-permuter at no model cost.

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
| `exp4_base` | exp4_base | sonnet-5-5 (cloud, base) | 10 | 10 | 100% | $0.00 | – |  |
| `exp4_withbrief` | exp4_withbrief | sonnet-5-5 (cloud, withbrief) | 9 | 8 | 89% | $0.00 | – |  |
| `exp5_ref` | exp5_ref | haiku-5-5 | 100 | 36 | 36% | $1.65 | $0.046 | 85% → 85% |
| `exp5_noref` | exp5_noref | haiku-5-5 | 100 | 34 | 34% | $1.68 | $0.050 | 85% → 85% |
| `permute` | decomp-permuter on near-misses | decomp-permuter | 427 | 46 | 11% | $0.00 | – |  |
| `exp6_plain` | exp6_plain | haiku-5-5 | 100 | 14 | 14% | $2.03 | $0.145 | 85% → 86% |
| `exp6_learn` | exp6_learn | haiku-5-5 | 100 | 15 | 15% | $2.24 | $0.149 | 85% → 86% |
| `hand1` | hand1 | opus-5-5 (lead, by hand) | 1 | 1 | 100% | $0.00 | – |  |
| `exp7_a` | exp7_a | haiku-5-5 | 100 | 18 | 18% | $2.02 | $0.112 | 86% → 87% |
| `exp7_b` | exp7_b | haiku-5-5 | 100 | 24 | 24% | $2.94 | $0.122 | 86% → 87% |
| `exp8_b` | exp8_b | haiku-5-5 | 60 | 46 | 77% | $0.62 | $0.013 | 87% → 87% |
| `exp8_a` | exp8_a | haiku-5-5 | 60 | 38 | 63% | $0.86 | $0.023 | 87% → 87% |
| `kit4_h1` | kit4_h1 | cloud kit4 h1 | 46 | 32 | 70% | $0.00 | – |  |
| `kit4_h2` | kit4_h2 | cloud kit4 h2 | 31 | 17 | 55% | $0.00 | – |  |
| `kit4_s` | kit4_s | cloud kit4 s | 48 | 33 | 69% | $0.00 | – |  |
| `twin1` | twin1 | haiku-5-5 | 132 | 83 | 63% | $1.79 | $0.022 | 87% → 87% |
| `reconcile4` | reconcile4 | reconcile (no model) | 172 | 0 | 0% | $0.00 | – |  |
| `twinfix` | twinfix | haiku-5-5 | 15 | 15 | 100% | $0.27 | $0.018 | 87% → 87% |
| `kit5_s` | kit5_s | cloud kit5 sonnet+theory | 22 | 17 | 77% | $0.00 | – |  |
| `unify1` | unify1 | unify (no model) | 148 | 43 | 29% | $0.00 | – |  |
| `unify2` | unify2 | unify (no model) | 159 | 77 | 48% | $0.00 | – |  |
| `unify3` | unify3 | unify (no model) | 77 | 52 | 68% | $0.00 | – |  |
| `unify5` | unify5 | unify (no model) | 109 | 30 | 28% | $0.00 | – |  |

Every match counted here passed the independent exact check (instructions and resolved addresses). `Weekly usage` is the Claude subscription's weekly meter at the start and end of each batch; batches overlapped, so readings are shared. Raw per-run data: `queue/<batch>/results.jsonl`.
