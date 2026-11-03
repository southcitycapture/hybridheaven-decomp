#!/usr/bin/env python3
"""Task 30 validation: do the recovered types (TYPES=1) fit the leftovers' best attempts? No model calls.

  types_validate.py [--n 15] [--out queue/types_validation.jsonl]

Picks leftovers that the wall classifier (queue/walls.jsonl) puts on an offset-related wall (instructions /
size_mismatch / symbols with load/store displacements or address immediates that differ) or on a control_flow
wall with heavy pointer arithmetic in the attempt, then for each best attempt:
  - compiles it with the plain context (srcbuild.context_for) and with the TYPES=1 context and compares the
    try_func score and the region scores (regions.py);
  - measures how much of the target's memory traffic the shared types cover (target load/store sites whose object
    is a recovered type with a field of that width at that offset);
  - for each differing displacement: whether the recovered type has a field at the target's offset and none at the
    attempt's (a typed access could not have produced the attempt's offset);
  - counts the attempt's own ad-hoc layouts (local struct typedefs, pad arrays, *(T *)((u8 *)p + 0xNN) casts).
"""
import argparse
import json
import os
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import srcbuild as S        # chdirs to the checkout
import types_db as T
import types_mine as M

PY = os.path.join(S.HH, ".venv/bin/python")
MEMOPS = set(M.LOADS) | set(M.STORES)
INSN = re.compile(r"^(\S+)\s+(.*)$")


def parse_insn(text):
    m = INSN.match(text.strip())
    if not m: return None, []
    return m.group(1), [o.strip() for o in M.split_ops(m.group(2))]


def displacement(ops):
    if len(ops) < 2: return None
    m = re.match(r"^(-?0x[0-9A-Fa-f]+|-?\d+)?\((\$\w+)\)$", ops[-1])
    if not m: return None
    return int(m.group(1), 0) if m.group(1) else 0


def offset_diffs(details):
    """[(offset, target disasm, attempt disasm, target disp, attempt disp)] for differences in a displacement or
    an address immediate only (same mnemonic)."""
    out = []
    for d in details.get("instruction_differences", []):
        to, tops = parse_insn(d.get("target", "")); ao, aops = parse_insn(d.get("attempt", ""))
        if not to or to != ao: continue
        if to in MEMOPS:
            td, ad = displacement(tops), displacement(aops)
            if td is not None and ad is not None and td != ad:
                out.append((d["offset"], d["target"], d["attempt"], td, ad))
        elif to in ("addiu", "ori") and tops and aops:
            try:
                ti, ai = int(tops[-1], 0), int(aops[-1], 0)
            except ValueError:
                continue
            if ti != ai and abs(ti - ai) < 0x1000:
                out.append((d["offset"], d["target"], d["attempt"], ti, ai))
    return out


ADHOC = [("struct typedefs", re.compile(r"\btypedef\s+struct\b|\bstruct\s+\w*\s*\{")),
         ("pad arrays", re.compile(r"\bpad\w*\s*\[")),
         ("offset casts", re.compile(r"\*\s*\(\s*(?:volatile\s+)?(?:[su](?:8|16|32|64)|f32|f64|void|\w+)\s*\*+\s*\)\s*\(\s*\(?\s*(?:u8|s8|char)\s*\*\s*\)?[^;]*?\+\s*(?:0x[0-9A-Fa-f]+|\d+)")),
         ("byte-pointer arithmetic", re.compile(r"\(\s*(?:u8|s8|char)\s*\*\s*\)\s*\w+\s*\)?\s*\+\s*(?:0x[0-9A-Fa-f]+|\d+)"))]


def adhoc(text):
    return {k: len(p.findall(text)) for k, p in ADHOC}


