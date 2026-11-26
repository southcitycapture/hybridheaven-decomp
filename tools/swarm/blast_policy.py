"""blast_policy.py: the pure decision logic of the reset-blast controller (tools/swarm/blast.py, 2026-11-26).

Nothing here touches files, processes or the clock. Every function takes the config, the persisted state, a
snapshot of the world and `now` (epoch seconds) and returns decisions, so `blast.py simulate` and test_blast.py
exercise exactly the code that runs for real.

Vocabulary
  pool    a paid quota with one meter: "chatgpt" (the ChatGPT plan week, tools/swarm/cx_meter.sh), "claude" (the
          Claude weekly, ~/bin/usage-gate) or "fable" (the Fable sub-pool of the Claude weekly; a pool with
          "parent": "claude" is limited by both meters).
  epoch   0 = the week in progress when the controller first read the pool's meter (or the week whose reset time
          is the pool's epoch0_resets_at; earlier weeks are epoch -1 and get no rule, so they stay closed);
          +1 at every confirmed reset (the weekly turnover, or a banked reset credit redeemed by hand).
  rule    one entry of pool.caps, first match wins (a rule without "epoch" applies to every epoch):
            {"epoch": 0 | "1+", "from": ISO, "until": ISO, "max": PCT, "pace": {...}, "note": "..."}
          max  = hard cap: at max - (in-flight runs x per_run_pct) the pool CLOSES: lanes get STOP and their
                 in-flight runs are killed (11-19 lesson: a cap that only stops new runs overshoots).
          pace = soft line {"to": PCT, "by": ISO, "from": PCT|"reset", "start": ISO|"reset"} rising linearly; above
                 it the pool PAUSES (no new runs; in-flight runs finish). Keep "to" a few points under "max" so
                 the normal end of a week is a pause, and the kill only a backstop. "from": "reset" = the meter
                 at the start time (so hand-lane use before the blast does not pin the line).
          No matching rule = cap 0 = CLOSED, so time outside every window is never spent.
  lane    one lane_run.sh batch (see blast.json). Its state each cycle: run / pause / stop (+kill) / idle.
          kind "attempt" (default): open functions from a list, up to max_attempts runs per function
          (round-robin: every function gets run k before any gets run k+1). kind "repair": honest-C repair of
          registered functions whose source still has a rule_check hard hit (landed by honest_swap.py).
"""
import datetime as dt
import numbers
import re

DEFAULTS = {
    "prefix": "blast",          # every lane name starts with it: hand lanes and chatgpt_pacer.sh (terra*) never collide
    "cycle_s": 240,             # supervisor period
    "active_from": None,        # outside [active_from, active_until) no meter is read and nothing runs
    "active_until": None,
    "meter_max_age_s": 1200,    # an older reading counts as unreadable
    "stale_pause_s": 600,       # no fresh reading this long while within near_cap_pct of the cap: pause
    "near_cap_pct": 5,
    "blind_kill_after_s": 3000, # last good reading this old: CLOSE (kill). > 45 min: usage-gate may serve a cached
                                # reading for up to 45 min while the usage endpoint rate-limits it (HTTP 429)
    "reset_confirm": 2,         # agreeing readings before a reset counts (reset time moved and USED low)
    "reset_drop_confirm": 3,    # ... before a USED-only drop to near zero counts (no reset-time move)
    "reset_epoch_move_s": 3600, # the reset time must move by more than this (it jitters by ~1 s between reads)
    "reset_drop_pct": 30,       # a drop of more than this many points ...
    "near_zero_pct": 5,         # ... or to at most this (from at least 2x higher) is a reset candidate
    "reset_min_gap_s": 7200,    # no second reset within this time of the last (a two-stage reset counts once)
    "reopen_margin_pct": 2,     # a pool closed at its cap reopens only this far below the start line (no flapping)
    "pace_margin_pct": 1,       # a pool paused at its pace line resumes only this far below it (no pause/resume flapping)
    "max_starts_per_hour": 4,   # a lane restarted more often than this is held (crash loop)
    "failed_cycles_kill": 2,    # this many failed cycles in a row: stop + kill every lane (blast.py)
    "kill_grace_s": 15,         # SIGTERM -> SIGKILL grace for model processes
    "nice": 10,
    "allow_overlap": [],        # [[laneA, laneB], ...] lanes allowed to share functions (never at the same time)
    "lander": {"enabled": True, "every_s": 3600, "min_age_s": 1800, "until": None, "max_tries": 3},
}
POOL_DEFAULTS = {"per_run_pct": 0.5, "max_workers": None, "parent": None, "caps": [],
                 "clear_cooldowns_on_reset": False, "five_hour_max": None, "meter_every_s": 0,
                 "epoch0_resets_at": None}   # anchor: the reset time of the week that is epoch 0 (see observe)
