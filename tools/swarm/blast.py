#!/usr/bin/env python3
"""blast.py: the reset-blast controller (2026-11-26). One config-driven supervisor for the multi-model push of
Fri 2026-11-27 .. Tue 12-01, replacing the hand-written per-lane guards (queue/loop/claude_guard*.sh,
queue/*/guard.sh, queue/loop/stray_lander.sh).

    blast.py run       supervisor loop (every cycle_s): meters -> decisions (blast_policy.py) -> actions
    blast.py ensure    start the supervisor unless it is running (cron every 10 min and @reboot; single instance)
    blast.py once      one cycle now (under the same lock)
    blast.py summary   compact status for chat;   STATUS.md in the state dir is rewritten every cycle
    blast.py check     validate the config and the lane lists, report overlaps and start-attempt resolution
    blast.py prepare   resolve start attempts now (extract archived work dirs) so lane starts are quick
    blast.py land [--dry-run]   the stray lander once (the supervisor runs it hourly in the background)
    blast.py simulate SCENARIO.json   scripted (or modelled) time + meters through the same decision code; no processes
    blast.py cron      print the cron lines to install (not installed by this tool)
Options: --config FILE (default queue/blast/blast.json next to this tool's repo).

Files (state dir, default <repo>/queue/blast): blast.json (config), state.json (epochs, latches, lander), STATUS.md,
events.log (every external action), OFF (kill switch: `touch` it and every lane is stopped, in-flight runs killed,
within one cycle; remove it to resume), blast.lock / land.lock (single instance), supervisor.out.

Lanes run in the live repo (`repo`, default $HH_ROOT or ~/work/hybrid-heaven-decomp) exactly as hand lanes do:
lane_run.sh BATCH INNER=... with queue/BATCH/{functions.txt,pins.txt,SKIP,PAUSE,STOP}. Lane names start with
`prefix` ("blast"), so chatgpt_pacer.sh (which paces lanes named terra*) never touches them and the controller
never touches anything else. A lane's processes are recognised exactly: the lane_run.sh root by its argv
(/bin/bash .../lane_run.sh BATCH), the rest by BATCH=<name> in their environment or descent from that root.
Kills go to those exact PIDs (start time re-checked before every signal); never pgrep -f / pkill.
"""
import argparse, fcntl, glob, hashlib, json, os, re, shutil, signal, subprocess, sys, tarfile, tempfile, time
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import blast_policy as P


def _project_env():
    """11-27: the lander's honest_swap/integrate need the project toolchain (mips binutils, IDO, venv) on PATH; a
    supervisor started from a plain shell (cron, ensure) lacked it and every repair swap failed. Mirror env.sh here
    so children inherit it whatever started us."""
    hh = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
    home = os.path.expanduser("~")
    os.environ.setdefault("HH", hh)
    pre = [os.path.join(hh, "tools/bin"), os.path.join(home, ".local/opt/decomp/usr/bin"), os.path.join(hh, ".venv/bin")]
    cur = os.environ.get("PATH", "").split(":")
    os.environ["PATH"] = ":".join([d for d in pre if d not in cur] + cur)
    lib = os.path.join(home, ".local/opt/decomp/usr/lib/x86_64-linux-gnu")
    if lib not in os.environ.get("LD_LIBRARY_PATH", "").split(":"):
        os.environ["LD_LIBRARY_PATH"] = lib + ((":" + os.environ["LD_LIBRARY_PATH"]) if os.environ.get("LD_LIBRARY_PATH") else "")
    os.environ.setdefault("IDO53", os.path.join(hh, "tools/ido/5.3")); os.environ.setdefault("IDO71", os.path.join(hh, "tools/ido/7.1"))


_project_env()

TOOL_REPO = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
HOME = os.path.expanduser("~")
WRAPPERS = ("run_one_from.sh", "run_one3.sh", "run_one_oc.sh")
MODEL_BINS = ("claude", "opencode", "codex")


# ================================================================ context, logging, state

class Ctx:
    """Paths and config for one invocation."""
    def __init__(self, config_path):
        self.config_path = os.path.abspath(config_path)
        raw = json.loads(slurp(self.config_path))
        self.cfg = P.normalize(raw)
        self.repo = os.path.abspath(os.path.expanduser(raw.get("repo") or os.environ.get("HH_ROOT")
                                                       or os.path.join(HOME, "work/hybrid-heaven-decomp")))
        sd = raw.get("state_dir") or "queue/blast"
        self.dir = sd if os.path.isabs(sd) else os.path.join(self.repo, sd)
        os.makedirs(self.dir, exist_ok=True)
        self.venv_py = os.path.join(self.repo, ".venv/bin/python")

    def p(self, *a): return os.path.join(self.dir, *a)
    def q(self, batch, *a): return os.path.join(self.repo, "queue", batch, *a)
    def lane(self, name): return next(l for l in self.cfg["lanes"] if l["name"] == name)


def slurp(path, mode="r"):
    with open(path, mode) as f: return f.read()


def now_iso(t=None): return time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime(t or time.time()))


def log(ctx, msg):
    """Every external action and decision change goes here (events.log in the state dir). A failed write (disk
    full) is reported on stderr and otherwise ignored: logging must never stop the supervisor."""
    line = "%s %s" % (now_iso(), msg)
    try:
        with open(ctx.p("events.log"), "a") as f: f.write(line + "\n")
    except OSError as e:
        try: sys.stderr.write("events.log write failed (%s): %s\n" % (e, line))
        except OSError: pass
    if sys.stdout.isatty(): print(line)


def load_state(ctx):
    try: return json.loads(slurp(ctx.p("state.json")))
    except (OSError, ValueError): return {}


def write_atomic(path, text):
    tmp = "%s.tmp.%d" % (path, os.getpid())
    with open(tmp, "w") as f: f.write(text)
    os.replace(tmp, path)


def save_state(ctx, state):
    """Write state.json. The lander (a separate process) owns state["lander"] except "last" (when the supervisor
    last started it), so its section is merged from disk under state.lock rather than overwritten."""
    with open(ctx.p("state.lock"), "w") as lk:
        fcntl.flock(lk, fcntl.LOCK_EX)
        disk = load_state(ctx).get("lander", {})
        state["lander"] = dict(disk, last=state.get("lander", {}).get("last", disk.get("last", 0)))
        write_atomic(ctx.p("state.json"), json.dumps(state, indent=1, sort_keys=True))


# ================================================================ meters

def run_capture(argv, timeout, cwd=None):
    """(returncode, stdout+stderr); -1 on a missing program or a timeout (never raises)."""
    try:
        r = subprocess.run(argv, capture_output=True, text=True, timeout=timeout, cwd=cwd)
        return r.returncode, r.stdout + r.stderr
    except (OSError, subprocess.TimeoutExpired) as e:
        return -1, str(e)


def read_chatgpt(ctx):
    """cx_meter.sh: "USED_PCT RESET_EPOCH" (one tiny Codex request); None when unreadable. cx_meter takes the
    newest Codex session file it finds, which is an old one when its request failed; so the reading is accepted
    only if a session file was written after the request started."""
    t0 = time.time() - 1
    rc, out = run_capture([os.path.join(ctx.repo, "tools/swarm/cx_meter.sh")], 240, cwd=ctx.repo)
    m = re.match(r"\s*([\d.]+)\s+([\d.]+)", out or "")
    if rc != 0 or not m: return None
    files = glob.glob(os.path.join(HOME, ".cx/sessions/*/*/*/*.jsonl"))
    if not files or max(os.path.getmtime(f) for f in files) < t0: return None
    return {"used": float(m.group(1)), "reset": float(m.group(2)), "t": time.time()}


