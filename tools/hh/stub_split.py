"""Split trailing empty functions off the framed functions splat merged them into (method M1, Fable 5.2 study).

IDO emits a framed function's single epilogue as `addiu $sp,$sp,N; jr $ra` (or `jr $ra` with the addiu in its
delay slot). A bare `jr $ra; nop` after that epilogue is unreachable from the function, so when nothing branches,
jumps or points at it, it is a separate empty function `void func_<ADDR>(void) {}` that splat folded into its
predecessor. Each one gets its own `func_<ADDR> = 0x<ADDR>; // type:func rom:0x<ROM>` line in symbol_addrs.txt
(the rom attribute scopes it to its overlay: overlays sharing a RAM slot reuse addresses), so the next
`make setup` splits it off; srcbuild then renders it as the empty C stub it already emits for 8-byte returns.

IDO may schedule an independent instruction (`addiu $v0,$zero,1`) between the epilogue's restore and its `jr $ra`;
that form is the same epilogue.

Frameless functions have no epilogue to anchor on, so they use a narrower rule: the function ends in k >= 1 bare
`jr $ra; nop` pairs, each directly after another return (`jr $ra` + its delay slot, not itself in a branch's delay
slot), so none of them can be reached by falling through; the trailing pairs that no branch, jump or data word
targets (checked from the end; the first targeted pair, typically a `.L` return label, stays in the function) are
separate empty functions. A 16-byte `jr $ra; nop; jr $ra; nop` is two empty functions the same way. Frameless rows
are listed as "frameless-ok" and written only with --frameless or --only.

  stub_split.py scan [--json OUT]           list candidates (ok and skipped, with the reason)
  stub_split.py write [--only SEG:FUNC,..] [--frameless]
                                            append the ok stubs to symbol_addrs.txt (idempotent)
  stub_split.py check                       after make setup: every src file includes every function of its unit
  stub_split.py insert                      write the missing split-off stubs into src (after their predecessor)
"""
import glob, json, os, re, sys

HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
JR_RA, NOP = 0x03E00008, 0x00000000
LINE = re.compile(r"/\* ([0-9A-F]+) ([0-9A-F]{8}) ([0-9A-F]{8}) \*/")


def _imm(w):
    v = w & 0xFFFF
    return v - 0x10000 if v & 0x8000 else v


def sp_adjust(w):
    """Immediate of `addiu $sp, $sp, imm`, else None."""
    return _imm(w) if (w >> 16) == 0x27BD else None


def trailing_stubs(words):
    """words: one function's instruction words. Returns (body_words, k, why): the framed body ends with its
    epilogue's jr $ra and delay slot, followed by exactly k >= 1 bare `jr $ra; nop` pairs. k == 0 with a reason
    when the function is not such a case."""
    if len(words) < 6: return len(words), 0, "too short"
    adj = [sp_adjust(w) for w in words if sp_adjust(w) is not None]
    frame = -adj[0] if adj and adj[0] < 0 else None       # the prologue (IDO may schedule a lui before it)
    if frame is None:
        # two returns in a row at the end: the last may be a merged stub, or a branch-target return (scan checks)
        if words[-2:] == [JR_RA, NOP] and words[-4] == JR_RA: return len(words) - 2, 0, "frameless"
        return len(words), 0, "no trailing return"
    # the epilogue: the last `addiu $sp,$sp,+frame`, either just before jr $ra (then jr's delay slot follows) or
    # in jr $ra's delay slot
    restores = [i for i, w in enumerate(words) if sp_adjust(w) == frame]
    if not restores: return len(words), 0, "no epilogue"
    i = restores[-1]
    # the delay-slot form first: in `jr $ra; addiu; jr $ra; nop` the jr after the addiu is already the stub
    if i >= 1 and words[i - 1] == JR_RA: end = i + 1                       # jr $ra; addiu (delay slot)
    elif i + 2 < len(words) and words[i + 1] == JR_RA: end = i + 3        # addiu; jr $ra; <delay>
    else:
        # addiu; <scheduled independent instructions>; jr $ra; <delay>: IDO fills the gap with e.g. the return value
        j = next((j for j in range(i + 1, min(i + 4, len(words))) if words[j] == JR_RA), None)
        if j is None or j + 1 >= len(words) or any(branch_target(0, w) is not None or is_jump_reg(w)
                                                   for w in words[i + 1:j]):
            return len(words), 0, "epilogue not at a return"
        end = j + 2
    tail = words[end:]
    if not tail: return len(words), 0, "no trailing return"
    if len(tail) % 2 or any(tail[j:j + 2] != [JR_RA, NOP] for j in range(0, len(tail), 2)):
        return len(words), 0, "words after the epilogue are not bare returns"
    return end, len(tail) // 2, "ok"


