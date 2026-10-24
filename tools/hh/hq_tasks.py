"""HQ's task list for outside contributors: contrib/tasks.json (published with the repo; no claims server).

  hq_tasks.py refresh                          rebuild the list of unmatched functions, keeping assignments;
                                               assigned tasks that are now in the registry become "done"
  hq_tasks.py assign NAME N [--tier haiku|sonnet|opus] [--max-diff D] [--max-fails K]
                                               give NAME the N best open tasks for that model tier (default sonnet)
  hq_tasks.py assign NAME FUNC@SEG [FUNC@SEG ...] [--tier T]    give NAME these open tasks
  hq_tasks.py release NAME [FUNC@SEG ...]      take back NAME's unfinished tasks (all, or the ones listed)
  hq_tasks.py status                           per contributor: assigned / done
  hq_tasks.py list NAME                        NAME's tasks

A task is one unmatched function: segment, size, difficulty (queue/functions.csv), `loop` (tools/hh/features.py),
`copies` (other unmatched functions with the same shape: propagate.py places them for free once this one matches).
Only buildable functions are listed (no library files, no instructions C can't produce, no jump tables outside the
segments with per-file rodata), and only one function per same-shape group: matching the others is HQ's job.

Choosing for a tier: tasks no open lane holds (an open queue's functions.txt, as loop.py's unclaimed()), within the
tier's difficulty band and tried by at most --max-fails earlier workers (default 4), ranked like pick.py: measured match
rate for that model and band, x 0.6 per earlier failure, x bytes it unlocks / cost. Haiku gets small functions without
loops, Sonnet narrow to mid-size ones, Opus the rest. tools/swarm/loop.py leaves assigned, unfinished tasks alone.
(Most functions still unmatched have had one or more failed attempts here; a fresh worker often gets them anyway.)
"""
import collections, csv, datetime as dt, glob, json, os, re, sys, time
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
sys.path.insert(0, "tools/hh")
TASKS = "contrib/tasks.json"
TIERS = {"haiku": (0, 60, False), "sonnet": (20, 250, True), "opus": (100, 700, True)}   # difficulty band, loops ok
HOLD_HOURS = 12

def load():
    if os.path.exists(TASKS): return json.load(open(TASKS))
    return {"tasks": []}

def save(t):
    t["updated"] = dt.datetime.utcnow().strftime("%Y-%m-%dT%H:%MZ")
    t["about"] = ("Functions HQ hands out to contributors (contrib/README.md). Edited only by HQ "
                  "(tools/hh/hq_tasks.py); contrib/work.sh NAME runs the tasks assigned to NAME.")
    t["tasks"].sort(key=lambda r: (r["segment"], r["func"]))
    lines = ",\n".join("  " + json.dumps(r, sort_keys=True) for r in t["tasks"])
    head = {k: v for k, v in t.items() if k != "tasks"}
    s = json.dumps(head, indent=1, sort_keys=True)[:-2] + ',\n "tasks": [\n' + lines + "\n ]\n}\n"
    tmp = TASKS + ".tmp"; open(tmp, "w").write(s); os.replace(tmp, TASKS)

def key(r): return "%s@%s" % (r["func"], r["segment"])

def refresh(t):
    """Rebuild the open tasks from the current registry; keep every assignment (done ones as a record)."""
    import features as F
    import srcbuild as S
    rows = list(csv.DictReader(open("queue/functions.csv")))
    reg = set(S.registry()); feats = F.features()
    ro_segs = set(open("tools/hh/rodata_segments.txt").read().split()) if os.path.exists("tools/hh/rodata_segments.txt") else set()
    groups = collections.defaultdict(list)
    for r in rows: groups[r["fp"]].append(r)
    old = {key(r): r for r in t["tasks"]}
    out = {}
    for k, r in old.items():                      # assignments stay (done when registered)
        if r.get("assigned"):
            if (r["segment"], r["func"]) in reg: r["status"] = "done"
            out[k] = r
    for fp, g in groups.items():
        if any((r["segment"], r["func"]) in reg for r in g): continue      # a twin is matched: propagation's job
        def ok(r):
            f = feats.get((r["segment"], r["func"]), {})
            if f.get("nonc") or (f.get("jtbl") and r["segment"] not in ro_segs): return False
            return (r["segment"], r["file"]) not in S.LIBFILES and S.file_of(r["segment"], r["func"])
        cands = [r for r in g if ok(r)]
        if not cands: continue
        if any(key(r) in out for r in cands): continue                     # this group is already assigned
        rep = max(cands, key=lambda r: r["segment"] == "main")
        out[key(rep)] = dict(func=rep["func"], segment=rep["segment"], size=int(rep["size"]),
                             difficulty=int(rep["difficulty"]),
                             loop=bool(feats.get((rep["segment"], rep["func"]), {}).get("loop")),
                             copies=len(g) - 1, assigned=None, status="open")
    t["tasks"] = list(out.values())
    return t

def held_by_lanes():
    held = set()
    for q in glob.glob("queue/*/functions.txt"):
        d = os.path.dirname(q)
        if os.path.exists(d + "/DONE") or os.path.exists(d + "/STOP"): continue
        files = [x for x in glob.glob(d + "/*") if os.path.isfile(x)]
        if not files or time.time() - max(map(os.path.getmtime, files)) > 3600 * HOLD_HOURS: continue
        held |= {"%s@%s" % tuple(l.split()[:2]) for l in open(q) if len(l.split()) >= 2}
    return held