def read_claude(ctx):
    """usage-gate refreshes ~/.cache/usage-gate.json (it reuses a reading < 5 min old and may serve a stale one on
    HTTP 429); the cache's own timestamp is the reading time, so a stale cache shows up as an old reading.
    Returns {"claude": reading|None, "fable": reading|None}; any malformed field = unreadable, never an error."""
    run_capture([os.path.join(HOME, "bin/usage-gate"), "--brief", "100", "100"], 90)
    try:
        c = json.loads(slurp(os.path.join(HOME, ".cache/usage-gate.json"))); d = c["data"]; t = float(c["t"])
        fh = (d.get("five_hour") or {}).get("utilization")
        claude = {"used": float(d["seven_day"]["utilization"]), "reset": P.T(d["seven_day"]["resets_at"]), "t": t,
                  "five_hour": float(fh) if fh is not None else None}
        fable = None
        for lim in d.get("limits") or []:
            sc = ((lim.get("scope") or {}).get("model") or {}).get("display_name") or ""
            if lim.get("kind") == "weekly_scoped" and sc.lower().startswith("fable") and lim.get("percent") is not None:
                fable = {"used": float(lim["percent"]), "reset": P.T(lim["resets_at"]) if lim.get("resets_at") else None, "t": t}
        return {"claude": claude, "fable": fable}
    except (OSError, ValueError, KeyError, TypeError, AttributeError):
        return {"claude": None, "fable": None}


def read_meters(ctx, state):
    """{pool: reading|None} for pools due a reading (meter_every_s, default every cycle). A reading whose time
    is not newer than the last one folded in (usage-gate's 5-min cache) is left out: observing the same reading
    twice must not count as a reset confirmation."""
    now, out, claude = time.time(), {}, None
    for name, pc in ctx.cfg["pools"].items():
        ps = state.get("pools", {}).get(name, {})
        if now - ps.get("read_t", 0) < pc["meter_every_s"]: continue
        if pc["meter"] == "chatgpt": r = read_chatgpt(ctx)
        else:
            claude = claude or read_claude(ctx); r = claude[pc["meter"]]
        state.setdefault("pools", {}).setdefault(name, {})["read_t"] = now
        if r is not None and r["t"] <= ps.get("seen_t", 0): continue   # nothing new
        if r is not None: state["pools"][name]["seen_t"] = r["t"]
        out[name] = r
    return out


# ================================================================ processes

class Proc:
    __slots__ = ("pid", "ppid", "start", "argv", "batch")
    def __init__(self, pid, ppid, start, argv, batch):
        self.pid, self.ppid, self.start, self.argv, self.batch = pid, ppid, start, argv, batch
    def short(self): return " ".join(self.argv)[:120]


def _stat(pid):
    """(ppid, starttime) from /proc/PID/stat, or None if gone."""
    try: s = slurp("/proc/%d/stat" % pid)
    except OSError: return None
    f = s[s.rindex(")") + 2:].split()   # fields after "(comm)"; f[0] is state (field 3)
    return int(f[1]), int(f[19])


def proc_table():
    out = {}
    for d in os.listdir("/proc"):
        if not d.isdigit(): continue
        pid = int(d)
        try:
            argv = [a.decode("utf-8", "replace") for a in slurp("/proc/%d/cmdline" % pid, "rb").split(b"\0") if a]
            st = _stat(pid)
            if not argv or not st: continue
            try: env = slurp("/proc/%d/environ" % pid, "rb").split(b"\0")
            except OSError: env = []
            batch = next((e[6:].decode("utf-8", "replace") for e in env if e.startswith(b"BATCH=")), None)
            out[pid] = Proc(pid, st[0], st[1], argv, batch)
        except OSError:
            continue
    return out


def root_batch(p):
    """BATCH of a lane_run.sh process (exact argv: bash .../lane_run.sh BATCH ...), else None."""
    a = p.argv
    if len(a) >= 3 and os.path.basename(a[0]) == "bash" and os.path.basename(a[1]) == "lane_run.sh": return a[2]
    return None


def is_root(p, batch): return root_batch(p) == batch


def lane_procs(table, batch):
    """All processes of one lane: its root, everything carrying BATCH=<batch>, and every descendant of those."""
    mine = {pid for pid, p in table.items() if p.batch == batch or is_root(p, batch)}
    kids = {}
    for p in table.values(): kids.setdefault(p.ppid, []).append(p.pid)
    todo = list(mine)
    while todo:
        for c in kids.get(todo.pop(), []):
            if c not in mine: mine.add(c); todo.append(c)
    mine.discard(os.getpid())
    return [table[p] for p in sorted(mine)]


def stray_batches(ctx, table):
    """{batch: nprocs} of processes of prefix-named lanes that are not in the config (a lane deleted from the
    config, or another config's lane): they spend a pool nobody watches, so they are stopped and killed."""
    pre, known = ctx.cfg["prefix"], {l["name"] for l in ctx.cfg["lanes"]}
    seen = set()
    for p in table.values():
        for b in (p.batch, root_batch(p)):
            if b and b.startswith(pre) and b not in known and not re.fullmatch(re.escape(pre) + r"Land\d+", b): seen.add(b)
    return {b: len(lane_procs(table, b)) for b in sorted(seen)}


def is_wrapper(p):
    return len(p.argv) >= 4 and os.path.basename(p.argv[0]) == "bash" and os.path.basename(p.argv[1]) in WRAPPERS


def is_model(p):
    return os.path.basename(p.argv[0]) in MODEL_BINS


def inflight_of(procs):
    """Runs in progress: distinct (FUNC, SEG) among run_one wrappers (bash subshells repeat the wrapper's argv),
    plus one per bare model process whose wrapper is gone (an orphan still burns quota)."""
    runs = {(p.argv[2], p.argv[3]) for p in procs if is_wrapper(p)}
    wrapped = {p.pid for p in procs if is_wrapper(p)}
    pid_of = {p.pid: p for p in procs}
    bare = 0
    for p in procs:
        if not is_model(p): continue
        q, ok = p, False
        while q and q.ppid in pid_of:
            q = pid_of[q.ppid]
            if q.pid in wrapped: ok = True; break
        bare += not ok
    return sorted(runs), bare


def signal_exact(ctx, p, sig):
    """Send sig to p only if the PID still belongs to the same process (start time unchanged)."""
    st = _stat(p.pid)
    if not st or st[1] != p.start: return False
    try: os.kill(p.pid, sig); return True
    except ProcessLookupError: return False


def kill_lane(ctx, batch, rounds=3):
    """Kill every process of a lane. Freeze them all first (no new forks, no result written), then SIGKILL the
    shell wrappers (lane_run, xargs, run_one*, timeout) so none records a half-done run as FAIL/ERROR (an
    ERROR would also make run_one_oc.sh write a ChatGPT cooldown file), then SIGTERM the model processes
    (claude/opencode/codex) and SIGKILL any still alive after kill_grace_s. Re-scans up to `rounds` times so a
    process forked during the kill is caught too. Returns the number of processes signalled."""
    total = 0
    for _ in range(rounds):
        procs = lane_procs(proc_table(), batch)
        if not procs: break
        total += len(procs)
        for p in procs: signal_exact(ctx, p, signal.SIGSTOP)
        models = [p for p in procs if is_model(p)]
        others = [p for p in procs if not is_model(p)]
        for p in others:
            if signal_exact(ctx, p, signal.SIGKILL): log(ctx, "kill %s pid %d (SIGKILL): %s" % (batch, p.pid, p.short()))
        for p in models:
            if signal_exact(ctx, p, signal.SIGTERM):
                signal_exact(ctx, p, signal.SIGCONT); log(ctx, "kill %s pid %d (SIGTERM): %s" % (batch, p.pid, p.short()))
        deadline = time.time() + ctx.cfg["kill_grace_s"]
        while time.time() < deadline and any(_stat(p.pid) and _stat(p.pid)[1] == p.start for p in models):
            time.sleep(0.5)
        for p in models:
            if signal_exact(ctx, p, signal.SIGKILL): log(ctx, "kill %s pid %d (SIGKILL after grace)" % (batch, p.pid))
        for p in others:   # run_one_oc.sh's per-run temp dir (its EXIT trap did not run)
            if is_wrapper(p) and os.path.basename(p.argv[1]) == "run_one_oc.sh":
                shutil.rmtree(os.path.join(HOME, ".oc/tmp/run.%d" % p.pid), ignore_errors=True)
        time.sleep(0.3)
    return total


