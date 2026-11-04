# Task 32 verification artifacts

See `SOL_REPORT.md`, Task 32, for the per-function results and unresolved cases.

- `audit.json`: before/after progress measures, thirteen gained identities,
  zero lost identities, all 21 inventory outcomes and libultra mappings.
- `walls-before.jsonl`, `walls-after.jsonl`: compact fresh inventories of all
  677 baseline and 664 final leftovers, including selected saved source paths.
- `address-outcomes.json`: all 24 initial addrfix outcomes, with landing status.
- `address-remaining.json`: all eleven final eligible candidates and refusals.
- `all-check.json`: successful `srcbuild.py all`, zero changed source/registry hashes.
- `build.log`: final ROM SHA-1 check after a forced full rebuild.
- `tests.log`: complete unittest discovery result (248 tests, one skip).

Normal integration was exercised with small copied batches whose attempts came
from `sol_ref/task32/INVENTORY.tsv` and the wall-selected saved attempts. The
copies were removed after verification; landed standalone C is in `matched/`.