def assign(t, name, n, tier, max_diff=None, max_fails=4):
    import pick
    lo, hi, loops = TIERS[tier]
    if max_diff is not None: hi = max_diff
    held = held_by_lanes()
    rows, by, _ = pick.load()
    import features as F
    stats, fails = pick.model_stats(by, F.features(), tier)
    pr = pick.prop_rate()
    cands = []
    for r in t["tasks"]:
        k = key(r)
        if r["assigned"] or k in held: continue
        if not lo <= r["difficulty"] <= hi or (r["loop"] and not loops): continue
        if fails[by[(r["segment"], r["func"])]["fp"]] > max_fails: continue
        b = min(r["difficulty"] // pick.BAND, 12)
        _, _, p, c = stats[(b, r["loop"])]
        p *= pick.FAIL_DECAY ** fails[by[(r["segment"], r["func"])]["fp"]]
        pay = r["size"] + pr * r["size"] * r["copies"]
        cands.append((p * pay / c, r))
    cands.sort(key=lambda x: -x[0])
    today = dt.date.today().isoformat(); got = []
    for _, r in cands:
        if len(got) >= n: break
        if not context_ok(r["segment"], r["func"]):
            print("  skipped %s: its context.h does not compile (fix the registry first)" % key(r)); continue
        r.update(assigned=name, tier=tier, assigned_on=today, status="assigned"); got.append(r)
    return got

def context_ok(seg, func):
    """The worker's context.h (srcbuild.py context) compiles on its own: a clash between registered neighbours makes
    every ./check fail before it starts (found in the first contributor test, file009)."""
    import srcbuild as S, subprocess, tempfile
    with tempfile.TemporaryDirectory() as td:
        open(td + "/context.h", "w").write(S.context_for(seg, func))
        open(td + "/t.c", "w").write('#include "context.h"\n')
        r = subprocess.run([os.path.join(HH, "tools/ido/7.1/cc"), "-c"] + S.CFLAGS + ["-o", td + "/t.o", td + "/t.c"],
                           capture_output=True, text=True)
        return r.returncode == 0

def main(a):
    if not a or a[0] in ("-h", "--help"): print(__doc__); return
    cmd = a[0]; t = load()
    opt = lambda o, d, cast=str: cast(a[a.index(o) + 1]) if o in a else d
    if cmd == "refresh":
        refresh(t); save(t)
        c = collections.Counter(r["status"] for r in t["tasks"])
        print("%s: %d tasks (%s)" % (TASKS, len(t["tasks"]), ", ".join("%d %s" % (v, k) for k, v in sorted(c.items()))))
    elif cmd == "assign":
        name = a[1]; tier = opt("--tier", "sonnet")
        if not re.fullmatch(r"[A-Za-z0-9_-]{1,32}", name): sys.exit("name: 1-32 letters, digits, - or _")
        if tier not in TIERS: sys.exit("tier: one of " + ", ".join(TIERS))
        refresh(t)
        if "@" in a[2]:                           # hand-picked: assign NAME FUNC@SEG ...
            want = {x for x in a[2:] if "@" in x}; got = []
            for r in t["tasks"]:
                if key(r) in want and not r["assigned"]:
                    r.update(assigned=name, tier=tier, assigned_on=dt.date.today().isoformat(), status="assigned"); got.append(r)
            for k in want - {key(r) for r in got}: print("  not an open task: %s" % k)
        else: got = assign(t, name, int(a[2]), tier, opt("--max-diff", None, int), opt("--max-fails", 4, int))
        save(t)
        print("assigned %d tasks to %s (tier %s, %d bytes, difficulty %s):" % (len(got), name, tier, sum(r["size"] for r in got),
              "%d-%d" % (min(r["difficulty"] for r in got), max(r["difficulty"] for r in got)) if got else "-"))
        for r in got: print("  %-14s %-8s size %4d  difficulty %3d%s" % (r["func"], r["segment"], r["size"], r["difficulty"], "  loop" if r["loop"] else ""))
        print("commit %s and publish so %s can pull it" % (TASKS, name))
    elif cmd == "release":
        name, only = a[1], set(a[2:]); n = 0
        for r in t["tasks"]:
            if r.get("assigned") == name and r["status"] != "done" and (not only or key(r) in only):
                r.update(assigned=None, status="open"); r.pop("tier", None); r.pop("assigned_on", None); n += 1
        save(t); print("released %d of %s's tasks" % (n, name))
    elif cmd == "status":
        c = collections.defaultdict(collections.Counter)
        for r in t["tasks"]: c[r.get("assigned") or "(open)"][r["status"]] += 1
        for who, v in sorted(c.items()): print("%-16s %s" % (who, ", ".join("%d %s" % (n, s) for s, n in sorted(v.items()))))
    elif cmd == "list":
        for r in t["tasks"]:
            if r.get("assigned") == a[1]: print("%-14s %-8s %-8s size %4d  difficulty %3d" % (r["func"], r["segment"], r["status"], r["size"], r["difficulty"]))
    else: sys.exit(__doc__)

if __name__ == "__main__":
    main(sys.argv[1:])
