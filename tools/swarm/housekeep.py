"""Keep the container disk from filling: run by cron every 30 min (flock), logs to queue/housekeep.log.

    .venv/bin/python tools/swarm/housekeep.py [--dry-run]

Above USED_CAP_GB used (default 40), archive finished batch work dirs to the archive share (one tar.gz per batch, file
count verified before the local copy goes). A batch is archived only when it is finished (DONE or STOP), idle for
6 hours, not one of the loop's last 4 cycles, and has no verified match still waiting for integration (the loop's
unintegrated()), so no match is lost. Always: remove opencode's unpacked temp libraries no process has open, and the
temp dirs of opencode runs that are gone. Disk filled on 2026-10-18 (opencode temp files) and 2026-10-20 (batch work
dirs; usage-gate then reports no meter and every batch stopped).
The cap is on space used, not space free: the disk is a thin volume (100 GB) on the host's thin pool, which is
overcommitted (thin volumes ~418 GB on a 371 GB pool, 79% full on 2026-10-20), so "free" here overstates what the
pool can really give, and a full pool stops every guest on the host.
"""
import glob, os, re, shutil, subprocess, sys, tarfile, time

HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
# where archives go: $HH_ARCHIVE, else the path in ~/.hh-archive-path (machine-specific, kept out of the repo)
_ap = os.path.expanduser("~/.hh-archive-path")
ARCHIVE = os.environ.get("HH_ARCHIVE") or (open(_ap).read().strip() if os.path.exists(_ap) else "")
USED_CAP_GB = float(os.environ.get("USED_CAP_GB", 40))
DRY = "--dry-run" in sys.argv


def log(*a):
    line = time.strftime("%Y-%m-%dT%H:%MZ ", time.gmtime()) + " ".join(str(x) for x in a)
    print(line); open("queue/housekeep.log", "a").write(line + "\n")


def free_gb(): return shutil.disk_usage(HH).free / 1e9
def used_gb(): return shutil.disk_usage(HH).used / 1e9


def mapped_files():
    out = set()
    for m in glob.glob("/proc/[0-9]*/maps"):
        try: out |= set(re.findall(r"(/\S+\.so)\s*$", open(m).read(), re.M))
        except OSError: pass
    return out


def temp_cleanup():
    inuse = mapped_files(); n = 0
    for f in glob.glob("/tmp/.*-00000000.so") + glob.glob(os.path.expanduser("~/.oc/tmp/*/.*.so")):
        if f not in inuse and time.time() - os.path.getmtime(f) > 3600:
            if not DRY: os.remove(f)
            n += 1
    for d in glob.glob(os.path.expanduser("~/.oc/tmp/run.*")):
        pid = d.rsplit(".", 1)[1]
        if pid.isdigit() and not os.path.exists("/proc/" + pid):
            if not DRY: shutil.rmtree(d, ignore_errors=True)
            n += 1
    if n: log("temp: removed %d stale opencode temp files/dirs" % n)


def candidates():
    sys.path.insert(0, "tools/swarm"); import loop
    pending = set(loop.unintegrated())
    st = loop.load("queue/loop/state.json", {}); last = st.get("cycle", 0)
    out = []
    for d in glob.glob("queue/*/work"):
        b = d.split("/")[1]; q = "queue/" + b
        if b in pending or not (os.path.exists(q + "/DONE") or os.path.exists(q + "/STOP")): continue
        if time.time() - max(os.path.getmtime(x) for x in glob.glob(q + "/*")) < 6 * 3600: continue
        m = re.fullmatch(r"loop(\d{4})b?", b)
        if m and int(m.group(1)) > last - 4: continue
        out.append((os.path.getmtime(d), b))
    return [b for _, b in sorted(out)]           # oldest first


def archive(b):
    src = "queue/%s/work" % b
    n = sum(len(fs) for _, _, fs in os.walk(src))
    dst = "%s/%s.work.tar.gz" % (ARCHIVE, b)
    if os.path.exists(dst): dst = "%s/%s.work.%d.tar.gz" % (ARCHIVE, b, int(time.time()))
    if DRY: log("would archive", b, n, "files"); return
    with tarfile.open(dst + ".part", "w:gz") as t: t.add(src, arcname="work")
    with tarfile.open(dst + ".part") as t: m = sum(1 for x in t if x.isfile())
    if m != n:
        os.remove(dst + ".part"); log("archive %s: count mismatch (%d local, %d in tar), kept" % (b, n, m)); return
    os.replace(dst + ".part", dst); shutil.rmtree(src); log("archived %s (%d files) to %s" % (b, n, dst))


if __name__ == "__main__":
    temp_cleanup()
    if used_gb() > USED_CAP_GB:
        if not ARCHIVE or not os.path.isdir(os.path.dirname(ARCHIVE)):
            log("archive share not mounted (%s): nothing archived, %.1f GB used" % (ARCHIVE, used_gb())); sys.exit(1)
        os.makedirs(ARCHIVE, exist_ok=True)
        log("%.1f GB used (> %.0f): archiving finished, integrated batches" % (used_gb(), USED_CAP_GB))
        for b in candidates():
            if used_gb() <= USED_CAP_GB - 5: break
            archive(b)
        log("done: %.1f GB used" % used_gb())
