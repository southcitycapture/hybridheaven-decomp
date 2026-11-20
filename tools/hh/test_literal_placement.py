import unittest
from types import SimpleNamespace

import kept_blocks
import literal_audit


class LiteralPlacementTest(unittest.TestCase):
    def test_decode_only_complete_finite_own_unit_scalars(self):
        src = ('extern f32 D_80000000;\nextern f64 D_80000004;\n'
               'extern f32 D_8000000C;\nextern f64 D_80000010;\n'
               'extern f32 D_80000020;\n')
        ro = bytes.fromhex('3fc00000 3ff4000000000000 7f800000 00000000')
        self.assertEqual(literal_audit.pool_values(src, 0x80000000, ro),
                         {'D_80000000': ('f32', 1.5), 'D_80000004': ('f64', 1.25)})

    def test_mixed_text_and_raw_range_can_be_split_only_if_exact(self):
        block = ('.section .late_rodata\n.late_rodata_alignment 8\n'
                 'nonmatching D_80000020\ndlabel D_80000020\n'
                 '/* 10 80000020 3FC00000 */ .word 0x3FC00000\n'
                 '/* 14 80000024 3F800000 */ .word 0x3F800000\n'
                 '.section .text\nglabel func_80000000\n    jr $ra\n    nop\n')
        state = SimpleNamespace(IMG=bytes(0x10) + bytes.fromhex('3fc00000 3f800000'))
        self.assertTrue(kept_blocks.exact_raw_range(state, block, 0x80000020, 0x10, 8))
        self.assertFalse(kept_blocks.exact_raw_range(state, block, 0x80000020, 0x10, 4))
        extra = block.replace('.section .text', '.asciz "other payload"\n.section .text')
        self.assertFalse(kept_blocks.exact_raw_range(state, extra, 0x80000020, 0x10, 8))
