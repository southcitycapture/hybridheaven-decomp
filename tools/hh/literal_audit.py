"""literal_audit.py: registered functions that read their own float/double literals through `extern f32/f64 D_X`
declarations pointing into their own unit's readonly bytes (11-18, Fable 5.2 review of Task 40).

IDO keeps literal pools per function, so an own-unit f32/f64 used by exactly one function (and no asm block) is most
likely that function's literal read from frozen bytes, not a real `const` global. For each such function the audit
tries the fix: replace each extern with the value from the built object as a literal (`%.9g` + f for f32, `%.17g` for
f64), compile it alone and compare (tools/hh/try_func.py). Code-equal results ("MATCH", or only addresses differ, which
is the readonly placement's job) mean the literal form is available.

    literal_audit.py [--jobs 8] [--no-try]      -> build/literal_audit.json + summary on stdout
"""
import argparse, glob, json, os, re, shutil, struct, subprocess, sys, tempfile
from concurrent.futures import ProcessPoolExecutor
HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
sys.path.insert(0, os.path.join(HH, "tools/hh"))
EXTERN = re.compile(r'^\s*extern\s+(f32|f64|float|double)\s+(D_([0-9A-F]{8}))\s*;\s*$', re.M)
ARRAY = re.compile(r'^\s*extern\s+(?:const\s+)?(?:char|u8|s8|unsigned char)\s+(D_([0-9A-F]{8}))\s*\[\s*\]\s*;', re.M)


def ro_bytes(seg, cf):
    """The unit's final readonly bytes, from its built object (after any layout plan)."""
    from elftools.elf.elffile import ELFFile
    o = os.path.join(HH, "build/src/%s/%s.o" % (seg, cf))
    if not os.path.exists(o):
        return None
    with open(o, "rb") as f:
        s = ELFFile(f).get_section_by_name(".rodata")
        return s.data() if s else None


_CACHE = {}


def unit_texts(seg, cf, src_text, reg_names):
    """per unit, once: each registered function's body and the unit's asm file texts"""
    key = (seg, cf)
    if key not in _CACHE:
        import srcbuild
        bodies = {n: srcbuild.fn_body(src_text, n) or "" for n in reg_names}
        # only asm still in the build: the blocks this src file includes (asm/nonmatchings also keeps the original asm
        # of functions that are C now)
        live = re.findall(r'^#pragma GLOBAL_ASM\("([^"]+)"\)', src_text, re.M)
        asm = [open(os.path.join(HH, p), errors="replace").read() for p in live if os.path.exists(os.path.join(HH, p))]
        _CACHE[key] = (bodies, "\n".join(asm))
    return _CACHE[key]


def users(name, seg, cf, src_text, reg_names):
    """C functions (by registered name) and whether any asm file of the unit mentions name."""
    bodies, asm = unit_texts(seg, cf, src_text, reg_names)
    code_ref = re.search(r'%%(?:hi|lo|gp_rel)\(%s\b' % name, asm)   # an asm instruction using it (not its own dlabel)
    return [n for n, b in bodies.items() if re.search(r'\b%s\b' % name, b)], bool(code_ref)


def shortest(v, single):
    """the shortest decimal that reads back as exactly the same f32/f64 (0.01f, not 0.00999999978f)"""
    for n in range(1, 18):
        t = '%.*g' % (n, v)
        if (struct.unpack('>f', struct.pack('>f', float(t)))[0] == v) if single else (float(t) == v):
            return t
    return repr(v)


def literalise(text, vals):
    for name, (kind, v) in vals.items():
        text = re.sub(r'^\s*extern\s+(f32|f64|float|double)\s+%s\s*;\s*\n' % name, '', text, flags=re.M)
        lit = shortest(v, kind in ('f32', 'float'))
        if not re.search(r'[.eEn]', lit): lit += '.0'
        if kind in ('f32', 'float'): lit += 'f'
        text = re.sub(r'\b%s\b' % name, '(%s)' % lit, text)
    return text


def try_one(job):
    seg, fn, text, alt = job
    out = {}
    with tempfile.TemporaryDirectory() as td:
        ctx = subprocess.run([os.path.join(HH, ".venv/bin/python"), os.path.join(HH, "tools/hh/srcbuild.py"), "context", seg, fn],
                             cwd=HH, capture_output=True, text=True).stdout
        open(os.path.join(td, "context.h"), "w").write(ctx)
        for tag, t in (("before", text), ("literal", alt)):
            open(os.path.join(td, "attempt.c"), "w").write(t)
            r = subprocess.run([os.path.join(HH, ".venv/bin/python"), os.path.join(HH, "tools/hh/try_func.py"), fn, "attempt.c", "--seg", seg],
                               cwd=td, capture_output=True, text=True, timeout=300)
            line = ((r.stdout or r.stderr).splitlines() or [""])[0]
            out[tag] = line[:160]
    ok = lambda l: l.startswith("MATCH") or "instructions match but an address is wrong" in l
    out["converts"] = ok(out["before"]) and ok(out["literal"])
    return seg, fn, out


