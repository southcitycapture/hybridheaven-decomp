# Cloud kit 4: Haiku first pass + retry, then Sonnet to a budget (cloud credits)

413 untried hard functions (no jump tables / floats), then Haiku retries on the misses, then Sonnet on the exp-set
leftovers plus h2's misses, easiest first, until $100 of worker spend. Script harness (Sonnet lead, headless
`claude -p` workers, results as checksummed chunks read from the command output). 4 h 36 min; lead cost $0.48.

| Stage | Runs | Matched (in file) | Cost | $ per match |
|---|---|---|---|---|
| Haiku, fresh | 413 | 32 (8 %) | $11.56 | $0.36 |
| Haiku retry (from h1) | 381 | 17 (4 %) | $20.37 | $1.20 |
| Sonnet (exp set + h2 misses, easiest first, to budget) | 206 | 34 (17 %) | $70.96 | $2.09 |

42 more attempts matched alone but not in their file. 77 functions landed after local re-verification (ROM matches).
Overall about $1.34 per landed function, 99.5 % of it worker spend. Hard-tier rates are in line with exp1/exp2
(Haiku ~8 %, a second Haiku leg ~4 %, Sonnet ~17 %).