def is_jump_reg(w):
    """jr / jalr."""
    return (w >> 26) == 0 and (w & 0x3F) in (8, 9)


def frameless_stubs(words):
    """Frameless candidates: the largest k such that the last k (jr $ra; nop) pairs each follow a return (jr $ra plus
    its delay slot, the jr not in a branch's delay slot). The caller drops trailing pairs that are referenced."""
    if any(sp_adjust(w) is not None and sp_adjust(w) < 0 for w in words): return 0
    k = 0
    while True:
        end = len(words) - 2 * (k + 1)          # start of the next candidate pair; the body would be words[:end]
        if end < 2 or words[end:end + 2] != [JR_RA, NOP] or words[end - 2] != JR_RA: return k
        if end >= 3 and (branch_target(0, words[end - 3]) is not None or is_jump_reg(words[end - 3])): return k
        k += 1


def branch_target(pc, w):
    """Target address of a branch or j/jal at pc, else None."""
    op = w >> 26
    if op in (2, 3): return (pc & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
    if op in (4, 5, 6, 7, 20, 21, 22, 23) or (op == 1 and ((w >> 16) & 0x1F) in (0, 1, 2, 3, 16, 17, 18, 19)) \
            or (op == 0x11 and ((w >> 21) & 0x1F) == 8):
        return (pc + 4 + (_imm(w) << 2)) & 0xFFFFFFFF
    return None


def referenced(stubs, text, data):
    """stubs: [(vram_start, vram_end)) ranges; text: [(pc, word)] of every code segment that can reach them;
    data: words of the stub's own segment outside .text (jump tables, pointer tables). Returns the reasons."""
    why = []
    for pc, w in text:
        t = branch_target(pc, w)
        if t is not None and any(a <= t < b for a, b in stubs): why.append("%s at %08X targets %08X" % (
            "jump" if (w >> 26) in (2, 3) else "branch", pc, t))
    for addr in data:
        if any(a <= addr < b for a, b in stubs): why.append("data word %08X" % addr)
    return why


def parse_asm(path):
    """[(rom, vram, word)] of one function's instructions (its .text, from its glabel; the rodata splat put in
    the same file is skipped)."""
    name = os.path.basename(path)[:-2]
    text = open(path).read()
    m = re.search(r"^glabel %s\b" % name, text, re.M)
    if not m: return []
    text = text[m.end():]
    e = re.search(r"^endlabel %s\b" % name, text, re.M)
    if e: text = text[:e.start()]
    return [(int(r, 16), int(v, 16), int(w, 16)) for r, v, w in LINE.findall(text)]


def segments():
    """Code segments: name -> (rom start, vram, text end rom, segment end rom)."""
    import yaml
    segs = yaml.safe_load(open(os.path.join(HH, "hybridheaven.yaml")))["segments"]
    start = lambda s: s["start"] if isinstance(s, dict) else s[0]
    out = {}
    for i, s in enumerate(segs):
        if not isinstance(s, dict) or s.get("type") != "code" or s["name"] == "entry": continue
        end = start(segs[i + 1])
        tend = end
        for sub in s.get("subsegments", []):
            if isinstance(sub, list) and len(sub) > 1 and sub[1] not in ("c", "asm", "hasm", "pad"):
                tend = sub[0]; break
        out[s["name"]] = (s["start"], s["vram"], tend, end)
    return out


def scan():
    img = open(os.path.join(HH, "build/expanded.bin"), "rb").read()
    segs = segments()
    word = lambda o: int.from_bytes(img[o:o + 4], "big")
    text = {n: [(v + o - r, word(o)) for o in range(r, t, 4)] for n, (r, v, t, e) in segs.items()}
    data = {n: [word(o) for o in range(t, e - 3, 4)] for n, (r, v, t, e) in segs.items()}
    rows = []
    for p in sorted(glob.glob(os.path.join(HH, "asm/nonmatchings/*/*/func_*.s"))):
        seg = p.split(os.sep)[-3]
        if seg not in segs: continue
        ins = parse_asm(p)
        if not ins: continue
        words = [w for _, _, w in ins]
        body, k, why = trailing_stubs(words)
        if why in ("too short", "frameless"):
            # no epilogue to anchor on: the trailing bare returns that follow a return and that nothing targets
            # (from the end; the first targeted pair is the function's own return label)
            reach = [x for n in text for x in text[n]] if seg == "main" else text[seg] + text["main"]
            n = frameless_stubs(words)
            # the largest n whose pairs, through the function's end, nothing targets (the ranges nest)
            while n and referenced([(ins[len(ins) - 2 * n][1], ins[-1][1] + 4)], reach, data[seg]): n -= 1
            if not n: continue
            body, k, why = len(words) - 2 * n, n, "frameless-ok"
        if why in ("too short", "no trailing return", "no epilogue", "epilogue not at a return",
                   "words after the epilogue are not bare returns", "frameless"): continue
        name = os.path.basename(p)[:-2]
        row = {"seg": seg, "cfile": p.split(os.sep)[-2], "func": name, "size": 4 * len(ins), "status": why}
        if k:
            stubs = [(ins[body + 2 * j][1], ins[body + 2 * j][0]) for j in range(k)]
            row["stubs"] = ["func_%08X" % v for v, _ in stubs]; row["roms"] = ["0x%X" % r for _, r in stubs]
            # the stub's own overlay and main (always resident) can reach it; other overlays in the same RAM
            # slot cannot, but count their jumps too (conservative: any hit skips the function)
            reach = [x for n in text for x in text[n]] if seg == "main" else text[seg] + text["main"]
            hits = referenced([(v, v + 8) for v, _ in stubs], reach, data[seg])
            if hits: row["status"] = "referenced: " + "; ".join(hits[:3])
        rows.append(row)
    return rows


def symbol_lines(rows, only=None, frameless=False):
    """Symbols for the ok rows (framed); frameless-ok rows only when named in `only` or with frameless=True."""
    out = []
    for r in rows:
        if only and (r["seg"], r["func"]) not in only: continue
        if not (r["status"] == "ok" or (r["status"] == "frameless-ok" and (only or frameless))): continue
        for n, rom in zip(r["stubs"], r["roms"]):
            out.append("%s = 0x%s; // type:func rom:%s" % (n, n[5:], rom))
    return out


PRAGMA = re.compile(r'^#pragma GLOBAL_ASM\("([^"]+)"\)[ \t]*$', re.M)


def _srcbuild():
    argv = sys.argv; sys.argv = ["srcbuild.py", "none"]
    sys.path.insert(0, os.path.join(HH, "tools/hh"))
    try:
        import srcbuild, kept_blocks
    finally:
        sys.argv = argv
    return srcbuild, kept_blocks


def coverage(S, K, seg, cfile, text):
    """Which of the file's functions its source holds, and where: name -> index of the GLOBAL_ASM line that
    includes it (direct per-function asm, an hh-block recipe, or a _mrg_ group as gen_blocks.py rebuilds it), or
    None for a C definition. A function that is in none of them is missing from the build: after a re-split splat
    gives it its own asm file, but a committed source still includes only its predecessor's (now shorter) asm, and
    make does not rebuild objects when only asm changes."""
    names = [e[0] for e in S.entries(seg, cfile)]
    recipes = {p: json.loads(r) for p, r in K.RECIPE.findall(text)}
    pragmas = [(m.start(), m.group(1)) for m in PRAGMA.finditer(text)]
    named = {os.path.basename(p)[:-2] for _, p in pragmas}
    defined = S.defined_functions(text)
    named |= defined
    out = {n: None for n in defined}
    for pos, p in pragmas:
        b = os.path.basename(p)[:-2]
        if p in recipes: fs = recipes[p].get("functions", [])
        elif b.startswith("_mrg_") and b[5:] in names:
            i = names.index(b[5:]); fs = [b[5:]]
            for n in names[i + 1:]:
                if n in named or "_mrg_" + n in named: break
                fs.append(n)
        else: fs = [b]
        for n in fs: out.setdefault(n, pos)
    return names, out


def insert_stubs(S, K, seg, cfile, text):
    """Give every split-off empty function that the source lacks its C definition, right after the GLOBAL_ASM line
    that includes its predecessor (or after the stub inserted for the one before it). Returns (text, inserted,
    problems)."""
    names, cov = coverage(S, K, seg, cfile, text)
    info = {e[0]: e for e in S.entries(seg, cfile)}
    inserted, problems, ends = [], [], {}       # ends: inserted stub -> offset just after its definition
    def after_line(pos):
        at = text.index("\n", pos) + 1
        return at + 1 if text[at:at + 1] == "\n" else at
    for i, n in enumerate(names):
        if n in cov: continue
        if not S.is_stub(info[n][2], info[n][3]):
            problems.append("%s/%s %s: not in the source and not an empty stub" % (seg, cfile, n)); continue
        prev = names[i - 1] if i else None
        if prev in ends: at = ends[prev]
        elif prev is not None and cov.get(prev) is not None: at = after_line(cov[prev])
        else:
            problems.append("%s/%s %s: predecessor %s is not included through GLOBAL_ASM" % (seg, cfile, n, prev)); continue
        stub = "void %s(void) {\n}\n\n" % n
        text = text[:at] + stub + text[at:]
        cov = {k: (v + len(stub) if v is not None and v >= at else v) for k, v in cov.items()}
        ends = {k: (v + len(stub) if v > at else v) for k, v in ends.items()}
        ends[n] = at + len(stub); inserted.append(n)
    return text, inserted, problems


def fix_sources(write):
    S, K = _srcbuild()
    total, bad = [], []
    for src in sorted(glob.glob(os.path.join(HH, "src/*/*.c"))):
        seg, cfile = src.split(os.sep)[-2], os.path.basename(src)[:-2]
        if not glob.glob(os.path.join(HH, "asm/nonmatchings", seg, cfile, "*.s")): continue
        text = open(src).read()
        if not PRAGMA.search(text): continue          # library / fully-C files: nothing is included from asm
        new, ins, probs = insert_stubs(S, K, seg, cfile, text)
        bad += probs
        if ins:
            total += ["%s/%s %s" % (seg, cfile, n) for n in ins]
            if write: open(src, "w").write(new)
    return total, bad


def main(argv):
    if argv[:1] in (["insert"], ["check"]):
        ins, bad = fix_sources(argv[0] == "insert")
        for l in ins: print(("inserted " if argv[0] == "insert" else "missing stub ") + l)
        for l in bad: print("PROBLEM " + l)
        print("%d stubs %s; %d problems" % (len(ins), "inserted" if argv[0] == "insert" else "missing", len(bad)))
        return 1 if bad or (ins and argv[0] == "check") else 0
    rows = scan()
    if argv[:1] == ["scan"]:
        for r in rows:
            print("%-8s %-14s %5d  %s  %s" % (r["seg"], r["func"], r["size"], r["status"], " ".join(r.get("stubs", []))))
        ok = [r for r in rows if r["status"] == "ok"]
        fl = [r for r in rows if r["status"] == "frameless-ok"]
        print("%d framed functions with trailing stubs (%d stubs); %d skipped (referenced); %d frameless (%d stubs)" % (
            len(ok), sum(len(r["stubs"]) for r in ok), sum(r["status"].startswith("referenced") for r in rows),
            len(fl), sum(len(r["stubs"]) for r in fl)))
        if "--json" in argv: json.dump(rows, open(argv[argv.index("--json") + 1], "w"), indent=1)
    elif argv[:1] == ["write"]:
        only = None
        if "--only" in argv: only = {tuple(x.split(":")) for x in argv[argv.index("--only") + 1].split(",")}
        path = os.path.join(HH, "symbol_addrs.txt")
        have = open(path).read()
        new = [l for l in symbol_lines(rows, only, "--frameless" in argv) if l not in have.splitlines()]
        with open(path, "a") as fh:
            if new and not have.endswith("\n"): fh.write("\n")
            fh.write("".join(l + "\n" for l in new))
        print("wrote %d stub symbols to symbol_addrs.txt" % len(new))
    else:
        print(__doc__); return 2
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
