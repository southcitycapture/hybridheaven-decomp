"""Always-on decomp loop: pick -> Haiku batch -> integrate -> propagate/unify/protofix -> rebuild + ROM check -> commit,
with weekly-usage pacing and a publish every few hours. Started (and restarted) by cron through flock:

  */10 * * * * cd ~/work/hybrid-heaven-decomp && flock -n queue/loop/run.lock .venv/bin/python tools/swarm/loop.py >> queue/loop/loop.log 2>&1

Control (all in queue/loop/):
  config.json   budget (share of the week), batch size, publish interval, hard cap, HARNESS2 on/off
  PAUSE         if present, the loop sleeps (it also creates PAUSE itself, with the reason, if a ROM check fails)
  status.md     what it did last and where the budget stands
  state.json    its own bookkeeping (usage spent this week, last publish, cycle number)
  cycle.lock    held for the whole of a cycle: interactive sessions should wait for it before touching matched/ or src/

Budget: the loop may spend `budget` (default 0.5) of the weekly usage meter, unlocked evenly over the week: by a given
moment it may have spent budget x (elapsed share of the week). Spend is the meter's rise across each batch (others' use
during a batch is counted too, which only makes it more careful), at least 0.05 % per API-equivalent dollar. It never
starts a batch at or above `hard_cap` total.
"""
import datetime as dt, fcntl, glob, json, os, re, subprocess, sys, time
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
D = "queue/loop"; os.makedirs(D, exist_ok=True)
DEFAULTS = dict(budget=0.5, batch=60, parallel=10, publish_hours=6, hard_cap=95, harness2=False, diag=False,
                worker_flags="", big_batch=10, big_minutes=40, model="claude-haiku-5-5", five_cap=90,
                public_dir=os.path.expanduser("~/work/hybridheaven-decomp"), step_timeout_min=150)
WEEK = 7 * 86400

def log(*a): print(dt.datetime.utcnow().strftime("%Y-%m-%dT%H:%MZ"), *a, flush=True)
def load(p, d): return json.load(open(p)) if os.path.exists(p) else dict(d)
def save(p, x): json.dump(x, open(p + ".tmp", "w"), indent=1); os.replace(p + ".tmp", p)

def env():
    """The project's tool PATH (env.sh), so cron's bare environment works."""
    out = subprocess.run(["bash", "-c", ". ./env.sh >/dev/null 2>&1; env -0"], capture_output=True, text=True).stdout
    return dict(kv.split("=", 1) for kv in out.split("\0") if "=" in kv)
ENV = env()

def sh(cmd, timeout_min=None, **extra):
    import signal
    e = dict(ENV, **{k: str(v) for k, v in extra.items()})
    p = subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, env=e,
                         executable="/bin/bash", start_new_session=True)
    try:
        out, _ = p.communicate(timeout=timeout_min * 60 if timeout_min else None)
        return p.returncode, out
    except subprocess.TimeoutExpired:
        os.killpg(p.pid, signal.SIGTERM); time.sleep(10)
        try: os.killpg(p.pid, signal.SIGKILL)
        except ProcessLookupError: pass
        p.communicate()
        return 124, "timeout after %d min (process group killed)" % timeout_min

def usage():
    """(weekly %, reset time as epoch) from the usage meter, or (None, None)."""
    _, out = sh(os.path.expanduser("~/bin/usage-gate") + " --brief")
    w = re.search(r"weekly (\d+)%", out); r = re.search(r"resets (\S+?Z)", out)
    if not (w and r): return None, None
    return int(w.group(1)), dt.datetime.fromisoformat(r.group(1).replace("Z", "+00:00")).timestamp()

def five_hour():
    """The 5-hour window's meter %, or None. A Sonnet run at 20 workers fills it in about an hour (2026-10-19)."""
    _, out = sh(os.path.expanduser("~/bin/usage-gate") + " --brief")
    m = re.search(r"5-hour (\d+)%", out)
    return int(m.group(1)) if m else None

