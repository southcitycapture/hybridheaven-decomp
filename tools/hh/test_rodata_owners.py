"""Method M2 (owner map, release guardrail, section-size padding) on synthetic units at 0x800000xx."""
import unittest
from types import SimpleNamespace

import rodata_layout
import rodata_owners


def unit(image):
    """A fake srcbuild for text unit file999/80000000 whose ROM image starts at 0 (vram 0x80000000)."""
    return SimpleNamespace(IMG=image, file_span=lambda seg, cfile: (0, len(image)))


class IntervalTest(unittest.TestCase):
    IMAGE = bytes(0x40) + bytes.fromhex('80000010' '80000014' '00000000' '00000000') + bytes.fromhex(
        '3e19999a' '00000000') + b'ab.c\x00\x00\x00\x00' + bytes.fromhex('00000001' '00000000')

    def iv(self, section, lines, address):
        return rodata_owners.interval(unit(self.IMAGE), 'file999', '80000000', section, lines, address)

    def test_jump_table_excludes_trailing_padding(self):
        lines = ['dlabel jtbl_80000040',
                 '    /* 40 80000040 80000010 */ .word .L80000010',
                 '    /* 44 80000044 80000014 */ .word .L80000014',
                 '    /* 48 80000048 00000000 */ .word 0x00000000',
                 '    /* 4C 8000004C 00000000 */ .word 0x00000000']
        self.assertEqual(self.iv('.late_rodata', lines, 0x80000040), (0x80000040, 0x80000048, 'jtbl'))

    def test_literal_excludes_its_zero_word(self):
        lines = ['dlabel D_80000050', '    /* 50 80000050 3E19999A */ .float 0.150000006',
                 '    /* 54 80000054 00000000 */ .float 0']
        self.assertEqual(self.iv('.late_rodata', lines, 0x80000050), (0x80000050, 0x80000054, 'f32'))
        # in regular rodata the same lines are a named object that owns its zero
        self.assertEqual(self.iv('.rodata', lines, 0x80000050), (0x80000050, 0x80000058, 'named'))

    def test_string_owns_nul_and_padding_to_four(self):
        lines = ['dlabel D_80000058', '    /* 58 80000058 */ .asciz "ab.c"', '    /* 61622E6300000000 */']
        self.assertEqual(self.iv('.rodata', lines, 0x80000058), (0x80000058, 0x80000060, 'string'))
        # a hex line that disagrees with the image is not trusted
        lines[2] = '    /* 61622E6400000000 */'
        found = self.iv('.rodata', lines, 0x80000058)
        self.assertTrue(found is None or found[2] != 'string')

    def test_named_object_owns_its_zeros(self):
        lines = ['dlabel D_80000060', '    /* 60 80000060 00000001 */ .word 0x00000001',
                 '    /* 64 80000064 00000000 */ .word 0x00000000']
        self.assertEqual(self.iv('.rodata', lines, 0x80000060), (0x80000060, 0x80000068, 'named'))


class ReleaseGuardrailTest(unittest.TestCase):
    OWNERS = {'D_80000050': rodata_owners.Interval(0x80000050, 0x80000054, 'f32', frozenset({'func_80000000'})),
              'D_80000058': rodata_owners.Interval(0x80000058, 0x80000060, 'string', frozenset({'func_80000000', 'func_80000020'})),
              'D_80000060': rodata_owners.Interval(0x80000060, 0x80000068, 'named', frozenset({'func_80000000', 'data'}))}

    def test_only_the_sole_user_may_take_an_interval(self):
        self.assertTrue(rodata_owners.releasable(self.OWNERS, 'D_80000050', 'func_80000000'))
        self.assertFalse(rodata_owners.releasable(self.OWNERS, 'D_80000050', 'func_80000020'))
        self.assertFalse(rodata_owners.releasable(self.OWNERS, 'D_80000058', 'func_80000000'))
        self.assertFalse(rodata_owners.releasable(self.OWNERS, 'D_80000060', 'func_80000000'))
        self.assertFalse(rodata_owners.releasable(self.OWNERS, 'D_80000040', 'func_80000000'))

    def test_a_c_neighbour_naming_the_label_blocks_release(self):
        own = 'f32 func_80000000(void) {\n    return 0.15f;\n}\n'
        other = 'extern f32 D_80000050;\nf32 func_80000020(void) {\n    return D_80000050;\n}\n'
        comment = '/* D_80000050 */\n#pragma GLOBAL_ASM("asm/nonmatchings/file999/80000000/D_80000050.s")\n'
        self.assertTrue(rodata_owners.releasable(self.OWNERS, 'D_80000050', 'func_80000000', comment + own))
        self.assertFalse(rodata_owners.releasable(self.OWNERS, 'D_80000050', 'func_80000000', own + other))
        # the new function's own body may name it (an extern read is not a pool entry and is never paired)
        # a leftover file-scope declaration is not a use; an initializer is
        self.assertTrue(rodata_owners.releasable(self.OWNERS, 'D_80000050', 'func_80000000', 'extern f32 D_80000050;\n' + own))
        self.assertFalse(rodata_owners.releasable(self.OWNERS, 'D_80000050', 'func_80000000', 'static f32 *p = &D_80000050;\n' + own))
        mine = 'f32 func_80000000(void) {\n    return D_80000050;\n}\n'
        self.assertTrue(rodata_owners.releasable(self.OWNERS, 'D_80000050', 'func_80000000', mine))


