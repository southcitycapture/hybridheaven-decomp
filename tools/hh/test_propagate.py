"""propagate.py: .text-only symbol maps, constant/offset maps, body-limited constant rewrites, literal search sites,
BSS of copies, the as-built source variant, normalized shapes and blocked destinations (Task 23)."""
import os
import sys
import tempfile
import unittest
from unittest import mock

_argv = sys.argv
sys.argv = ['propagate.py']
import propagate as P
sys.argv = _argv

ASM = '''.section .late_rodata
nonmatching jtbl_80000080

dlabel jtbl_80000080
    /* 000080 80000080 80000010 */ .word .L80000010
    /* 000084 80000084 80000020 */ .word .L80000020
enddlabel jtbl_80000080


.section .text
glabel func_80000000
    /* 000000 80000000 3C028000 */  lui        $v0, %hi(D_80000100)
    /* 000004 80000004 0C000040 */  jal        func_80000040
    /* 000008 80000008 00000000 */   nop
'''

SNIP = '''#include "common.h"
typedef struct Foo {
    u8 pad[4];
    s32 unk4;
} Foo;
extern s32 D_80001000;

void func_80001000(Foo *arg0) {
    arg0->unk4 = 4;
    D_80001000 %= 5U;
}
'''


def word(op, rs=0, rt=0, imm=0):
    return (op << 26) | (rs << 21) | (rt << 16) | (imm & 0xFFFF)


class AsmSyms(unittest.TestCase):
    def test_late_rodata_words_are_not_instructions(self):
        with tempfile.NamedTemporaryFile('w', suffix='.s', delete=False) as fh:
            fh.write(ASM)
        try:
            self.assertEqual(P.asm_syms(fh.name), [('D_80000100',), ('func_80000040',), ()])
        finally:
            os.remove(fh.name)


class ImmMaps(unittest.TestCase):
    def maps(self, a, b):
        with mock.patch.object(P, 'words', side_effect=[a, b]), \
                mock.patch.object(P, 'asm_syms', return_value=[()] * len(a)), \
                mock.patch.object(P, 'asm_path', return_value='x.s'):
            return P.imm_maps(('s', 'f'), ('s', 'g'))

    def test_constants_offsets_and_other_differences(self):
        a = [word(9, 0, 4, 0x2D), word(0xB, 10, 1, 5), word(0x25, 2, 9, 0x1D8), word(0, 0, 0, 0x21)]
        b = [word(9, 0, 4, 0x118), word(0xB, 10, 1, 15), word(0x25, 2, 9, 0x192), word(0, 0, 0, 0x21)]
        self.assertEqual(self.maps(a, b), ({0x2D: 0x118, 5: 15}, {0x1D8: 0x192}))
        # a register difference is not a constant
        self.assertIsNone(self.maps([word(9, 0, 4, 1)], [word(9, 0, 5, 1)]))
        # one constant mapped two ways
        self.assertIsNone(self.maps([word(9, 0, 4, 1), word(9, 0, 4, 1)], [word(9, 0, 4, 2), word(9, 0, 4, 3)]))

    def test_const_map_rejects_offsets(self):
        with mock.patch.object(P, 'imm_maps', return_value=({1: 2}, {4: 8})):
            self.assertIsNone(P.const_map(None, None))
        with mock.patch.object(P, 'imm_maps', return_value=({1: 2}, {})):
            self.assertEqual(P.const_map(None, None), {1: 2})


class Literals(unittest.TestCase):
    def test_constants_only_in_the_body_and_suffix_kept(self):
        out = P.with_consts(SNIP, {4: 12, 5: 15}, 'func_80001000')
        self.assertIn('u8 pad[4];', out)                  # struct padding untouched
        self.assertIn('arg0->unk4 = 12;', out)
        self.assertIn('%= 15U;', out)

    def test_sites_cover_body_constants_and_struct_padding(self):
        sites = P.literal_sites(SNIP, 'func_80001000', {5: 15}, {4: 8})
        found = sorted((SNIP[a:b], tuple(v)) for a, b, _, _, v in sites)
        # pad[4] -> 8 (fields moved by +4), unk4's literal 4 -> 8 (an offset written as a constant), 5U -> 15
        self.assertIn(('4', (8,)), found)
        self.assertIn(('5', (15,)), found)
        self.assertEqual(P.render(SNIP, sites, {i: s[4][0] for i, s in enumerate(sites)}).count('pad[8]'), 1)

    def test_render_keeps_style(self):
        text = 'x = 0x10; y = -3;'
        sites = [(4, 8, '', '0x10', [0x20]), (14, 16, '-', '3', [-7])]
        self.assertEqual(P.render(text, sites, {0: 0x20, 1: -7}), 'x = 0x20; y = -7;')

    def test_verdict(self):
        self.assertEqual(P.verdict('MATCH\n'), 'match')
        self.assertEqual(P.verdict('score 51/52: instructions match but an address is wrong (wrong symbol or offset)'), 'near')
        self.assertEqual(P.verdict("score 9/9: code matches but the function's .rodata (jump table) differs"), 'near')
        self.assertAlmostEqual(P.verdict('score 3/4 (size mine 0x10, target 0x10)'), 0.75)
        self.assertEqual(P.verdict('compile error'), 0.0)


