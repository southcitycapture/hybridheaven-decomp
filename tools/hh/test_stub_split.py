"""Trailing-stub detection (stub_split.py) on synthetic words at 0x800000xx."""
import unittest

import stub_split as S

JR, NOP = S.JR_RA, S.NOP
PRO, EPI = 0x27BDFFE8, 0x27BD0018          # addiu $sp,$sp,-0x18 / +0x18
SW_RA, LW_RA = 0xAFBF0014, 0x8FBF0014
JAL = 0x0C000010                            # jal 0x80000040


class TrailingStubTests(unittest.TestCase):
    def test_epilogue_then_one_stub(self):
        words = [PRO, SW_RA, JAL, NOP, LW_RA, EPI, JR, NOP, JR, NOP]
        self.assertEqual(S.trailing_stubs(words), (8, 1, "ok"))

    def test_delay_slot_epilogue_then_two_stubs(self):
        words = [PRO, SW_RA, JAL, NOP, LW_RA, JR, EPI, JR, NOP, JR, NOP]
        self.assertEqual(S.trailing_stubs(words), (7, 2, "ok"))

    def test_lui_scheduled_before_prologue(self):
        words = [0x3C0E8000, PRO, SW_RA, JAL, NOP, LW_RA, EPI, JR, NOP, JR, NOP]
        self.assertEqual(S.trailing_stubs(words), (9, 1, "ok"))

    def test_no_stub_after_epilogue(self):
        words = [PRO, SW_RA, JAL, NOP, LW_RA, EPI, JR, NOP]
        self.assertEqual(S.trailing_stubs(words)[1:], (0, "no trailing return"))

    def test_other_code_after_epilogue_is_not_a_stub(self):
        words = [PRO, SW_RA, JAL, NOP, LW_RA, EPI, JR, NOP, 0x24020001, JR, NOP]
        self.assertEqual(S.trailing_stubs(words)[1], 0)

    def test_frameless_is_reported_not_split(self):
        words = [0x10800003, NOP, 0x24020001, JR, NOP, JR, NOP]
        self.assertEqual(S.trailing_stubs(words), (5, 0, "frameless"))

    def test_independent_instruction_scheduled_before_the_return(self):
        # file045 func_801E4598: lw ra; addiu sp,+0x18; addiu v0,zero,1; jr ra; nop; jr ra; nop
        words = [PRO, SW_RA, JAL, NOP, LW_RA, EPI, 0x24020001, JR, NOP, JR, NOP]
        self.assertEqual(S.trailing_stubs(words), (9, 1, "ok"))
        # a branch between the restore and the return is not an epilogue
        words = [PRO, SW_RA, JAL, NOP, LW_RA, EPI, 0x10000002, JR, NOP, JR, NOP]
        self.assertEqual(S.trailing_stubs(words)[1:], (0, "epilogue not at a return"))

    def test_frameless_candidates(self):
        ret1 = [0x15C10003, NOP, JR, 0x24020001, JR, NOP]          # bne .L; nop; jr ra; li v0,1; .L: jr ra; nop
        self.assertEqual(S.frameless_stubs(ret1 + [JR, NOP]), 2)   # scan then keeps the targeted .L pair
        self.assertEqual(S.frameless_stubs(ret1 + [JR, NOP, JR, NOP]), 3)
        self.assertEqual(S.frameless_stubs([JR, NOP, JR, NOP]), 1)  # two empty functions
        self.assertEqual(S.frameless_stubs([JR, NOP]), 0)
        self.assertEqual(S.frameless_stubs([0x24020001, JR, NOP]), 0)
        # a return that follows other code can be reached by falling through
        self.assertEqual(S.frameless_stubs([0x24020001, 0x24030001, JR, NOP]), 0)
        # a jr in a branch's delay slot is not an unconditional return
        self.assertEqual(S.frameless_stubs([0x24020001, 0x10800002, JR, NOP, JR, NOP]), 0)
        # framed functions are trailing_stubs' business
        self.assertEqual(S.frameless_stubs([PRO, LW_RA, EPI, JR, NOP, JR, NOP]), 0)

    def test_frameless_rows_need_opt_in(self):
        rows = [{"seg": "t", "func": "func_80000040", "status": "frameless-ok", "stubs": ["func_80000060"], "roms": ["0x1060"]}]
        self.assertEqual(S.symbol_lines(rows), [])
        self.assertEqual(S.symbol_lines(rows, frameless=True), ["func_80000060 = 0x80000060; // type:func rom:0x1060"])
        self.assertEqual(S.symbol_lines(rows, only={("t", "func_80000040")}), ["func_80000060 = 0x80000060; // type:func rom:0x1060"])

    def test_branch_and_jump_targets(self):
        self.assertEqual(S.branch_target(0x80000000, 0x10000003), 0x80000010)     # b +3
        self.assertEqual(S.branch_target(0x80000020, 0x1000FFFF), 0x80000020)     # b -1
        self.assertEqual(S.branch_target(0x80000000, 0x08000010), 0x80000040)     # j
        self.assertEqual(S.branch_target(0x80000000, 0x45010002), 0x8000000C)     # bc1t
        self.assertIsNone(S.branch_target(0x80000000, 0x24020001))

    def test_referenced_stub_is_skipped(self):
        stub = [(0x80000020, 0x80000028)]
        text = [(0x80000000, 0x10000007)]                                         # b 0x80000020
        self.assertTrue(S.referenced(stub, text, []))
        self.assertTrue(S.referenced(stub, [], [0x80000020]))                    # jump-table / pointer word
        self.assertEqual(S.referenced(stub, [(0x80000000, 0x10000006)], [0x80000010]), [])

    def test_symbol_lines_only_ok_rows(self):
        rows = [{"seg": "t", "func": "func_80000000", "status": "ok", "stubs": ["func_80000020"], "roms": ["0x1020"]},
                {"seg": "t", "func": "func_80000040", "status": "frameless", "stubs": ["func_80000060"], "roms": ["0x1060"]}]
        self.assertEqual(S.symbol_lines(rows), ["func_80000020 = 0x80000020; // type:func rom:0x1020"])


