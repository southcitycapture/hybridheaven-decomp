# Research results

Progress as of 2026-10-08: **7.13% of the code** (1868 of 15890 functions, including duplicates).

**4434 model runs, 2880 verified matches (65%), $58.72 API-equivalent in total (≈ $0.020 per match)**; plus 36 matches from decomp-permuter at no model cost.

| Batch | What | Model | Runs | Matched | Rate | API-equiv cost | Per match | Weekly usage |
|---|---|---|---|---|---|---|---|---|
| `batch1` | 300 easy/medium | haiku-5-5 | 300 | 222 | 74% | $2.92 | $0.013 | 67% → 68% |
| `batch2` | 1,000 easy/medium | haiku-5-5 | 1000 | 725 | 72% | $10.33 | $0.014 | 67% → 68% |
| `batch3` | 300 easy/medium | haiku-5-5 | 299 | 196 | 66% | $3.44 | $0.018 | 68% → 69% |
| `batch4` | 2,474 easy/medium (with context.h) | haiku-5-5 | 2474 | 1465 | 59% | $27.49 | $0.019 | 69% → 71% |
| `exp0_h` | Hard tier, ladder stage 1 | haiku-5-5 | 40 | 11 | 28% | $0.79 | $0.072 | 71% → 71% |
| `exp0_s` | Hard tier, ladder stage 3 (on Haiku's failures) | sonnet-5-5 | 29 | 11 | 38% | $11.37 | $1.034 | 71% → 72% |
| `fix1` | Repair pass: declaration conflicts | haiku-5-5 | 242 | 218 | 90% | $1.85 | $0.008 | 69% → 69% |
| `permute` | decomp-permuter on near-misses | decomp-permuter | 97 | 36 | 37% | $0.00 | – |  |
| `pilot` | Pilot: 50 small functions | haiku-5-5 | 50 | 32 | 64% | $0.52 | $0.016 | 67% → 67% |

Every match counted here passed the independent exact check (instructions and resolved addresses). `Weekly usage` is the Claude subscription's weekly meter at the start and end of each batch; batches overlapped, so readings are shared. Raw per-run data: `queue/<batch>/results.jsonl`.