# ================================================================ lane lists, attempts, start attempts

def read_list(ctx, lane):
    """[(func, seg, start_from|None)] in list order.
      kind attempt: a .tsv with a header (seg, func, bytes, ..., start_from) or "FUNC SEG [START]" lines;
                    min_bytes/max_bytes filter on the bytes column.
      kind repair:  build/rule_check.json rows with a hard hit (tools/hh/rule_check.py); the start attempt is the
                    registered source matched/SEG/FUNC.c.
    `limit` keeps the first N."""
    path = os.path.join(ctx.repo, lane["list"]); out = []
    if lane["kind"] == "repair":
        for r in json.loads(slurp(path)):
            if any(h[1] == "hard" for h in r.get("hits", [])):
                out.append((r["func"], r["seg"], "matched/%s/%s.c" % (r["seg"], r["func"])))
    else:
        lines = [l.rstrip("\n") for l in slurp(path).splitlines() if l.strip() and not l.startswith("#")]
        if lines and "\t" in lines[0] and "func" in lines[0].split("\t"):
            hdr = lines[0].split("\t")
            for l in lines[1:]:
                r = dict(zip(hdr, l.split("\t")))
                n = int(r.get("bytes") or 0)
                if (lane["min_bytes"] and n < lane["min_bytes"]) or (lane["max_bytes"] and n > lane["max_bytes"]): continue
                out.append((r["func"], r["seg"], r.get("start_from") or None))
        else:
            out = [(l.split()[0], l.split()[1], l.split()[2] if len(l.split()) > 2 else None) for l in lines]
    seen, uniq = set(), []
    for x in out:
        if (x[0], x[1]) not in seen: seen.add((x[0], x[1])); uniq.append(x)
    return uniq[:lane["limit"]] if lane["limit"] else uniq


def read_results(ctx, batch):
    p = ctx.q(batch, "results.jsonl"); out = []
    try: text = slurp(p)
    except OSError: return out
    for l in text.splitlines():
        try: out.append(json.loads(l))
        except ValueError: pass
    return out


def matched(ctx, func, seg): return os.path.exists(os.path.join(ctx.repo, "matched", seg, func + ".c"))


def swapped(ctx):
    """"seg func" lines honest_swap.py has tried (queue/honest_swapped.txt): a repair lane's done list."""
    try: return {tuple(l.split()[:2]) for l in slurp(os.path.join(ctx.repo, "queue/honest_swapped.txt")).splitlines() if len(l.split()) >= 2}
    except OSError: return set()


class World:
    """One cycle's read of everything lanes depend on (process table, results, MATCHes, in-flight functions),
    so every lane sees the same picture."""
    def __init__(self, ctx, table=None):
        self.ctx = ctx; self.table = table if table is not None else proc_table()
        self.results = {}
        self.procs = {l["name"]: lane_procs(self.table, l["name"]) for l in ctx.cfg["lanes"]}
        self.inflight = {}   # (func, seg) -> lane
        for n, ps in self.procs.items():
            for k in inflight_of(ps)[0]: self.inflight[k] = n
        self.matches = {"attempt": set(), "repair": set()}
        for l in ctx.cfg["lanes"]:
            self.matches[l["kind"]] |= {(r.get("func"), r.get("segment")) for r in self.res(l["name"]) if r.get("verified") == "MATCH"}
        self.swapped = swapped(ctx)

    def res(self, batch):
        if batch not in self.results: self.results[batch] = read_results(self.ctx, batch)
        return self.results[batch]


def lane_info(ctx, lane, world):
    """The lane's snapshot for blast_policy.decide plus details for STATUS.md.

    attempts(f) = this lane's and its also_done batches' non-ERROR runs of f (ERROR = provider trouble, retried).
    remaining = functions with attempts < max_attempts that nobody has matched (kind attempt: not registered and
    no MATCH in any blast lane; kind repair: no repair MATCH and not tried by honest_swap.py yet) and that no
    other blast lane is running right now; ordered by attempts, then list order (round-robin)."""
    b = lane["name"]
    try: items = read_list(ctx, lane)
    except (OSError, ValueError, KeyError): items = []
    res = world.res(b)
    att = {}
    for batch in [b] + list(lane["also_done"]):
        for r in world.res(batch):
            if r.get("verified") != "ERROR": att[(r.get("func"), r.get("segment"))] = att.get((r.get("func"), r.get("segment")), 0) + 1
    procs = world.procs.get(b) or lane_procs(world.table, b)
    fl, bare = inflight_of(procs)
    def solved(f, s):
        if lane["kind"] == "repair": return (f, s) in world.matches["repair"] or (s, f) in world.swapped
        return matched(ctx, f, s) or (f, s) in world.matches["attempt"]
    order = []
    for i, (f, s, sf) in enumerate(items):
        if solved(f, s) or att.get((f, s), 0) >= lane["max_attempts"]: continue
        if world.inflight.get((f, s), b) != b: continue   # another lane is on it now
        order.append((att.get((f, s), 0), i, (f, s, sf)))
    remaining = [x for _, _, x in sorted(order)]
    rem_keys = {(f, s) for f, s, _ in remaining}
    skip = {(f, s) for f, s, _ in items if (f, s) not in rem_keys} | world.matches["attempt" if lane["kind"] == "attempt" else "repair"]
    m = [r for r in res if r.get("verified") == "MATCH"]
    root = any(is_root(p, b) for p in procs)
    return {"running": bool(procs), "root": root, "procs": len(procs), "inflight": len(fl) + bare,
            "inflight_funcs": fl, "paused": os.path.exists(ctx.q(b, "PAUSE")), "stopped": os.path.exists(ctx.q(b, "STOP")),
            "remaining": len(remaining), "remaining_items": remaining, "attempts": att, "runs": len(res),
            "listed": len(items), "matches": len(m), "errors": sum(1 for r in res if r.get("verified") == "ERROR"),
            "last_match": ("%s %s" % (m[-1].get("ts", "?"), m[-1].get("func"))) if m else "-", "skip": skip}


def _safe_members(tf, prefix):
    for m in tf.getmembers():
        if not m.name.startswith(prefix) or m.name.startswith("/") or ".." in m.name.split("/"): continue
        if m.isfile() or m.isdir(): yield m


