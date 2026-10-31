# Research results

Progress as of 2026-10-31: **72.56% of the code** (15034 of 15891 functions, including duplicates).

**22190 model runs, $5546.27 API-equivalent in total** (local and cloud). Of the **14981 functions now in C**, **6888 were matched by AI workers** (≈ $0.805 per function, failures included), **7563 were placed by propagation** (a match copied onto identical-shape code), 280 came from decomp-permuter and 250 from other sources (libultra built from source, early hand work). In the table below, *Matched* counts verified results per batch, so a function matched in several experiments is counted in each.

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
| `gptN_sol` | gptN_sol | openai/gpt-6.1-sol | 300 | 111 | 37% | $0.00 | – |  |
| `loop0028` | loop0028 | haiku-5-5, sonnet-5-5 | 888 | 189 | 21% | $215.92 | $1.142 | 41% → 14% |
| `unify_loop0028` | unify_loop0028 | unify (no model) | 126 | 75 | 60% | $0.00 | – |  |
| `loop0029` | loop0029 | sonnet-5-5 | 273 | 103 | 38% | $53.54 | $0.520 | 14% → 19% |
| `unify_loop0029` | unify_loop0029 | unify (no model) | 240 | 135 | 56% | $0.00 | – |  |
| `fixH` | fixH | haiku-5-5 | 28 | 12 | 43% | $0.39 | $0.032 | 20% → 21% |
| `unify_loop0030` | unify_loop0030 | unify (no model) | 108 | 2 | 2% | $0.00 | – |  |
| `weak594` | weak594 | sonnet-5-5 | 333 | 97 | 29% | $50.88 | $0.525 | 14% → 28% |
| `nearS` | nearS | sonnet-5-5 | 788 | 127 | 16% | $187.88 | $1.479 | 20% → 32% |
| `unify_loop0031` | unify_loop0031 | unify (no model) | 134 | 23 | 17% | $0.00 | – |  |
| `nearS2` | nearS2 | sonnet-5-5 | 189 | 18 | 10% | $40.19 | $2.233 | 32% → 34% |
| `addrS` | addrS | sonnet-5-5 | 65 | 5 | 8% | $18.10 | $3.619 | 34% → 35% |
| `unify_loop0032` | unify_loop0032 | unify (no model) | 132 | 10 | 8% | $0.00 | – |  |
| `unify_loop0033` | unify_loop0033 | unify (no model) | 121 | 6 | 5% | $0.00 | – |  |
| `unify_loop0034` | unify_loop0034 | unify (no model) | 130 | 3 | 2% | $0.00 | – |  |
| `opusN` | opusN | opus-5-5 | 470 | 267 | 57% | $342.06 | $1.281 | 36% → 51% |
| `unify_loop0035` | unify_loop0035 | unify (no model) | 120 | 40 | 33% | $0.00 | – |  |
| `unify_loop0036` | unify_loop0036 | unify (no model) | 97 | 4 | 4% | $0.00 | – |  |
| `unify_loop0037` | unify_loop0037 | unify (no model) | 94 | 1 | 1% | $0.00 | – |  |
| `unify_loop0038` | unify_loop0038 | unify (no model) | 101 | 18 | 18% | $0.00 | – |  |
| `addrfix` | addrfix | addrfix | 10 | 10 | 100% | $0.00 | – |  |
| `unify_loop0039` | unify_loop0039 | unify (no model) | 112 | 22 | 20% | $0.00 | – |  |
| `permute` | decomp-permuter on near-misses | , decomp-permuter | 2155 | 289 | 13% | $0.00 | – |  |
| `opusN2` | opusN2 | opus-5-5 | 823 | 413 | 50% | $1082.26 | $2.620 | 51% → 8% |
| `gptO_sol` | gptO_sol | openai/gpt-6.1-sol | 400 | 68 | 17% | $0.00 | – |  |
| `permsweep` | permsweep | decomp-permuter | 1585 | 82 | 5% | $0.00 | – |  |
| `unify_loop0040` | unify_loop0040 | unify (no model) | 49 | 5 | 10% | $0.00 | – |  |
| `unify_loop0041` | unify_loop0041 | unify (no model) | 60 | 3 | 5% | $0.00 | – |  |
| `opusN3` | opusN3 | opus-5-5 | 863 | 324 | 38% | $899.32 | $2.776 | 8% → 54% |
| `sday1` | sday1 | sonnet-5-5 | 364 | 63 | 17% | $79.55 | $1.263 | 55% → 60% |
| `abSol` | abSol | openai/gpt-6.1-sol | 40 | 1 | 2% | $0.00 | – |  |
| `abOpus` | abOpus | opus-5-5 | 40 | 11 | 28% | $66.23 | $6.021 | 64% → 73% |
| `gptP_sol` | gptP_sol | openai/gpt-6.1-sol | 358 | 59 | 16% | $0.00 | – |  |
| `opusW1` | opusW1 | opus-5-5 | 658 | 199 | 30% | $739.69 | $3.717 | 60% → 95% |
| `abSol_high` | abSol_high | openai/gpt-6.1-sol | 39 | 2 | 5% | $0.00 | – |  |
| `abSol_max` | abSol_max | openai/gpt-6.1-sol | 38 | 4 | 11% | $0.00 | – |  |
| `unify_loop0042` | unify_loop0042 | unify (no model) | 89 | 9 | 10% | $0.00 | – |  |
| `unify_loop0043` | unify_loop0043 | unify (no model) | 80 | 0 | 0% | $0.00 | – |  |
| `unify_loop0044` | unify_loop0044 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0045` | unify_loop0045 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0046` | unify_loop0046 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0047` | unify_loop0047 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0048` | unify_loop0048 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0049` | unify_loop0049 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0050` | unify_loop0050 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0051` | unify_loop0051 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0052` | unify_loop0052 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0053` | unify_loop0053 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0054` | unify_loop0054 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0055` | unify_loop0055 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0056` | unify_loop0056 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0057` | unify_loop0057 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0058` | unify_loop0058 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0059` | unify_loop0059 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0060` | unify_loop0060 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0061` | unify_loop0061 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0062` | unify_loop0062 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0063` | unify_loop0063 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0064` | unify_loop0064 | unify (no model) | 79 | 0 | 0% | $0.00 | – |  |
| `unify_loop0065` | unify_loop0065 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0066` | unify_loop0066 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0067` | unify_loop0067 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0068` | unify_loop0068 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0069` | unify_loop0069 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `abTerra` | abTerra | openai/gpt-6.1-terra | 40 | 4 | 10% | $0.00 | – |  |
| `abTerra_max` | abTerra_max | openai/gpt-6.1-terra | 40 | 6 | 15% | $0.00 | – |  |
| `unify_loop0070` | unify_loop0070 | unify (no model) | 13 | 0 | 0% | $0.00 | – |  |
| `unify_loop0071` | unify_loop0071 | unify (no model) | 13 | 0 | 0% | $0.00 | – |  |
| `unify_loop0072` | unify_loop0072 | unify (no model) | 13 | 0 | 0% | $0.00 | – |  |
| `unify_loop0073` | unify_loop0073 | unify (no model) | 13 | 0 | 0% | $0.00 | – |  |
| `unify_loop0074` | unify_loop0074 | unify (no model) | 13 | 0 | 0% | $0.00 | – |  |
| `unify_loop0075` | unify_loop0075 | unify (no model) | 13 | 0 | 0% | $0.00 | – |  |
| `opusMax1` | opusMax1 | opus-5-5 | 9 | 2 | 22% | $28.19 | $14.095 |  |
| `abSonnet` | abSonnet | sonnet-5-5 | 40 | 10 | 25% | $24.72 | $2.472 |  |
| `unify_loop0076` | unify_loop0076 | unify (no model) | 15 | 1 | 7% | $0.00 | – |  |
| `unify_loop0077` | unify_loop0077 | unify (no model) | 14 | 0 | 0% | $0.00 | – |  |
| `unify_loop0078` | unify_loop0078 | unify (no model) | 14 | 0 | 0% | $0.00 | – |  |
| `unify_loop0079` | unify_loop0079 | unify (no model) | 14 | 0 | 0% | $0.00 | – |  |
| `unify_loop0080` | unify_loop0080 | unify (no model) | 14 | 0 | 0% | $0.00 | – |  |
| `unify_loop0081` | unify_loop0081 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0082` | unify_loop0082 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0083` | unify_loop0083 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0084` | unify_loop0084 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0085` | unify_loop0085 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `localA` | localA | strata/qwen3.8-flash-next | 15 | 7 | 47% | $0.00 | – |  |
| `unify_loop0086` | unify_loop0086 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0087` | unify_loop0087 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0088` | unify_loop0088 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0089` | unify_loop0089 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0090` | unify_loop0090 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0091` | unify_loop0091 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0092` | unify_loop0092 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0093` | unify_loop0093 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0094` | unify_loop0094 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0095` | unify_loop0095 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `localC` | localC | strata/qwen3.8-flash-next | 15 | 5 | 33% | $0.00 | – |  |
| `unify_loop0096` | unify_loop0096 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0097` | unify_loop0097 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0098` | unify_loop0098 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0099` | unify_loop0099 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0100` | unify_loop0100 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0101` | unify_loop0101 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0102` | unify_loop0102 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0103` | unify_loop0103 | unify (no model) | 12 | 0 | 0% | $0.00 | – |  |
| `unify_loop0104` | unify_loop0104 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0105` | unify_loop0105 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0106` | unify_loop0106 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0107` | unify_loop0107 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0108` | unify_loop0108 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0109` | unify_loop0109 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0110` | unify_loop0110 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0111` | unify_loop0111 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `abWallB.aborted` | abWallB.aborted | sonnet-5-5 | 3 | 1 | 33% | $0.45 | $0.446 |  |
| `abWallA.aborted` | abWallA.aborted | sonnet-5-5 | 4 | 1 | 25% | $0.47 | $0.475 |  |
| `terraL1.aborted` | terraL1.aborted | openai/gpt-6.1-terra | 3 | 0 | 0% | $0.00 | – |  |
| `abWallA` | abWallA | sonnet-5-5 | 24 | 2 | 8% | $8.76 | $4.381 |  |
| `abWallB` | abWallB | sonnet-5-5 | 24 | 1 | 4% | $10.62 | $10.616 |  |
| `abWallC` | abWallC | sonnet-5-5 | 20 | 2 | 10% | $8.55 | $4.274 |  |
| `unify_loop0112` | unify_loop0112 | unify (no model) | 3 | 0 | 0% | $0.00 | – |  |
| `unify_loop0113` | unify_loop0113 | unify (no model) | 3 | 0 | 0% | $0.00 | – |  |
| `unify_loop0114` | unify_loop0114 | unify (no model) | 5 | 0 | 0% | $0.00 | – |  |
| `unify_loop0115` | unify_loop0115 | unify (no model) | 5 | 0 | 0% | $0.00 | – |  |
| `unify_loop0116` | unify_loop0116 | unify (no model) | 7 | 1 | 14% | $0.00 | – |  |
| `terraL1` | terraL1 | openai/gpt-6.1-terra | 100 | 22 | 22% | $0.00 | – |  |
| `unify_loop0117` | unify_loop0117 | unify (no model) | 8 | 0 | 0% | $0.00 | – |  |
| `unify_loop0118` | unify_loop0118 | unify (no model) | 9 | 0 | 0% | $0.00 | – |  |
| `unify_loop0119` | unify_loop0119 | unify (no model) | 8 | 0 | 0% | $0.00 | – |  |
| `abWallT` | abWallT | openai/gpt-6.1-terra | 20 | 2 | 10% | $0.00 | – |  |
| `terraL2` | terraL2 | openai/gpt-6.1-terra | 83 | 21 | 25% | $0.00 | – |  |
| `unify_loop0120` | unify_loop0120 | unify (no model) | 11 | 0 | 0% | $0.00 | – |  |
| `unify_loop0121` | unify_loop0121 | unify (no model) | 11 | 0 | 0% | $0.00 | – |  |
| `sonnetN1` | sonnetN1 | sonnet-5-5 | 54 | 0 | 0% | $33.22 | – |  |
| `unify_loop0122` | unify_loop0122 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `unify_loop0123` | unify_loop0123 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `unify_loop0124` | unify_loop0124 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `unify_loop0125` | unify_loop0125 | unify (no model) | 7 | 1 | 14% | $0.00 | – |  |
| `unify_loop0126` | unify_loop0126 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `unify_loop0127` | unify_loop0127 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `symfixS1` | symfixS1 | sonnet-5-5 | 10 | 0 | 0% | $1.90 | – |  |
| `unify_loop0128` | unify_loop0128 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `unify_loop0129` | unify_loop0129 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `unify_loop0130` | unify_loop0130 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `unify_loop0131` | unify_loop0131 | unify (no model) | 6 | 0 | 0% | $0.00 | – |  |
| `terraL3` | terraL3 | openai/gpt-6.1-terra | 116 | 16 | 14% | $0.00 | – |  |
| `armC1` | armC1 | opus-5-5 | 2 | 0 | 0% | $6.08 | – |  |
| `unify_loop0133` | unify_loop0133 | unify (no model) | 2 | 2 | 100% | $0.00 | – |  |
| `terraOS` | terraOS | openai/gpt-6.1-terra | 75 | 13 | 17% | $0.00 | – |  |
| `ocL_dsf` | ocL_dsf | opencode/deepseek-v4.1-flash-free | 251 | 113 | 45% | $0.00 | – |  |
| `unify_loop0153` | unify_loop0153 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0154` | unify_loop0154 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0155` | unify_loop0155 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0156` | unify_loop0156 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0157` | unify_loop0157 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `unify_loop0158` | unify_loop0158 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `opusWE2` | opusWE2 | opus-5-5 | 17 | 4 | 24% | $55.71 | $13.928 |  |
| `unify_loop0159` | unify_loop0159 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |
| `opusWE3` | opusWE3 | opus-5-5 | 16 | 7 | 44% | $50.69 | $7.242 |  |
| `opusWE1` | opusWE1 | opus-5-5 | 15 | 4 | 27% | $60.73 | $15.182 |  |
| `unify_loop0160` | unify_loop0160 | unify (no model) | 2 | 0 | 0% | $0.00 | – |  |
| `unify_loop0161` | unify_loop0161 | unify (no model) | 2 | 0 | 0% | $0.00 | – |  |
| `bigC2.aborted` | bigC2.aborted | opus-5-5 | 1 | 0 | 0% | $0.42 | – |  |
| `bigB2` | bigB2 | sonnet-5-5 | 3 | 0 | 0% | $1.92 | – |  |
| `bigB1` | bigB1 | sonnet-5-5 | 3 | 0 | 0% | $3.66 | – |  |
| `bigC2` | bigC2 | opus-5-5 | 3 | 2 | 67% | $8.56 | $4.282 |  |
| `bigA1` | bigA1 | opus-5-5 | 3 | 0 | 0% | $11.04 | – |  |
| `bigC1` | bigC1 | opus-5-5 | 3 | 0 | 0% | $10.13 | – |  |
| `unify_loop0162` | unify_loop0162 | unify (no model) | 2 | 0 | 0% | $0.00 | – |  |
| `bigA2` | bigA2 | opus-5-5 | 3 | 2 | 67% | $8.46 | $4.228 |  |
| `bigC4` | bigC4 | opus-5-5 | 2 | 1 | 50% | $15.21 | $15.207 |  |
| `bigC3` | bigC3 | opus-5-5 | 2 | 0 | 0% | $7.87 | – |  |
| `bigA4` | bigA4 | opus-5-5 | 3 | 0 | 0% | $11.23 | – |  |
| `unify_loop0163` | unify_loop0163 | unify (no model) | 2 | 0 | 0% | $0.00 | – |  |
| `bigA3` | bigA3 | opus-5-5 | 4 | 0 | 0% | $14.06 | – |  |
| `localU1` | localU1 | strata/qwen3.8-flash-next | 53 | 10 | 19% | $0.00 | – |  |
| `unify_loop0164` | unify_loop0164 | unify (no model) | 1 | 0 | 0% | $0.00 | – |  |

Every match counted here passed the independent exact check (instructions and resolved addresses). `Weekly usage` is the Claude subscription's weekly meter at the start and end of each batch; batches overlapped, so readings are shared. Raw per-run data: `queue/<batch>/results.jsonl`.
