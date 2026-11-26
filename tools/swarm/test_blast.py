"""Tests of the reset-blast controller (tools/swarm/blast.py, blast_policy.py, blast_sim.py).

    python3 -m unittest tools/swarm/test_blast.py -v

1. Every simulation scenario in queue/blast/scenarios/ passes (scripted ones and the modelled end-to-end run of
   queue/blast/blast.json).
2. Policy units: pace line, worker budget by priority, run budget, crash-loop hold, start headroom, validation
   (incl. types), epoch anchor, resets.
3. Real processes in a throwaway fake repo (dummy lane_run.sh / run_one_*.sh / a sleeping "opencode"): start,
   exact recognition, kill without any result or cooldown written, orphans and bare models, stray lanes, OFF,
   failed cycles -> emergency stop, meters that lie or break, cooldown clearing, retries and repair lanes.
4. The stray lander against a throwaway git repo (fake integrate.py / Makefile / unit test): commit, rollback,
   retry one at a time with a try limit, refuse rule-unclean matches, repair lanes through honest_swap.py.
"""
import glob, json, os, shutil, signal, subprocess, sys, tempfile, time, unittest
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import blast, blast_policy as P, blast_sim

REPO = os.path.normpath(os.path.join(HERE, "../.."))
SCEN = os.path.join(REPO, "queue/blast/scenarios")


def slurp(p):
    with open(p) as f: return f.read()


def write(p, text, mode=None):
    os.makedirs(os.path.dirname(p), exist_ok=True)
    with open(p, "w") as f: f.write(text)
    if mode: os.chmod(p, mode)


class Scenarios(unittest.TestCase):
    def test_all_scenarios_pass(self):
        files = [f for f in sorted(glob.glob(SCEN + "/*.json")) if not f.endswith("sim_config.json")]
        self.assertGreaterEqual(len(files), 12)
        for f in files:
            with self.subTest(scenario=os.path.basename(f)):
                ok, out = blast_sim.simulate(f, quiet=True)
                self.assertTrue(ok, "\n".join(out))

    def test_shipped_config_is_valid(self):
        cfg = P.normalize(json.loads(slurp(os.path.join(REPO, "queue/blast/blast.json"))))
        self.assertEqual(P.validate(cfg), [])


def base_cfg(**over):
    raw = {"prefix": "blast", "lander": {"enabled": False},
           "pools": {"chatgpt": {"meter": "chatgpt", "per_run_pct": 0.5, "caps": [{"max": 87}]}},
           "lanes": [{"name": "blastA", "runner": "opencode", "model": "openai/gpt-6.2-astra", "pool": "chatgpt",
                      "list": "x", "par": 2, "priority": 90},
                     {"name": "blastB", "runner": "opencode", "model": "openai/gpt-6.1-terra", "pool": "chatgpt",
                      "list": "x", "par": 2, "priority": 10}]}
    raw.update(over)
    return P.normalize(raw)


def lane(**kw):
    d = dict(running=False, inflight=0, paused=False, stopped=False, remaining=10, runs=0); d.update(kw)
    d.setdefault("root", d["running"]); d.setdefault("procs", 2 if d["running"] else 0)
    return d


NOW = P.T("2026-11-28T12:00Z")


def run(cfg, state, lanes, used=None, off=False, now=NOW, **snap):
    readings = {"chatgpt": {"used": used, "reset": P.T("2026-12-03T19:10Z"), "t": now}} if used is not None else {}
    acts, pools, rep, ev = P.step(cfg, state, readings, dict({"off": off, "lanes": lanes}, **snap), now)
    return [P.describe(a) for a in acts], pools, rep, ev