def resolve_pins(ctx, lane, items):
    """{(func, seg): abs path} of start attempts. start_from (relative to the live repo) if it exists; else, for
    queue/[zarch_]B/work/WD/... of an archived batch, extract just work/WD/ from <archive>/B.work.tar.gz into
    queue/<lane>/from/B/; else the build/attempt_best.json entry (shape-best, then positional-best). Functions
    with none get no pin (run_one_from.sh then picks FROM=best itself)."""
    try: archive = slurp(os.path.join(HOME, ".hh-archive-path")).strip()
    except OSError: archive = None
    try: best = json.loads(slurp(os.path.join(ctx.repo, "build/attempt_best.json")))
    except (OSError, ValueError): best = {}
    pins, want = {}, {}   # want: archive batch -> [(key, workdir, rest)]
    for func, seg, sf in items:
        if sf and os.path.isfile(os.path.join(ctx.repo, sf)):
            pins[(func, seg)] = os.path.join(ctx.repo, sf); continue
        m = re.match(r"queue/(?:zarch_)?([^/]+)/work/([^/]+)/(.+)$", sf or "")
        if m:
            B, wd, rest = m.groups()
            dest = ctx.q(lane["name"], "from", B, "work", wd, rest)
            if os.path.isfile(dest): pins[(func, seg)] = dest; continue
            if archive and os.path.isfile(os.path.join(archive, B + ".work.tar.gz")):
                want.setdefault(B, []).append(((func, seg), wd, rest))
    for B, reqs in want.items():
        tgz = os.path.join(archive, B + ".work.tar.gz"); dest = ctx.q(lane["name"], "from", B)
        try:
            with tarfile.open(tgz) as tf:
                prefixes = tuple("work/%s/" % wd for _, wd, _ in reqs)
                ms = [m for m in _safe_members(tf, "work/") if m.name.startswith(prefixes)]
                for m in ms:   # _safe_members: regular files and dirs under work/, no absolute or ".." paths
                    tf.extract(m, dest, set_attrs=False)
            log(ctx, "extract %d files of %d work dirs from %s into %s" % (len(ms), len(reqs), tgz, dest))
        except (OSError, tarfile.TarError) as e:
            log(ctx, "extract FAILED %s: %s" % (tgz, e))
        for key, wd, rest in reqs:
            f = os.path.join(dest, "work", wd, rest)
            if os.path.isfile(f): pins[key] = f
    for func, seg, _ in items:
        if (func, seg) in pins: continue
        e = best.get("%s %s" % (seg, func))
        for c in ([e[4], e[1]] if e and len(e) > 4 else [e[1]] if e else []):
            if c and os.path.isfile(os.path.join(ctx.repo, c)):
                pins[(func, seg)] = os.path.join(ctx.repo, c); break
    return pins


def score(ctx, path, func, seg, cache):
    """Aligned score 0-1000 of an attempt (1000 = MATCH): its .ali file when the checker wrote one, else
    try_func.py --aligned-out (cached by path, size and mtime); -1 when it cannot be scored."""
    ali = path[:-2] + ".ali"
    try: return int(slurp(ali).split()[0])
    except (OSError, ValueError, IndexError): pass
    try: st = os.stat(path)
    except OSError: return -1
    key = "%s|%d|%d" % (path, st.st_size, int(st.st_mtime))
    if key not in cache:
        with tempfile.TemporaryDirectory() as td:
            out = os.path.join(td, "ali")
            run_capture([ctx.venv_py, os.path.join(ctx.repo, "tools/hh/try_func.py"), func, path, "--seg", seg,
                         "--aligned-out", out], 180, cwd=ctx.repo)
            try: cache[key] = int(slurp(out).split()[0])
            except (OSError, ValueError, IndexError): cache[key] = -1
    return cache[key]


def best_start(ctx, lane, func, seg, pin, cache):
    """A retry's start attempt: the best-scoring of the original pin, the saved best of earlier retries and the
    attempts this lane (and its also_done batches) made, copied with its headers to queue/<lane>/from/retry/
    FUNC@SEG/best.c (run_one3/run_one_oc wipe the lane's own work dir when they rerun the function)."""
    dest = ctx.q(lane["name"], "from", "retry", "%s@%s" % (func, seg))
    cands = [c for c in (pin, os.path.join(dest, "best.c")) if c]
    for b in [lane["name"]] + list(lane["also_done"]):
        for wd in ("%s@%s" % (func, seg), func):
            W = ctx.q(b, "work", wd)
            if os.path.isdir(W): cands += [os.path.join(W, "attempt.c")] + glob.glob(os.path.join(W, ".attempts/*.c"))
    scored = [(score(ctx, c, func, seg, cache), c) for c in cands if os.path.isfile(c)]
    if not scored: return pin
    s, c = max(scored)
    if os.path.abspath(c) != os.path.abspath(os.path.join(dest, "best.c")):
        os.makedirs(dest, exist_ok=True)
        src = os.path.dirname(c)
        if os.path.basename(src) == ".attempts": src = os.path.dirname(src)
        for h in glob.glob(os.path.join(src, "*.h")): shutil.copy(h, dest)
        shutil.copy(c, os.path.join(dest, "best.c"))
        log(ctx, "retry start %s %s %s: %s (score %d)" % (lane["name"], seg, func, c, s))
    return os.path.join(dest, "best.c")


# ================================================================ actions

def renice_to(n):
    """Set this (child) process to niceness n: os.nice is relative and the supervisor itself may run niced."""
    os.nice(max(0, n - os.nice(0)))


def touch(path): open(path, "a").close()
def rm(path):
    try: os.remove(path)
    except FileNotFoundError: pass


def write_skip(ctx, lane, info):
    """queue/<lane>/SKIP: what this lane must not start (solved, out of attempts, or running in another lane);
    rewritten only on change, every cycle while the lane runs."""
    text = "".join("%s %s\n" % k for k in sorted(info["skip"]) if k[0] and k[1])
    p = ctx.q(lane["name"], "SKIP")
    try: old = slurp(p)
    except OSError: old = None
    if old != text: write_atomic(p, text)


def lane_env(lane):
    """VAR=value arguments for lane_run.sh; repair lanes get the honest-repair setup unless the config says otherwise."""
    env = dict(lane["env"])
    if lane["kind"] == "repair":
        for k, v in (("AB_NOSKIP", "1"), ("HONEST", "1"), ("NOTE_FILE", "honest_note.md")): env.setdefault(k, v)
    return env


def start_lane(ctx, lane, info):
    """Write the lane's work list (remaining functions, round-robin order), pins and SKIP, clear STOP/PAUSE/DONE,
    and launch lane_run.sh detached (setsid -f: its own session, parent init, so the supervisor can die or
    restart without touching it). Leftover processes of the lane are killed first: never two sets of workers."""
    b = lane["name"]; d = ctx.q(b); os.makedirs(d, exist_ok=True)
    left = lane_procs(proc_table(), b)
    if left: log(ctx, "start %s: killing %d leftover processes first" % (b, len(left))); kill_lane(ctx, b)
    items = info["remaining_items"]
    pins = resolve_pins(ctx, lane, items)
    if lane["kind"] == "attempt":
        cache_p = os.path.join(d, "from", "scores.json")
        try: cache = json.loads(slurp(cache_p))
        except (OSError, ValueError): cache = {}
        for f, s, _ in items:
            if info["attempts"].get((f, s), 0) > 0:
                bs = best_start(ctx, lane, f, s, pins.get((f, s)), cache)
                if bs: pins[(f, s)] = bs
        os.makedirs(os.path.dirname(cache_p), exist_ok=True); write_atomic(cache_p, json.dumps(cache))
    write_atomic(os.path.join(d, "functions.txt"), "".join("%s %s\n" % (f, s) for f, s, _ in items))
    write_atomic(os.path.join(d, "pins.txt"), "".join("%s %s %s\n" % (k[0], k[1], v) for k, v in pins.items()))
    write_skip(ctx, lane, info)
    for f in ("STOP", "PAUSE", "DONE"): rm(os.path.join(d, f))
    kv = ["INNER=" + P.RUNNERS[lane["runner"]], ("MODEL=" if lane["runner"] == "claude" else "OC_MODEL=") + lane["model"],
          "PAR=%d" % lane["par"], "PINS=" + os.path.join(d, "pins.txt")]
    kv += ["%s=%s" % (k, v) for k, v in sorted(lane_env(lane).items())]
    argv = ["/bin/bash", os.path.join(ctx.repo, "tools/swarm/lane_run.sh"), b] + kv
    env = dict(os.environ, BATCH=b)
    path = env.get("PATH", "").split(":")
    for extra in (os.path.join(HOME, ".local/bin"), os.path.join(HOME, "bin"), "/usr/local/bin", "/usr/bin", "/bin"):
        if extra not in path: path.append(extra)
    env["PATH"] = ":".join(path)
    nice = ctx.cfg["nice"]
    with open(os.path.join(d, "lane.out"), "a") as out:
        subprocess.run(["setsid", "-f"] + argv, cwd=ctx.repo, env=env, stdin=subprocess.DEVNULL, stdout=out,
                       stderr=subprocess.STDOUT, preexec_fn=lambda: renice_to(nice), check=False)
    pid = None
    for _ in range(20):   # confirm the root is up
        pid = next((p.pid for p in proc_table().values() if is_root(p, b)), None)
        if pid: break
        time.sleep(0.25)
    log(ctx, "start %s pid %s: %d functions (%d pinned), PAR %d, %s %s" % (
        b, pid or "NOT FOUND", len(items), len(pins), lane["par"], lane["runner"], lane["model"]))
    return pid


