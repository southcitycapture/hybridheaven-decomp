#!/usr/bin/env python3
"""Register-allocation experiment runner: one meaning-preserving source change at a time, and what it does.

  regsweep.py FUNC --seg SEG --source attempt.c [--rounds 2] [--save best.c] [--json out.json] [--jobs 8]

For a function whose instructions are right but whose registers are not (a register wall), this perturbs the
attempt in the ways known to steer IDO 7.1's allocator, one change per variant:
  swap / front   declaration order of two locals (uopt breaks priority ties by first occurrence)
  sign           s32 <-> u32 (and the other integer widths) on one local
  ref            a dead reference `if (x) {}` after x's first assignment, or at the end of the body (uopt counts the
                 reference, ~+10 save, and folds the empty if afterwards)
  split          `T x = e;` -> `T x;` and `x = e;` after the declarations
  register       the `register` keyword on one local
compiles each, and prints a sensitivity table: the try_func score, the number of aligned instructions whose registers
still differ (tools/hh/regtrace.py), the values whose register moved (and whether toward the target's), and which
target regions (tools/hh/regions.py) got better or worse, so a change's effect is local and visible. With --rounds
N > 1 the best improving change is kept and the sweep repeats from it. A MATCH is reported and saved (--save); it
still has to pass the in-file check and the ROM build like any other match."""
import argparse
import collections
from concurrent.futures import ProcessPoolExecutor
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import regtrace as R

HH = R.HH
KEYWORDS = {"return", "if", "else", "while", "for", "do", "switch", "case", "default", "goto", "break", "continue",
            "sizeof"}
SIGN = {"s8": "u8", "u8": "s8", "s16": "u16", "u16": "s16", "s32": "u32", "u32": "s32", "s64": "u64", "u64": "s64"}


# ------------------------------------------------------------------------------------------------- source parsing

def body_span(text, func, top_level=False):
    """(index of the body's '{', index of its matching '}') of FUNC's definition."""
    for m in re.finditer(r"\b%s\s*\(" % re.escape(func), text):
        if top_level and text[:m.start()].count('{') != text[:m.start()].count('}'):
            continue  # a call in another function is not this definition
        depth, i = 0, m.end() - 1
        while i < len(text):                     # skip the parameter list
            if text[i] == "(": depth += 1
            elif text[i] == ")":
                depth -= 1
                if depth == 0: break
            i += 1
        j = i + 1
        if re.match(r"\s*;", text[j:]):
            continue  # a prototype is not a K&R definition of a later function
        while j < len(text) and text[j] not in "{;": j += 1
        # K&R parameter declarations end with ';' before the '{'
        while j < len(text) and text[j] == ";":
            k = j + 1
            while k < len(text) and text[k] not in "{;": k += 1
            if k < len(text) and text[k] == "{" and re.match(r"\s*$", text[j + 1:k]): j = k; break
            j = k
        if j >= len(text) or text[j] != "{": continue
        depth, k = 0, j
        while k < len(text):
            if text[k] == "{": depth += 1
            elif text[k] == "}":
                depth -= 1
                if depth == 0: return j, k
            k += 1
    return None


def split_top(s, sep=","):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "([{": depth += 1
        elif ch in ")]}": depth -= 1
        if ch == sep and depth == 0: out.append(cur); cur = ""
        else: cur += ch
    out.append(cur)
    return out


DECL = re.compile(r"^(\s*)((?:(?:register|static|volatile|const|unsigned|signed|struct|union|enum)\s+)*"
                  r"[A-Za-z_]\w*)((?:\s|\*)+)(.*?);\s*(?://.*|/\*.*\*/)?$")


def declarations(lines):
    """Leading declaration lines of a body: [(line index, type text, [names], has_init, single)]."""
    out = []
    for i, l in enumerate(lines):
        s = l.strip()
        if not s or s.startswith("//") or s.startswith("/*"): continue
        m = DECL.match(l)
        if not m: break
        typ = m.group(2)
        first = typ.split()[0]
        if first in KEYWORDS: break
        rest = m.group(3).strip() + m.group(4)
        decls = split_top(rest)
        names = []
        for d in decls:
            d0 = d.split("=", 1)[0]
            nm = re.findall(r"[A-Za-z_]\w*", d0.replace("*", " "))
            if not nm: names = None; break
            names.append(nm[0])
        if not names or "(" in rest.split("=", 1)[0]: break
        out.append((i, typ, names, "=" in rest, len(decls) == 1))
    return out