def unclaimed(B, limit=None):
    """Drop picks another lane already holds (an open queue's functions.txt: OpenCode free, ChatGPT Plus) or a strong
    model already tried (Sonnet, Opus, gpt-6.1-sol): the picker doesn't know about either."""
    held, tried = set(), set()
    for q in glob.glob("queue/*/functions.txt"):
        b = q.split("/")[1]
        if b != B and not os.path.exists("queue/%s/DONE" % b) and not os.path.exists("queue/%s/STOP" % b):
            held |= {l.split()[0] for l in open(q) if l.strip()}
    for p in glob.glob("queue/*/results.jsonl"):
        for l in open(p):
            try: r = json.loads(l)
            except ValueError: continue
            if r.get("verified") != "ERROR" and re.search(r"sonnet|opus|gpt-6\.1-sol", str(r.get("model", ""))): tried.add(r.get("func"))
    f = "queue/%s/functions.txt" % B; keep = [l for l in open(f) if l.split() and l.split()[0] not in held | tried][:limit]
    open(f, "w").writelines(keep); return len(keep)

def allowed(cfg, reset):
    """Share of the week (in meter %) the loop may have spent by now: all of it at once with pace=false (front-loaded),
    else unlocked evenly over the week."""
    if not cfg.get("pace", True): return 100 * cfg["budget"]
    elapsed = min(1.0, max(0.0, (time.time() - (reset - WEEK)) / WEEK))
    return 100 * cfg["budget"] * elapsed

def status(cfg, st, note):
    w, reset = usage()
    lines = ["# Decomp loop status", "", "Updated %s." % dt.datetime.utcnow().strftime("%Y-%m-%d %H:%M UTC"), "",
             "- %s" % note,
             "- cycles run: %d; last cycle: %s" % (st.get("cycle", 0), st.get("last_cycle", "none")),
             "- weekly meter: %s%%; loop spent this week: %.1f%% of the meter; allowed by now: %.1f%% (budget %.0f%% of the week)"
             % (w, st.get("spent", 0), allowed(cfg, reset) if reset else 0, 100 * cfg["budget"]),
             "- last publish: %s" % (dt.datetime.utcfromtimestamp(st["last_publish"]).strftime("%Y-%m-%d %H:%M UTC")
                                     if st.get("last_publish") else "never"),
             "- progress: %s" % st.get("progress", "?")]
    open(D + "/status.md", "w").write("\n".join(lines) + "\n")

def registry():
    import glob
    return set(glob.glob("matched/*/*.c"))

def rom_ok():
    """Rebuild src/ from the registry and check the ROM. A function that passed its in-file checks but breaks the
    whole-ROM link is moved out of the registry onto the link blocklist and the build retried (up to 3 times),
    instead of the whole cycle being reverted for it (cycle 28 lost 115 matches to one such function)."""
    for _ in range(4):
        code, out = sh(".venv/bin/python tools/hh/srcbuild.py all && make -j8 2>&1 | grep -B1 -A3 -E 'non-instruction-aligned|z64: OK|Error' | tail -12", 60)
        if "hybridheaven.z64: OK" in out: return True, out[-1500:]
        # "build/src/<seg>/<file>.o: in function `<name>':" then the error line; overlays share addresses, so the same
        # name lives in several segments and only the one named in the error is taken out
        bad = set(re.findall(r"build/src/(\w+)/\w+\.o: in function `(func_[0-9A-F]{8})'[^\n]*\n[^\n]*non-instruction-aligned", out))
        moved = 0
        for seg, name in bad:
            p = "matched/%s/%s.c" % (seg, name)
            if not os.path.exists(p): continue
            os.makedirs("matched_rejected/" + seg, exist_ok=True)
            os.replace(p, "matched_rejected/%s/%s.c" % (seg, name)); moved += 1
            open("queue/link_blocklist.txt", "a").write("%s %s\n" % (seg, name))
            log("  link repair: %s/%s breaks the whole-ROM link; moved out and blocklisted" % (seg, name))
        if not moved: return False, out[-1500:]
    return False, out[-1500:]

def dirty():
    """Uncommitted paths under matched/ and src/ (modified or new)."""
    _, out = sh("git status --porcelain --untracked-files=all -- matched src")
    return {l[3:].strip() for l in out.splitlines() if l.strip()}

def revert(reason, before=frozenset()):
    """Throw away the registry/src changes this cycle made (paths that were already dirty before it are left alone)
    and pause. The cycle's agent matches stay in its results.jsonl and are offered to integration again later."""
    for path in sorted(dirty() - set(before)):
        _, tracked = sh("git ls-files --error-unmatch -- '%s' >/dev/null 2>&1 && echo yes" % path)
        sh(("git checkout -- '%s'" if tracked.strip() == "yes" else "rm -f -- '%s'") % path)
    open(D + "/PAUSE", "w").write("Paused by the loop: %s\n" % reason)
    log("REVERTED and PAUSED:", reason)

