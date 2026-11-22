"""as1 structure oracle: which basic-block structure makes IDO's as1 schedule a function like the target?

Some near-misses differ only in as1's placement of one instruction (a macro's `li $at`, a hoisted `lui`), and as1's
block-level code motion decides that from the basic-block structure of its input, not from the order of records:
mutating ugen's binasm record by record found nothing for file014 func_80242A90 (Fable 5.2, ~8,300 trials). This tool
mutates the *structure* instead and runs the real assembler:

  1. compile the attempt with the game's IDO 7.1 flags to text assembly (cc -S: ugen's output as text);
  2. check that as0 + as1 (with the C path's as1 flags) on that text reproduces the C compile's .text exactly, so text
     edits stand for binasm edits (the tool stops if not);
  3. apply structural edits at basic-block level, assemble each with the real as0/as1, and compare the function with
     the ROM (relocated fields masked, as try_func.py):
       split@L.k   new label before instruction k of block L, referenced from .rdata (a jump-table-style entry)
       label@L.k   the same label, unreferenced
       ref@L       an extra predecessor for block L (its label referenced from .rdata)
       unlabel@L   drop block L's label when only fall-through reaches it (merge with the block above)
       thread@B    branch B retargeted past a block that only holds `b X` (straight to X)
       unthread@B  branch B sent through a new `b X` trampoline block (the opposite)
       dupcmp@B    branch B's target holds only a compare-and-branch: B gets its own copy of it (tail duplication)
       invert@B    `bCC L` becomes `b!CC M; b L; M:` (an extra edge and block)
       delloc@i    a .loc line dropped (two source lines joined), reloc@i its number changed, addloc@i a new .loc
                   before instruction line i (a statement broken across lines): as1 reads line records, so source
                   line breaks change the schedule, and changing them is honest (formatting only)
       noloc       all .loc lines dropped
       noalias@i   one .noalias/.alias pair dropped (noalias: all of them)
     then pairs of edits around the first mismatch.
  4. report hits (exact code match), and the edits that reduce the number of differing words.

The edits need not be semantics-preserving: the oracle only says which structure reproduces the schedule. A hit then
has to be expressed as honest C (no `if (0)`, no gotos that exist only to steer, no volatile/register) and checked
with try_func.py.

Findings (11-22, the four open as1 cases; queue/as1_oracle/*.json):
  - an extra *unknown* predecessor (a label referenced from data, as a jump-table entry would be) reproduces the
    target exactly for file014 func_80242A90 (split@#0.1 / split@#0.8: after `subu sp` or between the first jal and
    its beq) and file057 func_80368374 (ref@$58, ref@$97, split@$62.k). An explicit extra branch to the same label
    does not, nor does an unreferenced label: as1 treats data-referenced labels differently from branch targets
    (presumably as successors of the indirect `j $reg`, which changes liveness upstream). IDO C only produces
    data-referenced labels for switch tables, and the targets' tables point elsewhere, so no honest C was found.
  - as1 reads .loc: dropping all line records changes 34 words of func_80242A90, and moving one line break in its C
    (`x = 0x14; } else if` split over two lines) changes the score (593 -> 592/596). Source line layout is an honest
    lever; file025 func_801D7798 improves 4 -> 2 differing words with one added line record (addloc).
  - file008 func_8010DD4C: no hit; unreferenced labels (block splits) improve 7 -> 3 words.

  as1_oracle.py FUNC SEG ATTEMPT.c [--headers DIR] [--pairs N] [--json OUT]
  as1_oracle.py --case SEG FUNC --root /path/to/live/repo     (attempt and headers from ROOT/build/attempt_best.json)
"""
import argparse, glob, itertools, json, os, re, shutil, subprocess, sys, tempfile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import idoflags
import try_func as T

HH = T.HH
IDO = os.path.join(HH, "tools/ido/7.1")
AS1_FLAGS = ["-t5_ll_sc_bug", "-elf", "-G", "0", "-p0"] + (["-r4300_mul"] if idoflags.R4300_MUL else []) + \
            ["-mips2", "-EB", "-g0", "-O2"]
AS0_FLAGS = ["-G", "0"] + (["-r4300_mul"] if idoflags.R4300_MUL else []) + ["-mips2", "-EB", "-g0", "-O2"]