class Policy(unittest.TestCase):
    def test_pace_line_pauses_then_resumes(self):
        cfg = base_cfg()
        cfg["pools"]["chatgpt"]["caps"] = [{"max": 87, "pace": {"start": "2026-11-28T00:00Z", "from": 0, "to": 80, "by": "2026-11-29T00:00Z"}}]
        st = {}
        a, pools, *_ = run(cfg, st, {"blastA": lane(running=True, inflight=2), "blastB": lane(running=True, inflight=2)}, used=45)
        self.assertAlmostEqual(pools["chatgpt"]["pace"], 40.0)   # half way through the ramp
        self.assertEqual(sorted(a), ["pause blastA", "pause blastB"])
        a, *_ = run(cfg, st, {"blastA": lane(running=True, paused=True, inflight=2),
                              "blastB": lane(running=True, paused=True, inflight=2)}, used=45, now=NOW + 6 * 3600)
        self.assertEqual(sorted(a), ["resume blastA", "resume blastB"])   # the line rose to 60%

    def test_pace_from_reset_starts_at_the_start_time(self):
        """Hand-lane use before the pace start does not pin the line: its start value is the meter at the start."""
        cfg = base_cfg()
        cfg["pools"]["chatgpt"]["caps"] = [{"max": 87, "pace": {"start": "2026-11-28T12:00Z", "to": 80, "by": "2026-11-29T12:00Z"}}]
        st = {}
        _, pools, *_ = run(cfg, st, {"blastA": lane(), "blastB": lane()}, used=10, now=NOW - 7200)
        _, pools, *_ = run(cfg, st, {"blastA": lane(), "blastB": lane()}, used=30, now=NOW)
        self.assertAlmostEqual(pools["chatgpt"]["pace"], 30.0)
        _, pools, *_ = run(cfg, st, {"blastA": lane(), "blastB": lane()}, used=31, now=NOW + 43200)
        self.assertAlmostEqual(pools["chatgpt"]["pace"], 55.0)

    def test_worker_budget_goes_by_priority(self):
        cfg = base_cfg(); cfg["pools"]["chatgpt"]["max_workers"] = 3
        a, _, rep, _ = run(cfg, {}, {"blastA": lane(), "blastB": lane()}, used=10)
        self.assertEqual(a, ["start blastA"])
        self.assertIn("worker budget", rep["blastB"]["why"])

    def test_run_budget_soft_stops(self):
        cfg = base_cfg(); cfg["lanes"][0]["max_runs"] = 5
        a, *_ = run(cfg, {}, {"blastA": lane(running=True, inflight=2, runs=3), "blastB": lane(running=True, inflight=2)}, used=10)
        self.assertEqual(a, ["stop blastA"])   # STOP file only: the 2 runs in flight finish (3 + 2 = 5)

    def test_crash_loop_is_held(self):
        cfg = base_cfg(); st = {}
        for i in range(4):
            a, *_ = run(cfg, st, {"blastA": lane(), "blastB": lane(remaining=0)}, used=10, now=NOW + i * 240)
            self.assertEqual(a, ["start blastA"])
        a, _, rep, _ = run(cfg, st, {"blastA": lane(), "blastB": lane(remaining=0)}, used=10, now=NOW + 4 * 240)
        self.assertEqual(a, []); self.assertIn("crash loop", rep["blastA"]["why"])

    def test_start_needs_headroom(self):
        cfg = base_cfg()
        a, _, rep, _ = run(cfg, {}, {"blastA": lane(), "blastB": lane()}, used=85)
        self.assertEqual(a, ["start blastA"])            # 85 + 2 x 0.5 = 86 < 87
        self.assertIn("no room", rep["blastB"]["why"])  # 85 + (2 + 2) x 0.5 = 87

    def test_retired_lane_is_killed(self):
        cfg = base_cfg(); cfg["lanes"][1]["enabled"] = False
        a, *_ = run(cfg, {}, {"blastA": lane(running=True, inflight=2), "blastB": lane(running=True, inflight=1)}, used=10)
        self.assertEqual(a, ["stop blastB kill"])

    def test_outside_active_window_nothing_runs_or_is_read(self):
        cfg = base_cfg(active_from="2026-11-28T13:00Z")
        st = {}
        a, *_ = run(cfg, st, {"blastA": lane(running=True, inflight=1), "blastB": lane()}, used=10)
        self.assertEqual(a, ["stop blastA kill"])
        self.assertNotIn("used", st["pools"]["chatgpt"])   # the reading was not folded in

    def test_lander_hourly_not_when_off(self):
        cfg = base_cfg(lander={"enabled": True}); st = {}
        lanes = {"blastA": lane(remaining=0), "blastB": lane(remaining=0)}
        self.assertEqual(run(cfg, st, lanes, used=10)[0], ["land"])
        self.assertEqual(run(cfg, st, lanes, used=10, now=NOW + 1800)[0], [])
        self.assertEqual(run(cfg, st, lanes, used=10, now=NOW + 3600, off=True)[0], [])
        self.assertEqual(run(cfg, st, lanes, used=10, now=NOW + 3700)[0], ["land"])

    def test_reset_needs_confirmation_and_ignores_jitter(self):
        cfg = base_cfg(); ps = {}
        R = P.T("2026-12-03T19:10Z")
        P.observe(cfg, ps, {"used": 80, "reset": R, "t": 0}, 0)
        for i, (u, r) in enumerate([(80.5, R + 1), (81, R - 1), (81, R + 2)]):
            self.assertFalse(any("RESET" in e or "possible" in e for e in P.observe(cfg, ps, {"used": u, "reset": r, "t": i + 1}, i + 1)))
        self.assertEqual(ps["epoch"], 0)
        P.observe(cfg, ps, {"used": 0, "reset": R + 3 * 86400, "t": 10}, 10)
        self.assertEqual((ps["epoch"], ps["used"]), (0, 81))    # not yet believed: decisions still use 81%
        P.observe(cfg, ps, {"used": 0.2, "reset": R + 3 * 86400, "t": 11}, 11)
        self.assertEqual((ps["epoch"], ps["used"]), (1, 0.2))

    def test_epoch0_anchor(self):
        """Started before the blast week's reset: that week is epoch -1 (closed), its reset starts epoch 0."""
        cfg = base_cfg(); cfg["pools"]["chatgpt"].update(epoch0_resets_at="2026-12-03T19:10Z", caps=[{"epoch": 0, "max": 87}])
        st, lanes = {}, {"blastA": lane(), "blastB": lane(remaining=0)}
        old = {"chatgpt": {"used": 60, "reset": P.T("2026-11-26T19:10:11Z"), "t": NOW}}
        acts, pools, _, ev = P.step(cfg, st, old, {"off": False, "lanes": lanes}, NOW)
        self.assertEqual((acts, st["pools"]["chatgpt"]["epoch"], pools["chatgpt"]["status"]), ([], -1, "CLOSED"))
        new = {"chatgpt": {"used": 0.5, "reset": P.T("2026-12-03T19:10:12Z"), "t": NOW + 240}}
        P.step(cfg, st, new, {"off": False, "lanes": lanes}, NOW + 240)
        new["chatgpt"]["t"] = NOW + 480
        acts, *_ = P.step(cfg, st, new, {"off": False, "lanes": lanes}, NOW + 480)
        self.assertEqual(st["pools"]["chatgpt"]["epoch"], 0)
        self.assertEqual([P.describe(a) for a in acts], ["start blastA"])

    def test_validation(self):
        cfg = base_cfg()
        cfg["lanes"][0]["name"] = "terraX"                         # would be paced by chatgpt_pacer.sh
        cfg["lanes"][1]["env"] = {"BATCH": "x"}
        cfg["lanes"].append(dict(P.LANE_DEFAULTS, name="blastC", runner="claude", model="claude-fable-5-2",
                                 pool="chatgpt", list="x"))
        errs = "\n".join(P.validate(cfg))
        self.assertIn("lane terraX: name", errs)
        self.assertIn("env BATCH is set by the controller", errs)
        self.assertIn("claude runner spends the Claude weekly", errs)

    def test_validation_types(self):
        """Review finding 1: a string cap or a pace "from": "rest" is refused at load, not raised every cycle."""
        cfg = base_cfg()
        cfg["pools"]["chatgpt"]["caps"] = [{"max": "87", "pace": {"from": "rest", "to": 80, "by": "2026-11-29T00:00Z"}}]
        cfg["pools"]["chatgpt"]["per_run_pct"] = "0.5"
        cfg["lanes"][0]["par"] = 2.5
        errs = "\n".join(P.validate(cfg))
        for s in ("cap 0 max: must be a number", "pace.from: must be a number", "per_run_pct: must be a number",
                  "lane blastA par: must be a whole number"):
            self.assertIn(s, errs)