class Bss(unittest.TestCase):
    TEXT = '''#include "common.h"
u8 func_801D6514_bss_prefix[8];
extern void func_8012D844(void *, s32, s32);
u64 D_801E1708;
extern u32 D_801E1710;
static u32 D_801E1800;
'''

    def test_outside_the_span_becomes_extern(self):
        out = P.bss_as_extern(self.TEXT, None)
        self.assertIn('extern u64 D_801E1708;', out)
        self.assertNotIn('bss_prefix', out)
        self.assertIn('static u32 D_801E1800;', out)          # file-local storage is not touched
        self.assertIsNone(P.bss_as_extern(self.TEXT, (0x801E1700, 0x801E1720)))


class Borrow(unittest.TestCase):
    SRC = '''void func_801CED5C(s32 a) {
}
u8 func_801CEF20_bss_prefix[0x8];
extern void f(void);
u64 D_801E1218;

void func_801CEF20(void *a) {
}
u8 func_801CF5A0_bss_prefix[0x38];
typedef struct S {
    s32 x;
} S;
u64 D_801E1258;
u8 func_801CF5A0_bss_suffix[0x8];

void func_801CF5A0(void *a) {
}
'''

    def borrow(self, text, extra=()):
        with mock.patch('builtins.open', mock.mock_open(read_data=self.SRC)):
            return P.borrow_bss(text, 'file025', '801CE760', extra)

    def test_groups_keep_padding(self):
        g = P.bss_groups([self.SRC])
        self.assertEqual(g['D_801E1218'], (0x801E1218, ['u8 func_801CEF20_bss_prefix[0x8];', 'u64 D_801E1218;']))
        self.assertEqual(g['D_801E1258'][1], ['u8 func_801CF5A0_bss_prefix[0x38];', 'u64 D_801E1258;',
                                              'u8 func_801CF5A0_bss_suffix[0x8];'])

    def test_every_lower_definition_in_address_order(self):
        text = 'u8 func_801CEF20_bss_prefix[0x8];\nextern u64 D_801E1258;\nextern u32 D_801E1260;\nvoid g(void) {\n}\n'
        out = self.borrow(text)
        self.assertEqual(out, 'u8 func_801CEF20_bss_prefix[0x8];\nu64 D_801E1218;\nu8 func_801CF5A0_bss_prefix[0x38];\n'
                              'u64 D_801E1258;\nu8 func_801CF5A0_bss_suffix[0x8];\nextern u32 D_801E1260;\nvoid g(void) {\n}\n')
        self.assertIsNone(self.borrow('extern u32 D_801E1260;\n'))

    def test_extra_snippets_count(self):
        extra = ['u8 func_801D0528_bss_prefix[0x78];\nu64 D_801E12E8;\n']
        out = self.borrow('extern u64 D_801E12E8;\n', extra)
        self.assertTrue(out.endswith('u8 func_801D0528_bss_prefix[0x78];\nu64 D_801E12E8;\n'))
        self.assertTrue(out.startswith('u8 func_801CEF20_bss_prefix[0x8];\nu64 D_801E1218;\n'))


class Built(unittest.TestCase):
    def test_definition_span(self):
        text = '#define func_X func_X__decl\nextern s32 func_X();\n#undef func_X\nvoid func_X(void) {\n    if (1) { }\n}\nint y;\n'
        a, b = P.definition(text, 'func_X')
        self.assertEqual(text[a:b], 'void func_X(void) {\n    if (1) { }\n}')

    def test_as_built_replaces_the_definition(self):
        snippet = 'extern f32 D_1;\nvoid func_X(void) {\n    g = D_1;\n}\n'
        src = '/* file */\nvoid func_X(void) {\n    g = 1170.0f;\n}\n'
        files = {'matched/s/func_X.c': snippet, 'src/s/cf.c': src}
        with mock.patch('builtins.open', side_effect=lambda p, *a, **k: mock.mock_open(read_data=files[p])()), \
                mock.patch.object(P.S, 'file_of', return_value='cf'):
            out = P.as_built('s', 'func_X')
        self.assertEqual(out, 'extern f32 D_1;\nvoid func_X(void) {\n    g = 1170.0f;\n}\n')


class Shapes(unittest.TestCase):
    def test_slti_constant_and_jal_masked_registers_not(self):
        base = [word(0xB, 10, 1, 5), (3 << 26) | 0x1234, word(0, 0, 0, 0x21)]
        other = [word(0xB, 10, 1, 15), (3 << 26) | 0x5678, word(0, 0, 0, 0x21)]
        regs = [word(0xB, 11, 1, 5), (3 << 26) | 0x1234, word(0, 0, 0, 0x21)]
        with mock.patch.object(P, 'words', side_effect=[base, other, regs]):
            a, b, c = P.shape(1), P.shape(2), P.shape(3)
        self.assertEqual(a, b)
        self.assertNotEqual(a, c)


if __name__ == '__main__':
    unittest.main()