def cooldown_files(ctx, pool):
    """Existing plan cooldown files (~/.oc/COOLDOWN.oa-<model>, .cx-<model>) of this pool's lane models."""
    out = []
    for l in ctx.cfg["lanes"]:
        if l["pool"] != pool: continue
        m = l["model"]
        for f in (".oa-" + re.sub(r"[/:]", "_", m.split("/", 1)[1]) if m.startswith("openai/") else None,
                  ".cx-" + m.split("/", 1)[1] if m.startswith("codex/") else None):
            if f and os.path.exists(os.path.join(HOME, ".oc/COOLDOWN" + f)) and os.path.join(HOME, ".oc/COOLDOWN" + f) not in out:
                out.append(os.path.join(HOME, ".oc/COOLDOWN" + f))
    return out


def clear_cooldowns(ctx, pool, reason):
    """Remove them: run_one_oc.sh writes one on any non-transient ERROR (an idle kill before the first reply too)
    and its workers then wait for it forever while counting as in flight; nothing else clears plan cooldowns.
    The controller's own meter decides whether the plan may be used, so the file is cleared whenever the pool
    is open on a fresh reading (and after a reset)."""
    for f in cooldown_files(ctx, pool):
        try: since = slurp(f).strip()
        except OSError: since = "?"
        rm(f); log(ctx, "clear cooldown %s (written %s): pool %s %s" % (f, since[:60], pool, reason))


def spawn_lander(ctx):
    if lock_held(ctx.p("land.lock")): log(ctx, "lander still running from last time: not started"); return
    with open(ctx.p("lander.out"), "a") as out:
        subprocess.run(["setsid", "-f", sys.executable, os.path.abspath(__file__), "land", "--config", ctx.config_path],
                       cwd=ctx.repo, stdin=subprocess.DEVNULL, stdout=out,
                       stderr=subprocess.STDOUT, preexec_fn=lambda: renice_to(ctx.cfg["nice"]), check=False)
    log(ctx, "lander started")


def apply(ctx, a, infos):
    n = a.get("lane")
    if a["op"] == "start": start_lane(ctx, ctx.lane(n), infos[n])
    elif a["op"] == "pause": touch(ctx.q(n, "PAUSE")); log(ctx, "pause %s: %s" % (n, a["reason"]))
    elif a["op"] == "resume": rm(ctx.q(n, "PAUSE")); log(ctx, "resume %s: %s" % (n, a["reason"]))
    elif a["op"] == "stop":
        if os.path.isdir(ctx.q(n)) or n in infos: os.makedirs(ctx.q(n), exist_ok=True); touch(ctx.q(n, "STOP"))
        log(ctx, "stop %s%s: %s" % (n, " + kill in-flight" if a["kill"] else " (in-flight runs finish)", a["reason"]))
        if a["kill"]: log(ctx, "killed %s: %d processes" % (n, kill_lane(ctx, n)))
    elif a["op"] == "clear_cooldowns": clear_cooldowns(ctx, a["pool"], a["reason"])
    elif a["op"] == "land": spawn_lander(ctx)


# ================================================================ the cycle

def snapshot(ctx, off):
    world = World(ctx)
    infos = {l["name"]: lane_info(ctx, l, world) for l in ctx.cfg["lanes"]}
    snap = {"off": off, "lanes": infos, "strays": stray_batches(ctx, world.table),
            "cooldowns": {n: bool(cooldown_files(ctx, n)) for n in ctx.cfg["pools"]}}
    return snap, infos


def cycle(ctx):
    state = load_state(ctx); now = time.time()
    off = os.path.exists(ctx.p("OFF"))
    readings = read_meters(ctx, state) if not off and P.active(ctx.cfg, now) else {}
    snap, infos = snapshot(ctx, off)
    actions, pools, report, events = P.step(ctx.cfg, state, readings, snap, now)
    for e in events: log(ctx, e)
    if off and not state.get("off"): log(ctx, "OFF switch present: stopping everything")
    if not off and state.get("off"): log(ctx, "OFF switch removed: resuming per config")
    state["off"] = off
    save_state(ctx, state)   # epochs/latches before acting: a crash mid-action must not forget a reset
    for a in sorted(actions, key=lambda a: a["op"] != "stop"):   # kills first
        try: apply(ctx, a, infos)
        except Exception as e:   # one failed action must not stop the others (e.g. a kill after a failed start)
            log(ctx, "ACTION FAILED %s: %r" % (P.describe(a), e))
    if actions:   # refresh the snapshot for STATUS.md and SKIP
        snap, infos = snapshot(ctx, off)
    for l in ctx.cfg["lanes"]:
        if infos[l["name"]]["running"]: write_skip(ctx, l, infos[l["name"]])
    state["last_cycle"] = now
    save_state(ctx, state)
    write_status(ctx, state, pools, report, infos, off)
    return actions, infos


def emergency_stop(ctx, why):
    """Failed cycles enforce nothing, so after failed_cycles_kill of them every configured lane (and every stray
    blast lane) is stopped and killed. Each step is guarded on its own."""
    log(ctx, "EMERGENCY STOP: %s" % why)
    names = [l["name"] for l in ctx.cfg["lanes"]]
    try: names += [b for b in stray_batches(ctx, proc_table()) if b not in names]
    except Exception as e: log(ctx, "emergency: stray scan failed: %r" % e)
    for n in names:
        try:
            if os.path.isdir(ctx.q(n)): touch(ctx.q(n, "STOP"))
            k = kill_lane(ctx, n)
            if k: log(ctx, "emergency: killed %s (%d processes)" % (n, k))
        except Exception as e:
            log(ctx, "emergency: %s failed: %r" % (n, e))


# ================================================================ stray lander

RULE_SNIPPET = r"""
import json, os, sys
repo, path, func = sys.argv[1:4]
sys.path.insert(0, os.path.join(repo, "tools/hh"))
import srcbuild, rule_check      # srcbuild chdirs to the repo on import
b = srcbuild.fn_body(open(path).read(), func)
if b is None: print(json.dumps(["no definition of " + func])); sys.exit(0)
hard = [h for h in rule_check.hits("", whole_body=rule_check.body_of(b) if "{" in b else b) if h[1] == "hard"]
print(json.dumps(["%s %s" % (r, d) for r, _, d in hard]))
"""


def rule_hits(ctx, path, func):
    """Hard rule_check hits of FUNC's definition in path, exactly as srcbuild add tests new snippets
    (srcbuild.fn_body + rule_check.hits); None if the check itself failed."""
    rc, out = run_capture([ctx.venv_py, "-c", RULE_SNIPPET, ctx.repo, path, func], 120)
    try: return json.loads([l for l in out.splitlines() if l.startswith("[")][-1]) if rc == 0 else None
    except (ValueError, IndexError): return None


def workdir(ctx, batch, func, seg):
    rc, out = run_capture([ctx.venv_py, os.path.join(ctx.repo, "tools/hh/workdir.py"), "dir", batch, func, seg], 30)
    out = out.strip().splitlines()[-1] if rc == 0 and out.strip() else ""
    return os.path.join(ctx.repo, out) if out else None