# ---------------------------------------------------------------- real processes in a fake repo

LANE_RUN = r"""#!/bin/bash
# dummy lane_run.sh: same shape as the real one (exports VAR=value args, xargs over functions.txt)
cd "$(dirname "$0")/../.." || exit 1
B=$1; shift; export BATCH=$B
for kv in "$@"; do export "$kv"; done
xargs -r -P ${PAR:-1} -L 1 tools/swarm/run_one_from.sh < "queue/$B/functions.txt"
touch "queue/$B/DONE"
"""
RUN_FROM = r"""#!/bin/bash
[ -f "queue/$BATCH/STOP" ] && exit 0
while [ -f "queue/$BATCH/PAUSE" ]; do sleep 1; done
exec /bin/bash "$(dirname "$0")/run_one_oc.sh" "$1" "$2"
"""
RUN_OC = r"""#!/bin/bash
# dummy worker: a long "model" run, then (as run_one_oc.sh does on an ERROR) a cooldown file and a result row;
# a clean kill must prevent both
bash -c 'exec -a opencode sleep 300'
echo "$(date -Is) dummy" > "queue/$BATCH/COOLDOWN.test"
echo "{\"func\": \"$1\", \"segment\": \"$2\", \"verified\": \"ERROR\"}" >> "queue/$BATCH/results.jsonl"
"""


