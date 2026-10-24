#!/bin/bash
# contrib/submit.sh NAME [--all]: bundle NAME's verified matches into contrib/out/hh-NAME-DATE.tar.gz, ready to send
# to HQ (attach it to a pull request or issue, or send the file).
# The bundle holds only the C your workers wrote (one file per function) and manifest.json (function, segment,
# model, checks, tokens, cost). No asm, no ROM data. Every match is re-checked against your ROM build first.
# Matches already in an earlier bundle are left out unless --all is given.
set -e
. "$(dirname "$0")/lib.sh"
NAME=$1; [ -n "$NAME" ] || die "usage: contrib/submit.sh NAME [--all]"
check_name "$NAME"
cd "$ROOT"
BATCH=$(local_batch "$NAME")
[ -f "queue/$BATCH/results.jsonl" ] || die "no results for $NAME yet: run contrib/work.sh $NAME first"
mkdir -p contrib/out
"$PY" - "$NAME" "$BATCH" "$2" <<'PY'
import datetime as dt, io, json, os, re, subprocess, sys, tarfile
name, batch, flag = sys.argv[1], sys.argv[2], sys.argv[3] if len(sys.argv) > 3 else ""
sys.path.insert(0, "tools/hh"); import workdir
q = "queue/" + batch
DISASM = re.compile(r"/\* [0-9A-F]{6} [0-9A-F]{8} [0-9A-F]{8} \*/")
sent_f = q + "/submitted.txt"
sent = set(open(sent_f).read().split()) if os.path.exists(sent_f) and flag != "--all" else set()
last = {}
for l in open(q + "/results.jsonl"):
    try: r = json.loads(l)
    except ValueError: continue
    if r.get("verified") in ("MATCH", "FAIL"): last[(r["func"], r["segment"])] = r
entries, files, skipped = [], {}, []
for (func, seg), r in sorted(last.items()):
    k = "%s@%s" % (func, seg)
    if r["verified"] != "MATCH" or k in sent: continue
    if os.path.exists("matched/%s/%s.c" % (seg, func)): skipped.append(k + " (already matched upstream)"); continue
    a = workdir.attempt(batch, func, seg)
    if not a: skipped.append(k + " (attempt.c missing)"); continue
    text = open(a, encoding="utf-8", errors="replace").read()
    text = DISASM.sub("", text)                    # comments copied from the asm listing: never sent (no effect on code)
    bad = [l for l in text.splitlines() if l.lstrip().startswith("#include") and l.split()[1:2] not in (['"context.h"'], ['"common.h"'])]
    if bad or len(text) > 65536: skipped.append(k + " (unexpected #include or too large)"); continue
    # re-check exactly what is sent (comments stripped) next to its context.h
    chk = os.path.join(os.path.dirname(a), "submit_check.c"); open(chk, "w").write(text)
    out = subprocess.run([sys.executable, "tools/hh/try_func.py", func, chk, "--seg", seg], capture_output=True, text=True).stdout
    os.remove(chk)
    if not out.startswith("MATCH"): skipped.append(k + " (no longer matches: %s)" % (out.splitlines() or ["?"])[0]); continue
    fn = "c/%s.c" % k; files[fn] = text
    entries.append(dict(func=func, segment=seg, file=fn, model=r.get("model"), checks=r.get("checks"), turns=r.get("turns"),
                        seconds=r.get("seconds"), input_tokens=r.get("input_tokens"), output_tokens=r.get("output_tokens"),
                        cache_read=r.get("cache_read"), cache_write=r.get("cache_write"), cost_usd_equiv=r.get("cost_usd_equiv")))
for s in skipped: print("  skipped", s)
if not entries: print("nothing new to send for %s" % name); sys.exit(0)
try: base = subprocess.run(["git", "rev-parse", "HEAD"], capture_output=True, text=True).stdout.strip()
except OSError: base = ""
now = dt.datetime.utcnow()
man = dict(format="hh-contrib-1", contributor=name, created=now.strftime("%Y-%m-%dT%H:%MZ"), base_commit=base,
           attempted=sum(1 for r in last.values()), entries=entries)
path = "contrib/out/hh-%s-%s.tar.gz" % (name, now.strftime("%Y%m%d-%H%M"))
with tarfile.open(path, "w:gz") as tf:
    for fn, data in [("manifest.json", json.dumps(man, indent=1) + "\n")] + sorted(files.items()):
        b = data.encode(); ti = tarfile.TarInfo(fn); ti.size = len(b); ti.mtime = int(now.timestamp()); ti.mode = 0o644
        tf.addfile(ti, io.BytesIO(b))
open(sent_f, "a").write("".join("%s@%s\n" % (e["func"], e["segment"]) for e in entries))
cost = sum(float(e["cost_usd_equiv"] or 0) for e in entries)
print("wrote %s: %d matched function(s), API-equivalent cost $%.2f" % (path, len(entries), cost))
print("Send that file to HQ (attach it to a pull request or an issue, or send it directly).")
PY