BRANCH = re.compile(r"^(b|beq|bne|beqz|bnez|blez|bgtz|bltz|bgez|bltzal|bgezal|bc1t|bc1f|beql|bnel|beqzl|bnezl|blezl|"
                    r"bgtzl|bltzl|bgezl|bc1tl|bc1fl|blt|ble|bgt|bge|bltu|bleu|bgtu|bgeu|j)$")
INVERSE = {"beq": "bne", "bne": "beq", "beqz": "bnez", "bnez": "beqz", "blez": "bgtz", "bgtz": "blez", "bltz": "bgez",
           "bgez": "bltz", "bc1t": "bc1f", "bc1f": "bc1t", "blt": "bge", "bge": "blt", "ble": "bgt", "bgt": "ble",
           "bltu": "bgeu", "bgeu": "bltu", "bleu": "bgtu", "bgtu": "bleu"}
LOC = re.compile(r"^(\s*\.loc\s+\d+\s+)(\d+)")
LABEL = re.compile(r"^(\$\d+|[A-Za-z_.$][\w.$]*):\s*$")


# ---------------------------------------------------------------- text assembly model

def _ins(line):
    """(mnemonic, operands) of an instruction line, or None for labels/directives/comments/blank."""
    s = line.split(" #", 1)[0].strip() if not line.lstrip().startswith("#") else ""
    if not s or s.startswith(".") or s.startswith("#") or LABEL.match(s): return None
    parts = s.split(None, 1)
    return parts[0], (parts[1] if len(parts) > 1 else "")


def function_body(lines, func):
    """Index range [start, end) of the lines between `func:` and `.end func`."""
    s = next(i for i, l in enumerate(lines) if l.strip() == func + ":")
    e = next(i for i in range(s, len(lines)) if re.match(r"^\s*\.end\s+%s\b" % re.escape(func), lines[i]))
    return s + 1, e


def blocks(lines, lo, hi):
    """Basic blocks of the function text: [dict(label=name or None, label_line=i or None, ins=[line indices])].
    A block starts at a label and ends after a branch/jump (IDO text has no delay slots: as1 fills them).
    Lines inside .rdata (jump tables) are skipped."""
    out, cur, in_data = [], None, False
    def new(label=None, li=None):
        b = dict(label=label, label_line=li, ins=[]); out.append(b); return b
    cur = new()
    for i in range(lo, hi):
        s = lines[i].strip()
        if s.startswith(".rdata") or s.startswith(".data"): in_data = True; continue
        if s.startswith(".text"): in_data = False; continue
        if in_data: continue
        m = LABEL.match(s)
        if m:
            cur = new(m.group(1), i) if (cur["ins"] or cur["label"]) else cur
            if cur["label"] is None: cur["label"], cur["label_line"] = m.group(1), i
            continue
        x = _ins(lines[i])
        if x is None: continue
        cur["ins"].append(i)
        if BRANCH.match(x[0]): cur = new()
    return [b for b in out if b["ins"] or b["label"]]


def branch_label(line):
    x = _ins(line)
    if not x or not BRANCH.match(x[0]): return None
    t = x[1].split(",")[-1].strip()
    if x[0] == "j" and re.match(r"^\$(\d+)$", t) and int(t[1:]) < 32: return None      # j $31 / j $reg
    return t if t.startswith("$") else None


def referenced_labels(lines):
    """Local labels used as operands ($32 and up: IDO numbers its labels after the 32 registers)."""
    refs = set()
    for l in lines:
        if LABEL.match(l.strip()): continue
        for t in re.findall(r"\$(\d+)\b", l.split(" #", 1)[0]):
            if int(t) >= 32: refs.add("$" + t)
    return refs


# ---------------------------------------------------------------- assembling

