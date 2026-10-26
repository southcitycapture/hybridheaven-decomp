"""Recreate the generated asm blocks that src/ files include (run by `make setup`, after splat):

  _mrg_<func>.s   several consecutive asm functions as one GLOBAL_ASM block (asm-processor needs enough code per
                  late-rodata word); it holds <func> and the following functions up to the next one src names itself
  _ro_<func>.s    the rodata of a function that is C but doesn't produce its original rodata itself

srcbuild.py writes these while rendering; a fresh checkout only has splat's per-function asm, so they're rebuilt here
from the src files that reference them.
"""
import glob, json, os, re, sys
import kept_blocks
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
annotate = "--annotate" in sys.argv
sys.argv = ["srcbuild.py", "none"]; sys.path.insert(0, "tools/hh"); import srcbuild as S
import reconcile_frozen as R
reg = S.registry()

PRAGMA = re.compile(r'#pragma GLOBAL_ASM\("([^"]+)"\)')
n_mrg = n_ro = 0
for src in glob.glob("src/*/*.c"):
    text = open(src).read()
    if not any(tag in text for tag in ('_mrg_', '_ro_', '_lr_')): continue
    seg, cf = src.split("/")[1], os.path.basename(src)[:-2]
    ents = S.entries(seg, cf); names = [e[0] for e in ents]; paths = {e[0]: e[1] for e in ents}
    recipes = {p: json.loads(r) for p, r in kept_blocks.RECIPE.findall(text)}
    # everything src names on its own: functions it includes directly, and functions it defines in C
    named = {os.path.basename(p)[:-2] for p in PRAGMA.findall(text)}
    named |= set(re.findall(r"^[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\([^;]*$", text, re.M))
    for p in PRAGMA.findall(text):
        b = os.path.basename(p)
        if p in recipes:
            kept_blocks.rebuild(S, seg, cf, p, recipes[p]); n_mrg += 1; continue
        if b.startswith("_mrg_"):
            first = b[len("_mrg_"):-2]; i = names.index(first); group = [first]
            for n in names[i + 1:]:
                if n in named or "_mrg_%s" % n in named: break
                group.append(n)
            S.merged_block(seg, cf, [paths[n] for n in group]); n_mrg += 1
        elif b.startswith("_ro_"):
            fn = b[len("_ro_"):-2]; ro = S.rodata_part(paths[fn])
            # C may emit the late literals itself while retaining only its named strings. Recreating all original
            # rodata here duplicated the late items (and produced a data-only block with no instruction budget).
            if ro and (seg, fn) in reg:
                snippet = R.normalize(S.late_literals(paths[fn], reg[(seg, fn)]))
                if S.c_makes_rodata(seg, fn, snippet): ro = S.named_rodata(ro, snippet)
            if ro and (not os.path.exists(p) or open(p).read() != ro): open(p, "w").write(ro)
            n_ro += 1
    if annotate:
        annotated = kept_blocks.annotate(S, seg, cf, text)
        if annotated != text: open(src, "w").write(annotated)
print("gen_blocks: %d merged blocks, %d kept-rodata blocks" % (n_mrg, n_ro))