LANE_DEFAULTS = {"enabled": True, "kind": "attempt", "par": 1, "priority": 50, "start": None, "stop": None,
                 "env": {}, "max_runs": None, "max_attempts": 3, "limit": None, "min_bytes": None,
                 "max_bytes": None,
                 "also_done": []}   # other batches whose (non-ERROR) runs count toward this lane's attempts
METERS = ("chatgpt", "claude", "fable")
RUNNERS = {"claude": "run_one3.sh", "opencode": "run_one_oc.sh"}
KINDS = ("attempt", "repair")


# ---------------------------------------------------------------- time

def T(s):
    """ISO time ("2026-11-30T13:00Z", "...:00Z", "+00:00") -> epoch seconds; None stays None."""
    if s is None: return None
    if isinstance(s, (int, float)): return float(s)
    d = dt.datetime.fromisoformat(s.replace("Z", "+00:00"))
    if d.tzinfo is None: raise ValueError("time without zone: %s (write ...Z)" % s)
    return d.timestamp()


def iso(t):
    return dt.datetime.fromtimestamp(t, dt.timezone.utc).strftime("%Y-%m-%dT%H:%MZ") if t else "-"


def active(cfg, now):
    """Inside the blast window (meters are read, lanes may run)?"""
    return not ((cfg["active_from"] and now < T(cfg["active_from"])) or
                (cfg["active_until"] and now >= T(cfg["active_until"])))


# ---------------------------------------------------------------- config

def normalize(cfg):
    """Config with defaults filled in (a new dict; the input is not changed)."""
    out = dict(DEFAULTS); out.update({k: v for k, v in cfg.items() if k not in ("pools", "lanes", "lander")})
    out["lander"] = dict(DEFAULTS["lander"], **cfg.get("lander", {}))
    out["pools"] = {n: dict(POOL_DEFAULTS, **p) for n, p in cfg.get("pools", {}).items()}
    out["lanes"] = [dict(LANE_DEFAULTS, **l) for l in cfg.get("lanes", [])]
    return out


def _num(v): return isinstance(v, numbers.Real) and not isinstance(v, bool)