class Assembler:
    """Runs the real as0 + as1 on text assembly in a private temp dir and returns the function's code + relocs."""
    def __init__(self, func, workdir):
        self.func, self.wd, self.n = func, workdir, 0

    def __call__(self, text):
        self.n += 1
        s, g, t, o = (os.path.join(self.wd, "m" + e) for e in (".s", ".G", ".T", ".o"))
        for p in (g, t, o):
            if os.path.exists(p): os.remove(p)
        open(s, "w").write(text)
        r = subprocess.run([os.path.join(IDO, "as0")] + AS0_FLAGS + [s, "-o", g, "-t", t], capture_output=True, text=True)
        if r.returncode or not os.path.exists(g): return None
        r = subprocess.run([os.path.join(IDO, "as1")] + AS1_FLAGS + [g, "-o", o, "-t", t], capture_output=True, text=True)
        if r.returncode or not os.path.exists(o): return None
        try:
            return T.func_bytes(o, self.func)
        except StopIteration:
            return None


def score(got, orig):
    """(differing words, total) with relocated fields masked; got = (bytes, relocs) or None."""
    if got is None: return None
    mine, rel = got
    while len(mine) > len(orig) and mine[-4:] == b"\0\0\0\0": mine = mine[:-4]
    good, n, diffs = T.compare(mine, rel, orig)
    return len(diffs), n, (diffs[0][0] if diffs else None)


# ---------------------------------------------------------------- structural edits

def edits(lines, lo, hi, window=None, fresh=None):
    """Yield (name, new_lines) for every single structural edit; `window` limits to blocks with index in it."""
    bl = blocks(lines, lo, hi)
    refs = referenced_labels(lines[lo:hi])
    fresh = fresh or itertools.count(9000)
    def with_ref(ls, lab):
        # a jump-table-style reference: an extra, unknown predecessor for the label (placed before ls's own .end)
        end = next(i for i in range(len(ls) - 1, -1, -1) if re.match(r"^\s*\.end\b", ls[i]))
        return ls[:end] + ["\t.rdata\n", "\t.word\t%s\n" % lab, "\t.text\n"] + ls[end:]
    label_of = {b["label"]: k for k, b in enumerate(bl) if b["label"]}
    for k, b in enumerate(bl):
        if window is not None and k not in window: continue
        name = b["label"] or "#%d" % k
        for j in range(1, len(b["ins"])):
            lab = "$%d" % next(fresh); at = b["ins"][j]
            ls = lines[:at] + ["%s:\n" % lab] + lines[at:]
            yield "label@%s.%d" % (name, j), ls
            yield "split@%s.%d" % (name, j), with_ref(ls, lab)
        if b["label"]:
            yield "ref@%s" % name, with_ref(lines, b["label"])
            if b["label"] not in refs and b["label_line"] is not None:
                yield "unlabel@%s" % name, lines[:b["label_line"]] + lines[b["label_line"] + 1:]
        if not b["ins"]: continue
        last = b["ins"][-1]; x = _ins(lines[last]); tgt = branch_label(lines[last])
        if tgt is None: continue
        tb = label_of.get(tgt)
        # thread: target block holds only `b X`
        if tb is not None and len(bl[tb]["ins"]) == 1 and _ins(lines[bl[tb]["ins"][0]])[0] == "b":
            x2 = branch_label(lines[bl[tb]["ins"][0]])
            if x2: yield "thread@%s" % name, lines[:last] + [lines[last].replace(tgt, x2)] + lines[last + 1:]
        ret = max(i for i in range(lo, hi) if re.match(r"^\s*j\s+\$31\b", lines[i]))
        def after_ret(ls, extra):
            # new blocks go after the function's last return (nothing falls into them); edits keep line count
            # before `ret` unchanged when they replace a line in place
            return ls[:ret + 1] + extra + ls[ret + 1:]
        # unthread: through a new trampoline `b X`
        lab = "$%d" % next(fresh)
        yield "unthread@%s" % name, after_ret(lines[:last] + [lines[last].replace(tgt, lab)] + lines[last + 1:],
                                              ["%s:\n" % lab, "\tb\t%s\n" % tgt])
        # invert: bCC L  ->  b!CC M; b L; M:
        if x[0] in INVERSE:
            lab = "$%d" % next(fresh)
            new = lines[last].replace(x[0], INVERSE[x[0]], 1).replace(tgt, lab)
            yield "invert@%s" % name, lines[:last] + [new, "\tb\t%s\n" % tgt, "%s:\n" % lab] + lines[last + 1:]
        # dupcmp: the branch target holds only a compare-and-branch: give this branch its own copy of it
        # (tail duplication: `$new: bCC ..., L2; b <block after the compare>`)
        if tb is not None and tb + 1 < len(bl) and len(bl[tb]["ins"]) == 1:
            cl = lines[bl[tb]["ins"][0]]; cx = _ins(cl)
            if branch_label(cl) and cx[0] != "b" and last < ret:
                nxt = bl[tb + 1]; lab, lab2 = "$%d" % next(fresh), "$%d" % next(fresh)
                ls = lines[:last] + [lines[last].replace(tgt, lab)] + lines[last + 1:]
                if nxt["label"]: follow, extra_label = nxt["label"], []
                else: follow, extra_label = lab2, [(nxt["ins"][0], "%s:\n" % lab2)]
                ls = after_ret(ls, ["%s:\n" % lab, cl, "\tb\t%s\n" % follow])
                for at, l in extra_label: ls = ls[:at] + [l] + ls[at:]
                yield "dupcmp@%s>%s" % (name, bl[tb]["label"]), ls
    # line-number records: as1 reads .loc (dropping them all changes the schedule), so source line breaks are a
    # lever too, and an honest one (formatting). delloc = join with the previous line; addloc = break the line here
    locs = [i for i in range(lo, hi) if LOC.match(lines[i])]
    inwin = set(i for k, b in enumerate(bl) if window is None or k in window for i in b["ins"])
    for i in locs:
        near = any(j in inwin for j in range(i - 3, i + 4))
        if not near: continue
        yield "delloc@%d" % i, lines[:i] + lines[i + 1:]
        num = int(LOC.match(lines[i]).group(2))
        yield "reloc@%d" % i, lines[:i] + [LOC.sub(lambda m: "%s%d" % (m.group(1), num + 1), lines[i])] + lines[i + 1:]
    for i in sorted(inwin):
        prev = max((j for j in locs if j < i), default=None)
        if prev is None: continue
        num = int(LOC.match(lines[prev]).group(2))
        yield "addloc@%d" % i, lines[:i] + ["\t.loc\t2 %d\n" % (num + 1)] + lines[i:]
    yield "noloc", [l for l in lines if not LOC.match(l)]
    # memory-disambiguation hints ugen gives as1 (.noalias/.alias pairs): dropped one pair at a time, then all
    al = [i for i in range(lo, hi) if re.match(r"^\s*\.(no)?alias\b", lines[i])]
    for i in al:
        if ".noalias" in lines[i]:
            j = next((k for k in al if k > i and re.match(r"^\s*\.alias\b", lines[k])), None)
            if j is not None and (window is None or any(x in inwin for x in range(i, j))):
                yield "noalias@%d" % i, [l for k, l in enumerate(lines) if k not in (i, j)]
    if al: yield "noalias", [l for k, l in enumerate(lines) if k not in al]


