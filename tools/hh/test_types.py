"""Type recovery (Task 30): access miner, unification, layouts, headers, TYPES=1 context."""
import collections
import json
import os
import re
import shutil
import subprocess
import tempfile
import unittest

import types_mine as M
import types_db as T

HH = M.HH
IDO = os.path.join(HH, "tools/ido/7.1/cc")


def asm(name, body):
    """A splat-style function file from (mnemonic operands) lines and `.Lxxx:` labels."""
    out, vram = ["nonmatching %s, 0x0" % name, "", "glabel %s" % name], 0x80001000
    for line in body.strip().splitlines():
        line = line.strip()
        if line.endswith(":"):
            out.append("  %s" % line); continue
        out.append("    /* 000000 %08X 00000000 */  %s" % (vram, line)); vram += 4
    return "\n".join(out) + "\nendlabel %s\n" % name


def mine_text(text, seg="main", func="func_80001000"):
    td = tempfile.mkdtemp()
    try:
        p = os.path.join(td, func + ".s"); open(p, "w").write(text)
        return M.mine(seg, func, p)
    finally:
        shutil.rmtree(td)


def acc(facts):
    return {(k, o, op) for (k, o, op) in facts.acc}


class MinerTests(unittest.TestCase):
    def test_param_global_and_pointer_chain(self):
        f = mine_text(asm("func_80001000", """
            lw $t6, 0x24($a0)
            lh $t7, 0x10($t6)
            lui $at, %hi(D_80091BC0)
            sw $t7, %lo(D_80091BC0 + 0x8)($at)
            lui $v0, %hi(D_80091BC0)
            addiu $v0, $v0, %lo(D_80091BC0)
            lbu $t8, 0x5($v0)
            jr $ra
             nop
        """))
        p = "p:main:func_80001000:0"
        a = acc(f)
        self.assertIn((p, 0x24, "lw"), a)
        self.assertIn((p + "/24", 0x10, "lh"), a)
        g = "g:main:D_80091BC0"
        self.assertIn((g, 0x8, "sw"), a)
        self.assertIn((g, 0x5, "lbu"), a)

    def test_spill_call_edges_and_return(self):
        f = mine_text(asm("func_80001000", """
            addiu $sp, $sp, -0x18
            sw $a0, 0x18($sp)
            sw $ra, 0x14($sp)
            jal func_80001100
             lw $a0, 0x4($a0)
            lw $t6, 0x18($sp)
            lw $t7, 0x8($t6)
            lw $ra, 0x14($sp)
            addiu $sp, $sp, 0x18
            jr $ra
             or $v0, $t6, $zero
        """))
        p = "p:main:func_80001000:0"
        self.assertIn((p, 0x8, "lw"), acc(f))                # the spilled parameter survives the call
        self.assertIn(("arg", p + "/4", "p:main:func_80001100:0"), f.edges)   # the delay slot's a0 is the argument
        self.assertIn(("retv", p, "r:main:func_80001000"), f.edges)

    def test_pointer_stepping_is_an_array(self):
        f = mine_text(asm("func_80001000", """
            or $v0, $a0, $zero
            addiu $v1, $a0, 0x60
          .L80001008:
            sh $zero, 0x2($v0)
            addiu $v0, $v0, 0x18
            bne $v0, $v1, .L80001008
             sw $zero, -0x10($v0)
            jr $ra
             nop
        """))
        p = "p:main:func_80001000:0[18]"
        a = acc(f)
        self.assertIn((p, 0x2, "sh"), a)
        self.assertIn((p, 0x8, "sw"), a)                     # -0x10 after the step: 0x8 in the element
        self.assertNotIn(("p:main:func_80001000:0", 0x2, "sh"), a)   # not claimed for element 0 only

    def test_scaled_index_into_global_array(self):
        f = mine_text(asm("func_80001000", """
            sll $t6, $a0, 2
            subu $t6, $t6, $a0
            sll $t6, $t6, 2
            lui $t7, %hi(D_80091BC0)
            addu $t7, $t7, $t6
            lw $v0, %lo(D_80091BC0 + 0x4)($t7)
            jr $ra
             nop
        """))
        self.assertIn(("g:main:D_80091BC0[C]", 0x4, "lw"), acc(f))

    def test_likely_delay_slot_only_on_the_taken_path(self):
        f = mine_text(asm("func_80001000", """
            beql $a1, $zero, .L80001010
             lw $a0, 0x30($a0)
            lw $t6, 0x4($a0)
          .L80001010:
            jr $ra
             nop
        """))
        a = acc(f)
        self.assertIn(("p:main:func_80001000:0", 0x4, "lw"), a)   # fall-through: a0 is still the parameter

    def test_dead_code_after_a_branch_does_not_poison_the_join(self):
        f = mine_text(asm("func_80001000", """
            beqz $a1, .L80001010
             nop
            b .L80001010
             nop
            or $a0, $zero, $zero
          .L80001010:
            lw $t6, 0xC($a0)
            jr $ra
             nop
        """))
        self.assertIn(("p:main:func_80001000:0", 0xC, "lw"), acc(f))

    def test_signedness_evidence(self):
        f = mine_text(asm("func_80001000", """
            lw $t6, 0x10($a0)
            sltu $at, $t6, $a1
            jr $ra
             nop
        """))
        self.assertEqual(f.sign[("p:main:func_80001000:0", 0x10)], {"u": 1})


