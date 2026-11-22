"""diagnose.py: frame-slot diff (try_func --diagnose) and the register/address-blind shape similarity that
score_attempts.py tiers by. Synthetic instruction words only (addresses 0x800000xx)."""
import os
import sys
import unittest

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import diagnose as D  # noqa: E402
import score_attempts as SA  # noqa: E402

SP, RA, ZERO, A0, V0, T6, T7, S0 = 29, 31, 0, 4, 2, 14, 15, 16


def i_type(op, rs, rt, imm): return (op << 26) | (rs << 21) | (rt << 16) | (imm & 0xFFFF)
def addiu(rt, rs, imm): return i_type(9, rs, rt, imm)
def sw(rt, off, rs=SP): return i_type(0x2B, rs, rt, off)
def lw(rt, off, rs=SP): return i_type(0x23, rs, rt, off)
def sh(rt, off, rs=SP): return i_type(0x29, rs, rt, off)
def lh(rt, off, rs=SP): return i_type(0x21, rs, rt, off)
def sdc1(ft, off): return i_type(0x3D, SP, ft, off)
def ldc1(ft, off): return i_type(0x35, SP, ft, off)
def beq(rs, rt, off): return i_type(4, rs, rt, off)
def jal(addr): return (3 << 26) | ((addr >> 2) & 0x3FFFFFF)
def addu(rd, rs, rt): return (rs << 21) | (rt << 16) | (rd << 11) | 0x21
JR_RA, NOP = 0x03E00008, 0


def target_with_buffer():
    return [addiu(SP, SP, -0x60), sw(RA, 0x5C), sw(S0, 0x58),
            addiu(A0, SP, 0x40), jal(0x80000080), addiu(S0, ZERO, 1),
            sw(S0, 0x3C), lw(T6, 0x3C),
            lw(RA, 0x5C), lw(S0, 0x58), JR_RA, addiu(SP, SP, 0x60)]


def mine_without_buffer():
    return [addiu(SP, SP, -0x50), sw(RA, 0x4C),
            jal(0x80000080), NOP,
            sw(V0, 0x3C), lw(T6, 0x3C),
            lw(RA, 0x4C), JR_RA, addiu(SP, SP, 0x50)]


class FrameMap(unittest.TestCase):
    def test_saves_restores_and_slots(self):
        f = D.frame_map(target_with_buffer())
        self.assertEqual(f["size"], 0x60)
        self.assertEqual(f["saved"], {"ra": 0x5C, "s0": 0x58})
        self.assertEqual(sorted(f["slots"]), [0x3C, 0x40])        # restores are not slot uses
        self.assertEqual(f["slots"][0x3C]["loads"], 1)
        self.assertEqual(f["slots"][0x3C]["stores"], 1)
        self.assertEqual(f["slots"][0x40]["addr"], 3)

    def test_float_save_and_pointer_access(self):
        words = [addiu(SP, SP, -0x40), sdc1(20, 0x38), addiu(T7, SP, 0x20), sw(V0, 4, T7),
                 ldc1(20, 0x38), JR_RA, addiu(SP, SP, 0x40)]
        f = D.frame_map(words)
        self.assertEqual(f["saved"], {"f20": 0x38})
        self.assertEqual(f["slots"][0x24]["via"], 1)                # 4(t7) with t7 = sp+0x20
        self.assertEqual(f["slots"][0x20]["addr"], 2)

    def test_store_of_a_written_callee_register_is_a_local(self):
        words = [addiu(SP, SP, -0x20), addiu(S0, ZERO, 5), sw(S0, 0x18), JR_RA, addiu(SP, SP, 0x20)]
        f = D.frame_map(words)
        self.assertEqual(f["saved"], {})
        self.assertIn(0x18, f["slots"])


