"""Audit or reconcile a master merge using the current per-file rodata layout.

Run before committing: merge_rodata.py [--apply] [--before REV] [--master REV].
Accepted source and self-contained registry snippets are written; gap registry inputs are retained.
"""
import argparse
import glob
import json
import os
import subprocess
import tempfile
from multiprocessing import Pool

import srcbuild as S
import reconcile_frozen as R
import workdir


def sources(ref):
    if ref is None:
        return {p: open(p).read() for p in glob.glob("src/*/*.c")}
    paths = subprocess.check_output(["git", "ls-tree", "-r", "--name-only", ref, "--", "src"], text=True).splitlines()
    out = {}
    with subprocess.Popen(["git", "cat-file", "--batch"], stdin=subprocess.PIPE, stdout=subprocess.PIPE) as proc:
        for path in paths:
            if not path.endswith(".c"):
                continue
            proc.stdin.write((ref + ":" + path + "\n").encode())
            proc.stdin.flush()
            size = int(proc.stdout.readline().split()[2])
            out[path] = proc.stdout.read(size).decode()
            proc.stdout.read(1)
        proc.stdin.close()
    return out


def functions(src, libraries):
    """Count original function identities, including C library units, excluding prototypes."""
    out = set()
    names_by_seg = {}
    for directory in glob.glob("asm/nonmatchings/*/*"):
        seg, cf = directory.split("/")[2:]
        names_by_seg.setdefault(seg, set()).update(e[0] for e in S.entries(seg, cf))
    for path, text in src.items():
        _, seg, cf = path[:-2].split("/")
        defined = S.defined_functions(text)
        out.update((seg, n) for n in defined & names_by_seg.get(seg, set()))
        if seg + "/" + cf in libraries:
            out.update((seg, n) for n, *_ in S.entries(seg, cf))
    return out


def job(args):
    seg, cf, new, master_source = args
    path = "src/%s/%s.c" % (seg, cf)
    original = open(path).read()
    old = S.defined_functions(original) & {e[0] for e in S.entries(seg, cf)}
    with tempfile.TemporaryDirectory(dir="build") as td:
        # A generated master file can be reused when its boundaries/layout still agree, it contains every
        # existing C definition, and its entire linked file verifies in the rodata layout. Otherwise reconcile.
        master_names = S.defined_functions(master_source)
        if master_source and old <= master_names and set(new) <= master_names:
            ok, msg = R.verify(seg, cf, master_source, old | set(new), td)
            if ok:
                with open(path, "w") as fh:
                    fh.write(master_source)
                return seg, cf, {n: "verified master source in current layout" for n in new}, {}
        ok, msg = R.verify(seg, cf, original, old, td)
        if not ok:
            return seg, cf, {}, {n: "baseline verification failed: " + msg for n in new}
        text, accepted, rejected = R.integrate(seg, cf, original, new, td)
        if accepted:
            ok, msg = R.verify(seg, cf, text, old | set(accepted), td)
            if not ok:
                raise RuntimeError(path + ": " + msg)
            if not old <= S.defined_functions(text):
                raise RuntimeError(path + ": lost original C definitions")
            with open(path, "w") as fh:
                fh.write(text)
            for name in accepted:
                with open("matched/%s/%s.c" % (seg, name), "w") as fh:
                    fh.write(new[name])
    return seg, cf, accepted, rejected


def with_context(seg, name, snippet, master_context=""):
    """Use the matching worker snapshot when file splits moved a dependency to another file."""
    body = S.fn_body(snippet, name)
    if body is None:
        return snippet
    paths = glob.glob("queue/*/work/%s/attempt.c" % name) + glob.glob("queue/*/work/%s@%s/attempt.c" % (name, seg))
    for path in sorted(paths, key=os.path.getmtime, reverse=True):
        if S.fn_body(open(path).read(), name) == body and os.path.exists(os.path.join(os.path.dirname(path), "context.h")):
            return R.read_attempt(seg, name, path)
    if master_context:
        return R.context_dependencies(seg, S.file_of(seg, name), name, snippet, R.Scan(""), 0, master_context)
    return snippet


