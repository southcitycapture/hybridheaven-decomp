"""Lane/attempt exclusions shared by the loop and its optional picker prefilter."""
import glob
import json
import os
import re
import time


def unavailable(batch, hold_hours=12, include_rejected=False):
    """Return (func, segment) keys, preserving the loop's historical hold rules."""
    excluded = set()
    for path in glob.glob("queue/*/functions.txt"):
        directory = os.path.dirname(path)
        if os.path.basename(directory) == batch or any(os.path.exists(directory + "/" + end) for end in ("DONE", "STOP")):
            continue
        last = max(os.path.getmtime(p) for p in glob.glob(directory + "/*") if os.path.isfile(p))
        if time.time() - last <= 3600 * hold_hours:
            excluded.update(tuple(line.split()[:2]) for line in open(path) if len(line.split()) >= 2)
    try:
        excluded |= {(r["func"], r["segment"]) for r in json.load(open("contrib/tasks.json"))["tasks"]
                     if r.get("assigned") and r.get("status") != "done"}
    except (OSError, ValueError, KeyError, TypeError):
        pass
    for path in glob.glob("queue/*/results.jsonl"):
        for line in open(path):
            try:
                row = json.loads(line)
            except ValueError:
                continue
            if row.get("verified") != "ERROR" and re.search(r"sonnet|opus|gpt-6\.1-sol", str(row.get("model", ""))):
                excluded.add((row.get("func"), row.get("segment")))
    if include_rejected:
        excluded |= rejected()
    return excluded


def rejected():
    excluded = set()
    if os.path.exists("queue/link_blocklist.txt"):
        excluded.update((parts[1], parts[0]) for line in open("queue/link_blocklist.txt")
                        if not line.startswith("#") and len(parts := line.split()) >= 2)
    if os.path.exists("queue/rejected.jsonl"):
        for line in open("queue/rejected.jsonl"):
            try:
                row = json.loads(line)
                excluded.add((row["func"], row["segment"]))
            except (ValueError, KeyError):
                pass
    return excluded