class SectionPaddingTest(unittest.TestCase):
    """The assembler rounds an input section's size up to its alignment; those zeros are its end edge."""
    TEXT = ('#pragma GLOBAL_ASM("asm/nonmatchings/file999/80000000/x.s")\n'
            'static const unsigned char rodata_80000000_80000000[] = { 0x01, 0x02, 0x03, 0x04, };\n')

    def check(self, raw, spans, size, section_align):
        from types import SimpleNamespace
        syms = [SimpleNamespace(name='rodata_80000000_80000000', st_value=0, st_shndx=1, st_type=1)]
        return rodata_layout.check_plan(self.TEXT, raw, size, spans, 0x80000000, syms, 1, {0, 4, 8}, set(),
                                        16, section_align=section_align)

    RAW = bytes.fromhex('01020304' '3f800000' '40000000' '00000000') + bytes(16)   # 12 placed bytes, then 20 zeros

    def test_padding_up_to_section_alignment_is_the_end_edge(self):
        raw = self.RAW[:12] + bytes(4)                       # 16 bytes: 4 zeros of padding
        self.check(raw, [[0, 0, 4], [4, 4, 8]], 12, 16)
        raw = self.RAW[:8] + bytes(8)                        # 8 zeros after the last placed byte at +8
        self.check(raw, [[0, 0, 4], [4, 4, 4]], 8, 16)

    def test_padding_beyond_alignment_or_without_it_is_refused(self):
        raw = self.RAW[:8] + bytes(8)
        with self.assertRaisesRegex(ValueError, 'inside a unit|zero bytes'):
            self.check(raw, [[0, 0, 4], [4, 4, 4]], 8, None)  # legacy call: no section alignment given
        with self.assertRaisesRegex(ValueError, 'inside a unit|zero bytes'):
            self.check(raw, [[0, 0, 4], [4, 4, 4]], 8, 8)     # 8 zeros cannot be padding of an 8-aligned section
        raw = self.RAW[:8] + bytes(24)                       # 24 zeros: more than one alignment unit
        with self.assertRaisesRegex(ValueError, 'inside a unit|zero bytes'):
            self.check(raw, [[0, 0, 4], [4, 4, 4]], 8, 16)



class AsmprocForceTest(unittest.TestCase):
    """A planned unit whose last GLOBAL_ASM became C is still post-processed (static symbols for frozen pieces)."""
    def test_force_only_for_planned_units_without_global_asm(self):
        import srcbuild
        blob = 'static const unsigned char rodata_80000000_80000010[] = { 0x01, };\n'
        plan = '/* hh-rodata-layout [16,[[0,0,1]]] */\n'
        asm = '#pragma GLOBAL_ASM("asm/nonmatchings/file999/80000000/func_80000000.s")\n'
        self.assertEqual(srcbuild.asmproc_force(blob + plan), ['--force'])
        self.assertEqual(srcbuild.asmproc_force(blob), [])
        self.assertEqual(srcbuild.asmproc_force(blob, planned=True), ['--force'])
        self.assertEqual(srcbuild.asmproc_force(asm + blob + plan), [])


if __name__ == '__main__':
    unittest.main()
