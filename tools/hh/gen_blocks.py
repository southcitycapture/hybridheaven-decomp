"""Recreate the generated asm blocks that src/ files include (run by `make setup`, after splat):

  _mrg_<func>.s   several consecutive asm functions as one GLOBAL_ASM block (asm-processor needs enough code per
                  late-rodata word); it holds <func> and the following functions up to the next one src names itself
  _ro_<func>.s    the rodata of a function that is C but doesn't produce its original rodata itself

srcbuild.py writes these while rendering; a fresh checkout only has splat's per-function asm, so they're rebuilt here
from the src files that reference them.
"""
import glob, os, re, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
sys.argv = ["srcbuild.py", "none"]; sys.path.insert(0, "tools/hh"); import srcbuild as S

PRAGMA = re.compile(r'#pragma GLOBAL_ASM\("([^"]+)"\)')
n_mrg = n_ro = 0
for src in glob.glob("src/*/*.c"):
    text = open(src).read()
    if "_mrg_" not in text and "_ro_" not in text: continue
    seg, cf = src.split("/")[1], os.path.basename(src)[:-2]
    ents = S.entries(seg, cf); names = [e[0] for e in ents]; paths = {e[0]: e[1] for e in ents}
    # everything src names on its own: functions it includes directly, and functions it defines in C
    named = {os.path.basename(p)[:-2] for p in PRAGMA.findall(text)}
    named |= set(re.findall(r"^[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\([^;]*$", text, re.M))
    for p in PRAGMA.findall(text):
        b = os.path.basename(p)
        if b.startswith("_mrg_"):
            first = b[len("_mrg_"):-2]; i = names.index(first); group = [first]
            for n in names[i + 1:]:
                if n in named or "_mrg_%s" % n in named: break
                group.append(n)
            S.merged_block(seg, cf, [paths[n] for n in group]); n_mrg += 1
        elif b.startswith("_ro_"):
            fn = b[len("_ro_"):-2]; ro = S.rodata_part(paths[fn])
            if ro and (not os.path.exists(p) or open(p).read() != ro): open(p, "w").write(ro)
            n_ro += 1
print("gen_blocks: %d merged blocks, %d kept-rodata blocks" % (n_mrg, n_ro))