def validate(cfg):
    """List of problems in a normalized config (empty = fine). Types are checked here so that a bad value is
    refused when the config is loaded, never raised inside a cycle."""
    errs, names = [], set()
    def time_ok(where, s):
        try: T(s)
        except (ValueError, TypeError, AttributeError) as e: errs.append("%s: bad time %r (%s)" % (where, s, e))
    def num(where, v, lo=None, hi=None, none_ok=False, integer=False):
        if v is None and none_ok: return
        if not _num(v) or (integer and int(v) != v): errs.append("%s: must be a %s, not %r" % (where, "whole number" if integer else "number", v)); return
        if (lo is not None and v < lo) or (hi is not None and v > hi): errs.append("%s: %r out of range [%s, %s]" % (where, v, lo, hi))
    for k in ("cycle_s", "meter_max_age_s", "stale_pause_s", "near_cap_pct", "blind_kill_after_s", "reset_confirm",
              "reset_drop_confirm", "reset_epoch_move_s", "reset_drop_pct", "near_zero_pct", "reset_min_gap_s",
              "reopen_margin_pct", "pace_margin_pct", "max_starts_per_hour", "failed_cycles_kill", "kill_grace_s", "nice"):
        num(k, cfg[k], lo=0)
    for k in ("active_from", "active_until"): time_ok(k, cfg[k])
    num("lander.every_s", cfg["lander"]["every_s"], lo=60); num("lander.max_tries", cfg["lander"]["max_tries"], lo=1, integer=True)
    time_ok("lander.until", cfg["lander"]["until"])
    for n, p in cfg["pools"].items():
        if p.get("meter") not in METERS: errs.append("pool %s: meter must be one of %s" % (n, METERS))
        if p["parent"] and p["parent"] not in cfg["pools"]: errs.append("pool %s: unknown parent %s" % (n, p["parent"]))
        if p["epoch0_resets_at"]: time_ok("pool %s epoch0_resets_at" % n, p["epoch0_resets_at"])
        num("pool %s per_run_pct" % n, p["per_run_pct"], lo=0, hi=100)
        num("pool %s max_workers" % n, p["max_workers"], lo=0, none_ok=True, integer=True)
        num("pool %s five_hour_max" % n, p["five_hour_max"], lo=0, hi=100, none_ok=True)
        num("pool %s meter_every_s" % n, p["meter_every_s"], lo=0)
        if not isinstance(p["caps"], list): errs.append("pool %s: caps must be a list" % n); continue
        for i, r in enumerate(p["caps"]):
            w = "pool %s cap %d" % (n, i)
            if not isinstance(r, dict): errs.append(w + ": must be an object"); continue
            num(w + " max", r.get("max"), lo=0, hi=100)
            ep = r.get("epoch")
            if ep is not None and not ((isinstance(ep, int) and not isinstance(ep, bool) and ep >= 0) or re.fullmatch(r"\d+\+", str(ep))):
                errs.append(w + ": epoch must be N or \"N+\" (N >= 0; epoch -1, the pre-blast week, is closed by design)")
            for k in ("from", "until"): time_ok(w, r.get(k))
            if "pace" in r:
                pc = r["pace"]
                if not isinstance(pc, dict) or "to" not in pc or "by" not in pc: errs.append(w + ": pace needs to and by"); continue
                num(w + " pace.to", pc["to"], lo=0, hi=100)
                if pc.get("from", "reset") != "reset": num(w + " pace.from", pc.get("from"), lo=0, hi=100)
                time_ok(w + " pace.by", pc["by"])
                if pc.get("start", "reset") != "reset": time_ok(w + " pace.start", pc.get("start"))
    for l in cfg["lanes"]:
        n = l.get("name", "?")
        if not re.fullmatch(re.escape(cfg["prefix"]) + r"[A-Za-z0-9_]+", str(n)):
            errs.append("lane %s: name must be %s<letters/digits> (keeps it apart from hand lanes and the terra* pacer)" % (n, cfg["prefix"]))
        if n in names: errs.append("lane %s: duplicate name" % n)
        names.add(n)
        if re.fullmatch(re.escape(cfg["prefix"]) + r"Land\d+", str(n)): errs.append("lane %s: name reserved for the lander" % n)
        if l.get("runner") not in RUNNERS: errs.append("lane %s: runner must be one of %s" % (n, list(RUNNERS)))
        if l["kind"] not in KINDS: errs.append("lane %s: kind must be one of %s" % (n, KINDS))
        if not l.get("model"): errs.append("lane %s: needs model" % n)
        if not l.get("list"): errs.append("lane %s: needs list" % n)
        num("lane %s par" % n, l["par"], lo=1, integer=True)
        num("lane %s priority" % n, l["priority"])
        num("lane %s max_runs" % n, l["max_runs"], lo=0, none_ok=True, integer=True)
        num("lane %s max_attempts" % n, l["max_attempts"], lo=1, integer=True)
        for k in ("limit", "min_bytes", "max_bytes"): num("lane %s %s" % (n, k), l[k], lo=0, none_ok=True, integer=True)
        if not isinstance(l["also_done"], list): errs.append("lane %s: also_done must be a list" % n)
        p = cfg["pools"].get(l.get("pool"))
        if not p: errs.append("lane %s: unknown pool %s" % (n, l.get("pool"))); continue
        m, meter = l.get("model") or "", p.get("meter")
        if l.get("runner") == "claude" and meter not in ("claude", "fable"):
            errs.append("lane %s: a claude runner spends the Claude weekly; pool %s meters %s" % (n, l["pool"], meter))
        if l.get("runner") == "claude" and ("fable" in m.lower()) != (meter == "fable"):
            errs.append("lane %s: Fable models belong in the fable pool (and only they)" % n)
        if l.get("runner") == "opencode" and re.match(r"(openai|codex)/", m) and meter != "chatgpt":
            errs.append("lane %s: %s spends the ChatGPT plan; pool %s meters %s" % (n, m, l["pool"], meter))
        for k in ("start", "stop"): time_ok("lane " + n, l.get(k))
        if not isinstance(l["env"], dict): errs.append("lane %s: env must be an object" % n); continue
        for k, v in l["env"].items():
            if not re.fullmatch(r"[A-Z_][A-Z0-9_]*", k) or "\n" in str(v):
                errs.append("lane %s: bad env %s" % (n, k))
            if k in ("BATCH", "INNER", "MODEL", "OC_MODEL", "PAR", "PINS"):
                errs.append("lane %s: env %s is set by the controller" % (n, k))
    for g in cfg["allow_overlap"]:
        for n in g:
            if n not in names: errs.append("allow_overlap: unknown lane %s" % n)
    return errs


