"""Take in a contributor's bundle (contrib/submit.sh) as a normal batch, re-verifying every function here.

  hq_intake.py BUNDLE.tar.gz NAME [--dry-run]

Creates queue/contrib_NAME_YYYYMMDD/ (suffix _2, _3.. if taken) with
  work/FUNC@SEG/attempt.c   the submitted C (+ context.h from this checkout), the layout tools/hh/workdir.py expects
  results.jsonl             one line per function: MATCH only if tools/hh/try_func.py matches it HERE, against our ROM
                            build; FAIL otherwise. Model, checks, tokens and cost come from the bundle's manifest.
  submission.json           the manifest as received;  DONE  (nothing left to run)
loop.py's unintegrated() then offers the batch to integration like any lane's (srcbuild in-file check + ROM check);
to integrate it now instead: .venv/bin/python tools/swarm/integrate.py BATCH

Nothing in the bundle is trusted: members are read without extracting (only manifest.json and c/FUNC@SEG.c, size
limits), functions must exist in queue/functions.csv and not be matched yet, the C may only #include "context.h" or
"common.h" and may not use #pragma or asm, and asm-listing comments are refused.
"""
import datetime as dt, csv, json, os, re, subprocess, sys, tarfile
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
PY = sys.executable
# the project's tool PATH (as env.sh), so a bare shell or cron works: MIPS binutils, the venv
_opt = os.path.expanduser("~/.local/opt/decomp/usr")
os.environ["PATH"] = os.pathsep.join([os.path.join(HH, "tools/bin"), os.path.join(HH, ".venv/bin")] +
                                     ([_opt + "/bin"] if os.path.isdir(_opt + "/bin") else []) + [os.environ.get("PATH", "")])
if os.path.isdir(_opt + "/lib/x86_64-linux-gnu"):
    os.environ["LD_LIBRARY_PATH"] = _opt + "/lib/x86_64-linux-gnu" + (":" + os.environ["LD_LIBRARY_PATH"] if os.environ.get("LD_LIBRARY_PATH") else "")
NAME_RE = re.compile(r"[A-Za-z0-9_-]{1,32}")
FILE_RE = re.compile(r"c/([A-Za-z_]\w{0,63})@(\w{1,32})\.c")
DISASM = re.compile(r"/\* [0-9A-F]{6} [0-9A-F]{8} [0-9A-F]{8} \*/")
MAX_FILE, MAX_FILES = 65536, 2000

def read_bundle(path):
    """{member name: text} for the allowed members only; refuses anything else in the archive."""
    out = {}
    with tarfile.open(path, "r:*") as tf:
        members = tf.getmembers()
        if len(members) > MAX_FILES + 1: sys.exit("bundle has %d members (max %d)" % (len(members), MAX_FILES + 1))
        for m in members:
            if m.isdir() and m.name in ("c", "./c"): continue
            n = m.name[2:] if m.name.startswith("./") else m.name
            if not m.isfile() or not (n == "manifest.json" or FILE_RE.fullmatch(n)):
                sys.exit("refusing bundle: unexpected member %r" % m.name)
            if m.size > MAX_FILE * 4: sys.exit("refusing bundle: %s is %d bytes" % (n, m.size))
            out[n] = tf.extractfile(m).read().decode("utf-8")
    if "manifest.json" not in out: sys.exit("refusing bundle: no manifest.json")
    return out

def check_text(text):
    """Reason to refuse a submitted C file, or None."""
    if len(text) > MAX_FILE: return "too large"
    if DISASM.search(text): return "contains asm-listing comments"
    for l in text.splitlines():
        s = l.strip()
        if s.startswith("#include") and s.split()[1:2] not in (['"context.h"'], ['"common.h"']): return "unexpected %s" % s[:60]
        if s.startswith("#pragma") or re.search(r"\b(__)?asm\b\s*(\(|volatile|\{)", s): return "uses #pragma/asm"
    return None

def clean(v, n=80):
    """A manifest value for results.jsonl: numbers as numbers, everything else a short plain string."""
    if isinstance(v, bool) or v is None: return None
    if isinstance(v, (int, float)): return v
    return re.sub(r"[^\w.\-: /]", "", str(v))[:n]