def progress():
    _, out = sh(".venv/bin/python tools/hh/progress.py 2>&1 | tail -1 && python3 tools/hh/dashboard_data.py >/dev/null 2>&1", 40)
    m = re.search(r"\(([\d.]+)%\), functions (\d+) / (\d+)", out)
    return "%s%% of code, %s / %s functions" % m.groups() if m else "unknown"

def publish(cfg, st):
    pub = cfg["public_dir"]
    code, out = sh("tools/publish.sh %s" % pub, 30)
    if code: log("publish: publish.sh refused:", out[-400:]); return False
    code, out = sh('cd %s && git add -A && (git diff --cached --quiet || git commit -qm "Update: %s (always-on loop)\n\n'
                   'Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>") && git push -q -u origin main' % (pub, st.get("progress", "")), 10)
    log("publish:", "ok" if code == 0 else "failed: " + out[-400:]); return code == 0

def cycle(cfg, st):
    n = st.get("cycle", 0) + 1; B = "loop%04d" % n
    before = dirty(); reg0 = registry()
    w0, _ = usage()
    # pick from a wider pool: most top picks are held by another lane or already tried by a strong model (unclaimed)
    code, out = sh(".venv/bin/python tools/hh/pick.py %s -n %d --kind all --allow-switch" % (B, 6 * cfg["batch"]), 20)
    if code: log("pick failed:", out[-400:]); return False
    log("cycle", n, "picked:", out.strip().splitlines()[2][:150] if len(out.strip().splitlines()) > 2 else "")
    log("cycle", n, "kept %d picks not held by another lane or tried by a strong model" % unclaimed(B, cfg["batch"]))
    extra = dict(NO_INTEGRATE=1, INFILE=1, MODEL=cfg["model"], RUN_ONE="run_one3.sh", FIVE_CAP=cfg["five_cap"])
    if cfg["harness2"]: extra["HARNESS2"] = 1
    if cfg["diag"]: extra["DIAG"] = 1                      # diagnosis-grade ./check (exp13)
    if cfg["worker_flags"]: extra["WORKER_FLAGS"] = cfg["worker_flags"]   # lean CLI worker (exp13: -31% cost)
    sh("tools/swarm/run_batch3.sh %s %d %d" % (B, cfg["parallel"], cfg["hard_cap"]), cfg["step_timeout_min"], **extra)
    if cfg.get("big_batch"):                 # big-function tier: Opus with a time budget (bigpilot1: 10/20 at difficulty 500-700)
        sh("tools/swarm/bigpilot.sh %sb %d %d 5 %d" % (B, cfg["big_batch"], cfg["big_minutes"], cfg["hard_cap"]),
           cfg["step_timeout_min"])
    w1, _ = usage()
    def batch_cost(b):
        p = "queue/%s/results.jsonl" % b
        return sum(float(json.loads(l).get("cost_usd_equiv") or 0) for l in open(p)) if os.path.exists(p) else 0
    cost = batch_cost(B) + batch_cost(B + "b")
    # the meter's rise is the measure; the floor covers its integer rounding (bigpilot1: $43 of Opus = 2% of the meter)
    spent = max((w1 or 0) - (w0 or 0), 0.05 * cost)
    st["spent"] = st.get("spent", 0) + spent
    wins = sum(1 for b in (B, B + "b") if os.path.exists("queue/%s/results.jsonl" % b)
               for l in open("queue/%s/results.jsonl" % b) if '"MATCH"' in l or '"ALONE"' in l)
    log("batch %s: %d matches, $%.2f, meter %s%% -> %s%%" % (B, wins, cost, w0, w1))
    # model-free steps; each writes matched/ only after its own verification
    recent = " ".join("loop%04d%s" % (k, x) for k in range(max(1, n - 3), n + 1) for x in ("", "b")
                      if os.path.exists("queue/loop%04d%s/results.jsonl" % (k, x)))
    _, o1 = sh(".venv/bin/python tools/swarm/integrate.py %s permute" % recent, 120)   # one 1600-function file can take 30 min
    _, o2 = sh(".venv/bin/python tools/hh/propagate.py prop_%s --apply" % B, cfg["step_timeout_min"])
    _, o3 = sh(".venv/bin/python tools/hh/unify.py unify_%s --apply" % B, 90)
    _, o4 = sh(".venv/bin/python tools/hh/protofix.py --apply", 30)
    for name, o in (("integrate", o1), ("propagate", o2), ("unify", o3), ("protofix", o4)):
        log("  %s: %s" % (name, " | ".join(o.strip().splitlines()[-2:])[:200]))
    ok, out = rom_ok()
    if not ok: revert("ROM check failed after cycle %d:\n%s" % (n, out), before); return False
    reg1 = registry(); lost = reg0 - reg1
    if lost:                   # srcbuild all moves regressed functions out of the registry; the ROM still matches then
        revert("cycle %d would lose %d registered functions (e.g. %s)" % (n, len(lost), ", ".join(sorted(lost)[:5])), before)
        return False
    st.setdefault("history", []).append(dict(cycle=n, batch=B, agent=wins, cost=round(cost, 3), registry=[len(reg0), len(reg1)],
                                             meter=[w0, w1]))
    st["progress"] = progress()
    sh("git add -A matched src queue dashboard/history.jsonl && git commit -qm 'Loop cycle %d: %d agent matches; %s\n\n"
       "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>'" % (n, wins, st["progress"]))
    st["cycle"] = n; st["last_cycle"] = "%s: %d agent matches, $%.2f, %s" % (B, wins, cost, st["progress"])
    log("cycle", n, "committed;", st["progress"])
    return True