def fake_repo(tmp, lanes=None):
    for n, t in (("lane_run.sh", LANE_RUN), ("run_one_from.sh", RUN_FROM), ("run_one_oc.sh", RUN_OC)):
        write(os.path.join(tmp, "tools/swarm", n), t, 0o755)
    write(os.path.join(tmp, "queue/blast/list.tsv"),
          "seg\tfunc\tbytes\tstart_from\n" + "".join("file001\tfunc_8000%04X\t%d\t\n" % (i, 100 + i) for i in range(6)))
    write(os.path.join(tmp, "matched/file001/func_80000005.c"), "/* landed */\n")
    pre = "blastT%d" % os.getpid()
    cfg = {"repo": tmp, "prefix": pre, "cycle_s": 1, "kill_grace_s": 2, "lander": {"enabled": False},
           "pools": {"chatgpt": {"meter": "chatgpt", "per_run_pct": 0.5, "caps": [{"max": 87}]}},
           "lanes": lanes if lanes is not None else [
               {"name": pre + "x", "runner": "opencode", "model": "openai/gpt-6.1-terra", "pool": "chatgpt",
                "list": "queue/blast/list.tsv", "par": 2}]}
    write(os.path.join(tmp, "queue/blast/blast.json"), json.dumps(cfg))
    return blast.Ctx(os.path.join(tmp, "queue/blast/blast.json"))


def wait_for(cond, timeout=10):
    end = time.time() + timeout
    while time.time() < end:
        if cond(): return True
        time.sleep(0.2)
    return cond()


