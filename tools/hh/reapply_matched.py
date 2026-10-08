"""Put every function from the matched/ registry back into src/ (replacing its GLOBAL_ASM line),
without rebuilding per function. Run `make` afterwards to confirm the ROM still matches."""
import glob, os, re
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
srcs = {p: open(p).read() for p in glob.glob(os.path.join(HH, "src/**/*.c"), recursive=True)}
done = missing = 0
for snip in sorted(glob.glob(os.path.join(HH, "matched/*/*.c"))):
    seg, func = snip.split(os.sep)[-2], os.path.basename(snip)[:-2]
    pat = re.compile(r'#pragma GLOBAL_ASM\("asm/nonmatchings/%s/[^"]*?%s\.s"\)\n' % (seg, func))
    body = "".join(l for l in open(snip) if not l.lstrip().startswith("#include")).strip() + "\n"
    for p, s in srcs.items():
        if pat.search(s):
            srcs[p] = pat.sub(lambda m: body, s, count=1); done += 1; break
    else:
        missing += 1; print("no GLOBAL_ASM line for", seg, func)
for p, s in srcs.items(): open(p, "w").write(s)
print("reapplied %d matched functions (%d not found)" % (done, missing))