def params_of(text, func, brace):
    """Parameter names of FUNC's definition (ANSI or K&R): the last identifier of each top-level parameter."""
    m = None
    for m in re.finditer(r"\b%s\s*\(" % re.escape(func), text[:brace]): pass
    if m is None: return []
    depth, i = 0, m.end() - 1
    start = i + 1
    while i < brace:
        if text[i] == "(": depth += 1
        elif text[i] == ")":
            depth -= 1
            if depth == 0: break
        i += 1
    out = []
    for part in split_top(text[start:i]):
        ids = re.findall(r"[A-Za-z_]\w*", part.split("[")[0])
        if ids and ids[-1] != "void": out.append(ids[-1])
    return out


def variants(text, func, focus=()):
    """[(label, new text)] single meaning-preserving changes inside FUNC's body."""
    span = body_span(text, func)
    if span is None: return []
    a, b = span
    head, body, tail = text[:a + 1], text[a + 1:b], text[b:]
    lines = body.split("\n")
    decls = declarations(lines)
    out = []
    def emit(label, new_lines):
        out.append((label, head + "\n".join(new_lines) + tail))
    uses = lambda line, names: any(re.search(r"\b%s\b" % re.escape(n), line.split("=", 1)[1]) for n in names) \
        if "=" in line else False
    # declaration order
    for k in range(len(decls) - 1):
        (i, _, n1, _, _), (j, _, n2, _, _) = decls[k], decls[k + 1]
        if uses(lines[j], n1): continue
        nl = list(lines); nl[i], nl[j] = lines[j], lines[i]
        emit("swap decl %s / %s" % (",".join(n1), ",".join(n2)), nl)
    for k in range(2, len(decls)):
        i, _, n, _, _ = decls[k]
        if any(uses(lines[i], d[2]) for d in decls[:k]): continue
        nl = list(lines); line = nl.pop(i); nl.insert(decls[0][0], line)
        emit("decl %s first" % ",".join(n), nl)
    # declarator order inside one line: `s16 a, b;` -> `s16 b, a;`
    for i, typ, names, init, single in decls:
        if not single and not init:
            m = DECL.match(lines[i])
            parts = [x.strip() for x in split_top(m.group(3).strip() + m.group(4))]
            nl = list(lines); nl[i] = "%s%s %s;" % (m.group(1), typ, ", ".join(reversed(parts)))
            emit("reverse decl %s" % ",".join(names), nl)
    # signedness, register, split init
    for i, typ, names, init, single in decls:
        words = typ.split()
        if words[-1] in SIGN:
            nl = list(lines); nl[i] = re.sub(r"\b%s\b" % words[-1], SIGN[words[-1]], lines[i], count=1)
            emit("%s -> %s %s" % (words[-1], SIGN[words[-1]], ",".join(names)), nl)
        if "register" not in words and "static" not in words:
            nl = list(lines); nl[i] = re.sub(r"^(\s*)", r"\1register ", lines[i], count=1)
            emit("register %s" % ",".join(names), nl)
    if decls:
        inits = [(i, names[0]) for i, typ, names, init, single in decls if init and single and "static" not in typ]
        last = decls[-1][0]
        for i, name in inits:
            m = re.match(r"^(\s*)(.*?)\s*=\s*(.*);(.*)$", lines[i])
            if not m: continue
            nl = list(lines)
            nl[i] = "%s%s;%s" % (m.group(1), m.group(2), m.group(4))
            nl.insert(last + 1, "%s%s = %s;" % (m.group(1), name, m.group(3)))
            emit("split init %s" % name, nl)
    # adjacent simple statements in the other order (statement order decides first use, so it breaks priority ties)
    simple = re.compile(r"^\s*[^{}]*;\s*(?://.*)?$")
    after0 = decls[-1][0] + 1 if decls else 0
    def ids(x): return set(re.findall(r"[A-Za-z_]\w*", x))
    def lhs(x):
        """What a statement writes: the variable, or the base of an indexed/pointer store."""
        m = re.match(r"^\s*\**\s*\(*\s*([A-Za-z_]\w*)[^=;]*?(?:[-+*/|&^]|<<|>>)?=(?!=)", x)
        return {m.group(1)} if m else (ids(x) if "++" in x or "--" in x else set())
    swaps = 0
    for k in range(after0, len(lines) - 1):
        x, y = lines[k], lines[k + 1]
        if not (simple.match(x) and simple.match(y)): continue
        if re.match(r"^\s*(return|break|continue|goto|case|default)\b", x) or re.match(r"^\s*(return|break|continue|goto|case|default)\b", y):
            continue
        if re.match(r"^(\s*)", x).group(1) != re.match(r"^(\s*)", y).group(1): continue
        if lhs(x) & ids(y) or lhs(y) & ids(x) or ("(" in x and "(" in y): continue
        nl = list(lines); nl[k], nl[k + 1] = y, x
        emit("swap stmts %d/%d" % (k, k + 1), nl)
        swaps += 1
        if swaps >= 30: break
    # dead references
    names = [n for d in decls for n in d[2]] + [p for p in params_of(text, func, a) if p not in focus or True]
    names = list(dict.fromkeys(names))
    after = decls[-1][0] + 1 if decls else 0
    indent = re.match(r"^(\s*)", lines[after] if after < len(lines) else "    ").group(1) or "    "
    order = sorted(names, key=lambda n: (n not in focus, names.index(n)))
    pnames = set(params_of(text, func, a))
    initialized = {n for i, typ, ns, init, single in decls for n in ns if init}
    for n in order:
        assign = re.compile(r"(?<![=!<>])\b%s\s*(?:[-+*/|&^]|<<|>>)?=(?!=)" % re.escape(n))
        first = next((k for k in range(after, len(lines)) if assign.search(lines[k]) and lines[k].rstrip().endswith(";")
                      and lines[k].count("{") == lines[k].count("}")), None)
        if first is not None:
            nl = list(lines); ind = re.match(r"^(\s*)", lines[first]).group(1)
            nl.insert(first + 1, "%sif (%s) {}" % (ind, n))
            emit("ref %s after line %d" % (n, first), nl)
        elif n not in pnames and n not in initialized:
            continue          # never assigned: a read without a reaching definition damages the schedule (L11)
        if n in pnames or n in initialized:
            nl = list(lines); nl.insert(after, "%sif (%s) {}" % (indent, n))
            emit("ref %s at start" % n, nl)
        # at the end: before a final return, else before the closing brace
        k = len(lines) - 1
        while k > after and not lines[k].strip(): k -= 1
        pos = k if lines[k].strip().startswith("return") else k + 1
        nl = list(lines); nl.insert(pos, "%sif (%s) {}" % (indent, n))
        emit("ref %s at end" % n, nl)
    return out


