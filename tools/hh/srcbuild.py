"""Build src/ C files from the matched/ registry, deterministically, and verify every C function
in its real file context.

Each src/<seg>/<file>.c is generated from scratch: #include "common.h", then one entry per function
in address order: the registry snippet if there is one, else `#pragma GLOBAL_ASM(...)` (or splat's
empty-stub C for `jr $ra; nop` functions). Snippets are combined like this:
  - a snippet's `extern` declarations are dropped when that name was already declared or defined
    earlier in the file (workers each declare what they use; the first declaration wins)
  - a snippet that still makes the file fail to compile, or whose function no longer matches in
    this file, is left out (reported as rejected) and the file is rebuilt without it

  srcbuild.py all                  rebuild every src file from the registry (no new matches)
  srcbuild.py add BATCH [BATCH..]  add each batch's verified matches to the registry, keeping only
                                   those that work in context; then run `make` to confirm the ROM
"""
import glob, json, os, re, shutil, subprocess, sys, tempfile
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
sys.path.insert(0, os.path.join(HH, "tools/hh"))
import try_func
from elftools.elf.elffile import ELFFile
IMG = open("build/expanded.bin", "rb").read()
IDO = "tools/ido/7.1/cc"
CFLAGS = "-G 0 -non_shared -Xcpluscomm -mips2 -O2 -I include -I src".split()
ASFLAGS = "-EB -march=vr4300 -mabi=32 -G 0 -I include -I build/include".split()
DECL = re.compile(r"^\s*extern\b[^;]*?\b((?:func|D)_[0-9A-F]{8}|[A-Za-z_]\w*)\s*(?:\(|\[|;)")
DEFN = re.compile(r"^[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\([^;]*$")
TYPEDEF = re.compile(r"\btypedef\b.*?\b(\w+)\s*;\s*$|^\s*}\s*(\w+)\s*;\s*$")

def entries(seg, cfile):
    """Functions of one C file in address order: (name, asm path, rom offset, size)."""
    out = []
    for p in glob.glob("asm/nonmatchings/%s/%s/*.s" % (seg, cfile)):
        s = open(p).read()
        m = re.search(r"nonmatching (\S+), (0x[0-9A-F]+)\s+glabel \1\s+/\* ([0-9A-F]+) ([0-9A-F]+) ", s)
        if m: out.append((m.group(1), p, int(m.group(3), 16), int(m.group(2), 16), int(m.group(4), 16)))
    return sorted(out, key=lambda e: e[2])

def _text_ends():
    """Expanded-image offset where each segment's text ends (start of its data subsegment)."""
    ends, cur = {}, None
    for l in open("hybridheaven.yaml"):
        m = re.match(r"\s+- \[0x([0-9A-F]+), c, (\w+)/", l)
        if m: cur = m.group(2); continue
        m = re.match(r"\s+- \[0x([0-9A-F]+), data\]", l)
        if m and cur: ends[cur] = int(m.group(1), 16); cur = None
    return ends
SPLITS = {k: [int(x, 16) for x in v] for k, v in json.load(open("tools/hh/file_splits.json")).items()}
TEXT_END = _text_ends()

def file_span(seg, cfile):
    """(start, end) expanded-image offsets of one original C file's .text."""
    ents = entries(seg, cfile); start = ents[0][2]
    st = SPLITS[seg]; i = st.index(start)
    end = st[i + 1] if i + 1 < len(st) else TEXT_END.get(seg, ents[-1][2] + ents[-1][3])
    return start, end