def overlap_allowed(cfg, a, b):
    return any(a in g and b in g for g in cfg["allow_overlap"])


def lane_pools(cfg, lane):
    """The pools a lane spends: its own and its pool's parent (fable -> claude)."""
    p = lane["pool"]; out = [p]
    if cfg["pools"][p]["parent"]: out.append(cfg["pools"][p]["parent"])
    return out


# ---------------------------------------------------------------- meters and resets

def _anchor(pcfg):
    return T(pcfg["epoch0_resets_at"]) if pcfg and pcfg.get("epoch0_resets_at") else None


def observe(cfg, pstate, reading, now, pcfg=None):
    """Fold one meter reading into the pool state; return event strings.

    reading = {"used": PCT, "reset": EPOCH_OR_None, "t": WHEN_READ, "five_hour": PCT?} or None (unreadable).
    pstate["used"] is the value decisions use. A reset is believed only when readings agree:
      - the reset time moved by > reset_epoch_move_s AND USED is low (dropped by > reset_drop_pct, or to
        near_zero_pct or less): reset_confirm readings. A moved reset time with USED still high waits (a
        two-stage reset: the time moves first, the meter minutes later; counting both would double-count).
      - USED alone fell to near zero (a banked credit redeemed, reset time unchanged): reset_drop_confirm readings.
    No reset within reset_min_gap_s of the last one. While a reset is pending, decisions use the higher of the
    last confirmed value and the new reading (fail safe both ways: a 0% glitch starts nothing, and a real rise
    during a pending period is still seen).
    """
    ev = []
    if reading is None or not _num(reading.get("used")) or now - reading.get("t", now) > cfg["meter_max_age_s"]:
        if "unreadable_since" not in pstate:
            pstate["unreadable_since"] = now; ev.append("meter unreadable")
        return ev
    used, reset = float(reading["used"]), reading.get("reset")
    if pstate.pop("unreadable_since", None) is not None: ev.append("meter readable again")
    pstate["last_good_t"] = now
    pstate["five_hour"] = reading.get("five_hour")
    if "epoch" not in pstate:   # first reading ever: epoch 0, or -1 before the anchored week
        anchor = _anchor(pcfg)
        e = -1 if anchor and reset is not None and reset < anchor - cfg["reset_epoch_move_s"] else 0
        pstate.update(epoch=e, base_reset=reset, used=used, confirmed=used, epoch_start=now, epoch_start_used=used,
                      pending=0, pace0={})
        return ev + ["first reading %.1f%%, epoch %d" % (used, e)]
    base, last = pstate.get("base_reset"), pstate.get("confirmed", pstate["used"])
    moved = reset is not None and base is not None and reset - base > cfg["reset_epoch_move_s"]
    low = last - used > cfg["reset_drop_pct"] or (used <= cfg["near_zero_pct"] and last >= 2 * cfg["near_zero_pct"])
    recent = now - pstate.get("last_reset_t", -1e18) < cfg["reset_min_gap_s"]
    if (moved or low) and not recent:
        need = cfg["reset_confirm"] if moved else cfg["reset_drop_confirm"]
        if low: pstate["pending"] = pstate.get("pending", 0) + 1
        if low and pstate["pending"] >= need:
            pstate.update(epoch=pstate["epoch"] + 1, base_reset=reset, used=used, confirmed=used, epoch_start=now,
                          epoch_start_used=used, pending=0, closed=False, last_reset_t=now, pace0={})
            ev.append("RESET: epoch %d starts at %.1f%%" % (pstate["epoch"], used))
        else:
            pstate["used"] = max(last, used)
            if not low: pstate["confirmed"] = pstate["used"]   # time moved, meter still high: keep tracking rises
            ev.append("possible reset (%.1f%%, reset time %s): waiting for confirmation" % (used, iso(reset)))
        return ev
    if pstate.get("pending"): ev.append("reset not confirmed (%.1f%%): ignored" % used)
    pstate["pending"] = 0; pstate["used"] = pstate["confirmed"] = used
    if moved and recent:   # the second stage of a reset already counted: adopt the new reset time
        pstate["base_reset"] = reset
    if base is None and reset is not None: pstate["base_reset"] = reset
    return ev


