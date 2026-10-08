"""Integrator: put a matched C function into its src file in place of its GLOBAL_ASM line,
rebuild, and keep it only if the ROM still matches the original SHA-1.

  apply_match.py FUNC snippet.c        -> exit 0 if applied and the ROM still matches

The snippet is the worker's whole C file; #include lines are dropped (src files already
include common.h), everything else (extern declarations, local structs, the function)
goes in where the pragma was."""
import re, subprocess, sys, glob, os
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))

def main(func, snippet, seg=None):
    pat = '#pragma GLOBAL_ASM("asm/nonmatchings/%%s/%s.s")' % func
    target = None
    for p in glob.glob(os.path.join(HH, "src/**/*.c"), recursive=True):
        s = open(p).read()
        m = re.search(r'#pragma GLOBAL_ASM\("asm/nonmatchings/%s/[^"]*?%s\.s"\)\n' % (seg or "[^/]+", func), s)
        if m: target, text, span = p, s, m.span(); break
    if not target: sys.exit("no GLOBAL_ASM line for %s (already matched?)" % func)
    body = "".join(l for l in open(snippet) if not l.lstrip().startswith("#include")).strip() + "\n"
    open(target, "w").write(text[:span[0]] + body + text[span[1]:])
    r = subprocess.run("make -j2 2>&1 | tail -5", shell=True, cwd=HH, capture_output=True, text=True,
                       executable="/bin/bash")
    if "hybridheaven.z64: OK" in r.stdout:
        seg_name = os.path.relpath(target, os.path.join(HH, "src")).split(os.sep)[0]
        os.makedirs(os.path.join(HH, "matched", seg_name), exist_ok=True)
        open(os.path.join(HH, "matched", seg_name, func + ".c"), "w").write(open(snippet).read())
        print("APPLIED %s -> %s, ROM still matches" % (func, os.path.relpath(target, HH))); return 0
    open(target, "w").write(text)          # revert
    print("REJECTED %s: build did not match\n%s" % (func, r.stdout)); return 1

if __name__ == "__main__":
    sys.exit(main(*sys.argv[1:4]))