# -------------------------------------------------------------------------------------------------------- scoring

def score_file(job, trace_keep=None):
    """Compile one variant: try_func's verdict, regtrace's register picture, and region scores."""
    func, seg, path = job
    r = subprocess.run([str(HH / ".venv/bin/python"), str(HH / "tools/hh/try_func.py"), func, path, "--seg", seg],
                       capture_output=True, text=True, cwd=str(HH))
    first = (r.stdout or r.stderr).strip().splitlines()[0] if (r.stdout or r.stderr).strip() else "?"
    if first.startswith("compile failed"):
        return dict(path=path, verdict="compile failed", ok=False)
    m = re.match(r"score (\d+)/(\d+)", first)
    good, total = (int(m.group(1)), int(m.group(2))) if m else ((1, 1) if first.startswith("MATCH") else (0, 1))
    try:
        t = R.trace(func, seg, path, keep=trace_keep)
    except BaseException as e:   # noqa: BLE001 - a variant that the tracer can't read is still a data point
        return dict(path=path, verdict=first, ok=True, good=good, total=total, match=first.startswith("MATCH"),
                    mismatched=None, values={}, regions=[])
    values = {}
    for w in t["webs"]:
        if w["reg"] in R.FIXED or not w["refs"] or not w["named"]: continue
        values.setdefault(w["names"][0], (w["reg"], w["target"]))
    import regions
    rows = regions.compare(b"".join(x.to_bytes(4, "big") for x in t["target"]),
                           b"".join(x.to_bytes(4, "big") for x in t["mine"]), t["vram"])
    return dict(path=path, verdict=first, ok=True, good=good, total=total, match=first.startswith("MATCH"),
                mismatched=t["mismatched"], values=values,
                regions=[(r["region"], r["matching_instructions"], r["instructions"]) for r in rows])


def rank(r):
    if not r.get("ok"): return (-1,)
    return (r["match"], r["good"], -(r["mismatched"] if r["mismatched"] is not None else 1 << 20))


def describe(base, r):
    moved = []
    for n, (reg, tgt) in r["values"].items():
        if n in base["values"] and base["values"][n][0] != reg:
            want = base["values"][n][1]
            moved.append("%s %s->%s%s" % (n, R.rname(base["values"][n][0]), R.rname(reg),
                                          " (target)" if want == reg else ""))
    reg = []
    bmap = {x[0]: x[1] for x in base["regions"]}
    for num, good, total in r["regions"]:
        if num in bmap and good != bmap[num]: reg.append("r%d%+d" % (num, good - bmap[num]))
    return moved, reg