def build_and_test(ctx):
    """'' if make says OK and the tools/hh unit tests pass, else why not (timeouts count as failures)."""
    rc, out = run_capture(["make", "-j8"], 3600, cwd=ctx.repo)
    last = ([l for l in out.splitlines() if l.strip()][-1:] or [""])[0]
    if rc != 0 or ": OK" not in last: return "make: " + last[:200]
    rc, out = run_capture([ctx.venv_py, "-m", "unittest", "discover", "-s", "tools/hh", "-p", "test_*.py"], 3600, cwd=ctx.repo)
    last = ([l for l in out.splitlines() if l.strip()][-1:] or [""])[0]
    if rc != 0 or not last.startswith("OK"): return "unit tests: " + last[:200]
    return ""


def rollback(ctx, new_files):
    subprocess.run(["git", "checkout", "--", "src", "matched"], cwd=ctx.repo)
    for f in new_files:
        if subprocess.run(["git", "ls-files", "--error-unmatch", f], cwd=ctx.repo, capture_output=True).returncode:
            rm(os.path.join(ctx.repo, f))
    rc, out = run_capture(["make", "-j8"], 3600, cwd=ctx.repo)
    log(ctx, "lander: rebuilt after rollback: %s" % ((out.strip().splitlines() or ["?"])[-1]))


def commit(ctx, paths, title, body):
    paths = [p for p in paths if os.path.exists(os.path.join(ctx.repo, p))]   # a missing path makes git add do nothing
    subprocess.run(["git", "add", "-A"] + paths, cwd=ctx.repo)
    if subprocess.run(["git", "diff", "--cached", "--quiet"], cwd=ctx.repo).returncode == 0: return "nothing to commit"
    msg = "%s\n\n%s\n\nCo-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>\n" \
          "Claude-Session: https://claude.ai/code/session_012QMfxWK1cnmK7U8jmgxKKK\n" % (title, body)
    return "ok" if subprocess.run(["git", "commit", "-q", "-m", msg], cwd=ctx.repo).returncode == 0 else "COMMIT FAILED"


def land_group(ctx, ls, cands):
    """Stage cands in a fresh batch <prefix>LandN and integrate it (caller holds cycle.lock). (ok, why, landed)."""
    n = ls.get("n", 0) + 1
    while os.path.exists(ctx.q("%sLand%d" % (ctx.cfg["prefix"], n))): n += 1
    B = "%sLand%d" % (ctx.cfg["prefix"], n); ls["n"] = n
    os.makedirs(ctx.q(B))
    with open(ctx.q(B, "results.jsonl"), "w") as out:
        for key, lane, r, W in cands:
            D = workdir(ctx, B, r["func"], r["segment"]); os.makedirs(D, exist_ok=True)
            shutil.copy(os.path.join(W, "attempt.c"), D)
            for h in glob.glob(os.path.join(W, "*.h")): shutil.copy(h, D)
            out.write(json.dumps(dict(r, claimed="blast lander: %s MATCH not landed by the loop" % lane)) + "\n")
            log(ctx, "lander: staged %s %s from %s in %s" % (r["segment"], r["func"], lane, B))
    fns = ["matched/%s/%s.c" % (r["segment"], r["func"]) for _, _, r, _ in cands]
    rc, out = run_capture([ctx.venv_py, "tools/swarm/integrate.py", B], 3600, cwd=ctx.repo)
    why = ("integrate: " + out.strip()[-300:]) if rc != 0 else build_and_test(ctx)
    landed = [f for f in fns if os.path.exists(os.path.join(ctx.repo, f))]
    if why:
        log(ctx, "lander: %s FAILED (%s): rolling back" % (B, why)); rollback(ctx, fns)
        return False, why, []
    if landed:
        res = commit(ctx, ["queue/" + B, "matched", "src", "queue/rejected.jsonl"],
                     "Land stray honest matches from the blast lanes (%s)" % B, "\n".join(landed))
        log(ctx, "lander: %s committed %d of %d (%s)" % (B, len(landed), len(fns), res))
    else:
        log(ctx, "lander: %s built and tested, but integrate landed none of %d (rejected in file context)" % (B, len(fns)))
    return True, "", landed


def land_repairs(ctx, ls, dry):
    """Repair lanes' honest MATCHes of registered functions land through queue/loop/honest_swap.py (srcbuild
    trial_snippets unit by unit, make per unit, rollback per unit), then the unit tests; commit or roll back."""
    names = [l["name"] for l in ctx.cfg["lanes"] if l["kind"] == "repair"]
    if not names: return
    sw, now = swapped(ctx), time.time()
    pend = []
    for b in names:
        for r in read_results(ctx, b):
            f, s = r.get("func"), r.get("segment")
            if r.get("verified") != "MATCH" or (s, f) in sw: continue
            W = workdir(ctx, b, f, s); a = W and os.path.join(W, "attempt.c")
            if a and os.path.isfile(a) and now - os.path.getmtime(a) >= ctx.cfg["lander"]["min_age_s"]: pend.append("%s %s" % (s, f))
    if dry or not pend:
        for p in pend: print("would swap", p)
        return
    log(ctx, "lander: honest_swap.py for %d repair matches (%s)" % (len(pend), " ".join(names)))
    rc, out = run_capture([ctx.venv_py, "queue/loop/honest_swap.py"] + names, 7200, cwd=ctx.repo)
    log(ctx, "lander: honest_swap: %s" % ((out.strip().splitlines() or ["?"])[-1][:200]))
    why = build_and_test(ctx) if rc == 0 else "honest_swap exit %s" % rc
    if why:
        log(ctx, "lander: repair swap FAILED (%s): rolling back" % why); rollback(ctx, [])
        ls["last_result"] = "%s repair swap: %s" % (now_iso(), why[:120]); return
    res = commit(ctx, ["src", "matched", "queue/honest_swapped.txt", "queue/honest_swap.log"],
                 "Swap in honest-C repairs from the blast repair lanes", "lanes: " + " ".join(names))
    log(ctx, "lander: repair swap committed (%s)" % res)
    run_capture([ctx.venv_py, "tools/hh/rule_check.py"], 1800, cwd=ctx.repo)   # refresh build/rule_check.json


