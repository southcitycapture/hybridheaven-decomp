"""Collect everything the dashboard shows into dashboard/data.json (and append a point to
dashboard/history.jsonl). Run after tools/hh/progress.py."""
import csv, json, os, time, glob, collections, re
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
rep = json.load(open("build/progress/report.json"))
q = {(r["segment"], r["func"]): r for r in csv.DictReader(open("queue/functions.csv"))}
yaml_vram = {}
for f in json.load(open("build/expanded.json"))["files"]:
    yaml_vram["file%03d" % f["id"]] = f["vram"]
units = []; matched_names = set(); bysegment = {}
for u in rep["units"]:
    funcs = []
    for f in u.get("functions", []):
        ok = f.get("fuzzy_match_percent") == 100
        seg0 = u["name"].split("/")[0]
        meta = q.get((seg0, f["name"]), {})
        if ok: matched_names.add((seg0, f["name"]))
        funcs.append([f["name"], int(f.get("size", 0)), 1 if ok else 0, int(meta.get("difficulty", 0) or 0),
                      1 if meta.get("dup_of") else 0])
    m = u.get("measures", {})
    seg = u["name"].split("/")[0]
    g = bysegment.setdefault(seg, {"name": seg, "vram": "%08X" % yaml_vram.get(seg, 0x80000460),
                                   "code": 0, "matched": 0, "functions": [], "files": []})
    g["code"] += int(m.get("total_code", 0)); g["matched"] += int(m.get("matched_code", 0))
    g["functions"] += funcs
    g["files"].append({"name": u["name"].split("/")[1], "code": int(m.get("total_code", 0)),
                       "matched": int(m.get("matched_code", 0)), "n": len(funcs), "nm": sum(f[2] for f in funcs)})
units = list(bysegment.values())
uniq_total = sum(1 for r in q.values() if not r["dup_of"])
TIERS = [("Easy", 0, 30), ("Medium", 30, 100), ("Hard", 100, 300), ("Very hard", 300, 10 ** 9)]
tiers = []
for name, lo, hi in TIERS:
    rs = [(k, r) for k, r in q.items() if not r["dup_of"] and lo <= int(r["difficulty"]) < hi]
    done = [(k, r) for k, r in rs if k in matched_names]
    tiers.append({"name": name, "range": "%d–%s" % (lo, hi - 1 if hi < 10 ** 9 else "+"), "total": len(rs), "matched": len(done),
                  "bytes": sum(int(r["size"]) for _, r in rs), "matched_bytes": sum(int(r["size"]) for _, r in done)})
uniq_matched = sum(1 for k, r in q.items() if not r["dup_of"] and k in matched_names)
runs = []
for p in glob.glob("queue/*/results.jsonl"):
    for l in open(p):
        r = json.loads(l); r["batch"] = p.split("/")[1]
        if r.get("verified") != "ERROR": runs.append(r)
# which model each live worker uses, read from the running processes (claude -p ... --model X; prompt names the function)
live_model = {}; perm_live = []
for c in glob.glob("/proc/[0-9]*/cmdline"):
    try: a = open(c, "rb").read().split(b"\0")
    except OSError: continue
    a = [x.decode("utf-8", "replace") for x in a]
    if a and a[0].endswith("claude") and "-p" in a and "--model" in a:
        mdl = a[a.index("--model") + 1]
        m = re.search(r"\bfor `(func_[0-9A-F]{8})`|(func_[0-9A-F]{8})", a[a.index("-p") + 1])
        if m: live_model[m.group(1) or m.group(2)] = mdl
    elif any(x.endswith("permuter.py") for x in a) and len(a) > 2 and "/queue/permute/work/" in a[2] and "--debug" not in a:
        perm_live.append(os.path.basename(a[2].rstrip("/")))
running = []
for w in glob.glob("queue/*/work/*/prompt.md"):
    d = os.path.dirname(w)
    if os.path.exists(os.path.join(d, "exit.txt")): continue
    age = time.time() - os.path.getmtime(w)
    if age > 1800: continue                      # stale directory, not a live worker
    last = open(os.path.join(d, ".lastcheck")).readline().strip() if os.path.exists(os.path.join(d, ".lastcheck")) else ""
    running.append({"func": os.path.basename(d), "batch": d.split("/")[1], "seconds": int(age),
                    "model": live_model.get(os.path.basename(d), "?"),
                    "checks": int(open(os.path.join(d, ".checks")).read()) if os.path.exists(os.path.join(d, ".checks")) else 0,
                    "last": last})
for f in sorted(set(perm_live)):
    d = "queue/permute/work/" + f
    age = time.time() - os.path.getmtime(d + "/settings.toml") if os.path.exists(d + "/settings.toml") else 0
    running.append({"func": f, "batch": "permute", "seconds": int(age), "model": "decomp-permuter", "checks": -1,
                    "last": "random C variants, compiled and scored on idle CPU (up to 15 min)"})
m = rep["measures"]
data = {"generated": time.strftime("%Y-%m-%d %H:%M UTC", time.gmtime()),
        "total_code": int(m["total_code"]), "matched_code": int(m.get("matched_code", 0)),
        "total_functions": int(m["total_functions"]), "matched_functions": int(m.get("matched_functions", 0)),
        "unique_total": uniq_total, "unique_matched": uniq_matched, "units": units, "running": running, "tiers": tiers,
        "generated_ts": int(time.time()),
        "runs": [{k: r.get(k) for k in ("batch", "func", "segment", "model", "verified", "checks", "seconds",
                                         "cost_usd_equiv", "output_tokens")} for r in runs]}
json.dump(data, open("dashboard/data.json", "w"), separators=(",", ":"))
hist = "dashboard/history.jsonl"
point = {"t": int(time.time()), "matched_code": data["matched_code"], "matched_functions": data["matched_functions"],
         "unique_matched": uniq_matched}
last = None
if os.path.exists(hist):
    lines = open(hist).read().strip().splitlines(); last = json.loads(lines[-1]) if lines else None
if not last or last["matched_functions"] != point["matched_functions"] or last["matched_code"] != point["matched_code"]:
    open(hist, "a").write(json.dumps(point) + "\n")
print("dashboard data: %d/%d functions, %d/%d unique, %.3f%% code" % (data["matched_functions"], data["total_functions"],
      uniq_matched, uniq_total, 100 * data["matched_code"] / data["total_code"]))
