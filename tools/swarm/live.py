"""Live worker view: a small read-only web page (stdlib only) showing what every lane is doing right now.

    .venv/bin/python tools/swarm/live.py [PORT]      (default 8090, all interfaces: the office LAN)

Each request reads the machine as it is: the running workers (Claude `claude -p`, opencode for the free and
ChatGPT lanes) and the function each is on, the batches touched in the last day, the Claude meters, the free-tier
cooldowns and the latest verified matches. Nothing is written; nothing here costs model usage.
"""
import glob, json, os, re, subprocess, sys, time
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer

HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
HOME = os.path.expanduser("~")
_cache = {}


def cached(key, ttl, fn):
    t, v = _cache.get(key, (0, None))
    if time.time() - t > ttl:
        try: v = fn()
        except Exception as e: v = {"error": str(e)}
        _cache[key] = (time.time(), v)
    return v


def meters():
    out = subprocess.run([HOME + "/bin/usage-gate", "--brief"], capture_output=True, text=True, timeout=30).stdout
    w = re.search(r"weekly (\d+)%", out); f = re.search(r"5-hour (\d+)%", out); r = re.search(r"resets (\S+?Z)", out)
    return {"weekly": int(w.group(1)) if w else None, "five": int(f.group(1)) if f else None,
            "reset": r.group(1) if r else None}


def progress():
    out = subprocess.run(["bash", "-c", ". ./env.sh >/dev/null 2>&1; .venv/bin/python tools/hh/progress.py 2>&1 | tail -1"],
                         capture_output=True, text=True, timeout=120).stdout  # needs the toolchain on PATH (env.sh)
    m = re.search(r"\(([\d.]+)%\), functions (\d+) / (\d+)", out)
    return {"pct": float(m.group(1)), "done": int(m.group(2)), "total": int(m.group(3))} if m else {}


def lane_of(model):
    m = model or ""
    if "sonnet" in m: return "Sonnet"
    if "opus" in m: return "Opus"
    if "haiku" in m: return "Haiku"
    if "gpt-6.1-sol" in m: return "GPT-6.1 Sol"
    if m.startswith("openai/"): return m.split("/", 1)[1]
    if "deepseek" in m: return "DeepSeek (free)"
    return m or "?"


def workers():
    rows = []
    for pid in os.listdir("/proc"):
        if not pid.isdigit(): continue
        try:
            argv = open("/proc/%s/cmdline" % pid, "rb").read().split(b"\0")
            cwd = os.readlink("/proc/%s/cwd" % pid)
        except OSError:
            continue
        a = [x.decode(errors="replace") for x in argv if x]
        if not a: continue
        exe = os.path.basename(a[0])
        if exe == "claude" and "-p" in a and "--model" in a:
            model = a[a.index("--model") + 1]
        elif exe == "opencode" and len(a) > 1 and a[1] == "run" and "-m" in a and "--dir" in a:
            model = a[a.index("-m") + 1]
        else:
            continue
        m = re.search(r"/queue/([^/]+)/work/([^/@]+)(?:@([^/]+))?", cwd) or re.search(r"/\.oc/w/([^/]+)/(func_[0-9A-F]+)_(\S+)", cwd)
        if not m: continue
        try:
            start = os.stat("/proc/%s" % pid).st_mtime
        except OSError:
            start = time.time()
        best = None
        for res in sorted(glob.glob(cwd + "/.attempts/*.res"), key=os.path.getmtime)[-1:]:
            s = open(res, errors="replace").read()
            sc = re.search(r"score (\d+)/(\d+)", s)
            best = "MATCH" if s.startswith("MATCH") else ("%s/%s" % sc.groups() if sc else None)
        checks = 0
        try: checks = int(open(cwd + "/.checks").read().strip() or 0)
        except (OSError, ValueError): pass
        rows.append({"batch": m.group(1), "func": m.group(2), "seg": m.group(3) or "", "model": model,
                     "lane": lane_of(model), "secs": int(time.time() - start), "checks": checks, "last": best})
    return sorted(rows, key=lambda r: (r["lane"], -r["secs"]))


