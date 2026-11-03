"""regtrace / regsweep / ucode: read IDO's kept ucode, name the value in each register, perturb a source."""
from pathlib import Path
import shutil
import tempfile
import unittest

import regsweep as S
import regtrace as R
import ucode as U

LOOP = """int g(int);
int f(int a, int b) {
    int i, s = 0;
    for (i = 0; i < a; i++) {
        s += g(i * b);
    }
    return s;
}
"""

# func_80002A04 (main), self-contained: the registry's matching C
MATCHED = """typedef int s32;
s32 func_80002A94(s32);
extern s32 D_80037770[];
extern s32 D_80037780[];

void func_80002A04(void) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 != 4; var_s0++) {
        if (func_80002A94(var_s0 & 0xFF) == 0) {
            D_80037780[var_s0] = 1;
            D_80037770[var_s0] = 3;
        }
    }
}
"""
# the two stores in the other order: same instructions, but the hoisted constants and addresses are coloured in a
# different order ($s1-$s4), because uopt breaks the priority tie by first use
SWAPPED = MATCHED.replace("            D_80037780[var_s0] = 1;\n            D_80037770[var_s0] = 3;\n",
                          "            D_80037770[var_s0] = 3;\n            D_80037780[var_s0] = 1;\n")


class UcodeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.tmp = Path(tempfile.mkdtemp(prefix="test-regtrace-", dir=str(R.HH / "build")))
        for g in (0, 3):
            d = cls.tmp / ("g%d" % g); d.mkdir()
            (d / "attempt.c").write_text(LOOP)
            R.cc_keep(d, g, fix=g == 0)
        cls.B = R.find_proc(cls.tmp / "g0/attempt.B", "f")
        cls.O = R.find_proc(cls.tmp / "g0/attempt.O", "f")

    @classmethod
    def tearDownClass(cls):
        shutil.rmtree(cls.tmp, ignore_errors=True)

    def test_procedures_and_homes(self):
        self.assertIsNotNone(self.B); self.assertIsNotNone(self.O)
        b = {R.home(r) for r in self.B if R.home(r)}
        o = {R.home(r) for r in self.O if R.home(r)}
        self.assertTrue({("M", -4), ("M", -8), ("P", 0), ("P", 4)} <= b)      # cfe: stack slots and parameters
        self.assertTrue({("R", 16), ("R", 17), ("R", 18), ("R", 19), ("R", 20)} <= o)   # uopt: $s0-$s4

    def test_statement_trees(self):
        stores = [st for st in U.statements(self.B) if st.rec.op == "str" and st.rec.m == "M"]
        self.assertTrue(stores)
        self.assertTrue(all(st.kids for st in stores))

    def test_mdebug_names_and_lines(self):
        sym = R.mdebug(str(self.tmp / "g3/attempt.o"))["f"]
        self.assertEqual(sym["params"], {0: "a", 4: "b"})
        self.assertEqual(sym["locals"], {-4: "i", -8: "s"})
        import try_func as T
        code, _ = T.func_bytes(str(self.tmp / "g3/attempt.o"), "f")
        self.assertEqual(len(sym["lines"]), len(code) // 4)
        self.assertTrue(set(sym["lines"]) <= set(range(2, 9)))

    def test_variables_map_to_their_registers(self):
        best = {}
        for h, oh, line, w in R.map_homes(self.B, self.O):
            best.setdefault(h, {}).setdefault(oh, 0)
            best[h][oh] += w
        top = {h: max(c, key=c.get) for h, c in best.items()}
        self.assertEqual(top[("M", -8)], ("R", 18))     # s
        self.assertEqual(top[("M", -4)], ("R", 16))     # i
        self.assertEqual(top[("P", 4)], ("R", 20))      # b

    def test_webs_cross_the_call(self):
        ws, _ = R.webs(self.O)
        callee = {w["reg"]: w for w in ws if w["reg"] in R.CALLEE}
        self.assertEqual(sorted(callee), [16, 17, 18, 19, 20])
        self.assertTrue(all(w["call"] for w in callee.values()))


class TraceTests(unittest.TestCase):
    def trace(self, text):
        with tempfile.TemporaryDirectory(dir=str(R.HH / "build")) as td:
            p = Path(td) / "attempt.c"; p.write_text(text)
            return R.trace("func_80002A04", "main", str(p))

    def test_matching_source_has_no_register_differences(self):
        t = self.trace(MATCHED)
        self.assertEqual(t["mismatched"], 0)
        self.assertTrue(all(w["ok"] for w in t["webs"]))
        loop = [w for w in t["webs"] if w["names"] == ["var_s0"]]
        self.assertEqual([(w["reg"], w["target"]) for w in loop], [(16, 16)])

    def test_swapped_statements_name_the_colouring_order(self):
        t = self.trace(SWAPPED)
        wrong = {(w["reg"], w["target"]) for w in t["webs"] if not w["ok"]}
        self.assertEqual(wrong, {(17, 19), (18, 20), (19, 17), (20, 18)})
        text = "\n".join(R.report(t))
        self.assertIn("target pops", text)
        self.assertIn("first use", text)

    def test_pools(self):
        self.assertEqual(R.pool(16), "callee-gpr")
        self.assertEqual(R.pool(9), "temp-gpr")
        self.assertIsNone(R.pool(4))                    # $a0: argument preference, not plain colour order
        self.assertEqual(R.pool(32 + 16), "temp-fpr")
        self.assertEqual(R.pool(32 + 20), "callee-fpr")

    def test_units_are_quantised(self):
        self.assertEqual([R.units(n) for n in (1, 2, 3, 5, 6, 9, 10, 13)], [1, 2, 2, 2, 3, 3, 4, 4])


class SweepTests(unittest.TestCase):
    KR = """void func_X(a0, arg1)
    void *a0;
    s32 *arg1;
{
    s16 sy, sx;
    s32 pad1;
    u8 value = 3;

    sy = 1;
    sx = 2;
    func_Y(sx, sy);
}
"""

    def test_body_span_handles_kr_definitions(self):
        a, b = S.body_span(self.KR, "func_X")
        self.assertEqual(self.KR[a], "{"); self.assertEqual(self.KR[b], "}")
        self.assertEqual(S.params_of(self.KR, "func_X", a), ["a0", "arg1"])

    def test_declarations(self):
        a, b = S.body_span(self.KR, "func_X")
        d = S.declarations(self.KR[a + 1:b].split("\n"))
        self.assertEqual([x[2] for x in d], [["sy", "sx"], ["pad1"], ["value"]])
        self.assertEqual([x[3] for x in d], [False, False, True])

    def test_variants(self):
        labels = [l for l, _ in S.variants(self.KR, "func_X")]
        for want in ("swap decl sy,sx / pad1", "reverse decl sy,sx", "s16 -> u16 sy,sx", "u8 -> s8 value",
                     "split init value", "register pad1", "swap stmts", "ref sy after line"):
            self.assertTrue(any(l.startswith(want) for l in labels), want)
        self.assertFalse(any(l.startswith("ref pad1") for l in labels))      # never assigned: no dead read
        texts = dict(S.variants(self.KR, "func_X"))
        self.assertIn("    s16 sx, sy;", texts["reverse decl sy,sx"])

    def test_sweep_finds_the_statement_order(self):
        with tempfile.TemporaryDirectory(dir=str(R.HH / "build")) as td:
            p = Path(td) / "attempt.c"; p.write_text(SWAPPED)
            res = S.sweep("func_80002A04", "main", str(p), rounds=1, jobs=2, log=lambda *a: None)
        self.assertTrue(res["match"])
        self.assertTrue(res["change"].startswith("swap stmts"))
        self.assertIn("D_80037780[var_s0] = 1;\n            D_80037770", res["text"])


if __name__ == "__main__":
    unittest.main()