class RealProcesses(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.mkdtemp(prefix="blasttest")
        self.ctx = fake_repo(self.tmp); self.lane = self.ctx.cfg["lanes"][0]; self.b = self.lane["name"]
        self.home = blast.HOME; blast.HOME = self.tmp   # cooldown files, archive path: inside the fake repo
        self.meters = blast.read_meters
        blast.read_meters = lambda ctx, state: {"chatgpt": {"used": 10.0, "reset": 1e9, "t": time.time()}}

    def tearDown(self):
        blast.read_meters = self.meters; blast.HOME = self.home
        for b in (self.b, self.b + "old"): blast.kill_lane(self.ctx, b)   # never leave sleepers behind
        shutil.rmtree(self.tmp, ignore_errors=True)

    def info(self, lane=None):
        return blast.lane_info(self.ctx, lane or self.lane, blast.World(self.ctx))

    def start(self):
        pid = blast.start_lane(self.ctx, self.lane, self.info())
        self.assertTrue(pid)
        self.assertTrue(wait_for(lambda: self.info()["inflight"] == 2))
        return pid

    def gone(self, b=None):
        return wait_for(lambda: not blast.lane_procs(blast.proc_table(), b or self.b), 6)

    def test_lists_attempts_round_robin(self):
        os.makedirs(self.ctx.q(self.b), exist_ok=True)
        write(self.ctx.q(self.b, "results.jsonl"),
              '{"func": "func_80000000", "segment": "file001", "verified": "FAIL"}\n'
              '{"func": "func_80000001", "segment": "file001", "verified": "ERROR"}\n'
              + '{"func": "func_80000002", "segment": "file001", "verified": "FAIL"}\n' * 3)
        write(self.ctx.q("handLane", "results.jsonl"), '{"func": "func_80000003", "segment": "file001", "verified": "FAIL"}\n')
        self.lane["also_done"] = ["handLane"]
        i = self.info()
        self.assertEqual(i["listed"], 6)
        # 2 has 3 attempts (out), 5 is registered; 1 had only an ERROR (retried); 0 and 3 had one attempt each
        self.assertEqual([x[0][-1] for x in i["remaining_items"]], ["1", "4", "0", "3"])
        self.lane["min_bytes"] = 103
        self.assertEqual([x[0] for x in blast.read_list(self.ctx, self.lane)], ["func_80000003", "func_80000004", "func_80000005"])

    def test_best_start_for_a_retry(self):
        W = self.ctx.q(self.b, "work", "func_80000000")
        write(os.path.join(W, ".attempts/1.c"), "int a;\n"); write(os.path.join(W, ".attempts/1.ali"), "700\n")
        write(os.path.join(W, ".attempts/2.c"), "int b;\n"); write(os.path.join(W, ".attempts/2.ali"), "940\n")
        write(os.path.join(W, "context.h"), "/* ctx */\n")
        pin = os.path.join(self.tmp, "pin.c"); write(pin, "int p;\n")   # unscorable here (no try_func): -1
        got = blast.best_start(self.ctx, self.lane, "func_80000000", "file001", pin, {})
        self.assertEqual(slurp(got), "int b;\n")
        self.assertTrue(os.path.exists(os.path.join(os.path.dirname(got), "context.h")))

    def test_start_detect_kill_writes_no_result_or_cooldown(self):
        self.start()
        procs = blast.lane_procs(blast.proc_table(), self.b)
        self.assertEqual(sum(1 for p in procs if blast.is_model(p)), 2)
        self.assertFalse(any(blast.is_root(p, self.b + "y") for p in procs))
        self.assertGreaterEqual(blast.kill_lane(self.ctx, self.b), 6)   # root, xargs, 2 wrappers, 2 "opencode"
        self.assertTrue(self.gone()); time.sleep(0.5)
        self.assertFalse(os.path.exists(self.ctx.q(self.b, "results.jsonl")), "a killed run recorded a result")
        self.assertFalse(os.path.exists(self.ctx.q(self.b, "COOLDOWN.test")), "a killed run wrote a cooldown")
        ev = slurp(self.ctx.p("events.log"))
        self.assertIn("start %s" % self.b, ev); self.assertIn("(SIGTERM): opencode", ev)

    def kill_matching(self, pred):
        for p in blast.lane_procs(blast.proc_table(), self.b):
            if pred(p): blast.signal_exact(self.ctx, p, signal.SIGKILL)

    def test_orphaned_workers_are_not_doubled(self):
        """Review finding 3: lane_run.sh and xargs die, the workers run on: no second set is started."""
        self.start()
        self.kill_matching(lambda p: blast.root_batch(p) or os.path.basename(p.argv[0]) == "xargs")
        self.assertTrue(wait_for(lambda: not self.info()["root"]))
        i = self.info(); self.assertTrue(i["running"]); self.assertEqual(i["inflight"], 2)
        acts, _ = blast.cycle(self.ctx)
        self.assertEqual([a for a in acts if a["op"] == "start"], [])
        self.assertEqual(sum(1 for p in blast.lane_procs(blast.proc_table(), self.b) if blast.is_model(p)), 2)

    def test_bare_models_are_killed_by_off(self):
        """Review finding 2: only model processes left (wrappers and root gone): OFF still kills them."""
        self.start()
        self.kill_matching(lambda p: not blast.is_model(p))
        self.assertTrue(wait_for(lambda: all(blast.is_model(p) for p in blast.lane_procs(blast.proc_table(), self.b))))
        self.assertEqual(self.info()["inflight"], 2)    # bare models count as in flight (they burn quota)
        write(self.ctx.p("OFF"), "")
        acts, _ = blast.cycle(self.ctx)
        self.assertEqual([P.describe(a) for a in acts], ["stop %s kill" % self.b])
        self.assertTrue(self.gone())

    def test_stray_lane_not_in_config_is_killed(self):
        """Review finding 2: a lane deleted from the config is swept."""
        old = dict(self.lane, name=self.b + "old")
        ctx2 = fake_repo(self.tmp, lanes=[old])
        blast.start_lane(ctx2, ctx2.cfg["lanes"][0], blast.lane_info(ctx2, ctx2.cfg["lanes"][0], blast.World(ctx2)))
        self.assertTrue(wait_for(lambda: len(blast.lane_procs(blast.proc_table(), old["name"])) >= 4))
        self.ctx = fake_repo(self.tmp)   # the config without it
        acts, _ = blast.cycle(self.ctx)
        self.assertIn("stop %s kill" % old["name"], [P.describe(a) for a in acts])
        self.assertTrue(self.gone(old["name"]))

    def test_cycle_starts_then_off_kills_then_resumes(self):
        acts, infos = blast.cycle(self.ctx)
        self.assertEqual([P.describe(a) for a in acts], ["start " + self.b])
        self.assertTrue(wait_for(lambda: self.info()["inflight"] == 2))
        self.assertIn("| %s |" % self.b, slurp(self.ctx.p("STATUS.md")))
        acts, _ = blast.cycle(self.ctx)
        self.assertEqual(acts, [])                       # idempotent: the running lane is recognised
        write(self.ctx.p("OFF"), "")
        acts, infos = blast.cycle(self.ctx)
        self.assertEqual([P.describe(a) for a in acts], ["stop %s kill" % self.b])
        self.assertTrue(self.gone())
        self.assertIn("OFF switch is set", slurp(self.ctx.p("STATUS.md")))
        os.remove(self.ctx.p("OFF"))
        acts, _ = blast.cycle(self.ctx)
        self.assertEqual([P.describe(a) for a in acts], ["start " + self.b])

    def test_two_failed_cycles_stop_everything(self):
        """Review finding 1: a failing cycle enforces nothing, so two in a row stop and kill every lane."""
        self.start()
        def boom(ctx): raise RuntimeError("meter parser exploded")
        blast.supervise(self.ctx, max_cycles=1, cycle_fn=boom)
        self.assertTrue(self.info()["running"])          # one failure: still running
        blast.supervise(self.ctx, max_cycles=2, cycle_fn=boom)
        self.assertTrue(self.gone())
        self.assertIn("EMERGENCY STOP", slurp(self.ctx.p("events.log")))

    def test_log_failure_does_not_raise(self):
        os.makedirs(self.ctx.p("events.log.d")); real = self.ctx.dir
        self.ctx.p = lambda *a: os.path.join(real, "events.log.d") if a == ("events.log",) else os.path.join(real, *a)
        blast.log(self.ctx, "disk full?")   # opening a directory for append fails: reported, not raised

    def test_cooldown_cleared_when_pool_open(self):
        """Review finding 4: run_one_oc's plan cooldown is cleared while the pool is open on a fresh reading."""
        cd = os.path.join(self.tmp, ".oc/COOLDOWN.oa-gpt-6.1-terra"); write(cd, "2026-11-27T03:00 openai/gpt-6.1-terra\n")
        acts, _ = blast.cycle(self.ctx)
        self.assertIn("clear_cooldowns chatgpt", [P.describe(a) for a in acts])
        self.assertFalse(os.path.exists(cd))
        self.assertIn("clear cooldown", slurp(self.ctx.p("events.log")))

    def test_meters_that_lie_or_break(self):
        """Review findings 1 and 7: a malformed Fable entry is 'unreadable', not an exception; cx_meter's answer
        counts only if a Codex session file was written during the request."""
        write(os.path.join(self.tmp, ".cache/usage-gate.json"), json.dumps({"t": time.time(), "data": {
            "seven_day": {"utilization": 40, "resets_at": "2026-11-30T23:00:00Z"}, "five_hour": None,
            "limits": [{"kind": "weekly_scoped", "percent": {"oops": 1}, "scope": {"model": {"display_name": "Fable"}}}]}}))
        self.assertEqual(blast.read_claude(self.ctx), {"claude": None, "fable": None})
        sess = os.path.join(self.tmp, ".cx/sessions/2026/11/26/old.jsonl"); write(sess, "{}\n")
        os.utime(sess, (time.time() - 3600, time.time() - 3600))
        write(os.path.join(self.tmp, "tools/swarm/cx_meter.sh"), "#!/bin/bash\necho '50.0 1796325011'\n", 0o755)
        self.assertIsNone(blast.read_chatgpt(self.ctx))   # stale session file: not a reading
        write(os.path.join(self.tmp, "tools/swarm/cx_meter.sh"),
              "#!/bin/bash\ntouch %s\necho '50.0 1796325011'\n" % sess, 0o755)
        self.assertEqual(blast.read_chatgpt(self.ctx)["used"], 50.0)

    def test_repair_lane(self):
        write(os.path.join(self.tmp, "build/rule_check.json"), json.dumps([
            {"seg": "file001", "func": "func_80000005", "hits": [["self-assign", "hard", "x = x;"]]},
            {"seg": "file001", "func": "func_80000004", "hits": [["byte-offset", "soft", "(u8 *)p + 4"]]}]))
        rep = dict(P.LANE_DEFAULTS, name=self.b + "r", runner="opencode", model="openai/gpt-6.1-terra",
                   pool="chatgpt", list="build/rule_check.json", kind="repair")
        i = self.info(rep)
        self.assertEqual([x[:2] for x in i["remaining_items"]], [("func_80000005", "file001")])   # registered, hard hit
        self.assertEqual(blast.resolve_pins(self.ctx, rep, i["remaining_items"])[("func_80000005", "file001")],
                         os.path.join(self.tmp, "matched/file001/func_80000005.c"))
        self.assertEqual(blast.lane_env(rep), {"AB_NOSKIP": "1", "HONEST": "1", "NOTE_FILE": "honest_note.md"})
        write(os.path.join(self.tmp, "queue/honest_swapped.txt"), "file001 func_80000005\n")
        self.assertEqual(self.info(rep)["remaining"], 0)

    def test_check_refuses_unapproved_overlap(self):
        l2 = dict(self.lane, name=self.b + "two")
        ctx = fake_repo(self.tmp, lanes=[self.lane, l2])
        self.assertEqual(blast.check(ctx), 1)
        raw = json.loads(slurp(ctx.config_path)); raw["allow_overlap"] = [[self.b, self.b + "two"]]
        write(ctx.config_path, json.dumps(raw))
        self.assertEqual(blast.check(blast.Ctx(ctx.config_path)), 0)

    def test_pins_from_archive_and_attempt_best(self):
        arch = os.path.join(self.tmp, "arch")
        write(os.path.join(arch, "w/work/func_80000000/.attempts/3.c"), "int x;\n")
        write(os.path.join(arch, "w/work/func_80000000/context.h"), "\n")
        subprocess.run(["tar", "czf", os.path.join(arch, "oldB.work.tar.gz"), "-C", os.path.join(arch, "w"), "work"], check=True)
        write(os.path.join(self.tmp, "queue/x/work/func_80000001/attempt.c"), "int y;\n")
        write(os.path.join(self.tmp, "build/attempt_best.json"), json.dumps(
            {"file001 func_80000001": [0.5, "queue/x/work/func_80000001/attempt.c", "", 0.9, "queue/gone.c", "near"]}))
        write(os.path.join(self.tmp, ".hh-archive-path"), arch)
        pins = blast.resolve_pins(self.ctx, self.lane, [
            ("func_80000000", "file001", "queue/zarch_oldB/work/func_80000000/.attempts/3.c"),
            ("func_80000001", "file001", "queue/missing/work/func_80000001/attempt.c"),
            ("func_80000002", "file001", None)])
        self.assertEqual(slurp(pins[("func_80000000", "file001")]), "int x;\n")
        self.assertTrue(pins[("func_80000000", "file001")].startswith(self.ctx.q(self.b, "from", "oldB")))
        self.assertTrue(os.path.exists(self.ctx.q(self.b, "from/oldB/work/func_80000000/context.h")))
        self.assertTrue(pins[("func_80000001", "file001")].endswith("queue/x/work/func_80000001/attempt.c"))
        self.assertNotIn(("func_80000002", "file001"), pins)


class Small(unittest.TestCase):
    def test_run_capture_survives_timeouts(self):
        self.assertEqual(blast.run_capture(["sleep", "5"], 0.3)[0], -1)
        self.assertEqual(blast.run_capture(["/no/such/program"], 5)[0], -1)

    def test_is_supervisor_any_path(self):
        """Review finding 9: ensure must recognise a supervisor started with a relative path."""
        for argv in (["python3", "tools/swarm/blast.py", "run"], ["/usr/bin/python3", "/x/tools/swarm/blast.py", "run", "--config", "c"]):
            self.assertTrue(blast.is_supervisor(blast.Proc(1, 0, 0, argv, None)))
        self.assertFalse(blast.is_supervisor(blast.Proc(1, 0, 0, ["python3", "blast.py", "summary"], None)))


# ---------------------------------------------------------------- the lander against a throwaway git repo

FAKE_INTEGRATE = r"""import json, os, shutil, sys
B = sys.argv[1]
for l in open("queue/%s/results.jsonl" % B):
    r = json.loads(l); d = "matched/%s" % r["segment"]; os.makedirs(d, exist_ok=True)
    W = "queue/%s/work/%s" % (B, r["func"])
    shutil.copy(W + "/attempt.c", "%s/%s.c" % (d, r["func"]))
"""
MAKEFILE = "all:\n\t@if grep -rqs BROKEN matched; then echo 'build/hybridheaven.z64: FAILED'; else echo 'build/hybridheaven.z64: OK'; fi\n"
FAKE_SWAP = r"""import os, sys
# fake honest_swap.py: swap each repair lane's MATCH into matched/ and record it
for B in sys.argv[1:]:
    for l in open("queue/%s/results.jsonl" % B):
        import json; r = json.loads(l)
        open("matched/%s/%s.c" % (r["segment"], r["func"]), "w").write("/* honest */\n")
        open("queue/honest_swapped.txt", "a").write("%s %s\n" % (r["segment"], r["func"]))
print("swap round: done")
"""


class Lander(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.mkdtemp(prefix="blastland"); t = self.tmp
        os.makedirs(os.path.join(t, ".venv/bin"))
        os.symlink(sys.executable, os.path.join(t, ".venv/bin/python"))
        write(os.path.join(t, "tools/hh/workdir.py"), slurp(os.path.join(REPO, "tools/hh/workdir.py")))
        write(os.path.join(t, "queue/functions.csv"), "func,segment\n" + "".join("func_8000000%d,file001\n" % i for i in range(4)))
        write(os.path.join(t, "tools/swarm/integrate.py"), FAKE_INTEGRATE)
        write(os.path.join(t, "queue/loop/honest_swap.py"), FAKE_SWAP)
        write(os.path.join(t, "tools/hh/test_ok.py"), "import unittest\nclass T(unittest.TestCase):\n    def test(self): pass\n")
        write(os.path.join(t, "Makefile"), MAKEFILE)
        write(os.path.join(t, "src/a.c"), "\n"); write(os.path.join(t, "queue/rejected.jsonl"), "")
        write(os.path.join(t, "matched/file001/func_80000003.c"), "/* registered, with a trick */\n")
        g = lambda *a: subprocess.run(["git"] + list(a), cwd=t, check=True, capture_output=True)
        g("init", "-q"); g("config", "user.email", "t@t"); g("config", "user.name", "t"); g("add", "-A"); g("commit", "-qm", "init")
        self.add_match("blastL1", "func_80000000", "void func_80000000(void) {}\n")
        cfg = {"repo": t, "prefix": "blast", "lander": {"enabled": True, "max_tries": 2},
               "pools": {"claude": {"meter": "claude", "caps": [{"max": 50}]}},
               "lanes": [{"name": "blastL1", "runner": "claude", "model": "claude-sonnet-5-5", "pool": "claude", "list": "x"},
                         {"name": "blastR1", "runner": "claude", "model": "claude-sonnet-5-5", "pool": "claude", "list": "x",
                          "kind": "repair"}]}
        write(os.path.join(t, "queue/blast/blast.json"), json.dumps(cfg))
        self.ctx = blast.Ctx(os.path.join(t, "queue/blast/blast.json"))
        self.orig = blast.rule_hits; blast.rule_hits = lambda ctx, path, func: []

    def add_match(self, b, func, text):
        a = os.path.join(self.tmp, "queue", b, "work", func, "attempt.c"); write(a, text)
        os.utime(a, (time.time() - 7200, time.time() - 7200))
        with open(os.path.join(self.tmp, "queue", b, "results.jsonl"), "a") as f:
            f.write(json.dumps({"func": func, "segment": "file001", "verified": "MATCH"}) + "\n")

    def tearDown(self):
        blast.rule_hits = self.orig; shutil.rmtree(self.tmp, ignore_errors=True)

    def log(self): return subprocess.run(["git", "log", "--format=%s"], cwd=self.tmp, capture_output=True, text=True).stdout
    def has(self, f): return os.path.exists(os.path.join(self.tmp, "matched/file001/%s.c" % f))

    def test_lands_and_commits(self):
        self.assertEqual(blast.land(self.ctx), 0)
        self.assertTrue(self.has("func_80000000"))
        self.assertIn("Land stray honest matches from the blast lanes (blastLand1)", self.log())
        self.assertEqual(blast.load_state(self.ctx)["lander"]["landed"], 1)
        self.assertEqual(blast.land(self.ctx), 0)   # nothing new: no second batch
        self.assertFalse(os.path.exists(os.path.join(self.tmp, "queue/blastLand2")))

    def test_bad_one_is_retried_alone_and_given_up(self):
        """Review finding 8: a failed group is retried one function at a time; the bad one stops after max_tries."""
        self.add_match("blastL1", "func_80000001", "void func_80000001(void) { /* BROKEN */ }\n")
        self.assertEqual(blast.land(self.ctx), 1)
        self.assertTrue(self.has("func_80000000")); self.assertFalse(self.has("func_80000001"))
        self.assertIn("(blastLand2)", self.log())    # group blastLand1 failed, blastLand2 = func_80000000 alone
        blast.land(self.ctx)                          # second try of the bad one
        n = len(glob.glob(os.path.join(self.tmp, "queue/blastLand*")))
        blast.land(self.ctx)                          # max_tries 2 reached: not staged again
        self.assertEqual(len(glob.glob(os.path.join(self.tmp, "queue/blastLand*"))), n)
        self.assertIn("FAILED (make", slurp(self.ctx.p("events.log")))

    def test_unclean_match_is_not_landed(self):
        blast.rule_hits = lambda ctx, path, func: ["self-assign x = x;"]
        self.assertEqual(blast.land(self.ctx), 0)
        self.assertFalse(os.path.exists(os.path.join(self.tmp, "queue/blastLand1")))
        self.assertIn("not rule-clean", slurp(self.ctx.p("events.log")))

    def test_repair_lane_lands_through_honest_swap(self):
        os.remove(os.path.join(self.tmp, "queue/blastL1/results.jsonl"))
        self.add_match("blastR1", "func_80000003", "void func_80000003(void) {}\n")
        self.assertEqual(blast.land(self.ctx), 0)
        self.assertEqual(slurp(os.path.join(self.tmp, "matched/file001/func_80000003.c")), "/* honest */\n")
        self.assertIn("Swap in honest-C repairs from the blast repair lanes", self.log())
        self.assertIn("file001 func_80000003", slurp(os.path.join(self.tmp, "queue/honest_swapped.txt")))


LIVE = os.path.expanduser("~/work/hybrid-heaven-decomp")


@unittest.skipUnless(os.path.exists(os.path.join(LIVE, "tools/hh/srcbuild.py")), "needs the live repo (read only)")
class RuleCheck(unittest.TestCase):
    def test_rule_hits_uses_srcbuild_and_rule_check(self):
        ctx = type("C", (), {"venv_py": os.path.join(LIVE, ".venv/bin/python"), "repo": LIVE})()
        with tempfile.NamedTemporaryFile("w", suffix=".c", delete=False) as f:
            f.write("void func_80000000(s32 a) {\n    s32 x = a;\n    x = x;\n    func_80000001(x);\n}\n")
        with tempfile.NamedTemporaryFile("w", suffix=".c", delete=False) as g:
            g.write("void func_80000000(s32 a) {\n    func_80000001(a + 1);\n}\n")
        try:
            self.assertTrue(any(h.startswith("self-assign") for h in blast.rule_hits(ctx, f.name, "func_80000000")))
            self.assertEqual(blast.rule_hits(ctx, g.name, "func_80000000"), [])
        finally: os.remove(f.name); os.remove(g.name)


if __name__ == "__main__":
    unittest.main()
