"""Where a batch keeps one function's work: queue/BATCH/work/FUNC, or queue/BATCH/work/FUNC@SEG when FUNC
names functions in several segments (overlays sharing a RAM slot reuse address names, and one batch can
hold several of them; with plain FUNC dirs they overwrote each other's attempts).

  workdir.py dir BATCH FUNC SEG      print the directory a worker should use
"""
import csv, os, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
_amb = None

def ambiguous(func):
    global _amb
    if _amb is None:
        seen, _amb = {}, set()
        for r in csv.DictReader(open(os.path.join(HH, "queue/functions.csv"))):
            if seen.setdefault(r["func"], r["segment"]) != r["segment"]: _amb.add(r["func"])
    return func in _amb

def path(batch, func, seg):
    """Directory for new work (relative to the repo)."""
    return "queue/%s/work/%s" % (batch, func + ("@" + seg if ambiguous(func) else ""))

def attempt(batch, func, seg):
    """Existing attempt.c for (func, seg) in a batch, or None. Old batches only have FUNC dirs."""
    for d in ("queue/%s/work/%s@%s" % (batch, func, seg), "queue/%s/work/%s" % (batch, func)):
        p = d + "/attempt.c"
        if os.path.exists(os.path.join(HH, p)): return p
    return None

if __name__ == "__main__" and sys.argv[1:2] == ["dir"]:
    print(path(sys.argv[2], sys.argv[3], sys.argv[4]))