def first_block(lines, lo, hi, word):
    """Index of the text block that holds output instruction `word`, counting branch-terminated blocks
    (as1 keeps block order; each branch adds one delay slot word). Approximate: used to centre a window."""
    bl = blocks(lines, lo, hi); n = 0
    for k, b in enumerate(bl):
        n += len(b["ins"]) + (1 if b["ins"] and _ins(lines[b["ins"][-1]])[0] and BRANCH.match(_ins(lines[b["ins"][-1]])[0]) else 0)
        if n > word: return k
    return len(bl) - 1


# ---------------------------------------------------------------- driver

def stage(src, headers, td):
    for h in glob.glob(os.path.join(headers, "*.h")) if headers else []:
        shutil.copy(h, td)
    dst = os.path.join(td, "attempt.c"); shutil.copy(src, dst)
    return dst


def compile_text(c, td):
    """cc -S and the C path's own object; returns (text lines, .o path)."""
    inc = ["-I", os.path.join(HH, "include"), "-I", os.path.join(HH, "src")]
    cc = os.path.join(IDO, "cc")
    r = subprocess.run([cc, "-c"] + idoflags.BASE + idoflags.OPT + inc + ["-o", os.path.join(td, "c.o"), c],
                       cwd=td, capture_output=True, text=True)
    if r.returncode: sys.exit("compile failed:\n" + r.stderr[-2000:])
    r = subprocess.run([cc, "-S"] + idoflags.BASE + idoflags.OPT + inc + [os.path.basename(c)], cwd=td,
                       capture_output=True, text=True)
    s = c[:-2] + ".s"
    if r.returncode or not os.path.exists(s): sys.exit("cc -S failed:\n" + r.stderr[-2000:])
    return open(s).readlines(), os.path.join(td, "c.o")