def main():
    ap = argparse.ArgumentParser(); ap.add_argument("--jobs", type=int, default=8); ap.add_argument("--no-try", action="store_true")
    a = ap.parse_args()
    os.chdir(HH)
    import srcbuild
    reg = srcbuild.registry()
    byfile = {}
    for (seg, n) in reg:
        byfile.setdefault((seg, srcbuild.file_of(seg, n)), []).append(n)
    rows, jobs, arrays = [], [], 0
    for (seg, fn), text in sorted(reg.items()):
        cf = srcbuild.file_of(seg, fn); base = srcbuild.FILE_RODATA.get((seg, cf))
        if base is None: continue
        size = srcbuild.file_rodata_size(seg, cf)
        own = [(m[1], m[2], int(m[3], 16)) for m in EXTERN.finditer(text) if base <= int(m[3], 16) < base + size]
        arrays += sum(1 for m in ARRAY.finditer(text) if base <= int(m[2], 16) < base + size)
        if not own: continue
        sp = "src/%s/%s.c" % (seg, cf); src_text = open(sp).read() if os.path.exists(sp) else ""
        ro = ro_bytes(seg, cf)
        single, vals = [], {}
        for kind, name, addr in own:
            cs, asm = users(name, seg, cf, src_text, byfile[(seg, cf)])
            one = cs == [fn] and not asm
            if one: single.append(name)
            if one and ro is not None:
                off = addr - base; w = 8 if kind in ("f64", "double") else 4
                if off + w <= len(ro):
                    vals[name] = (kind, struct.unpack(">d" if w == 8 else ">f", ro[off:off + w])[0])
        rows.append(dict(seg=seg, func=fn, own=[n for _, n, _ in own], single_user=single, size=0))
        if single and len(vals) == len(single):
            jobs.append((seg, fn, text, literalise(text, vals)))
    if not a.no_try:
        res = {}
        with ProcessPoolExecutor(a.jobs) as ex:
            for seg, fn, out in ex.map(try_one, jobs):
                res[(seg, fn)] = out
        for r in rows:
            r["try"] = res.get((r["seg"], r["func"]))
    sizes = {}
    rep = json.load(open("build/progress/report.json"))
    for u in rep["units"]:
        for f in u.get("functions", []): sizes[(u["name"].split("/")[0], f["name"])] = int(f.get("size", 0))
    for r in rows: r["size"] = sizes.get((r["seg"], r["func"]), 0)
    json.dump(rows, open("build/literal_audit.json", "w"), indent=1)
    S = lambda rs: (len(rs), len({r["seg"] + r["func"] for r in rs}), sum(r["size"] for r in rs) // 1024)
    with_own = rows; single = [r for r in rows if r["single_user"]]
    conv = [r for r in single if (r.get("try") or {}).get("converts")]
    print("functions with own-unit f32/f64 externs:      %d (%d KB of code)" % (len(with_own), sum(r["size"] for r in with_own) // 1024))
    print("  of which some extern has a single C user:   %d (%d KB)" % (len(single), sum(r["size"] for r in single) // 1024))
    print("  single-user externs in total:               %d" % sum(len(r["single_user"]) for r in single))
    if not a.no_try:
        print("  literal form still code-equal when tried:   %d (%d KB)" % (len(conv), sum(r["size"] for r in conv) // 1024))
    print("own-unit char/u8 array externs (strings etc.): %d declarations" % arrays)


if __name__ == "__main__":
    main()


def literal_form(seg, fn, text):
    """srcbuild add's literal gate (11-18, Fable 5.2): the candidate with each own-unit f32/f64 extern that no other C
    function and no other live asm block of the unit uses replaced by its value as a literal; None if nothing to do.
    The in-file trial decides: add registers the literal form if it places, else the extern form tagged literal-extern."""
    import srcbuild
    cf = srcbuild.file_of(seg, fn); base = srcbuild.FILE_RODATA.get((seg, cf))
    if not cf or base is None: return None
    size = srcbuild.file_rodata_size(seg, cf)
    own = [(m[1], m[2], int(m[3], 16)) for m in EXTERN.finditer(text) if base <= int(m[3], 16) < base + size]
    if not own: return None
    sp = os.path.join(HH, "src/%s/%s.c" % (seg, cf)); ro = ro_bytes(seg, cf)
    if not os.path.exists(sp) or ro is None: return None
    src = open(sp).read()
    others = [n for (s, n) in srcbuild.registry() if s == seg and n != fn and srcbuild.file_of(s, n) == cf]
    bodies = [srcbuild.fn_body(src, n) or "" for n in others]
    asm = []
    for m in re.finditer(r'^(?:/\* hh-block (\S+) (\{.*\}) \*/\n)?#pragma GLOBAL_ASM\("([^"]+)"\)', src, re.M):
        funcs = json.loads(m[2]).get("functions", []) if m[2] else []
        if os.path.basename(m[3]) == fn + ".s" or funcs == [fn]: continue      # the candidate's own asm
        if fn in funcs: return None      # merged with others: can't separate its references, leave it alone
        p = os.path.join(HH, m[3])
        if os.path.exists(p): asm.append(open(p, errors="replace").read())
    asm = "\n".join(asm); vals = {}
    for kind, name, addr in own:
        if any(re.search(r'\b%s\b' % name, b) for b in bodies) or re.search(r'%%(?:hi|lo|gp_rel)\(%s\b' % name, asm):
            continue
        off = addr - base; w = 8 if kind in ("f64", "double") else 4
        if off + w <= len(ro):
            vals[name] = (kind, struct.unpack(">d" if w == 8 else ">f", ro[off:off + w])[0])
    return literalise(text, vals) if vals else None