def _epoch_ok(rule, epoch):
    e = rule.get("epoch")
    if e is None: return True
    if isinstance(e, int): return epoch == e
    return epoch >= int(str(e)[:-1])


def cap_for(pcfg, pstate, now):
    """(hard_cap, pace_line_or_None, label) for this pool now; hard 0 when no rule matches.
    Records the meter at a pace's start time in pstate["pace0"] (the ramp's starting value)."""
    epoch = pstate.get("epoch", 0)
    for i, r in enumerate(pcfg["caps"]):
        if not _epoch_ok(r, epoch): continue
        if r.get("from") and now < T(r["from"]): continue
        if r.get("until") and now >= T(r["until"]): continue
        pace = None
        if "pace" in r:
            p = r["pace"]
            t0 = pstate.get("epoch_start", now) if p.get("start", "reset") == "reset" else T(p["start"])
            if p.get("from", "reset") == "reset":
                key = "%d:%d" % (epoch, i); p0 = pstate.setdefault("pace0", {})
                if key not in p0 and now >= t0 and "used" in pstate: p0[key] = pstate["used"]
                v0 = p0.get(key, pstate.get("used", 0.0))
            else:
                v0 = float(p["from"])
            t1, v1 = T(p["by"]), float(p["to"])
            f = 1.0 if now >= t1 or t1 <= t0 else max(0.0, (now - t0) / (t1 - t0))
            pace = min(v0 + (v1 - v0) * f, float(r["max"]))
        return float(r["max"]), pace, r.get("note") or "rule %d" % i
    return 0.0, None, "no cap window"