def land(ctx, dry=False):
    """Land honest MATCH results of the blast lanes that the loop has not landed after min_age_s: re-check each
    is rule-clean, stage them in a fresh batch, then under queue/loop/cycle.lock: integrate.py, make, the
    tools/hh unit tests, and commit; on any failure roll src/ and matched/ back. A failed group is retried one
    function at a time; a function that fails lander.max_tries times is left alone."""
    lk = acquire(ctx.p("land.lock"))
    if not lk: print("lander already running"); return 1
    state = load_state(ctx); ls = state.setdefault("lander", {}); tried = ls.setdefault("tried", {})
    maxt = ctx.cfg["lander"]["max_tries"]
    now = time.time(); cands = []
    for lane in ctx.cfg["lanes"]:
        if lane["kind"] != "attempt": continue
        for r in read_results(ctx, lane["name"]):
            f, s = r.get("func"), r.get("segment")
            if r.get("verified") != "MATCH" or not f or not s or matched(ctx, f, s): continue
            W = workdir(ctx, lane["name"], f, s)
            a = W and os.path.join(W, "attempt.c")
            if not a or not os.path.isfile(a) or now - os.path.getmtime(a) < ctx.cfg["lander"]["min_age_s"]: continue
            key = "%s %s %s" % (s, f, hashlib.sha1(slurp(a, "rb")).hexdigest()[:12])
            t = tried.get(key)
            if isinstance(t, str) or (isinstance(t, int) and t >= maxt) or any(c[0] == key for c in cands): continue
            hits = rule_hits(ctx, a, f)
            if hits is None: log(ctx, "lander: rule check failed to run on %s %s; skipped" % (s, f)); continue
            if hits:
                log(ctx, "lander: %s %s from %s not rule-clean (%s); not landed" % (s, f, lane["name"], "; ".join(hits)[:150]))
                tried[key] = "unclean"; continue
            cands.append((key, lane["name"], r, W))
    if dry:
        for c in cands: print("would land", c[0], "from", c[1])
        land_repairs(ctx, ls, True); return 0
    ok_all = True
    with open(os.path.join(ctx.repo, "queue/loop/cycle.lock"), "w") as cl:
        fcntl.flock(cl, fcntl.LOCK_EX)   # the loop holds it for a whole cycle: wait for it
        if cands:
            ok, why, landed = land_group(ctx, ls, cands)
            groups = [] if ok else ([[c] for c in cands] if len(cands) > 1 else [])
            results = [(cands, ok, landed)] if ok else []
            if not ok and len(cands) == 1: results = [(cands, False, [])]
            for g in groups:   # one at a time, so one bad function cannot block the rest
                ok1, why1, landed1 = land_group(ctx, ls, g); results.append((g, ok1, landed1))
            for g, ok1, landed1 in results:
                for key, _, r, _ in g:
                    f = "matched/%s/%s.c" % (r["segment"], r["func"])
                    if ok1: tried[key] = "landed" if f in landed1 else "rejected"
                    else: tried[key] = (tried.get(key) or 0) + 1; ok_all = False
            ls["landed"] = ls.get("landed", 0) + sum(1 for c in cands if tried.get(c[0]) == "landed")
            ls["last_result"] = "%s: %d staged, %d landed%s" % (now_iso(), len(cands), sum(1 for c in cands if tried.get(c[0]) == "landed"),
                                                              "" if ok_all else ", some failed (%s)" % why[:80])
        else:
            log(ctx, "lander: nothing to land")
        land_repairs(ctx, ls, False)
    save_lander(ctx, ls)
    if cands: run_capture([ctx.venv_py, "tools/hh/progress.py"], 900, cwd=ctx.repo)   # refresh the code %
    return 0 if ok_all else 1


def save_lander(ctx, ls):
    """Write the lander's section of state.json (keeping the supervisor's "last" and everything else)."""
    with open(ctx.p("state.lock"), "w") as f:
        fcntl.flock(f, fcntl.LOCK_EX)
        st = load_state(ctx)
        st["lander"] = dict(ls, last=st.get("lander", {}).get("last", ls.get("last", 0)))
        write_atomic(ctx.p("state.json"), json.dumps(st, indent=1, sort_keys=True))


# ================================================================ status

def code_progress(ctx):
    try:
        m = json.loads(slurp(os.path.join(ctx.repo, "build/progress/report.json")))["measures"]
        return "%.3f%% of code, %s / %s functions" % (m["matched_code_percent"], m["matched_functions"], m["total_functions"])
    except (OSError, ValueError, KeyError):
        return "unknown"


def tail(path, n):
    try: return slurp(path).splitlines()[-n:]
    except OSError: return []


def write_status(ctx, state, pools, report, infos, off):
    L = ["# Reset blast status", "",
         "Updated %s. Supervisor cycle %ds. %s" % (now_iso(), ctx.cfg["cycle_s"],
                                                   "**OFF switch is set: everything stopped.**" if off else ""), "",
         "Code: %s. Lander: %d landed; last %s." % (code_progress(ctx), state.get("lander", {}).get("landed", 0),
                                                     state.get("lander", {}).get("last_result", "never")), "",
         "| pool | meter | epoch | cap (hard / pace) | in flight | state | why |", "|---|---|---|---|---|---|---|"]
    for n, p in pools.items():
        u = "%.1f%%" % p["used"] if p.get("used") is not None else "?"
        L.append("| %s | %s | %d | %.0f%% / %s (%s) | %d | %s | %s |" % (
            n, u, p["epoch"], p["hard"], "%.1f%%" % p["pace"] if p["pace"] is not None else "-", p["label"],
            p["inflight"], p["status"], p["reason"]))
    L += ["", "| lane | model | pool | state | why | running | in flight | runs | matches | last match | left |",
          "|---|---|---|---|---|---|---|---|---|---|---|"]
    for l in sorted(ctx.cfg["lanes"], key=lambda l: -l["priority"]):
        i, r = infos[l["name"]], report.get(l["name"], {})
        flags = "".join(x for x, k in (("P", "paused"), ("S", "stopped")) if i[k]) + ("" if i["root"] or not i["running"] else " orphans")
        L.append("| %s | %s | %s | %s | %s | %s | %d/%d | %d | %d | %s | %d/%d |" % (
            l["name"], l["model"], l["pool"], r.get("want", "?"), r.get("why", ""),
            ("yes" if i["running"] else "no") + (" " + flags if flags else ""), i["inflight"], l["par"],
            i["runs"], i["matches"], i["last_match"], i["remaining"], i["listed"]))
    cds = sorted(os.path.basename(f) for f in glob.glob(os.path.join(HOME, ".oc/COOLDOWN*")))
    L += ["", "Cooldown files: %s" % (", ".join(cds) or "none"), "", "## Recent events", "", "```"]
    L += tail(ctx.p("events.log"), 20) + ["```", ""]
    write_atomic(ctx.p("STATUS.md"), "\n".join(L))


def summary(ctx):
    st = load_state(ctx); age = time.time() - st.get("last_cycle", 0)
    alive = lock_held(ctx.p("blast.lock"))
    print("blast: supervisor %s, last cycle %d min ago%s; code %s; landed %d" % (
        "running" if alive else "NOT running", age // 60, ", OFF" if os.path.exists(ctx.p("OFF")) else "",
        code_progress(ctx), st.get("lander", {}).get("landed", 0)))
    for n, ps in st.get("pools", {}).items():
        print("  %-8s %s%% epoch %d%s%s" % (n, ps.get("used", "?"), ps.get("epoch", 0),
                                          " CAP-LATCHED" if ps.get("closed") else "",
                                          " UNREADABLE" if "unreadable_since" in ps else ""))
    world = World(ctx)
    for l in ctx.cfg["lanes"]:
        i = lane_info(ctx, l, world)
        print("  %-17s %-5s %d/%d in flight, %d runs, %d matches, %d left%s" % (
            l["name"], "run" if i["running"] else "-", i["inflight"], l["par"], i["runs"], i["matches"],
            i["remaining"], " (paused)" if i["paused"] else ""))
    for line in tail(ctx.p("events.log"), 5): print("  " + line)


# ================================================================ locks, supervisor

def acquire(path):
    """Non-blocking exclusive lock held for the life of the process (None if another process holds it)."""
    f = open(path, "a+")
    try: fcntl.flock(f, fcntl.LOCK_EX | fcntl.LOCK_NB)
    except BlockingIOError: f.close(); return None
    f.seek(0); f.truncate(); f.write(str(os.getpid())); f.flush()
    return f


def lock_held(path):
    if not os.path.exists(path): return False
    with open(path) as f:
        try: fcntl.flock(f, fcntl.LOCK_SH | fcntl.LOCK_NB); return False
        except BlockingIOError: return True