class InsertStubTests(unittest.TestCase):
    """A committed source that includes only the predecessor's asm gets the split-off stubs as C after it."""
    class FakeS:
        def __init__(self, ents): self.ents = ents
        def entries(self, seg, cfile): return self.ents
        def is_stub(self, off, size): return size == 8
        def defined_functions(self, text):
            import re
            return set(re.findall(r"^\w[\w ]*\b(func_[0-9A-F]{8})\(", text, re.M))

    def setUp(self):
        import kept_blocks
        self.K = kept_blocks
        ents = [("func_80000000", "a.s", 0x1000, 0x20, 0x80000000), ("func_80000020", "b.s", 0x1020, 8, 0x80000020),
                ("func_80000028", "c.s", 0x1028, 8, 0x80000028), ("func_80000030", "d.s", 0x1030, 0x10, 0x80000030)]
        self.S = self.FakeS(ents)

    def test_two_stubs_after_a_recipe_block(self):
        text = ('#include "common.h"\n\n'
                '/* hh-block asm/nonmatchings/t/80000000/_mrg_keep_text_x.s {"functions":["func_80000000"],"rodata":[]} */\n'
                '#pragma GLOBAL_ASM("asm/nonmatchings/t/80000000/_mrg_keep_text_x.s")\n\n'
                'void func_80000030(void) {\n    func_80000000();\n}\n')
        new, ins, probs = S.insert_stubs(self.S, self.K, "t", "80000000", text)
        self.assertEqual((ins, probs), (["func_80000020", "func_80000028"], []))
        self.assertIn('_mrg_keep_text_x.s")\n\nvoid func_80000020(void) {\n}\n\nvoid func_80000028(void) {\n}\n\n'
                      'void func_80000030(void) {', new)
        self.assertEqual(S.insert_stubs(self.S, self.K, "t", "80000000", new)[1:], ([], []))   # idempotent

    def test_predecessor_in_c_is_a_problem_not_an_edit(self):
        text = ('void func_80000000(void) {\n}\n\n#pragma GLOBAL_ASM("asm/nonmatchings/t/80000000/func_80000030.s")\n')
        new, ins, probs = S.insert_stubs(self.S, self.K, "t", "80000000", text)
        self.assertEqual(new, text)
        self.assertEqual((ins, len(probs)), ([], 2))         # both stubs: predecessor not included through asm


if __name__ == "__main__":
    unittest.main()