def queued_matches(current):
    """Previously verified local worker results, still checked against the whole frozen file before landing."""
    paths = {}
    blocked = S.link_blocked()
    for result in glob.glob("queue/*/results.jsonl"):
        for line in open(result):
            try:
                row = json.loads(line)
            except ValueError:
                continue
            if row.get("verified") != "MATCH" or "segment" not in row:
                continue
            key = (row["segment"], row["func"])
            if key in current or key in blocked or S.file_of(*key) is None:
                continue
            path = workdir.attempt(result.split("/")[1], key[1], key[0])
            if path and (key not in paths or os.path.getmtime(path) > os.path.getmtime(paths[key])):
                paths[key] = path
    return paths


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--apply", action="store_true")
    parser.add_argument("--before", default="0a7feded72")
    parser.add_argument("--master", default="master")
    parser.add_argument("--skip-segment", action="append", default=[])
    parser.add_argument("--registered", action="store_true", help="also retry registry entries absent from both branches' C")
    parser.add_argument("--queued", action="store_true", help="also integrate previously verified local queue matches")
    args = parser.parse_args()
    args.before = subprocess.check_output(["git", "rev-parse", args.before], text=True).strip()
    args.master = subprocess.check_output(["git", "rev-parse", args.master], text=True).strip()
    before_lib = json.loads(subprocess.check_output(["git", "show", args.before + ":tools/hh/libultra.json"], text=True))
    master_lib = json.loads(subprocess.check_output(["git", "show", args.master + ":tools/hh/libultra.json"], text=True))
    current_lib = json.load(open("tools/hh/libultra.json"))
    before = functions(sources(args.before), before_lib)
    master_sources = sources(args.master)
    master = functions(master_sources, master_lib)
    master_contexts = {(p.split("/")[1], n): text for p, text in master_sources.items() for n in S.defined_functions(text)}
    current = functions(sources(None), current_lib)
    print("before %d; master %d; current %d; missing master %d" % (len(before), len(master), len(current), len(master - current)), flush=True)
    reasons = {}
    if os.path.exists("queue/merge_gap.jsonl"):
        for line in open("queue/merge_gap.jsonl"):
            row = json.loads(line)
            reasons[(row["seg"], row["func"])] = row["reason"]
    if args.apply:
        reg = S.registry()
        byfile = {}
        queued = queued_matches(current) if args.queued else {}
        for (seg, name), path in queued.items():
            if seg not in args.skip_segment and (seg, name) not in reg:
                reg[(seg, name)] = R.read_attempt(seg, name, path)
        candidates = (master | set(reg) if args.registered else master) - current
        candidates |= set(queued)
        for seg, name in sorted(candidates):
            if seg in args.skip_segment:
                continue
            cf = S.file_of(seg, name)
            if cf and (seg, name) in reg:
                byfile.setdefault((seg, cf), {})[name] = with_context(seg, name, reg[(seg, name)], master_contexts.get((seg, name), ""))
            else:
                reasons[(seg, name)] = "no registry snippet or unique file in current layout"
        with Pool(int(os.environ.get("JOBS", "8"))) as pool:
            for seg, cf, accepted, rejected in pool.imap_unordered(job, [
                    (seg, cf, new, master_sources.get("src/%s/%s.c" % (seg, cf), ""))
                    for (seg, cf), new in byfile.items()]):
                print("%s/%s: +%d, %d rejected" % (seg, cf, len(accepted), len(rejected)), flush=True)
                reasons.update({(seg, n): why for n, why in rejected.items()})
        current = functions(sources(None), current_lib)
        with open("queue/merge_gap.jsonl", "w") as fh:
            for seg, name in sorted(master - current):
                fh.write(json.dumps(dict(seg=seg, func=name, reason=reasons.get((seg, name), "not integrated"))) + "\n")
    report = dict(before_ref=args.before, master_ref=subprocess.check_output(["git", "rev-parse", args.master], text=True).strip(),
                  before=len(before), master=len(master), after=len(current), added=len(current - before),
                  lost_before=sorted(before - current), missing_master=sorted(master - current), extra_vs_master=sorted(current - master))
    print(json.dumps(report, indent=2), flush=True)
    with open("build/merge_rodata_audit.json", "w") as fh:
        json.dump(report, fh, indent=2)


if __name__ == "__main__":
    main()
