"""Per-function features read from the target asm, cached in build/features2.json (rebuilt when asm/ is newer).

  loop   a branch to an earlier address inside the function (the strongest predictor of agent failure)
  jtbl   uses a jump table (a C `switch`; needs per-file rodata in its segment)
  nonc   uses instructions IDO C can't produce (cop0, cache, 64-bit loads/shifts, eret, tlb*): asm forever
  args   1 + highest integer argument register ($a0-$a3) read before written: a lower bound on arity
  v0     callees whose return value ($v0) is read after the call, before $v0 is written
"""
import glob, json, os, re
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
CACHE = os.path.join(HH, "build/features2.json")
INSN = re.compile(r"^\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\S+)\s*(.*)$")
BR = re.compile(r"\.L([0-9A-F]{8})\b")
NONC = {"mfc0", "mtc0", "cache", "eret", "tlbp", "tlbr", "tlbwi", "tlbwr", "ld", "sd", "dsll32", "dsra32", "dsrl32",
        "dsll", "dsrl", "dsra", "daddu", "dsubu", "ldl", "ldr", "sdl", "sdr", "sync"}

def scan(path):
    loop = jt = nonc = False; read, written = set(), set()
    v0_after, pending = [], None          # pending = [callee, instructions seen since the jal]
    for l in open(path):
        if l.startswith("endlabel"): break
        m = INSN.match(l)
        if not m: continue
        addr, op, args = int(m.group(1), 16), m.group(2), m.group(3)
        if pending:
            pending[1] += 1
            if pending[1] >= 2:                       # past the delay slot
                ops = [x.strip() for x in args.split(",")]
                if "$v0" in ops[1:] or (ops and "$v0" in ops[0] and op in ("sw", "sh", "sb", "beq", "bne", "beqz", "bnez",
                        "bgez", "bltz", "blez", "bgtz", "jr", "mtc1")) or "($v0)" in args:
                    v0_after.append(pending[0]); pending = None
                elif ops and ops[0] == "$v0" or op in ("jal", "jalr") or pending[1] > 6: pending = None
        if op == "jal":
            t = re.search(r"\b(func_[0-9A-F]{8})\b", args)
            if t: pending = [t.group(1), 0]
        if op in NONC: nonc = True
        if "jtbl_" in args or (op == "jr" and "$ra" not in args): jt = True
        if op.startswith("b") or op in ("j",):
            t = BR.search(args)
            if t and int(t.group(1), 16) <= addr: loop = True
        regs = re.findall(r"\$a[0-3]\b", args)
        if regs:
            dest = regs[0] if re.match(r"\s*\$a[0-3]\b", args) and op not in ("sw", "sh", "sb", "beq", "bne", "beqz", "bnez",
                    "bgez", "bltz", "blez", "bgtz", "swc1", "jr", "mtc1") else None
            for r in regs[1:] if dest else regs:
                if r not in written: read.add(r)
            if dest: written.add(dest)
    return dict(loop=loop, jtbl=jt, nonc=nonc, args=max([int(r[-1]) + 1 for r in read] or [0]), v0=v0_after)

def features():
    files = glob.glob(os.path.join(HH, "asm/nonmatchings/*/*/func_*.s"))
    newest = max(os.path.getmtime(f) for f in files)
    if os.path.exists(CACHE) and os.path.getmtime(CACHE) >= newest:
        return {tuple(k.split("/")): v for k, v in json.load(open(CACHE)).items()}
    out = {}
    for f in files:
        seg, name = f.split("/")[-3], os.path.basename(f)[:-2]
        out["%s/%s" % (seg, name)] = scan(f)
    os.makedirs(os.path.dirname(CACHE), exist_ok=True)
    json.dump(out, open(CACHE, "w"))
    return {tuple(k.split("/")): v for k, v in out.items()}

if __name__ == "__main__":
    f = features()
    print(len(f), "functions;", {k: sum(1 for v in f.values() if v[k]) for k in ("loop", "jtbl", "nonc")})
