# Research results

Progress as of 2026-10-09: **11.26% of the code** (2836 of 15890 functions, including duplicates).

**7389 model runs, 4323 verified matches (59%), $105.25 API-equivalent in total (≈ $0.024 per match)**; plus 138 matches from decomp-permuter at no model cost.

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
| `permute` | decomp-permuter on near-misses | decomp-permuter | 392 | 44 | 11% | $0.00 | – |  |

Every match counted here passed the independent exact check (instructions and resolved addresses). `Weekly usage` is the Claude subscription's weekly meter at the start and end of each batch; batches overlapped, so readings are shared. Raw per-run data: `queue/<batch>/results.jsonl`.