def facts_for(*funcs):
    """Hand-written facts [(seg, func, {acc, edges, ...})] for solve()."""
    return [(s, f, dict({"acc": [], "edges": [], "globals": []}, **d)) for s, f, d in funcs]


class SolveTests(unittest.TestCase):
    def test_argument_unifies_compatible_layouts_and_refuses_conflicts(self):
        facts = facts_for(
            ("main", "func_80001000", {"acc": [["g:main:D_80090000", 0x10, "lh", 1]],
                                       "edges": [["arg", "g:main:D_80090000", "p:main:func_80002000:0"]]}),
            ("main", "func_80001100", {"acc": [["g:main:D_80090100", 0x10, "lwc1", 1]],
                                       "edges": [["arg", "g:main:D_80090100", "p:main:func_80002000:0"]]}),
            ("main", "func_80002000", {"acc": [["p:main:func_80002000:0", 0x4, "lw", 1]]}))
        db = T.solve(facts)
        a, b, p = (db.node("g:main:D_80090000"), db.node("g:main:D_80090100"), db.node("p:main:func_80002000:0"))
        self.assertEqual(a, p)                  # first argument merged with the parameter
        self.assertNotEqual(b, p)               # s16 vs f32 at 0x10: refused
        self.assertEqual(db.refused["arg"], 1)

    def test_congruence_merges_pointees(self):
        db = T.DB()
        x, y = db.node("g:main:D_80090000"), db.node("p:main:func_80001000:0")
        cx, cy = db.node("g:main:D_80090000/8"), db.node("p:main:func_80001000:0/8")
        db.union(x, y)
        self.assertEqual(db.find(cx), db.find(cy))

    def test_pass_through_parameter_is_not_a_type(self):
        facts = facts_for(
            ("main", "func_80001000", {"acc": [["g:main:D_80090000", 0x10, "lh", 1]],
                                       "edges": [["arg", "g:main:D_80090000", "p:main:func_80002000:0"]]}),
            ("main", "func_80002000", {}))
        db = T.solve(facts)
        self.assertNotIn("p:main:func_80002000:0", db.keymap)


class LayoutTests(unittest.TestCase):
    def test_choose_fields_overlaps_and_float_words(self):
        a = collections.Counter({(0, "lw"): 5, (2, "lh"): 1, (8, "lw"): 2, (8, "lwc1"): 1, (12, "lhu"): 3})
        taken, rejected = T.choose_fields(a)
        self.assertEqual([(t[0], t[1], t[2]) for t in taken], [(0, 4, "i"), (8, 4, "f"), (12, 2, "i")])
        self.assertEqual([(r[0], r[1]) for r in rejected], [(2, 2)])
        self.assertEqual(T.ctype_for(taken[2][3], 2, "i"), "u16")
        self.assertEqual(T.ctype_for(collections.Counter({"lw": 1}), 4, "i", (0, 2)), "u32")

    def test_c_layouts(self):
        lay = T.CLayouts().parse("""
            typedef struct Inner { s16 a; f32 b; } Inner;
            typedef struct Foo {
                u8 pad0[0x1D8 - 0x1D0];
                s16 x, y;
                Inner in;
                struct Foo *next;
                void (*cb)(struct Foo *self, s32 n);
                union { s32 w; u8 b[4]; } u;
                f64 d;
            } Foo;""")
        foo = lay.structs["Foo"]
        offs = {f[1]: f[0] for f in foo["fields"]}
        self.assertEqual((offs["x"], offs["y"], offs["in.a"], offs["in.b"], offs["next"], offs["cb"]),
                         (0x8, 0xA, 0xC, 0x10, 0x14, 0x18))
        self.assertEqual((offs["u.w"], offs["d"], foo["size"], foo["align"]), (0x1C, 0x20, 0x28, 8))

    def test_gga_layouts(self):
        g = T.gga_layouts()
        self.assertEqual(g.structs["SndTrack"]["size"], 0xD8)
        self.assertEqual({f[1]: f[0] for f in g.structs["Heap"]["fields"]}["tail"], 0xC)

    def test_semantic_names(self):
        self.assertTrue(T.semantic("health"))
        self.assertTrue(T.semantic("x"))
        self.assertFalse(T.semantic("unk2C"))
        self.assertFalse(T.semantic("pad1"))


