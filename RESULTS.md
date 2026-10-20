# Research results

Progress as of 2026-10-20: **43.02% of the code** (12882 of 15833 functions, including duplicates).

**15117 model runs, $1501.36 API-equivalent in total** (local and cloud). Of the **12772 functions now in C**, **5033 were matched by AI workers** (≈ $0.298 per function, failures included), **7515 were placed by propagation** (a match copied onto identical-shape code), 139 came from decomp-permuter and 85 from other sources (libultra built from source, early hand work). In the table below, *Matched* counts verified results per batch, so a function matched in several experiments is counted in each.

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
| `unify6` | unify6 | unify (no model) | 89 | 8 | 9% | $0.00 | – |  |
| `exp9_easy` | exp9_easy | haiku-5-5 | 60 | 12 | 20% | $0.95 | $0.079 | 90% → 91% |
| `exp9_ranked` | exp9_ranked | haiku-5-5 | 60 | 29 | 48% | $1.04 | $0.036 | 90% → 91% |
| `exp10_b` | exp10_b | haiku-5-5 | 60 | 22 | 37% | $1.16 | $0.053 | 91% → 91% |
| `exp10_a` | exp10_a | haiku-5-5 | 60 | 23 | 38% | $1.29 | $0.056 | 91% → 92% |
| `loop0001` | loop0001 | haiku-5-5 | 60 | 50 | 83% | $0.87 | $0.017 | 92% → 92% |
| `leantest_b` | leantest_b | haiku-5-5 | 1 | 0 | 0% | $0.02 | – |  |
| `leantest_a` | leantest_a | haiku-5-5 | 1 | 0 | 0% | $0.03 | – |  |
| `unify_loop0001` | unify_loop0001 | unify (no model) | 92 | 34 | 37% | $0.00 | – |  |
| `exp13_lp` | exp13_lp | haiku-5-5 | 60 | 13 | 22% | $0.83 | $0.064 | 92% → 93% |
| `exp13_ld` | exp13_ld | haiku-5-5 | 60 | 14 | 23% | $0.89 | $0.064 | 92% → 93% |
| `exp13_nd` | exp13_nd | haiku-5-5 | 60 | 10 | 17% | $1.29 | $0.129 | 92% → 93% |
| `exp13_np` | exp13_np | haiku-5-5 | 60 | 11 | 18% | $1.20 | $0.109 | 92% → 93% |
| `loop0002` | loop0002 | haiku-5-5 | 60 | 53 | 88% | $0.79 | $0.015 | 93% → 93% |
| `bigsmoke` | bigsmoke | opus-5-5 | 1 | 0 | 0% | $2.18 | – | 93% → 93% |
| `bigpilot1` | bigpilot1 | opus-5-5 | 20 | 10 | 50% | $43.48 | $4.348 | 93% → 95% |
| `bigpilot2` | bigpilot2 | opus-5-5 | 9 | 2 | 22% | $64.89 | $32.444 | 95% → 98% |
| `unify_loop0002` | unify_loop0002 | unify (no model) | 67 | 12 | 18% | $0.00 | – |  |
| `loop0003` | loop0003 | haiku-5-5 | 60 | 58 | 97% | $0.41 | $0.007 | 0% → 0% |
| `loop0003b` | loop0003b | opus-5-5 | 10 | 2 | 20% | $33.40 | $16.699 | 0% → 2% |
| `unify_loop0003` | unify_loop0003 | unify (no model) | 58 | 10 | 17% | $0.00 | – |  |
| `loop0004` | loop0004 | haiku-5-5 | 60 | 48 | 80% | $0.47 | $0.010 | 2% → 2% |
| `loop0004b` | loop0004b | opus-5-5 | 10 | 5 | 50% | $21.38 | $4.275 | 2% → 3% |
| `unify_loop0004` | unify_loop0004 | unify (no model) | 50 | 2 | 4% | $0.00 | – |  |
| `loop0005` | loop0005 | haiku-5-5 | 60 | 55 | 92% | $0.43 | $0.008 | 3% → 3% |
| `loop0005b` | loop0005b | opus-5-5 | 10 | 5 | 50% | $18.22 | $3.644 | 3% → 4% |
| `unify_loop0005` | unify_loop0005 | unify (no model) | 48 | 1 | 2% | $0.00 | – |  |
| `loop0006` | loop0006 | haiku-5-5 | 60 | 55 | 92% | $0.34 | $0.006 | 4% → 4% |
| `loop0006b` | loop0006b | opus-5-5 | 10 | 4 | 40% | $25.26 | $6.315 | 4% → 5% |
| `unify_loop0006` | unify_loop0006 | unify (no model) | 50 | 3 | 6% | $0.00 | – |  |
| `loop0007` | loop0007 | haiku-5-5 | 60 | 55 | 92% | $0.38 | $0.007 | 5% → 5% |
| `loop0007b` | loop0007b | opus-5-5 | 10 | 5 | 50% | $25.12 | $5.024 | 5% → 6% |
| `unify_loop0007` | unify_loop0007 | unify (no model) | 51 | 4 | 8% | $0.00 | – |  |
| `loop0008` | loop0008 | haiku-5-5 | 60 | 60 | 100% | $0.33 | $0.005 | 6% → 8% |
| `loop0008b` | loop0008b | opus-5-5 | 10 | 5 | 50% | $32.78 | $6.555 | 6% → 8% |
| `unify_loop0008` | unify_loop0008 | unify (no model) | 50 | 3 | 6% | $0.00 | – |  |
| `loop0009` | loop0009 | haiku-5-5 | 60 | 60 | 100% | $0.46 | $0.008 | 8% → 8% |
| `loop0009b` | loop0009b | opus-5-5 | 10 | 4 | 40% | $24.60 | $6.150 | 8% → 9% |
| `unify_loop0009` | unify_loop0009 | unify (no model) | 52 | 5 | 10% | $0.00 | – |  |
| `loop0010` | loop0010 | haiku-5-5 | 60 | 60 | 100% | $0.35 | $0.006 | 9% → 9% |
| `loop0010b` | loop0010b | opus-5-5 | 10 | 5 | 50% | $25.94 | $5.187 | 9% → 10% |
| `unify_loop0010` | unify_loop0010 | unify (no model) | 48 | 1 | 2% | $0.00 | – |  |
| `loop0011` | loop0011 | haiku-5-5 | 60 | 60 | 100% | $0.36 | $0.006 | 10% → 10% |
| `loop0011b` | loop0011b | opus-5-5 | 10 | 1 | 10% | $35.30 | $35.299 | 10% → 12% |
| `unify_loop0011` | unify_loop0011 | unify (no model) | 47 | 0 | 0% | $0.00 | – |  |
| `unify_replay12` | unify_replay12 | unify (no model) | 54 | 6 | 11% | $0.00 | – |  |
| `loop0012` | loop0012 | haiku-5-5 | 109 | 91 | 83% | $0.78 | $0.009 | 12% → 16% |
| `loop0012b` | loop0012b | opus-5-5 | 10 | 3 | 30% | $25.39 | $8.464 | 12% → 16% |
| `unify_loop0012` | unify_loop0012 | unify (no model) | 51 | 4 | 8% | $0.00 | – |  |
| `loop0013` | loop0013 | haiku-5-5 | 60 | 14 | 23% | $0.85 | $0.061 | 16% → 16% |
| `loop0013b` | loop0013b | opus-5-5 | 10 | 3 | 30% | $27.34 | $9.114 | 16% → 18% |
| `unify_loop0013` | unify_loop0013 | unify (no model) | 49 | 2 | 4% | $0.00 | – |  |
| `loop0014` | loop0014 | haiku-5-5 | 60 | 11 | 18% | $1.01 | $0.092 | 18% → 18% |
| `loop0014b` | loop0014b | opus-5-5 | 10 | 1 | 10% | $35.39 | $35.390 | 18% → 20% |
| `unify_loop0014` | unify_loop0014 | unify (no model) | 48 | 3 | 6% | $0.00 | – |  |
| `loop0015` | loop0015 | haiku-5-5 | 60 | 10 | 17% | $0.96 | $0.096 | 20% → 20% |
| `loop0015b` | loop0015b | opus-5-5 | 10 | 3 | 30% | $30.89 | $10.297 | 20% → 21% |
| `unify_loop0015` | unify_loop0015 | unify (no model) | 45 | 0 | 0% | $0.00 | – |  |
| `loop0016` | loop0016 | haiku-5-5 | 60 | 10 | 17% | $0.92 | $0.092 | 21% → 21% |
| `loop0016b` | loop0016b | opus-5-5 | 10 | 4 | 40% | $22.24 | $5.561 | 21% → 22% |
| `unify_loop0016` | unify_loop0016 | unify (no model) | 45 | 2 | 4% | $0.00 | – |  |
| `loop0017` | loop0017 | haiku-5-5 | 60 | 8 | 13% | $0.90 | $0.112 | 23% → 23% |
| `loop0017b` | loop0017b | opus-5-5 | 10 | 1 | 10% | $26.07 | $26.070 | 23% → 24% |
| `unify_loop0017` | unify_loop0017 | unify (no model) | 44 | 3 | 7% | $0.00 | – |  |
| `loop0018` | loop0018 | haiku-5-5 | 60 | 10 | 17% | $0.91 | $0.091 | 24% → 24% |
| `loop0018b` | loop0018b | opus-5-5 | 10 | 2 | 20% | $26.94 | $13.470 | 24% → 25% |
| `unify_loop0018` | unify_loop0018 | unify (no model) | 41 | 1 | 2% | $0.00 | – |  |
| `loop0019` | loop0019 | haiku-5-5 | 60 | 13 | 22% | $0.92 | $0.071 | 25% → 25% |
| `loop0019b` | loop0019b | opus-5-5 | 10 | 2 | 20% | $28.63 | $14.317 | 25% → 26% |
| `unify_loop0019` | unify_loop0019 | unify (no model) | 43 | 3 | 7% | $0.00 | – |  |
| `loop0020` | loop0020 | haiku-5-5 | 60 | 15 | 25% | $0.97 | $0.065 | 26% → 27% |
| `loop0020b` | loop0020b | opus-5-5 | 10 | 3 | 30% | $27.01 | $9.003 | 27% → 28% |
| `unify_loop0020` | unify_loop0020 | unify (no model) | 47 | 7 | 15% | $0.00 | – |  |
| `loop0021` | loop0021 | haiku-5-5 | 60 | 15 | 25% | $0.99 | $0.066 | 28% → 28% |
| `loop0021b` | loop0021b | opus-5-5 | 10 | 1 | 10% | $20.47 | $20.469 | 28% → 29% |
| `unify_loop0021` | unify_loop0021 | unify (no model) | 44 | 4 | 9% | $0.00 | – |  |
| `loop0022` | loop0022 | haiku-5-5 | 60 | 14 | 23% | $1.03 | $0.074 | 29% → 29% |
| `loop0022b` | loop0022b | opus-5-5 | 10 | 3 | 30% | $28.66 | $9.552 | 29% → 30% |
| `unify_loop0022` | unify_loop0022 | unify (no model) | 42 | 2 | 5% | $0.00 | – |  |
| `loop0023` | loop0023 | haiku-5-5 | 60 | 19 | 32% | $0.99 | $0.052 | 30% → 30% |
| `loop0023b` | loop0023b | opus-5-5 | 10 | 1 | 10% | $26.14 | $26.145 | 30% → 31% |
| `unify_loop0023` | unify_loop0023 | unify (no model) | 40 | 0 | 0% | $0.00 | – |  |
| `loop0024` | loop0024 | haiku-5-5 | 60 | 33 | 55% | $1.01 | $0.031 | 31% → 31% |
| `loop0024b` | loop0024b | opus-5-5 | 10 | 4 | 40% | $20.55 | $5.138 | 31% → 32% |
| `unify_loop0024` | unify_loop0024 | unify (no model) | 40 | 0 | 0% | $0.00 | – |  |
| `loop0025` | loop0025 | haiku-5-5 | 60 | 42 | 70% | $0.89 | $0.021 | 32% → 32% |
| `loop0025b` | loop0025b | opus-5-5 | 10 | 4 | 40% | $13.97 | $3.492 | 32% → 33% |
| `unify_loop0025` | unify_loop0025 | unify (no model) | 40 | 0 | 0% | $0.00 | – |  |
| `loop0026` | loop0026 | haiku-5-5 | 60 | 42 | 70% | $0.89 | $0.021 | 33% → 33% |
| `loop0026b` | loop0026b | opus-5-5 | 10 | 5 | 50% | $14.30 | $2.860 | 33% → 34% |
| `unify_loop0026` | unify_loop0026 | unify (no model) | 40 | 1 | 2% | $0.00 | – |  |
| `loop0027` | loop0027 | haiku-5-5 | 60 | 40 | 67% | $0.82 | $0.020 | 39% → 39% |
| `loop0027b` | loop0027b | opus-5-5 | 10 | 3 | 30% | $13.94 | $4.646 | 39% → 40% |
| `unify_loop0027` | unify_loop0027 | unify (no model) | 68 | 22 | 32% | $0.00 | – |  |
| `loop0028b` | loop0028b | opus-5-5 | 10 | 4 | 40% | $20.09 | $5.023 | 41% → 47% |
| `ocsmoke2` | ocsmoke2 | opencode/nemotron-3.5-super-vl-free | 1 | 1 | 100% | $0.00 | – |  |
| `ocsmoke` | ocsmoke | opencode/deepseek-v4.1-flash-free | 1 | 1 | 100% | $0.00 | – |  |
| `ocA_nemo` | ocA_nemo | opencode/nemotron-3.5-super-vl-free | 57 | 10 | 18% | $0.00 | – |  |
| `ocA_dsf` | ocA_dsf | opencode/deepseek-v4.1-flash-free | 60 | 17 | 28% | $0.00 | – |  |
| `ocL_nemo` | ocL_nemo | opencode/nemotron-3.5-super-vl-free | 15 | 7 | 47% | $0.00 | – |  |
| `orpilot` | orpilot | openrouter/cohere/north-mini-code:free, openrouter/poolside/laguna-s-2.1:free | 4 | 0 | 0% | $0.00 | – |  |
| `ocL_glm` | ocL_glm | opencode/glm-5.3-flash-free | 9 | 3 | 33% | $0.00 | – |  |
| `gptA_sol` | gptA_sol | openai/gpt-6.1-sol | 10 | 5 | 50% | $0.00 | – |  |
| `gptA_luna` | gptA_luna | openai/gpt-6-luna | 10 | 3 | 30% | $0.00 | – |  |
| `cxA_sol` | cxA_sol | codex/gpt-6.1-sol | 10 | 5 | 50% | $0.00 | – |  |
| `cxH_sol` | cxH_sol | codex/gpt-6.1-sol | 2 | 0 | 0% | $0.00 | – |  |
| `gptL_sol` | gptL_sol | openai/gpt-6.1-sol | 116 | 70 | 60% | $0.00 | – |  |
| `cmpH_ours` | cmpH_ours | haiku-5-5 | 29 | 4 | 14% | $0.79 | $0.196 | 83% → 83% |
| `cmpS_ours` | cmpS_ours | sonnet-5-5 | 29 | 5 | 17% | $7.33 | $1.466 | 83% → 84% |
| `gptM_sol` | gptM_sol | openai/gpt-6.1-sol | 249 | 110 | 44% | $0.00 | – |  |
| `he_import` | he_import | hybrid-engine | 17 | 13 | 76% | $0.00 | – |  |
| `fp1` | fp1 | sonnet-5-5 | 450 | 179 | 40% | $107.25 | $0.599 | 86% → 92% |
| `fp2` | fp2 | sonnet-5-5 | 349 | 125 | 36% | $85.12 | $0.681 | 93% → 98% |
| `loop0028` | loop0028 | haiku-5-5, sonnet-5-5 | 528 | 134 | 25% | $113.75 | $0.849 | 41% → 7% |
| `ocL_dsf` | ocL_dsf | opencode/deepseek-v4.1-flash-free | 135 | 70 | 52% | $0.00 | – |  |
| `unify_loop0028` | unify_loop0028 | unify (no model) | 156 | 84 | 54% | $0.00 | – |  |
| `permute` | decomp-permuter on near-misses | , decomp-permuter | 1284 | 211 | 16% | $0.00 | – |  |
| `gptN_sol` | gptN_sol | openai/gpt-6.1-sol | 300 | 111 | 37% | $0.00 | – |  |

Every match counted here passed the independent exact check (instructions and resolved addresses). `Weekly usage` is the Claude subscription's weekly meter at the start and end of each batch; batches overlapped, so readings are shared. Raw per-run data: `queue/<batch>/results.jsonl`.