def pool_status(cfg, name, pstate, inflight, planned, now):
    """{"status": OPEN|PAUSED|CLOSED, "reason", "used", "hard", "pace", "label"} for one pool.

    inflight = runs of this pool's lanes in progress now; planned = workers its eligible lanes would run.
    Mutates pstate["closed"] (the cap latch) and returns a "latch" key when it changes, for the event log.
    """
    pc = cfg["pools"][name]; per = pc["per_run_pct"]
    hard, pace, label = cap_for(pc, pstate, now)
    out = {"hard": hard, "pace": pace, "label": label, "used": pstate.get("used"), "epoch": pstate.get("epoch", 0)}
    if "unreadable_since" in pstate or "used" not in pstate:
        blind = now - pstate.get("last_good_t", pstate.get("unreadable_since", now))
        if blind > cfg["blind_kill_after_s"]:
            return dict(out, status="CLOSED", reason="meter unreadable %d min: fail safe, in-flight killed" % (blind // 60))
        return dict(out, status="PAUSED", reason="meter unreadable: fail safe, no new runs")
    used = pstate["used"]
    if hard <= 0:
        return dict(out, status="CLOSED", reason="outside every cap window (%s)" % label)
    stop_at = hard - inflight * per
    if used >= stop_at:
        latch = not pstate.get("closed"); pstate["closed"] = True
        r = dict(out, status="CLOSED", reason="meter %.1f%% >= cap %.0f%% - %d in flight x %.2f" % (used, hard, inflight, per))
        return dict(r, latch="closed at cap") if latch else r
    if pstate.get("closed"):
        reopen = hard - max(planned, 1) * per - cfg["reopen_margin_pct"]
        if used >= reopen:
            return dict(out, status="CLOSED", reason="cap hit earlier; reopens below %.1f%% (meter %.1f%%)" % (reopen, used))
        pstate["closed"] = False; out["latch"] = "reopened (meter %.1f%% < %.1f%%)" % (used, reopen)
    age = now - pstate.get("last_good_t", now)
    if age > cfg["stale_pause_s"] and hard - used <= cfg["near_cap_pct"]:
        return dict(out, status="PAUSED", reason="no fresh reading for %d min within %.0f points of the cap" % (age // 60, cfg["near_cap_pct"]))
    fh = pstate.get("five_hour")
    if pc["five_hour_max"] is not None and _num(fh) and fh >= pc["five_hour_max"]:
        return dict(out, status="PAUSED", reason="five-hour window %.0f%% >= %.0f%%" % (fh, pc["five_hour_max"]))
    if pace is not None and (used >= pace or (pstate.get("paced") and used >= pace - cfg["pace_margin_pct"])):
        pstate["paced"] = True
        return dict(out, status="PAUSED", reason="meter %.1f%% at the pace line %.1f%% (resumes below %.1f%%)" % (
            used, pace, pace - cfg["pace_margin_pct"]))
    pstate["paced"] = False
    return dict(out, status="OPEN", reason="meter %.1f%% < cap %.0f%%" % (used, hard))


# ---------------------------------------------------------------- lanes

RANK = {"OPEN": 0, "PAUSED": 1, "CLOSED": 2}


def decide(cfg, state, snap, now):
    """One supervisor decision. Returns (actions, pools, lanes_report, events).

    snap = {"off": bool, "strays": {batch: nprocs}, "lanes": {name: {"running", "inflight", "procs", "root",
            "paused", "stopped", "remaining", "runs"}}}
    running = any process of the lane exists (root, wrappers or bare model processes); a lane is never started
    while any of its processes live (no doubled workers). Actions are dicts:
      {"op": "start"|"pause"|"resume"|"stop", "lane": NAME, "kill": bool, "reason": str}
      {"op": "land"}
    """
    actions, events, report = [], [], {}
    lanes = sorted(cfg["lanes"], key=lambda l: -l["priority"])
    L = snap["lanes"]
    st_lanes = state.setdefault("lanes", {})
    act = active(cfg, now)

    def window(l):
        if not l["enabled"]: return "retired"
        if not act: return "inactive"
        if l["start"] and now < T(l["start"]): return "before"
        if l["stop"] and now >= T(l["stop"]): return "after"
        return "in"

    def eligible(l):
        s = L[l["name"]]
        return (window(l) == "in" and s["remaining"] > 0
                and not (l["max_runs"] is not None and s["runs"] >= l["max_runs"]))

    pools = {}
    for name in cfg["pools"]:
        mine = [l for l in cfg["lanes"] if name in lane_pools(cfg, l)]
        inflight = sum(L[l["name"]]["inflight"] for l in mine)
        planned = sum(l["par"] for l in mine if eligible(l))
        ps = state.setdefault("pools", {}).setdefault(name, {})
        p = pool_status(cfg, name, ps, inflight, planned, now)
        p["inflight"] = inflight
        if "latch" in p: events.append("pool %s %s" % (name, p["latch"]))
        pools[name] = p

    budget = {n: cfg["pools"][n]["max_workers"] for n in cfg["pools"]}   # None = unlimited
    newload = {n: 0 for n in cfg["pools"]}                              # workers started this cycle

    for l in lanes:
        n, s = l["name"], L[l["name"]]
        ls = st_lanes.setdefault(n, {})
        alive = s["running"] or s["inflight"] or s.get("procs", 0)
        w = window(l)
        if snap["off"]: want, why = "kill", "OFF switch"
        elif w == "retired": want, why = "kill", "retired in config"
        elif w == "inactive": want, why = "kill", "outside the blast window"
        elif w == "before": want, why = ("kill", "before its window") if alive else ("idle", "starts %s" % iso(T(l["start"])))
        elif w == "after": want, why = "kill", "window closed %s" % iso(T(l["stop"]))
        elif s["remaining"] <= 0 and not s["inflight"]: want, why = "idle", "list done"
        elif l["max_runs"] is not None and s["runs"] + s["inflight"] >= l["max_runs"]:
            want, why = ("soft", "run budget %d reached" % l["max_runs"]) if alive else ("idle", "run budget %d used" % l["max_runs"])
        else:
            worst = max((pools[p] for p in lane_pools(cfg, l)), key=lambda p: RANK[p["status"]])
            if worst["status"] == "CLOSED": want, why = "kill", worst["reason"]
            elif worst["status"] == "PAUSED": want, why = "pause", worst["reason"]
            else: want, why = "run", "pool open"
            if want == "run":
                ps = lane_pools(cfg, l)
                over = [p for p in ps if budget[p] is not None and budget[p] < l["par"]]
                if over:
                    want, why = "pause", "pool %s worker budget used by higher-priority lanes" % over[0]
                elif not s["running"]:
                    # start only if this lane's workers fit under every hard cap with headroom
                    for p in ps:
                        pc, pp = cfg["pools"][p], pools[p]
                        need = (pp["inflight"] + newload[p] + l["par"]) * pc["per_run_pct"]
                        if pp["used"] is not None and pp["used"] + need >= pp["hard"]:
                            want, why = "idle", "held: %s at %.1f%% leaves no room for %d more under %.0f%%" % (p, pp["used"], l["par"], pp["hard"])
                            break
                    recent = [t for t in ls.get("starts", []) if now - t < 3600]
                    if want == "run" and len(recent) >= cfg["max_starts_per_hour"]:
                        want, why = "idle", "held: started %d times in the last hour (crash loop?)" % len(recent)
                elif not s.get("root", True):
                    why = "orphaned workers finishing (no lane_run.sh); restarts when they are done"
                if want == "run":
                    for p in ps:
                        if budget[p] is not None: budget[p] -= l["par"]
                        if not s["running"]: newload[p] += l["par"]

        if want == "kill" and alive:
            actions.append({"op": "stop", "lane": n, "kill": True, "reason": why})
        elif want == "soft" and s["running"] and not s["stopped"]:
            actions.append({"op": "stop", "lane": n, "kill": False, "reason": why})
        elif want == "pause" and s["running"] and not s["paused"]:
            actions.append({"op": "pause", "lane": n, "kill": False, "reason": why})
        elif want == "run" and s["running"] and s["paused"]:
            actions.append({"op": "resume", "lane": n, "kill": False, "reason": why})
        elif want == "run" and not s["running"]:
            actions.append({"op": "start", "lane": n, "kill": False, "reason": why})
            ls.setdefault("starts", []).append(now)
            ls["starts"] = [t for t in ls["starts"] if now - t < 3600]
        report[n] = {"want": want, "why": why}

    for b, nprocs in sorted((snap.get("strays") or {}).items()):   # blast-prefixed lanes not (or no longer) in the config
        if nprocs: actions.append({"op": "stop", "lane": b, "kill": True, "reason": "not in the config (stray blast lane)"})

    ld = cfg["lander"]
    lstate = state.setdefault("lander", {})
    if (ld["enabled"] and not snap["off"] and act and (not ld["until"] or now < T(ld["until"]))
            and now - lstate.get("last", 0) >= ld["every_s"]):
        actions.append({"op": "land", "lane": None, "kill": False, "reason": "hourly stray lander"})
        lstate["last"] = now
    return actions, pools, report, events


def step(cfg, state, readings, snap, now):
    """One whole cycle of decisions, shared by the real supervisor and the simulator.

    readings = {pool: reading | None}: a pool present with None = its meter could not be read; a pool absent = no
    new reading this cycle (the last one stays in force until it is meter_max_age_s old).
    snap["cooldowns"] = {pool: True} when a lane model of that pool has a cooldown file: it is cleared whenever the
    pool is OPEN on a fresh reading (run_one_oc.sh writes one on any non-transient ERROR, an idle kill included,
    and its workers then wait for it forever) and after a confirmed reset when clear_cooldowns_on_reset.
    Returns (actions, pools, lanes_report, events)."""
    events = []
    pstates = state.setdefault("pools", {})
    if not snap["off"] and active(cfg, now):   # OFF or outside the window: nothing is read
        for name in cfg["pools"]:
            ps = pstates.setdefault(name, {})
            pc = cfg["pools"][name]
            if name in readings: ev = observe(cfg, ps, readings[name], now, pc)
            elif now - ps.get("last_good_t", now) > cfg["meter_max_age_s"]: ev = observe(cfg, ps, None, now, pc)
            else: ev = []
            events += ["pool %s: %s" % (name, e) for e in ev]
    resets = [n for n in cfg["pools"] if any(e.startswith("pool %s: RESET" % n) for e in events)]
    actions, pools, report, ev2 = decide(cfg, state, snap, now)
    cds = snap.get("cooldowns") or {}
    pre = []
    for n in cfg["pools"]:
        fresh_open = readings.get(n) is not None and pools[n]["status"] == "OPEN" and not snap["off"]
        if cds.get(n) and (fresh_open or (n in resets and cfg["pools"][n]["clear_cooldowns_on_reset"])):
            pre.append({"op": "clear_cooldowns", "pool": n, "lane": None, "kill": False,
                        "reason": "reset" if n in resets else "pool open on a fresh reading"})
    return pre + actions, pools, report, events + ev2


def describe(a):
    """Short action string (the simulator's and tests' vocabulary): "start blastA", "stop blastA kill", "land"."""
    if a["op"] == "land": return "land"
    if a["op"] == "clear_cooldowns": return "clear_cooldowns %s" % a["pool"]
    return "%s %s%s" % (a["op"], a["lane"], " kill" if a.get("kill") else "")