def run(func, seg, src, headers=None, pairs=40, log=print):
    off, size, vram, _ = T.find_func(func, seg=seg)
    orig = open(T.IMG, "rb").read()[off:off + size]
    res = dict(func=func, seg=seg, attempt=src, trials=0, hits=[], improved=[])
    with tempfile.TemporaryDirectory(prefix="as1o-") as td:
        c = stage(src, headers, td)
        lines, cobj = compile_text(c, td)
        asm = Assembler(func, td)
        base_c = T.func_bytes(cobj, func)
        base_t = asm("".join(lines))
        if base_t is None or base_t[0] != base_c[0]:
            res["error"] = "as0+as1 on cc -S text does not reproduce the C compile; text edits would not be binasm edits"
            log(res["error"]); return res
        b = score(base_t, orig); res["baseline"] = dict(diffs=b[0], words=b[1], first=b[2])
        log("%s %s: baseline %d/%d words differ, first at +0x%X" % (seg, func, b[0], b[1], 4 * (b[2] or 0)))
        if b[0] == 0: res["hits"].append("baseline"); return res
        lo, hi = function_body(lines, func)
        centre = first_block(lines, lo, hi, b[2])
        singles = []
        for name, ls in edits(lines, lo, hi):
            r = score(asm("".join(ls)), orig); res["trials"] += 1
            if r is None: continue
            singles.append((r[0], name, r))
            if r[0] == 0: res["hits"].append(name); log("HIT %s" % name)
        singles.sort()
        res["improved"] = [dict(edit=n, diffs=r[0], first=r[2]) for d, n, r in singles if d < b[0]][:20]
        # pairs of edits in a window around the first mismatch
        win = set(range(max(0, centre - 3), centre + 4))
        # the first edits of a pair: the window's edits that already helped, then the rest of the window's
        wl = dict(edits(lines, lo, hi, window=win))
        helped = [n for d, n, r in singles if n in wl and d < b[0]]
        cands = (helped + [n for n in wl if n not in helped])[:pairs]
        for n1 in cands:
            l1 = wl[n1]
            lo1, hi1 = function_body(l1, func)
            for n2, l2 in edits(l1, lo1, hi1, window=win, fresh=itertools.count(9500)):
                r = score(asm("".join(l2)), orig); res["trials"] += 1
                if r is None: continue
                if r[0] == 0: res["hits"].append(n1 + "+" + n2); log("HIT %s+%s" % (n1, n2))
                elif r[0] < b[0] and len(res["improved"]) < 40:
                    res["improved"].append(dict(edit=n1 + "+" + n2, diffs=r[0], first=r[2]))
        res["improved"].sort(key=lambda d: d["diffs"])
        res["window"] = sorted(win)
    log("%s %s: %d trials, %d hits, best %s" % (seg, func, res["trials"], len(res["hits"]),
        (res["improved"][0] if res["improved"] else "no improvement")))
    return res


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("func", nargs="?"); ap.add_argument("seg", nargs="?"); ap.add_argument("src", nargs="?")
    ap.add_argument("--headers"); ap.add_argument("--pairs", type=int, default=40)
    ap.add_argument("--case", nargs=2, metavar=("SEG", "FUNC")); ap.add_argument("--root", default=HH)
    ap.add_argument("--json")
    a = ap.parse_args()
    if a.case:
        seg, func = a.case
        best = json.load(open(os.path.join(a.root, "build/attempt_best.json")))["%s %s" % (seg, func)]
        src = os.path.join(a.root, best[1]); wd = os.path.dirname(src)
        if os.path.basename(wd) == ".attempts": wd = os.path.dirname(wd)
        res = run(func, seg, src, wd, a.pairs)
    else:
        res = run(a.func, a.seg, a.src, a.headers, a.pairs)
    if a.json: json.dump(res, open(a.json, "w"), indent=1)
    return 0 if res.get("hits") else 1


if __name__ == "__main__":
    sys.exit(main())