def main():
    a = [x for x in sys.argv[1:] if not x.startswith("--")]
    if len(a) != 2: sys.exit(__doc__)
    bundle, name = a; dry = "--dry-run" in sys.argv
    if not NAME_RE.fullmatch(name): sys.exit("NAME: 1-32 letters, digits, - or _")
    files = read_bundle(bundle)
    man = json.loads(files["manifest.json"])
    if man.get("format") != "hh-contrib-1": sys.exit("unknown bundle format %r" % man.get("format"))
    if man.get("contributor") != name: print("note: bundle says contributor %r; recording it as %r" % (man.get("contributor"), name))
    known = {(r["func"], r["segment"]) for r in csv.DictReader(open("queue/functions.csv"))}
    base = "contrib_%s_%s" % (name, dt.date.today().strftime("%Y%m%d")); batch, i = base, 1
    while os.path.exists("queue/" + batch): i += 1; batch = "%s_%d" % (base, i)
    Q = "queue/" + batch
    lines, notes = [], []
    for e in [x for x in man.get("entries", []) if isinstance(x, dict)][:MAX_FILES]:
        func, seg, fn = str(e.get("func")), str(e.get("segment")), str(e.get("file"))
        m = FILE_RE.fullmatch(fn)
        if not m or (m.group(1), m.group(2)) != (func, seg) or fn not in files:
            notes.append("%s@%s: manifest entry doesn't match its file, skipped" % (func, seg)); continue
        if (func, seg) not in known: notes.append("%s@%s: no such function, skipped" % (func, seg)); continue
        if os.path.exists("matched/%s/%s.c" % (seg, func)): notes.append("%s@%s: already matched here, skipped" % (func, seg)); continue
        why = check_text(files[fn])
        rec = dict(func=func, segment=seg, model=clean(e.get("model"), 60), verified="FAIL", claimed="RESULT: MATCH",
                   checks=clean(e.get("checks")), turns=clean(e.get("turns")), seconds=clean(e.get("seconds")),
                   input_tokens=clean(e.get("input_tokens")), output_tokens=clean(e.get("output_tokens")),
                   cache_read=clean(e.get("cache_read")), cache_write=clean(e.get("cache_write")),
                   cost_usd_equiv=clean(e.get("cost_usd_equiv")), contributor=name, source="contrib")
        if why:
            notes.append("%s@%s: refused (%s)" % (func, seg, why)); rec["hq_note"] = "refused: " + why
        elif not dry:
            w = "%s/work/%s@%s" % (Q, func, seg); os.makedirs(w, exist_ok=True)
            open(w + "/attempt.c", "w").write(files[fn])
            ctx = subprocess.run([PY, "tools/hh/srcbuild.py", "context", seg, func], capture_output=True, text=True)
            open(w + "/context.h", "w").write(ctx.stdout)
            out = subprocess.run([PY, "tools/hh/try_func.py", func, w + "/attempt.c", "--seg", seg], capture_output=True, text=True)
            open(w + "/verify.txt", "w").write(out.stdout + out.stderr)
            first = (out.stdout.splitlines() or (out.stderr.strip().splitlines() or ["?"])[-1:])[0]
            if not first.startswith(("MATCH", "score", "compile failed")):     # our tools broke, not the submission
                import shutil; shutil.rmtree(Q, ignore_errors=True)
                sys.exit("verification itself failed on %s@%s (%s): fix the environment and run again" % (func, seg, first[:200]))
            if first.startswith("MATCH"): rec["verified"] = "MATCH"
            else: rec["hq_note"] = "re-verify: " + first[:120]; notes.append("%s@%s: does not match here: %s" % (func, seg, first[:100]))
        lines.append(rec)
    for n in notes: print("  " + n)
    ok = sum(r["verified"] == "MATCH" for r in lines)
    if dry: print("dry run: %d function(s) would be checked" % len(lines)); return
    if not lines: print("nothing to take in"); return
    os.makedirs(Q, exist_ok=True)
    with open(Q + "/results.jsonl", "a") as fh:
        for r in lines: fh.write(json.dumps(r) + "\n")
    json.dump(man, open(Q + "/submission.json", "w"), indent=1)
    open(Q + "/DONE", "w").write("contributor bundle %s\n" % os.path.basename(bundle))
    print("%s: %d of %d submitted function(s) verified MATCH here (%d other notes)" % (Q, ok, len(lines), len(notes)))
    if ok: print("loop.py integrates it on its next cycle; or now: .venv/bin/python tools/swarm/integrate.py %s" % batch)

if __name__ == "__main__":
    main()