def candidates(n):
    reg = set(S.registry())
    rows = [json.loads(l) for l in open("queue/walls.jsonl")]
    off, cf = [], []
    for r in rows:
        key = (r["seg"], r["func"]); src = r.get("attempt_source")
        if r.get("registered") or key in reg or not src or not os.path.exists(src): continue
        if key not in M.function_index(): continue
        text = open(src).read()
        a = adhoc(text)
        if r["class"] in ("instructions", "size_mismatch", "symbols"):
            od = offset_diffs(r["details"])
            if od: off.append((-len(od), r["size"], r, od))
        elif r["class"] == "control_flow":
            arith = a["offset casts"] + a["byte-pointer arithmetic"] + a["pad arrays"]
            if arith >= 3: cf.append((-arith / max(1, len(text.splitlines())), r["size"], r, []))
    off.sort(key=lambda t: (t[0], t[1])); cf.sort(key=lambda t: (t[0], t[1]))
    k = min(len(off), (n + 1) // 2)
    pick = off[:k] + cf[:n - k]
    return [(r, od) for _, _, r, od in pick]


def evaluate(seg, func, attempt_text, ctx_text, regions=True):
    with tempfile.TemporaryDirectory() as td:
        open(os.path.join(td, "context.h"), "w").write(ctx_text)
        src = os.path.join(td, "attempt.c")
        if '#include "context.h"' not in attempt_text: attempt_text = '#include "context.h"\n' + attempt_text
        open(src, "w").write(attempt_text)
        r = subprocess.run([PY, "tools/hh/try_func.py", func, src, "--seg", seg], capture_output=True, text=True,
                           timeout=300)
        first = (r.stdout.strip().splitlines() or ["(no output) " + r.stderr.strip()[:200]])[0]
        out = {"try_func": first, "compiles": not first.startswith(("compile failed", "(no output)", "Traceback"))
               and "rror" not in first}
        m = re.match(r"score (\d+)/(\d+)", first)
        if first.startswith("MATCH"): out["score"] = 1.0
        elif m: out["score"] = int(m.group(1)) / max(1, int(m.group(2)))
        if regions and out["compiles"]:
            js = os.path.join(td, "regions.json")
            subprocess.run([PY, "tools/hh/regions.py", func, seg, "--source", src, "--json", js], capture_output=True,
                           text=True, timeout=300)
            if os.path.exists(js):
                rep = json.load(open(js))
                sc = [x["score"] for x in rep["regions"] if x["score"] is not None]
                out["regions"] = [round(x, 4) if x is not None else None for x in (y["score"] for y in rep["regions"])]
                out["regions_matched"] = sum(1 for x in rep["regions"] if x["status"] == "matched")
                out["regions_mean"] = round(sum(sc) / len(sc), 4) if sc else None
    return out


def coverage(b, seg, func):
    facts = M.mine(seg, func)
    sites = {v: k for v, k in facts.sites.items()}
    covered, types = 0, set()
    for vram, (key, off, op) in sites.items():
        hit = b.lookup(key, off)
        if hit and hit[1] and hit[1].get("width", T.WIDTH[op]) == T.WIDTH[op]:
            covered += 1; types.add(hit[0])
    return facts, len(sites), covered, sorted(types)


def dropin(b, seg, func, text):
    """Rewrite a matched snippet's scalar field accesses through struct-typed globals/parameters to go through the
    recovered type instead (`D_x.name` -> `((T *)&D_x)->unkNN`, `argN->name` -> `((T *)argN)->unkNN`). Returns
    (new text, number of rewritten accesses, number left alone because the recovered type has no such field)."""
    ties, lay = T.snippet_ties(seg, text)
    out, done, missing = text, 0, 0
    for key, lname, how in ties:
        if how not in ("extern", "cast", "parameter"): continue
        st = lay.structs.get(lname)
        if not st: continue
        if how == "parameter":
            i = key.rsplit(":", 1)[1]; expr, pat = "arg%s" % i, r"\barg%s\s*->\s*" % i
        else:
            sym = key.split(":")[2]; expr, pat = "&%s" % sym, r"\b%s\s*\.\s*" % sym
        for off, name, size, ptr, elem in st["fields"]:
            if ptr or elem or "." in name: continue
            hit = b.lookup(key, off)
            if not hit or not hit[1] or hit[1].get("width") != size or hit[1].get("type", "*").endswith("*"):
                if re.search(pat + re.escape(name) + r"\b", out): missing += 1
                continue
            new = "((%s *)%s)->%s" % (hit[0], expr, hit[1]["name"])
            out, k = re.subn(pat + re.escape(name) + r"\b(?!\s*(?:\.|->|\[))", lambda m: new, out)
            done += k
    return out, done, missing


def dropin_check(b, n, seed=30):
    """Recovered types as drop-ins: rewrite n matched functions to access their struct fields through the
    recovered types; do they still match? (A wrong width or signedness changes the loads.)"""
    import random
    reg = S.registry(); keys = sorted(reg); random.Random(seed).shuffle(keys)
    res = []
    for seg, func in keys:
        if len(res) >= n: break
        text = reg[(seg, func)]
        new, done, missing = dropin(b, seg, func, text)
        if not done: continue
        # registry snippets are self-contained (#include "common.h" + their own declarations): the recovered
        # types are the only addition
        base = '#include "common.h"\n' if '#include "context.h"' not in text else S.context_for(seg, func)
        if evaluate(seg, func, text, base, regions=False).get("score") != 1.0: continue   # needs its file context
        typed = base + T.context_types(seg, func, base, text)
        ev = evaluate(seg, func, new, typed, regions=False)
        code = ev.get("score") == 1.0 or "code matches but the function's .rodata" in ev["try_func"]
        res.append({"seg": seg, "func": func, "rewritten": done, "no_field": missing, "try_func": ev["try_func"],
                    "match": code})
        print("dropin %s %s: %d accesses rewritten -> %s" % (seg, func, done, ev["try_func"][:70]), flush=True)
    return res


def main():
    ap = argparse.ArgumentParser(); ap.add_argument("--n", type=int, default=15)
    ap.add_argument("--out", default="queue/types_validation.jsonl")
    ap.add_argument("--dropin", type=int, default=40, help="matched functions to rewrite through the recovered types")
    a = ap.parse_args()
    b, rows, grows = T.build(write=False)
    picks = candidates(a.n)
    results = []
    for r, od in picks:
        seg, func = r["seg"], r["func"]
        text = open(r["attempt_source"]).read()
        # the context the attempt was written against (its worker directory's snapshot), else today's
        snap = os.path.join(os.path.dirname(r["attempt_source"]), "context.h")
        if os.path.basename(os.path.dirname(r["attempt_source"])) == ".attempts":
            snap = os.path.join(os.path.dirname(os.path.dirname(r["attempt_source"])), "context.h")
        base = open(snap).read() if os.path.exists(snap) else S.context_for(seg, func)
        typed = base + T.context_types(seg, func, base, text)
        plain = evaluate(seg, func, text, base)
        withT = evaluate(seg, func, text, typed)
        facts, nsites, ncov, tnames = coverage(b, seg, func)
        vram0 = M.parse(M.function_index()[(seg, func)])[0][0][0]
        rules_out = []
        for off, tdis, adis, td, ad in od:
            site = facts.sites.get(vram0 + off)
            if not site: continue
            key, toff, op = site
            hit_t = b.lookup(key, toff)
            hit_a = b.lookup(key, toff + (ad - td)) if hit_t else None
            if hit_t and hit_t[1]:
                rules_out.append({"offset": off, "type": hit_t[0], "target_field": hit_t[1]["name"],
                                  "attempt_offset": toff + (ad - td),
                                  "attempt_field": hit_a[1]["name"] if hit_a and hit_a[1] else None})
        ad = adhoc(text)
        row = {"seg": seg, "func": func, "wall": r["class"], "size": r["size"], "attempt": r["attempt_source"],
               "plain": plain, "types": withT, "target_sites": nsites, "covered_sites": ncov, "shared_types": tnames,
               "typed_lines": typed.count("\n") - base.count("\n"), "adhoc": ad,
               "offset_diffs": len(od), "offset_checks": rules_out,
               "needed": bool(ncov) and sum(ad.values()) > 0}
        results.append(row)
        print("%s %-14s %-14s plain=%s types=%s cover=%d/%d adhoc=%s offs=%d/%d" % (
            seg, func, r["class"], plain.get("score"), withT.get("score") if withT["compiles"] else "COMPILE FAIL",
            ncov, nsites, sum(ad.values()), sum(1 for x in rules_out if x["attempt_field"] is None), len(od)), flush=True)
    with open(a.out, "w") as fh:
        for row in results: fh.write(json.dumps(row, sort_keys=True) + "\n")
    comp = sum(1 for x in results if x["types"]["compiles"])
    same = sum(1 for x in results if x["types"]["compiles"] and x["types"].get("score") == x["plain"].get("score")
               and x["types"].get("regions") == x["plain"].get("regions"))
    print("compiles with TYPES context: %d/%d; identical try_func and region scores: %d; matches: %d" % (
        comp, len(results), same, sum(1 for x in results if x["types"].get("score") == 1.0)))
    print("functions whose asm touches recovered shared types: %d/%d; attempt also uses ad-hoc layouts there "
          "(types would have been needed): %d/%d" % (sum(1 for x in results if x["covered_sites"]), len(results),
                                                     sum(1 for x in results if x["needed"]), len(results)))
    tot = sum(x["target_sites"] for x in results); cov = sum(x["covered_sites"] for x in results)
    print("target load/store sites covered by a shared-type field: %d/%d (%.0f%%)" % (cov, tot, 100.0 * cov / max(1, tot)))
    oc = [c for x in results for c in x["offset_checks"]]
    print("differing displacements on typed objects: %d; the type has no field at the attempt's offset: %d" % (
        len(oc), sum(1 for c in oc if c["attempt_field"] is None)))
    # every leftover (functions not in the registry): how much of their memory traffic the shared types cover
    reg = set(S.registry())
    left = [k for k in sorted(M.function_index()) if k not in reg]
    touch = tot = cov = 0
    for seg, func in left:
        _, n, c, ts = coverage(b, seg, func)
        tot += n; cov += c; touch += bool(c)
    summary = {"leftovers": len(left), "touching_shared_types": touch, "sites": tot, "covered_sites": cov}
    print("all %d leftovers: %d touch a recovered shared type; %d/%d target load/store sites covered (%.0f%%)" % (
        len(left), touch, cov, tot, 100.0 * cov / max(1, tot)))
    di = dropin_check(b, a.dropin) if a.dropin else []
    if di:
        summary["dropin"] = {"functions": len(di), "match": sum(1 for x in di if x["match"]),
                             "accesses": sum(x["rewritten"] for x in di)}
        print("drop-in: %d of %d matched functions still match (code) with %d field accesses rewritten through recovered types"
              % (summary["dropin"]["match"], len(di), summary["dropin"]["accesses"]))
    with open(a.out, "a") as fh:
        for x in di: fh.write(json.dumps(dict(x, kind="dropin"), sort_keys=True) + "\n")
        fh.write(json.dumps({"summary": summary}) + "\n")


if __name__ == "__main__":
    main()