def batches():
    rows, recent = [], []  # recent is unused by status(); recent_matches() orders by batch age instead
    for p in glob.glob("queue/*/results.jsonl"):
        b = p.split("/")[1]
        if time.time() - os.path.getmtime(p) > 86400: continue
        n = sum(1 for l in open("queue/%s/functions.txt" % b) if l.strip()) if os.path.exists("queue/%s/functions.txt" % b) else 0
        c = {"MATCH": 0, "FAIL": 0, "ERROR": 0}; model = ""
        for l in open(p):
            try: r = json.loads(l)
            except ValueError: continue
            v = r.get("verified"); c[v] = c.get(v, 0) + 1; model = r.get("model", model)
            if v == "MATCH": recent.append({"func": r.get("func"), "seg": r.get("segment"), "lane": lane_of(r.get("model")),
                                            "batch": b, "t": os.path.getmtime(p)})
        tried = c["MATCH"] + c["FAIL"]
        state = "done" if os.path.exists("queue/%s/DONE" % b) else "stopped" if os.path.exists("queue/%s/STOP" % b) else "running"
        rows.append({"batch": b, "lane": lane_of(model), "total": n, "match": c["MATCH"], "fail": c["FAIL"],
                     "error": c["ERROR"], "rate": round(100 * c["MATCH"] / tried) if tried else None, "state": state,
                     "updated": int(time.time() - os.path.getmtime(p))})
    rows.sort(key=lambda r: r["updated"])
    return rows, recent


def cooldowns():
    out = []
    for f in glob.glob(HOME + "/.oc/COOLDOWN*"):
        parts = open(f).read().split()
        out.append({"model": lane_of(parts[1]) if len(parts) > 1 else "OpenCode free tier", "since": parts[0] if parts else ""})
    return out


def status():
    b, recent = batches()
    lp = HH + "/queue/loop/status.md"
    return {"now": time.strftime("%Y-%m-%d %H:%M:%S UTC", time.gmtime()), "workers": workers(), "batches": b,
            "recent": [],  # recent_matches(), added by the handler
            "meters": cached("meters", 60, meters), "progress": cached("progress", 300, progress),
            "cooldowns": cooldowns(), "paused": os.path.exists(HH + "/queue/loop/PAUSE"),
            "loop": open(lp).read().strip().splitlines()[:6] if os.path.exists(lp) else []}


def recent_matches(n=24):
    """The newest verified matches: results.jsonl lines don't carry a time, so walk the newest batches backwards."""
    out = []
    for p in sorted(glob.glob("queue/*/results.jsonl"), key=os.path.getmtime, reverse=True)[:12]:
        b = p.split("/")[1]
        for l in reversed(open(p).read().splitlines()):
            try: r = json.loads(l)
            except ValueError: continue
            if r.get("verified") == "MATCH":
                out.append({"func": r.get("func"), "seg": r.get("segment"), "lane": lane_of(r.get("model")), "batch": b,
                            "secs": r.get("seconds")})
                if len(out) >= n: return out
    return out


class H(BaseHTTPRequestHandler):
    def log_message(self, *a): pass

    def do_GET(self):
        if self.path.startswith("/api/status"):
            s = status(); s["recent"] = recent_matches()
            body, ctype = json.dumps(s).encode(), "application/json"
        elif self.path in ("/", "/index.html"):
            body, ctype = open(os.path.join(os.path.dirname(__file__), "live.html"), "rb").read(), "text/html; charset=utf-8"
        else:
            self.send_error(404); return
        self.send_response(200); self.send_header("Content-Type", ctype); self.send_header("Cache-Control", "no-store")
        self.send_header("Content-Length", str(len(body))); self.end_headers(); self.wfile.write(body)


if __name__ == "__main__":
    port = int(sys.argv[1]) if len(sys.argv) > 1 else 8090
    ThreadingHTTPServer(("0.0.0.0", port), H).serve_forever()
