"""The game's IDO 7.1 compile flags, in one place (Task 26).

The original build compiled game code with `cc -Wab,-r4300_mul` (the flag Goemon's Great Adventure, by the same
studio, uses; ultralib passes it too, see tools/hh/gen_libultra.py). With it as1 itself emits the VR4300
multiply-pair / branch-boundary nops, so the objects match without post-processing: all 436 non-libultra src
files compile byte-identically to the old `-O2 + mulfix.py` build (queue/task25_gga/r4300_mul_check.txt), and
functions mulfix.py could not fix (mathMtxFToL-, plVecDist-like float code) match only with the flag.

tools/hh/mulfix.py stays in the tree. HH_MULFIX=1 (environment, also honoured by the Makefile) switches back to the
old pipeline: no -Wab,-r4300_mul, mulfix.py run on every object afterwards. It is for comparisons only: since Task 26
landed 50 functions that match only with the flag, `HH_MULFIX=1 make` no longer reproduces the ROM. With the flag as1
schedules around a float multiply: it fills the hazard slot with a real instruction (add.s, swc1, trunc.w.s, ...)
where mulfix could only insert a nop, uses bc1f/beqz instead of a branch-likely, and keeps mul.s/mul.d out of branch
and `jr $ra` delay slots.

  import idoflags
  cmd = [cc, "-c"] + idoflags.CFLAGS + ["-o", o, c]; ...; idoflags.post(o)
"""
import os, sys

MULFIX = os.environ.get("HH_MULFIX", "0") not in ("", "0")
R4300_MUL = [] if MULFIX else ["-Wab,-r4300_mul"]
# code-generation flags (no -O, no -I): what every compile of game C must pass
BASE = ["-G", "0", "-non_shared", "-Xcpluscomm", "-mips2"] + R4300_MUL
OPT = ["-O2"]
INCLUDES = ["-I", "include", "-I", "src"]
CFLAGS = BASE + OPT + INCLUDES          # the Makefile's CFLAGS (paths relative to the repo root)


def post(obj):
    """Post-process a freshly compiled object: nothing by default; mulfix.py when HH_MULFIX=1.
    Returns the number of nops mulfix inserted (0 when it did not run)."""
    if not MULFIX:
        return 0
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import mulfix
    return mulfix.fix(obj)


def shell_post(py, obj_var='"$3"'):
    """The shell fragment that post-processes `obj_var` (for generated compile scripts): empty by default."""
    if not MULFIX:
        return ""
    return ' && "%s" "%s" %s > /dev/null' % (py, os.path.join(os.path.dirname(os.path.abspath(__file__)), "mulfix.py"), obj_var)


if __name__ == "__main__":     # `python tools/hh/idoflags.py` prints the flags (for shell scripts)
    print(" ".join(BASE))
