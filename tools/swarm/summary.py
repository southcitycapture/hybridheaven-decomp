"""Summarize queue/pilot/results.jsonl for the research report."""
import json, statistics as st, os
R = [json.loads(l) for l in open(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../../queue/%s/results.jsonl" % os.environ.get("BATCH", "pilot")))]
errs = [r for r in R if r["verified"] == "ERROR"]
R = [r for r in R if r["verified"] != "ERROR"]          # API errors are retried, not outcomes
m = [r for r in R if r["verified"] == "MATCH"]
lie = [r for r in R if r["verified"] != "MATCH" and "MATCH" in (r.get("claimed") or "") and "FAIL" not in r["claimed"]]
cost = sum(r.get("cost_usd_equiv") or 0 for r in R)
print("functions run: %d, matched: %d (%.0f%%)" % (len(R), len(m), 100 * len(m) / max(1, len(R))))
print("API-equivalent cost: $%.3f total, $%.4f per attempt, $%.4f per match" % (cost, cost / max(1, len(R)), cost / max(1, len(m))))
print("median seconds %s, median checks %s, false MATCH claims %d" % (st.median(r["seconds"] for r in R), st.median(r["checks"] for r in R), len(lie)))
print("tokens: output %d, cache read %d, cache write %d" % (sum(r.get("output_tokens") or 0 for r in R), sum(r.get("cache_read") or 0 for r in R), sum(r.get("cache_write") or 0 for r in R)))
if errs: print("API errors (retried, excluded above): %d" % len(errs))