@unittest.skipUnless(os.path.exists(os.path.join(HH, T.DB_PATH)) and os.path.exists(IDO), "needs the database and IDO")
class DatabaseTests(unittest.TestCase):
    def cc(self, text):
        import idoflags
        td = tempfile.mkdtemp()
        try:
            open(os.path.join(td, "t.c"), "w").write(text)
            r = subprocess.run([IDO, "-c"] + idoflags.CFLAGS + ["-I", os.path.join(HH, "include"), "-I", td, "-o",
                                os.path.join(td, "t.o"), os.path.join(td, "t.c")], capture_output=True, text=True, cwd=HH)
            return r.returncode == 0 and "Error" not in r.stderr + r.stdout, r.stdout + r.stderr
        finally:
            shutil.rmtree(td)

    def test_index_rows(self):
        rows = [json.loads(l) for l in open(os.path.join(HH, T.DB_PATH))]
        types = {r["type"]: r for r in rows if r["kind"] == "type"}
        globs = {r["global"]: r for r in rows if r["kind"] == "global"}
        self.assertGreater(len(types), 1000)
        self.assertEqual(globs["D_80091BC0"]["decl"], "extern Heap D_80091BC0;")    # GGA gHeap, confirmed
        self.assertEqual(globs["D_800CBDA4"]["decl"], "extern struct SndTrack *D_800CBDA4;")
        gs = types["T_D_801BBBF0"]
        self.assertGreater(len(gs["fields"]), 100)
        for r in types.values():
            offs = [f["off"] for f in r["fields"]]
            self.assertEqual(offs, sorted(set(offs)), r["type"])

    def test_headers_compile_with_exact_offsets(self):
        rows = [json.loads(l) for l in open(os.path.join(HH, T.DB_PATH))]
        for home in ("main", "shared", "file008"):
            rs = [r for r in rows if r["kind"] == "type" and r["home"] == home and r.get("c")][:150]
            lines = ['#include "types/%s.h"' % home]
            for i, r in enumerate(rs):
                for f in r["fields"]:
                    lines.append("char c%d_%X[((int)&((%s *)0)->%s == 0x%X) ? 1 : -1];" % (i, f["off"], r["type"], f["name"], f["off"]))
                lines.append("char sz%d[(sizeof(%s) == 0x%X) ? 1 : -1];" % (i, r["type"], r["size"]))
            ok, err = self.cc("\n".join(lines) + "\n")
            self.assertTrue(ok, home + ": " + err[:500])

    def test_context_types_compacts_and_respects_existing_declarations(self):
        base = "#include \"common.h\"\nextern s32 D_801BBBF0;\n"
        text = T.context_types("file008", "func_80117610", base)
        self.assertIn("typedef struct T_D_801BBBF0 {", text)
        self.assertIn("compacted", text)
        self.assertNotIn("extern T_D_801BBBF0 D_801BBBF0;", text)        # declared above: a note, not a redeclaration
        self.assertIn("D_801BBBF0: recovered as T_D_801BBBF0", text)
        ok, err = self.cc(base + text + "char z[(sizeof(T_D_801BBBF0) >= 0x1154 && (int)&((T_D_801BBBF0 *)0)->unk18E == 0x18E) ? 1 : -1];\n")
        self.assertTrue(ok, err[:500])
        text2 = T.context_types("file008", "func_80117610", "#include \"common.h\"\n")
        self.assertIn("extern T_D_801BBBF0 D_801BBBF0;", text2)

    def test_typed_attempt_freezes_its_types(self):
        import reconcile_frozen as R
        import srcbuild as S
        td = tempfile.mkdtemp()
        try:
            open(os.path.join(td, "context.h"), "w").write(S.typed_context("file008", "func_80117610"))
            open(os.path.join(td, "attempt.c"), "w").write(
                '#include "context.h"\n#define GS ((T_D_801BBBF0 *)&D_801BBBF0)\n'
                's32 func_80117610(s32 arg0) {\n    if (GS->unk18E == 0) {\n        GS->unk18E = 1;\n'
                '        GS->unk190 = 3;\n        GS->unk1D8 = 1;\n        GS->unk1DC = 0;\n        return 1;\n    }\n'
                '    return 0;\n}\n')
            snippet = R.read_attempt("file008", "func_80117610", os.path.join(td, "attempt.c"))
        finally:
            shutil.rmtree(td)
        self.assertIn("typedef struct T_D_801BBBF0 {", snippet)     # the registry entry carries the type it used
        self.assertIn("} T_D_801BBBF0;", snippet)

    def test_srcbuild_context_types_flag(self):
        py = os.path.join(HH, ".venv/bin/python")
        env = dict(os.environ); env.pop("TYPES", None)
        plain = subprocess.run([py, "tools/hh/srcbuild.py", "context", "file008", "func_80117610"], cwd=HH, env=env,
                               capture_output=True, text=True).stdout
        env["TYPES"] = "1"
        typed = subprocess.run([py, "tools/hh/srcbuild.py", "context", "file008", "func_80117610"], cwd=HH, env=env,
                               capture_output=True, text=True).stdout
        self.assertNotIn("TYPES=1", plain)
        self.assertTrue(typed.startswith(plain))
        self.assertIn("TYPES=1: recovered shared types", typed)


if __name__ == "__main__":
    unittest.main()