class FrameDiff(unittest.TestCase):
    def test_missing_buffer_size_and_saved_set(self):
        out = "\n".join(D.frame_diff(mine_without_buffer(), target_with_buffer()))
        self.assertIn("frame size: target 0x60, mine 0x50 (target 16 bytes larger)", out)
        self.assertIn("mine lacks s0", out)
        self.assertIn("target has a 0x18-byte buffer at sp+0x40", out)
        self.assertIn("never touched by yours", out)
        self.assertIn("1 slot(s) identical: 0x3C", out)

    def test_reordered_locals(self):
        tgt = [addiu(SP, SP, -0x20), sw(V0, 0x18), sh(V0, 0x1C), lw(T6, 0x18), lh(T7, 0x1C), JR_RA, addiu(SP, SP, 0x20)]
        mine = [addiu(SP, SP, -0x20), sw(V0, 0x1C), sh(V0, 0x18), lw(T6, 0x1C), lh(T7, 0x18), JR_RA, addiu(SP, SP, 0x20)]
        out = D.frame_diff(mine, tgt)
        self.assertTrue(any(l.startswith("moved: target sp+0x18 w4") and l.endswith("mine sp+0x1C") for l in out), out)
        self.assertTrue(any(l.startswith("moved: target sp+0x1C w2") and l.endswith("mine sp+0x18") for l in out), out)
        self.assertTrue(any("declaration order" in l for l in out), out)

    def test_uniform_shift(self):
        tgt = [addiu(SP, SP, -0x30), sw(V0, 0x20), sw(V0, 0x24), JR_RA, addiu(SP, SP, 0x30)]
        mine = [addiu(SP, SP, -0x30), sw(V0, 0x28), sw(V0, 0x2C), JR_RA, addiu(SP, SP, 0x30)]
        out = D.frame_diff(mine, tgt)
        self.assertTrue(any("all shifted by +8" in l for l in out), out)

    def test_extra_local(self):
        tgt = [addiu(SP, SP, -0x20), JR_RA, addiu(SP, SP, 0x20)]
        mine = [addiu(SP, SP, -0x20), sw(V0, 0x18), JR_RA, addiu(SP, SP, 0x20)]
        out = D.frame_diff(mine, tgt)
        self.assertTrue(any(l.startswith("extra in mine:   sp+0x18 w4 L0 S1") for l in out), out)

    def test_identical_frames_print_nothing(self):
        self.assertEqual(D.frame_diff(target_with_buffer(), target_with_buffer()), [])


def b(words): return b"".join(w.to_bytes(4, "big") for w in words)


class Shape(unittest.TestCase):
    def test_register_renaming_is_free(self):
        x = [addu(V0, A0, 5), sw(V0, 0x10), JR_RA, NOP]
        y = [addu(3, A0, 5), sw(3, 0x10), JR_RA, NOP]
        self.assertEqual(D.shape_similarity(b(x), b(y)), 1.0)

    def test_sp_and_zero_keep_identity(self):
        self.assertLess(D.shape_similarity(b([sw(V0, 0x10, SP)]), b([sw(V0, 0x10, S0)])), 1.0)

    def test_branch_offsets_and_jump_targets_are_blind(self):
        x = [beq(V0, ZERO, 3), jal(0x80000040), NOP]
        y = [beq(3, ZERO, 9), jal(0x800000C0), NOP]
        self.assertEqual(D.shape_similarity(b(x), b(y)), 1.0)

    def test_one_insertion_costs_one_instruction(self):
        base = [addiu(V0, ZERO, i) for i in range(1, 20)]
        ins = base[:1] + [addiu(T6, ZERO, 0x77)] + base[1:]
        self.assertGreater(D.shape_similarity(b(ins), b(base)), 0.95)

    def test_immediates_matter(self):
        self.assertLess(D.shape_similarity(b([lw(V0, 0x10, A0)]), b([lw(V0, 0x14, A0)])), 1.0)


class Tiers(unittest.TestCase):
    def test_thresholds(self):
        self.assertEqual([SA.tier(x) for x in (1.0, 0.9, 0.899, 0.5, 0.499, 0.0, None)],
                         ["near", "near", "partial", "partial", "far", "far", "none"])

    def test_best_and_table(self):
        fns = {("file001", "func_80000010"): 0x100, ("file001", "func_80000020"): 0x40, ("main", "func_80000030"): 8}
        rows = [dict(seg="file001", func="func_80000010", path="a.c", score=10, total=64, shape=0.93, line="score 10/64"),
                dict(seg="file001", func="func_80000010", path="b.c", score=40, total=64, shape=0.70, line="score 40/64"),
                dict(seg="file001", func="func_80000020", path="c.c", score=15, total=16, shape=0.95, line="score 15/16")]
        best = SA.best_of(rows, fns)
        self.assertEqual(best[("file001", "func_80000010")]["pos"][1], "b.c")
        self.assertEqual(best[("file001", "func_80000010")]["shape"], (0.93, "a.c"))
        old, oldb, new, newb, move = SA.tier_table(best, fns)
        self.assertEqual((old["partial"], old["near"], old["none"]), (1, 1, 1))
        self.assertEqual((new["near"], newb["near"]), (2, 0x140))
        self.assertEqual(move[("partial", "near")], 1)


if __name__ == "__main__":
    unittest.main()