def main():
    cfg = dict(DEFAULTS, **load(D + "/config.json", {})); save(D + "/config.json", cfg)
    st = load(D + "/state.json", {})
    while True:
        cfg = dict(DEFAULTS, **load(D + "/config.json", {}))
        st = load(D + "/state.json", st)     # re-read: a hand repair while paused must not be overwritten from memory
        if os.path.exists(D + "/PAUSE"):
            status(cfg, st, "paused: " + open(D + "/PAUSE").read().strip()[:300]); time.sleep(600); continue
        w, reset = usage()
        if w is None: status(cfg, st, "usage meter unreadable; waiting"); time.sleep(900); continue
        if abs(reset - st.get("week_reset", 0)) > 86400:       # a new week (the meter's reset time jitters by a minute)
            st["week_reset"] = reset; st["spent"] = 0; save(D + "/state.json", st)
        if cfg["publish_hours"] and time.time() - st.get("last_publish", 0) >= 3600 * cfg["publish_hours"] and st.get("cycle"):
            if publish(cfg, st): st["last_publish"] = time.time(); save(D + "/state.json", st)
        if w >= cfg["hard_cap"]:
            status(cfg, st, "waiting: weekly meter %d%% is at or above the hard cap %d%%" % (w, cfg["hard_cap"]))
            time.sleep(1800); continue
        free_gb = __import__("shutil").disk_usage(HH if "HH" in globals() else ".").free / 1e9
        if free_gb < cfg.get("min_free_gb", 1.5):     # a full disk breaks builds mid-cycle (2026-10-18: opencode temp files)
            status(cfg, st, "waiting: only %.1f GB free on the container disk (min %.1f GB)" % (free_gb, cfg.get("min_free_gb", 1.5)))
            time.sleep(600); continue
        f5 = five_hour()
        if f5 is not None and f5 >= cfg["five_cap"]:
            status(cfg, st, "waiting: 5-hour window at %d%% (cap %d%%)" % (f5, cfg["five_cap"]))
            time.sleep(600); continue
        if st.get("spent", 0) >= allowed(cfg, reset):
            status(cfg, st, "waiting for budget: spent %.1f%%, allowed %.1f%% so far" % (st.get("spent", 0), allowed(cfg, reset)))
            time.sleep(1800); continue
        if not subprocess.run(["pgrep", "-f", "tools/swarm/permute.py"], capture_output=True).stdout:
            # no permute pass running: any permuter left is an orphan of a crashed pass; kill it (186 piled up once)
            subprocess.run("pkill -9 -f 'decomp-permuter/permuter.py'", shell=True)
            subprocess.Popen("nice -n 15 .venv/bin/python tools/swarm/permute.py --min-aligned 0.95 --minutes 5 --parallel 3 "
                             ">> queue/permute/loop_permute.out 2>&1", shell=True, env=ENV, start_new_session=True)
        with open(D + "/cycle.lock", "w") as lk:
            fcntl.flock(lk, fcntl.LOCK_EX)
            status(cfg, st, "running cycle %d" % (st.get("cycle", 0) + 1))
            ok = cycle(cfg, st)
            save(D + "/state.json", st)
        status(cfg, st, ("idle after cycle %d" if ok else "cycle %d+1 failed (see loop.log); retrying in 30 min") % st.get("cycle", 0))
        if not ok: time.sleep(1800)

if __name__ == "__main__":
    main()
