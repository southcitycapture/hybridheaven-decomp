"""Recreate end-of-file padding blocks referenced from src/ (`asm/nonmatchings/<seg>/<file>/_pad_<bytes>.s`).
They hold only zero words (the original's alignment padding that IDO doesn't emit for C), so they are generated
rather than shipped. Run by `make` before compiling C."""
import glob, os, re
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
n = 0
for c in glob.glob(os.path.join(HH, "src/*/*.c")):
    for path in re.findall(r'#pragma GLOBAL_ASM\("(asm/nonmatchings/([^/]+)/([^/]+)/_pad_(\d+)\.s)"\)', open(c).read()):
        full, seg, cfile, size = path
        p = os.path.join(HH, full)
        if os.path.exists(p): continue
        os.makedirs(os.path.dirname(p), exist_ok=True)
        open(p, "w").write("glabel pad_%s_%s\n" % (seg, cfile) + "    nop\n" * (int(size) // 4)); n += 1
if n: print("generated %d padding blocks" % n)
