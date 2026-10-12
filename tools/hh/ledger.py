"""One source of truth for the project's numbers (README, pick.py, briefings).

  attempts()     every model attempt: (seg, func, model, ok, cost). Local results.jsonl plus cloud_results.jsonl
                 (cloud batches' results.jsonl hold only their wins and no cost, so those are skipped).
  attribution()  each function in the registry -> who first placed it: "agent", "propagate", "permuter",
                 "repair" (reconcile/unify of an agent-less attempt) or "other" (libultra built from source, early hand work)
  summary()      the headline numbers as a dict

  ledger.py      prints the summary
"""
import glob, json, os, collections
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))

def _jsonl(p):
    for l in open(p):
        try: yield json.loads(l)
        except ValueError: pass

def attempts():
    out = []
    for res in glob.glob(os.path.join(HH, "queue/*/results.jsonl")):
        rs = list(_jsonl(res))
        if len(rs) >= 10 and not any(r.get("verified") == "FAIL" for r in rs): continue   # wins-only cloud logs
        for r in rs:
            m = r.get("model", "")
            if "no model" in m or "permuter" in m or "recovered" in m or r.get("verified") == "ERROR": continue
            out.append((r.get("segment"), r.get("func"), m, r.get("verified") in ("MATCH", "ALONE"),
                        float(r.get("cost_usd_equiv") or 0) or None))
    for res in glob.glob(os.path.join(HH, "queue/*/cloud_results.jsonl")):
        for r in _jsonl(res):
            m = "claude-sonnet (cloud)" if str(r.get("stage", "")).startswith("s") else "claude-haiku (cloud)"
            out.append((r.get("segment"), r.get("func"), m, r.get("verified") in ("MATCH", "ALONE"),
                        float(r.get("cost_usd") or 0) or None))
    return out

def registry():
    return {tuple(p[len(HH) + 1:-2].split("/")[1:]) for p in glob.glob(os.path.join(HH, "matched/*/*.c"))}

def attribution():
    reg = registry(); src = {}
    files = glob.glob(os.path.join(HH, "queue/*/results.jsonl")) + glob.glob(os.path.join(HH, "queue/*/cloud_results.jsonl")) \
        + glob.glob(os.path.join(HH, "queue/*/propagate.jsonl"))
    for f in sorted(files, key=os.path.getmtime):
        for r in _jsonl(f):
            k = (r.get("segment"), r.get("func"))
            if k not in reg or k in src: continue
            if f.endswith("propagate.jsonl"):
                if r.get("alone") and r.get("infile") is not False: src[k] = "propagate"
                continue
            if r.get("verified") not in ("MATCH", "ALONE"): continue
            m = r.get("model", "") or ("cloud" if f.endswith("cloud_results.jsonl") else "")
            src[k] = "permuter" if "permuter" in m else "repair" if ("no model" in m or "recovered" in m) else "agent"
    return {k: src.get(k, "other") for k in reg}

def summary():
    a = attempts(); att = attribution(); c = collections.Counter(att.values())
    return dict(model_runs=len(a), model_wins=sum(1 for x in a if x[3]), cost=sum(x[4] or 0 for x in a),
                functions=len(att), by=dict(c),
                agent_functions=c["agent"], cost_per_agent_function=sum(x[4] or 0 for x in a) / max(1, c["agent"]))

if __name__ == "__main__":
    s = summary()
    print("%d model runs (%d successful), $%.2f API-equivalent; %d functions in the registry: %s; $%.3f per agent-matched function"
          % (s["model_runs"], s["model_wins"], s["cost"], s["functions"], s["by"], s["cost_per_agent_function"]))
