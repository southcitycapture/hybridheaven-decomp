"""blast_sim.py: `blast.py simulate SCENARIO.json`: the controller's decision code (blast_policy.step) driven by a
fake world, so no process is started and no meter is read.

Two kinds of scenario (JSON):

Scripted: {"config" | "config_file", "lanes": {name: {...}}, "state": {}, "steps": [...]}
  each step {t, meters {pool: [used, reset(, five_hour)] | null}, do [...], expect [...], expect_not [...]}
  Pools absent from `meters` give no new reading. `do`:
    reboot               every process dies; files and state.json survive
    off / on             the OFF switch
    finish LANE N        N runs of LANE complete
    crash LANE           lane_run.sh dies; its workers keep running (orphans)
    models LANE N        only N bare model processes are left (wrappers and root gone)
    stray BATCH N        N processes of a prefix-named lane that is not in the config
    cooldown POOL        a cooldown file exists for a model of POOL
  expect / expect_not match the start of action strings ("start blastA", "stop blastA kill", "land",
  "clear_cooldowns chatgpt") and event strings ("pool chatgpt: RESET").

Modelled: {"config_file", "model": {...}}: time advances in step_s steps from `from` to `until`; each in-flight
  run costs its pools true_cost per run spread over run_min minutes, plus the owner's own use per hour; resets
  happen at the given times; the meters are read every step. Reports per pool the peak against the cap, the
  spend per epoch, and per lane the runs done vs the list's capacity; `expect` {"max_overshoot_pct": X} fails the
  scenario when a meter ever goes more than X points over the hard cap in force.
"""
import json, os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import blast_policy as P


def _load(path):
    with open(path) as f: sc = json.load(f)
    if sc.get("config"): raw = sc["config"]
    else:
        with open(os.path.join(os.path.dirname(path), sc["config_file"])) as f: raw = json.load(f)
    cfg = P.normalize(raw)
    return sc, cfg, P.validate(cfg)


class FakeWorld:
    """Lanes as numbers: root (lane_run.sh alive), inflight (runs with wrappers), bare (model processes alone)."""
    def __init__(self, cfg, init):
        self.cfg = cfg; self.off = False; self.strays = {}; self.cooldowns = {}
        self.par = {l["name"]: l["par"] for l in cfg["lanes"]}
        self.L = {l["name"]: dict(root=False, inflight=0, bare=0, paused=False, stopped=False, remaining=10, runs=0)
                  for l in cfg["lanes"]}
        for n, v in init.items(): self.L[n].update(v)

    def refill(self, n):
        w = self.L[n]
        if w["root"] and not w["paused"] and not w["stopped"]: w["inflight"] = min(self.par[n], w["remaining"])

    def finish(self, n, k):
        w = self.L[n]; k = min(k, w["inflight"])
        w["runs"] += k; w["remaining"] -= k; w["inflight"] -= k; self.refill(n)
        if w["root"] and w["inflight"] == 0 and (w["remaining"] <= 0 or w["stopped"]): w["root"] = False
        return k

    def snap(self):
        lanes = {}
        for n, w in self.L.items():
            procs = (2 if w["root"] else 0) + 2 * w["inflight"] + w["bare"]
            lanes[n] = dict(running=procs > 0, root=w["root"], procs=procs, inflight=w["inflight"] + w["bare"],
                            paused=w["paused"], stopped=w["stopped"], remaining=w["remaining"], runs=w["runs"])
        return {"off": self.off, "lanes": lanes, "strays": dict(self.strays), "cooldowns": dict(self.cooldowns)}

    def do(self, cmd):
        a = cmd.split()
        if a[0] == "reboot":
            for w in self.L.values(): w.update(root=False, inflight=0, bare=0)
            self.strays = {}
        elif a[0] == "off": self.off = True
        elif a[0] == "on": self.off = False
        elif a[0] == "crash": self.L[a[1]]["root"] = False
        elif a[0] == "models": self.L[a[1]].update(root=False, inflight=0, bare=int(a[2]))
        elif a[0] == "finish": self.finish(a[1], int(a[2]))
        elif a[0] == "stray": self.strays[a[1]] = int(a[2])
        elif a[0] == "cooldown": self.cooldowns[a[1]] = True
        else: raise ValueError("unknown do: %s" % cmd)

    def apply(self, a):
        n = a.get("lane")
        if a["op"] == "start":
            assert not self.snap()["lanes"][n]["running"], "started %s while its processes live" % n
            self.L[n].update(root=True, paused=False, stopped=False, bare=0); self.refill(n)
        elif a["op"] == "pause": self.L[n]["paused"] = True
        elif a["op"] == "resume": self.L[n]["paused"] = False; self.refill(n)
        elif a["op"] == "stop" and a["kill"]:
            if n in self.L: self.L[n].update(root=False, inflight=0, bare=0, stopped=True)
            else: self.strays[n] = 0
        elif a["op"] == "stop": self.L[n]["stopped"] = True
        elif a["op"] == "clear_cooldowns": self.cooldowns[a["pool"]] = False


def _pools_line(pools):
    return ", ".join("%s %s/%.0f %s" % (n, "%.1f%%" % p["used"] if p["used"] is not None else "?", p["hard"], p["status"])
                     for n, p in pools.items())


