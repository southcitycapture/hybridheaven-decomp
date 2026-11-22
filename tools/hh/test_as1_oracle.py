"""as1_oracle.py: text-assembly block model and structural edits, plus a real as0/as1 round trip on a synthetic
function (addresses 0x800000xx only; temp dirs only)."""
import os
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import as1_oracle as O  # noqa: E402
import idoflags  # noqa: E402

TEXT = """\t.text
\t.globl\tf
\t.ent\tf 2
f:
\t.option\tO2
\tsubu\t$sp, 24
\tsw\t$31, 20($sp)
\t.loc\t2 3
\tjal\tfunc_80000040
\tbeq\t$2, 0, $35
\t.loc\t2 4
\tlbu\t$2, D_80000080
\tbne\t$2, 0, $32
\tli\t$14, 20
\tb\t$34
$32:
\tbne\t$2, 1, $33
\tli\t$15, 40
\tb\t$34
$33:
\tli\t$24, 80
$34:
\tjal\tfunc_80000060
$35:
\tlw\t$31, 20($sp)
\taddu\t$sp, 24
\tj\t$31
\t.end\tf
"""


def lines(): return TEXT.splitlines(True)


class Model(unittest.TestCase):
    def test_blocks(self):
        ls = lines(); lo, hi = O.function_body(ls, "f")
        bl = O.blocks(ls, lo, hi)
        self.assertEqual([b["label"] for b in bl], [None, None, None, "$32", None, "$33", "$34", "$35"])
        self.assertEqual(len(bl[0]["ins"]), 4)                       # subu sw jal beq
        self.assertEqual(O.branch_label(ls[bl[3]["ins"][0]]), "$33")
        self.assertIsNone(O.branch_label("\tj\t$31\n"))
        self.assertEqual(O.referenced_labels(ls), {"$32", "$33", "$34", "$35"})

    def test_edit_families(self):
        ls = lines(); lo, hi = O.function_body(ls, "f")
        names = dict(O.edits(ls, lo, hi))
        for fam in ("label@", "split@", "ref@", "unthread@", "invert@", "dupcmp@", "delloc@", "addloc@", "noloc"):
            self.assertTrue(any(n.startswith(fam) for n in names), fam)
        # split = new label + a jump-table-style reference placed before .end
        s = "".join(names["split@#0.3"])
        self.assertRegex(s, r"\$9\d{3}:\n\tbeq\t\$2, 0, \$35")
        self.assertRegex(s, r"\.rdata\n\t\.word\t\$9\d{3}\n\t\.text\n\t\.end\tf")
        # invert: beq -> bne over a new label plus an unconditional branch
        inv = "".join(names["invert@#0"])
        self.assertRegex(inv, r"bne\t\$2, 0, \$9\d{3}\n\tb\t\$35\n\$9\d{3}:")
        # dupcmp: the branch to the compare-only block $32 gets its own copy after the return
        dup = "".join(names["dupcmp@#1>$32"])
        self.assertRegex(dup, r"j\t\$31\n\$9\d{3}:\n\tbne\t\$2, 1, \$33\n\tb\t\$9\d{3}\n")
        # unlabel only for labels nothing refers to
        self.assertFalse(any(n.startswith("unlabel@") for n in names))

    def test_window_limits_blocks(self):
        ls = lines(); lo, hi = O.function_body(ls, "f")
        names = [n for n, _ in O.edits(ls, lo, hi, window={3})]
        self.assertTrue(all(not n.startswith(("label@#0", "split@#0", "ref@$35")) for n in names), names)
        self.assertIn("ref@$32", names)


IDO_CC = os.path.join(O.IDO, "cc")


@unittest.skipUnless(os.path.exists(IDO_CC) and os.path.exists(os.path.join(O.IDO, "as0")), "IDO 7.1 required")
class RoundTrip(unittest.TestCase):
    def test_text_assembly_reproduces_the_c_compile(self):
        src = ("extern int func_80000040(void *, void *); extern void func_80000060(void *);\n"
               "extern unsigned char D_80000080; extern int D_80000084;\n"
               "void func_80000000(void *a) {\n if (func_80000040(a, (void *)func_80000060) != 0) {\n"
               "  if (D_80000080 == 0) D_80000084 = 20; else if (D_80000080 == 1) D_80000084 = 40;"
               " else D_80000084 = 80;\n  func_80000060(a);\n }\n}\n")
        with tempfile.TemporaryDirectory() as td:
            c = os.path.join(td, "t.c"); open(c, "w").write(src)
            ls, obj = O.compile_text(c, td)
            asm = O.Assembler("func_80000000", td)
            got = asm("".join(ls))
            self.assertIsNotNone(got)
            import try_func as T
            self.assertEqual(got[0], T.func_bytes(obj, "func_80000000")[0])
            lo, hi = O.function_body(ls, "func_80000000")
            # every edit assembles or is cleanly rejected (None), never crashes
            for n, e in list(O.edits(ls, lo, hi))[:40]:
                r = asm("".join(e))
                self.assertTrue(r is None or isinstance(r[0], bytes), n)


if __name__ == "__main__":
    unittest.main()