def supervise(ctx, once=False, exit_when_idle=False, max_cycles=None, cycle_fn=None):
    """The supervisor loop. A cycle that raises is logged; failed_cycles_kill failures in a row stop and kill
    everything (a failing cycle enforces no cap), and the loop keeps trying."""
    cycle_fn = cycle_fn or cycle
    lk = acquire(ctx.p("blast.lock"))
    if not lk: print("supervisor already running (%s)" % ctx.p("blast.lock")); return 1
    if not once: log(ctx, "supervisor start pid %d (config %s)" % (os.getpid(), ctx.config_path))
    fails, n = 0, 0
    while True:
        n += 1
        try:
            actions, infos = cycle_fn(ctx); fails = 0
        except Exception as e:   # never die on a bad cycle; cron's ensure is the second line of defence
            fails += 1; actions, infos = [], {}
            log(ctx, "CYCLE FAILED (%d in a row): %r" % (fails, e))
            if fails >= ctx.cfg["failed_cycles_kill"]:
                try: emergency_stop(ctx, "%d failed cycles in a row" % fails)
                except Exception as e2: log(ctx, "emergency stop raised: %r" % e2)
        if once or (max_cycles and n >= max_cycles): return 0 if not fails else 1
        if exit_when_idle and infos and not any(i["running"] or i["inflight"] for i in infos.values()) \
                and not any(a["op"] == "start" for a in actions):
            log(ctx, "supervisor exit: no lane running and none to start"); return 0
        end = time.time() + ctx.cfg["cycle_s"]
        while time.time() < end:   # wake early for the OFF switch
            time.sleep(min(5, max(0.1, end - time.time())))
            if os.path.exists(ctx.p("OFF")) and not load_state(ctx).get("off"): break
        try:   # pick up config edits (lanes added/retired) every cycle; a broken edit keeps the old config
            new = Ctx(ctx.config_path); errs = P.validate(new.cfg)
            if errs: raise ValueError("; ".join(errs))
            ctx = new
        except (OSError, ValueError) as e: log(ctx, "config reload FAILED, keeping the old one: %s" % e)


STALL_S = 2700   # a supervisor whose last cycle is older than this is hung (a cycle is normally < 10 min)


def is_supervisor(p):
    """A `blast.py run` process, however it was started (absolute or relative path, any interpreter)."""
    return any(os.path.basename(a) == "blast.py" for a in p.argv) and "run" in p.argv


def ensure(ctx):
    """Start the supervisor unless one holds blast.lock. A holder that has not finished a cycle for STALL_S is
    hung: it is terminated (exact PID from the lock file, only if its argv is a blast.py run) and replaced."""
    if lock_held(ctx.p("blast.lock")):
        try: pid = int(slurp(ctx.p("blast.lock")).strip() or 0)
        except (OSError, ValueError): pid = 0
        age = time.time() - load_state(ctx).get("last_cycle", time.time())
        if age < STALL_S:
            print("supervisor running (pid %d, last cycle %d s ago)" % (pid, age)); return 0
        p = proc_table().get(pid)
        if not p or not is_supervisor(p):
            log(ctx, "ensure: blast.lock held by pid %d, not a blast.py run; leaving it" % pid); return 1
        log(ctx, "ensure: supervisor pid %d stalled (last cycle %d min ago): terminating it" % (pid, age // 60))
        signal_exact(ctx, p, signal.SIGTERM)
        for _ in range(30):
            if not lock_held(ctx.p("blast.lock")): break
            time.sleep(1)
        else:
            signal_exact(ctx, p, signal.SIGKILL); time.sleep(1)
    with open(ctx.p("supervisor.out"), "a") as out:
        subprocess.run(["setsid", "-f", sys.executable, os.path.abspath(__file__), "run", "--config", ctx.config_path],
                       cwd=ctx.repo, stdin=subprocess.DEVNULL, stdout=out,
                       stderr=subprocess.STDOUT, preexec_fn=lambda: renice_to(ctx.cfg["nice"]), check=False)
    log(ctx, "ensure: supervisor was not running; started")
    print("supervisor started"); return 0


# ================================================================ check / prepare / cron

def check(ctx, prepare=False):
    """Validate the config and lists; functions shared by enabled lanes are an error unless allow_overlap lists
    the pair (shared functions never run in two lanes at once: SKIP excludes what another lane is running)."""
    errs = P.validate(ctx.cfg); seen = {}
    world = World(ctx, table={})
    for l in ctx.cfg["lanes"]:
        try: items = read_list(ctx, l)
        except (OSError, ValueError, KeyError) as e: errs.append("lane %s: list %s: %s" % (l["name"], l["list"], e)); continue
        if l["enabled"]:
            for f, s, _ in items: seen.setdefault((f, s), []).append(l["name"])
        i = lane_info(ctx, l, world)
        cap = sum(l["max_attempts"] - i["attempts"].get((f, s), 0) for f, s, _ in i["remaining_items"])
        line = "%-17s %-7s %3d listed, %3d open now, %4d runs left at %d attempts each" % (
            l["name"], l["kind"], len(items), i["remaining"], cap, l["max_attempts"])
        if prepare: line += ", %d start attempts resolved" % len(resolve_pins(ctx, l, i["remaining_items"]))
        print(line)
    bad = {}
    for k, v in seen.items():
        for a in v:
            for b in v:
                if a < b and not P.overlap_allowed(ctx.cfg, a, b): bad.setdefault((a, b), []).append(k)
    for (a, b), ks in sorted(bad.items()):
        errs.append("lanes %s and %s share %d functions (e.g. %s %s); list them in allow_overlap if intended" % (a, b, len(ks), ks[0][1], ks[0][0]))
    for n, pc in ctx.cfg["pools"].items():   # a pause must leave room for the runs it lets finish
        w = pc["max_workers"] or sum(l["par"] for l in ctx.cfg["lanes"] if n in P.lane_pools(ctx.cfg, l) and l["enabled"])
        for i, r in enumerate(pc["caps"]):
            if "pace" in r and r["pace"]["to"] > r["max"] - 2 * w * pc["per_run_pct"]:
                print("note: pool %s cap %d: pace.to %s > max - 2 x %d workers x %.2f = %.1f: in-flight runs after the pause "
                      "may reach the kill line" % (n, i, r["pace"]["to"], w, pc["per_run_pct"], r["max"] - 2 * w * pc["per_run_pct"]))
    for e in errs: print("ERROR:", e)
    print("config OK" if not errs else "%d problems" % len(errs))
    return 1 if errs else 0


def cron_lines(ctx):
    me, cfg = os.path.abspath(__file__), ctx.config_path
    cmd = "cd %s && nice -n 10 /usr/bin/python3 %s ensure --config %s >> %s 2>&1" % (ctx.repo, me, cfg, ctx.p("cron.out"))
    print("# reset-blast controller (blast.py): keep the supervisor alive; it is single-instance (flock)")
    print("PATH=/usr/local/bin:/usr/bin:/bin:%s/.local/bin:%s/bin" % (HOME, HOME))
    print("*/10 * * * * " + cmd)
    print("@reboot sleep 90 && " + cmd)


# ================================================================ main

def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("cmd", choices=["run", "once", "ensure", "summary", "check", "prepare", "land", "simulate", "cron"])
    ap.add_argument("arg", nargs="?")
    ap.add_argument("--config", default=os.path.join(TOOL_REPO, "queue/blast/blast.json"))
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--exit-when-idle", action="store_true", help="run: exit once no lane runs or can start (smoke tests)")
    a = ap.parse_args(argv)
    if a.cmd == "simulate":
        if not a.arg: ap.error("simulate needs a SCENARIO.json")
        import blast_sim
        return 0 if blast_sim.simulate(a.arg)[0] else 1
    ctx = Ctx(a.config)
    errs = P.validate(ctx.cfg)
    if errs and a.cmd not in ("check", "summary"):
        for e in errs: print("config ERROR:", e)
        return 2
    if a.cmd == "run": return supervise(ctx, exit_when_idle=a.exit_when_idle)
    if a.cmd == "once": return supervise(ctx, once=True)
    if a.cmd == "ensure": return ensure(ctx)
    if a.cmd == "summary": summary(ctx); return 0
    if a.cmd == "check": return check(ctx)
    if a.cmd == "prepare": return check(ctx, prepare=True)
    if a.cmd == "land": return land(ctx, dry=a.dry_run)
    if a.cmd == "cron": cron_lines(ctx); return 0


if __name__ == "__main__":
    sys.exit(main())