def pad_asm(seg, cfile, nbytes):
    """An asm file holding the original's end-of-file zero padding (IDO doesn't emit it for C)."""
    p = "asm/nonmatchings/%s/%s/_pad_%d.s" % (seg, cfile, nbytes)     # size in the name: gen_pads.py recreates it
    with open(p, "w") as fh:
        fh.write("glabel pad_%s_%s\n" % (seg, cfile) + "".join("    nop\n" for _ in range(nbytes // 4)))
    return p

def is_stub(off, size):
    return size == 8 and IMG[off:off + 8] == b"\x03\xe0\x00\x08\x00\x00\x00\x00"

def snippet_lines(text, declared):
    """Snippet body without #include and without externs for names already declared."""
    keep = []
    for line in text.splitlines():
        if line.lstrip().startswith("#include"): continue
        m = DECL.match(line)
        if m and m.group(1) in declared: continue
        keep.append(line)
    return keep

def render(seg, cfile, snips, pad=0):
    """Return (text, line ranges per snippet function)."""
    lines = ['#include "common.h"', ""]; ranges = {}; declared = set()
    for name, path, off, size, vram in entries(seg, cfile):
        if name in snips:
            body = snippet_lines(snips[name], declared)
            start = len(lines) + 1; lines += body + [""]; ranges[name] = (start, len(lines))
            for l in body:
                m = DECL.match(l) or DEFN.match(l)
                if m: declared.add(m.group(1))
                t = TYPEDEF.search(l)
                if t: declared.add(t.group(1) or t.group(2))
        elif is_stub(off, size):
            lines += ["void %s(void) {" % name, "}", ""]; declared.add(name)
        else:
            lines += ['#pragma GLOBAL_ASM("%s")' % path, ""]
    if pad: lines += ['#pragma GLOBAL_ASM("%s")' % pad_asm(seg, cfile, pad), ""]
    return "\n".join(lines) + "\n", ranges

def compile_file(text, td):
    c = os.path.join(td, "f.c"); o = os.path.join(td, "f.o"); open(c, "w").write(text)
    r = subprocess.run([sys.executable, "tools/asm-processor/build.py", IDO, "--", "mips-linux-gnu-as"] + ASFLAGS +
                       ["--", "-c"] + CFLAGS + ["-o", o, c], capture_output=True, text=True)
    return (o if r.returncode == 0 else None), r.stderr + r.stdout

def func_ok(obj, name, off, size, vram, base):
    """Instructions must match, and every address must resolve to the original's (exact link check)."""
    try: mine, rel = try_func.func_bytes(obj, name)
    except StopIteration: return False
    orig = IMG[off:off + size]
    while len(mine) > size and mine[-4:] == b"\0\0\0\0": mine = mine[:-4]
    if try_func.compare(mine, rel, orig)[2]: return False
    exact = try_func.linked_func_bytes(obj, name, vram, base)
    if exact is None: return True                       # unresolvable symbol names: masked check only
    while len(exact) > size and exact[-4:] == b"\0\0\0\0": exact = exact[:-4]
    return exact == orig

def settle(seg, cfile, snips, td):
    """Try to build one C file with `snips`. Drops snippets that break it. Returns (kept, rejected, text, problem)."""
    snips = dict(snips); rejected = {}; pad = 0
    info = {e[0]: e for e in entries(seg, cfile)}
    for _ in range(len(snips) + 2):
        text, ranges = render(seg, cfile, snips, pad)
        obj, err = compile_file(text, td)
        if obj is None:
            lines = [int(x) for x in re.findall(r"line (\d+)", err)]
            bad = next((n for l in lines for n, (a, b) in ranges.items() if a <= l <= b), None)
            if bad is None:            # error not attributable: fall back to dropping the last snippet
                bad = sorted(snips, key=lambda n: info[n][2])[-1] if snips else None
            if bad is None: return {}, rejected, None, "file does not compile:\n" + err[-600:]
            rejected[bad] = "compile error in file context"; snips.pop(bad); continue
        base = min(e[4] for e in info.values())        # the C file's .text starts at its first function
        wrong = [n for n in snips if not func_ok(obj, n, info[n][2], info[n][3], info[n][4], base)]
        if not wrong:
            # the whole file must keep its original size, or everything after it shifts
            start, end = file_span(seg, cfile)
            with open(obj, "rb") as fh:
                got = ELFFile(fh).get_section_by_name(".text")["sh_size"]
            short = (end - start) - got
            if short > 0 and short % 4 == 0 and not any(IMG[end - short:end]) and pad == 0:
                pad = short; continue                 # rebuild with the original's zero padding
            if short != 0: return {}, rejected, None, "file .text is 0x%X, original 0x%X" % (got, end - start)
            return snips, rejected, text, None
        for n in wrong: rejected[n] = "does not match in file context (instructions or addresses)"; snips.pop(n)
    return {}, rejected, None, "gave up"

def build_one(args):
    """Build one C file. `prio` orders the snippets (lower = registered earlier); earlier work always wins a
    conflict: if the all-at-once build drops anything, rebuild by adding snippets one at a time in priority order."""
    seg, cfile, snips, prio = args
    fname = "%s/%s" % (seg, cfile)
    with tempfile.TemporaryDirectory() as td:
        kept, rej, text, problem = settle(seg, cfile, snips, td)
        if not rej and not problem:
            open("src/%s.c" % fname, "w").write(text); return (fname, kept, {}, None)
        kept, rejected, text = {}, {}, None
        for n in sorted(snips, key=lambda n: (prio.get(n, float("inf")), n)):
            trial = dict(kept); trial[n] = snips[n]
            k2, r2, t2, p2 = settle(seg, cfile, trial, td)
            if not p2 and set(k2) == set(trial): kept, text = k2, t2
            else: rejected[n] = r2.get(n) or "conflicts with earlier-registered functions in this file"
        if text is None:
            k2, r2, text, p2 = settle(seg, cfile, {}, td)
        open("src/%s.c" % fname, "w").write(text if text else render(seg, cfile, {})[0])
        return (fname, kept, rejected, None)

def registry():
    reg = {}
    for p in glob.glob("matched/*/*.c"):
        seg, name = p.split("/")[1], os.path.basename(p)[:-2]
        reg[(seg, name)] = open(p).read()
    return reg

def file_of(seg, name):
    hits = glob.glob("asm/nonmatchings/%s/*/%s.s" % (seg, name))
    return hits[0].split("/")[3] if len(hits) == 1 else None

def run(cands, new_keys):
    """cands: {(seg, name): text}. Builds every affected file; returns (kept keys, rejected {key: why})."""
    byfile = {}
    for (seg, name), text in cands.items():
        cf = file_of(seg, name)
        if cf: byfile.setdefault((seg, cf), {})[name] = text
    prio = {}
    for (seg, name) in cands:
        p = "matched/%s/%s.c" % (seg, name)
        prio[(seg, name)] = os.path.getmtime(p) if os.path.exists(p) and (seg, name) not in new_keys else float("inf")
    jobs = [(seg, cf, sn, {n: prio[(seg, n)] for n in sn}) for (seg, cf), sn in sorted(byfile.items())]
    kept, rejected = set(), {}
    with Pool(max(1, os.cpu_count() - 2)) as p:
        for fname, snips, rej, problem in p.imap_unordered(build_one, jobs):
            seg = fname.split("/")[0]
            kept |= {(seg, n) for n in snips}; rejected.update({(seg, n): why for n, why in rej.items()})
            if problem: print("PROBLEM", fname, problem)
    return kept, rejected

if __name__ == "__main__" and sys.argv[1] in ("all", "add"):
    mode = sys.argv[1]
    reg = registry()
    if mode == "all":
        kept, rejected = run(reg, set())
        print("rebuilt from registry: %d functions in C, %d rejected" % (len(kept), len(rejected)))
        os.makedirs("matched_rejected", exist_ok=True)
        with open("queue/rejected.jsonl", "a") as fh:
            for (seg, n), why in sorted(rejected.items()):
                os.makedirs("matched_rejected/" + seg, exist_ok=True)
                shutil.move("matched/%s/%s.c" % (seg, n), "matched_rejected/%s/%s.c" % (seg, n))
                fh.write(json.dumps({"segment": seg, "func": n, "why": why, "was_registered": True}) + "\n")
    elif mode == "add":
        new = {}
        for b in sys.argv[2:]:
            for l in open("queue/%s/results.jsonl" % b):
                r = json.loads(l); key = (r["segment"], r["func"])
                if r["verified"] == "MATCH" and key not in reg:
                    new[key] = open("queue/%s/work/%s/attempt.c" % (b, r["func"])).read()
        cands = dict(reg); cands.update(new)
        kept, rejected = run(cands, set(new))
        added = 0
        for key in new:
            if key in kept:
                os.makedirs("matched/" + key[0], exist_ok=True)
                open("matched/%s/%s.c" % key, "w").write(new[key]); added += 1
        log = "queue/rejected.jsonl"
        with open(log, "a") as fh:
            for key, why in rejected.items():
                fh.write(json.dumps({"segment": key[0], "func": key[1], "why": why, "was_registered": key in reg}) + "\n")
        print("added %d of %d new matches to the registry; %d rejected in context (see %s)" % (added, len(new), len(rejected), log))


def context_for(seg, func):
    """Declarations already in force in `func`'s C file (excluding func's own snippet): every extern,
    typedef/struct, and a prototype for each C function defined there. Given to workers as context.h."""
    cf = file_of(seg, func)
    reg = {n: t for (s, n), t in registry().items() if s == seg and n != func}
    names = {e[0] for e in entries(seg, cf)}
    text, _ = render(seg, cf, {n: t for n, t in reg.items() if n in names})
    out, lines, i = [], text.splitlines(), 0
    while i < len(lines):
        l = lines[i]
        if l.startswith("#pragma") or l.startswith("#include") or not l.strip(): i += 1; continue
        if DEFN.match(l) and "{" in l or (DEFN.match(l) and i + 1 < len(lines) and lines[i + 1].strip() == "{"):
            head = l.split("{")[0].rstrip()
            out.append(head + ";")
            depth = l.count("{") - l.count("}"); i += 1
            if depth == 0 and "{" not in l:          # brace on the next line
                depth = lines[i].count("{") - lines[i].count("}"); i += 1
            while depth > 0 and i < len(lines):
                depth += lines[i].count("{") - lines[i].count("}"); i += 1
            continue
        out.append(l); i += 1
    return "\n".join(['#include "common.h"', "/* Declarations already used in this function's source file %s/%s.c."
                      % (seg, cf), "   Use them as they are; do not redeclare these names differently. */"] + out) + "\n"


if __name__ == "__main__" and sys.argv[1] == "context":
    sys.stdout.write(context_for(sys.argv[2], sys.argv[3]))