def sweep(func, seg, source, rounds=1, jobs=8, focus=(), log=print):
    src = Path(source)
    parent = src.parent.parent if src.parent.name == ".attempts" else src.parent
    work = Path(tempfile.mkdtemp(prefix="regsweep-", dir=str(HH / "build")))
    history = []
    try:
        cur_text = src.read_text(errors="replace")
        base_dir = work / "base"; base_dir.mkdir()
        R.stage(source, base_dir, seg, func)
        headers = list(base_dir.glob("*.h"))
        base = score_file((func, seg, str(base_dir / "attempt.c")))
        if not base.get("ok"): raise SystemExit("the attempt does not compile: " + base["verdict"])
        log("base: %s; aligned instructions with a different register: %s" % (base["verdict"], base["mismatched"]))
        if base.get("match"):
            return dict(match=True, text=cur_text, change="(none: the attempt already matches)", history=history)
        for rnd in range(rounds):
            vs = variants(cur_text, func, focus)
            if not vs:
                log("no variants (couldn't find %s's body or declarations)" % func); break
            jobs_list = []
            for k, (label, text) in enumerate(vs):
                d = work / ("r%d_%03d" % (rnd, k)); d.mkdir()
                for h in headers: shutil.copy(h, d)
                (d / "attempt.c").write_text(text)
                jobs_list.append((func, seg, str(d / "attempt.c")))
            with ProcessPoolExecutor(jobs) as ex:
                results = list(ex.map(score_file, jobs_list))
            rows = []
            for (label, text), r in zip(vs, results):
                r["label"], r["text"] = label, text
                rows.append(r)
            rows.sort(key=rank, reverse=True)
            log("round %d: %d variants of %s" % (rnd + 1, len(rows), func))
            log("  %-34s %-12s %8s  %s" % ("change", "score", "reg-diff", "effect (values moved; regions +/-)"))
            quiet = 0
            for r in rows:
                if not r.get("ok"):
                    quiet += 1; continue
                moved, reg = describe(base, r)
                d_good = r["good"] - base["good"]
                d_mis = (r["mismatched"] - base["mismatched"]) if r["mismatched"] is not None and base["mismatched"] is not None else 0
                if not moved and not reg and d_good == 0 and d_mis == 0 and not r["match"]:
                    quiet += 1; continue
                log("  %-34s %-12s %+8d  %s" % (r["label"][:34], "MATCH" if r["match"] else "%d/%d (%+d)" %
                    (r["good"], r["total"], d_good), d_mis, "; ".join(moved[:4] + ([" ".join(reg[:6])] if reg else []))))
            if quiet: log("  (%d variants changed nothing measurable or did not compile)" % quiet)
            history.append(dict(round=rnd + 1, base=base["verdict"], rows=[
                dict(change=r["label"], verdict=r.get("verdict"), mismatched=r.get("mismatched"),
                     moved=describe(base, r)[0] if r.get("ok") else [], regions=describe(base, r)[1] if r.get("ok") else [])
                for r in rows]))
            best = rows[0] if rows else None
            if best and best.get("match"):
                log("MATCH with: %s" % best["label"])
                return dict(match=True, text=best["text"], change=best["label"], history=history)
            if not best or rank(best) <= rank(base):
                log("no single change improves on the base")
                break
            log("keeping: %s (%s)" % (best["label"], best["verdict"]))
            base, cur_text = best, best["text"]
        return dict(match=False, text=cur_text, change=None, history=history)
    finally:
        shutil.rmtree(work, ignore_errors=True)


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("func"); ap.add_argument("--seg", required=True); ap.add_argument("--source", required=True)
    ap.add_argument("--rounds", type=int, default=1); ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--save", help="write the best variant here (the MATCH, or the last kept improvement)")
    ap.add_argument("--json")
    a = ap.parse_args()
    focus = []
    try:
        t = R.trace(a.func, a.seg, a.source)
        focus = [n for w in t["webs"] if not w["ok"] and w["named"] for n in w["names"]]
    except BaseException:  # noqa: BLE001
        pass
    res = sweep(a.func, a.seg, a.source, a.rounds, a.jobs, focus)
    if a.save and (res["match"] or res["history"]):
        Path(a.save).write_text(res["text"])
    if a.json:
        Path(a.json).write_text(json.dumps(dict(func=a.func, seg=a.seg, source=a.source, match=res["match"],
                                                change=res["change"], rounds=res["history"]), indent=1))
    return 0 if res["match"] else 1


if __name__ == "__main__":
    sys.exit(main())