def simulate(path, quiet=False):
    """Run one scenario; returns (ok, transcript lines)."""
    sc, cfg, errs = _load(path)
    if errs: return False, ["config: " + e for e in errs]
    if "model" in sc: return model(sc, cfg, quiet)
    state = json.loads(json.dumps(sc.get("state", {})))
    W = FakeWorld(cfg, sc.get("lanes", {}))
    ok, out = True, []
    for i, s in enumerate(sc["steps"]):
        now = P.T(s["t"])
        for d in s.get("do", []): W.do(d)
        readings = {}
        for pool, m in (s.get("meters") or {}).items():
            readings[pool] = None if m is None else {"used": m[0], "reset": P.T(m[1]) if isinstance(m[1], str) else m[1],
                                                     "t": now, "five_hour": m[2] if len(m) > 2 else None}
        actions, pools, report, events = P.step(cfg, state, readings, W.snap(), now)
        said = [P.describe(a) for a in actions] + events
        try:
            for a in actions: W.apply(a)
        except AssertionError as e:
            ok = False; out.append("   FAIL step %d: %s" % (i, e))
        out.append("%s  [%s]  %s" % (s["t"], _pools_line(pools), "; ".join(said) or "-"))
        for e in s.get("expect", []):
            if not any(x.startswith(e) for x in said): ok = False; out.append("   FAIL step %d: expected %r" % (i, e))
        for e in s.get("expect_not", []):
            if any(x.startswith(e) for x in said): ok = False; out.append("   FAIL step %d: did not expect %r" % (i, e))
    out.append("PASS" if ok else "FAILED")
    if not quiet: print("\n".join(out))
    return ok, out


def model(sc, cfg, quiet):
    """The modelled end-to-end run (see the module docstring)."""
    m = sc["model"]; t, end, dt = P.T(m["from"]), P.T(m["until"]), m.get("step_s", cfg["cycle_s"])
    lanes = {l["name"]: l for l in cfg["lanes"]}
    init = {}
    for n, lm in m["lanes"].items():
        init[n] = dict(remaining=lm.get("runs", lm.get("functions", 0) * lanes[n]["max_attempts"]))
    W = FakeWorld(cfg, init)
    used = {p: float(v) for p, v in m["start_used"].items()}
    reset_at = {p: P.T(v) for p, v in m["reset_at"].items()}
    resets = sorted(((P.T(r["t"]), r) for r in m.get("resets", [])), key=lambda x: x[0])
    frac = {n: 0.0 for n in lanes}
    state, out, ok = {}, [], True
    peak = {p: (0.0, None, 0.0) for p in cfg["pools"]}   # (overshoot, when, hard)
    spent = {}                                          # (pool, epoch) -> points spent by lanes
    hit = {}
    while t < end:
        while resets and resets[0][0] <= t:
            _, r = resets.pop(0)
            used[r["pool"]] = float(r.get("to", 0.0)); reset_at[r["pool"]] = P.T(r["new_reset"])
            out.append("%s  -- %s reset (%s)" % (P.iso(t), r["pool"], r.get("note", "")))
        readings = {p: {"used": round(used[p], 1), "reset": reset_at[p] + (t % 2), "t": t} for p in cfg["pools"]
                    if p in used}
        actions, pools, report, events = P.step(cfg, state, readings, W.snap(), t)
        for a in actions: W.apply(a)
        said = [P.describe(a) for a in actions if a["op"] != "land"] + [e for e in events if "RESET" in e or "closed" in e or "reopened" in e]
        if said: out.append("%s  [%s]  %s" % (P.iso(t), _pools_line(pools), "; ".join(said)))
        for p, pp in pools.items():
            if pp["hard"] > 0 and p in used and used[p] - pp["hard"] > peak[p][0]: peak[p] = (used[p] - pp["hard"], t, pp["hard"])
            if pp["status"] == "CLOSED" and p not in hit and pp["hard"] > 0: hit[p] = t
        # advance time: in-flight runs spend and finish
        for n, w in W.L.items():
            k = w["inflight"] + w["bare"]
            if not k: continue
            lm = m["lanes"].get(n, {}); rm = lm.get("run_min", 20.0)
            for p in P.lane_pools(cfg, lanes[n]):
                c = lm.get("cost", {}).get(p, cfg["pools"][p]["per_run_pct"] * m.get("cost_factor", 1.0))
                d = k * c * dt / (rm * 60.0)
                used[p] = used.get(p, 0.0) + d
                ep = state["pools"][p].get("epoch", 0)
                spent[(p, ep)] = spent.get((p, ep), 0.0) + d
            frac[n] += w["inflight"] * dt / (rm * 60.0)
            done = int(frac[n]); frac[n] -= done
            if done: W.finish(n, done)
        for p, h in m.get("own_use", {}).items(): used[p] = used.get(p, 0.0) + h * dt / 3600.0
        t += dt
    out.append("== pools")
    for p in cfg["pools"]:
        ov, when, hard = peak[p]
        out.append("%-8s final %.1f%% epoch %d; peak overshoot %+.2f points%s; first closed %s; lane spend by epoch: %s" % (
            p, used.get(p, 0), state["pools"][p].get("epoch", 0), ov, " (cap %.0f at %s)" % (hard, P.iso(when)) if when else "",
            P.iso(hit.get(p)), ", ".join("e%d %.1f" % (e, v) for (pp, e), v in sorted(spent.items()) if pp == p) or "-"))
        lim = sc.get("expect", {}).get("max_overshoot_pct")
        if lim is not None and ov > lim: ok = False; out.append("   FAIL: %s went %.2f points over its cap (limit %.2f)" % (p, ov, lim))
    out.append("== lanes (runs done / list capacity in runs)")
    for n, w in W.L.items():
        lm = m["lanes"].get(n, {}); cap = lm.get("runs", lm.get("functions", 0) * lanes[n]["max_attempts"])
        out.append("%-18s %4d / %4d runs%s" % (n, w["runs"], cap, "  (list exhausted)" if w["remaining"] <= 0 else ""))
    out.append("PASS" if ok else "FAILED")
    if not quiet: print("\n".join(out))
    return ok, out


if __name__ == "__main__":
    sys.exit(0 if simulate(sys.argv[1])[0] else 1)
