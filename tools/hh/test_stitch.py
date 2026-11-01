"""stitch.py statement structure, region->statement spans, transplants; siblings.py asm parsing/mapping."""
import tempfile
import unittest
from pathlib import Path

import stitch as ST
import siblings as SB

SRC = '''#include "context.h"
#define LIMIT 4
typedef struct Foo { s32 a; } Foo;
extern s32 D_80001000;

void func_80001000(Foo *arg0, s32 arg1) {
    s32 i;
    s32 j = arg1; /* initialiser */
    Foo *p;

    p = arg0;
    if (arg1 > 0) {
        p->a = 1;
        p->a += 2;
    } else {
        p->a = 3;
    }
    for (i = 0; i < LIMIT; i++) {
        D_80001000 += i;
    }
    switch (j) {
    case 1:
        p->a = 5;
        break;
    default:
        break;
    }
    do { j--; } while (j);
    label:
    return;
}
'''

DONOR = '''#include "context.h"
#define SCALE 3
typedef struct Bar { s32 b; } Bar;
extern s32 D_80002000;

void func_80001000(Foo *arg0, s32 arg1) {
    s32 i;
    s32 k;

    if (arg1 > 0) {
        k = D_80002000 * SCALE;
        arg0->a = k;
    } else {
        arg0->a = 3;
    }
    for (i = 0; i < 4; i++) {
        D_80001000 += i;
    }
}
'''


def line_of(text, needle):
    return text[:text.index(needle)].count('\n') + 1


class ParseTests(unittest.TestCase):
    def test_structure(self):
        p = ST.parse(SRC, 'func_80001000')
        self.assertEqual([d.kind for d in p.decls], ['decl', 'decl', 'decl'])
        self.assertEqual([s.kind for s in p.body], ['simple', 'if', 'for', 'switch', 'do', 'label', 'simple'])
        iff = p.body[1]
        self.assertEqual(len(iff.children), 2)                  # then and else
        self.assertEqual(iff.l0, line_of(SRC, 'if (arg1'))
        self.assertEqual(iff.l1, line_of(SRC, 'p->a = 3') + 1)
        sw = p.body[3].children[0][0].children[0]
        self.assertIn('label', [s.kind for s in sw])

    def test_decl_detection_and_names(self):
        self.assertTrue(ST.is_decl('s32 i;'))
        self.assertTrue(ST.is_decl('Foo *p = arg0;'))
        self.assertTrue(ST.is_decl('u8 buf[4];'))
        self.assertTrue(ST.is_decl('void (*fp)(s32);'))
        self.assertFalse(ST.is_decl('p = arg0;'))
        self.assertFalse(ST.is_decl('return x;'))
        self.assertFalse(ST.is_decl('*p = 1;'))
        self.assertFalse(ST.is_decl('func_80001000(p, 1);'))
        self.assertEqual(ST.decl_names('s32 a, *b = c, d[3];'), ['a', 'b', 'd'])
        self.assertEqual(ST.decl_names('void (*fp)(s32);'), ['fp'])

    def test_comments_strings_preprocessor(self):
        t = 'void f(void) {\n#define CLOSE }\n    x = "};";\n    /* } */ y = 1;\n}\n'
        p = ST.parse(t, 'f')
        self.assertEqual(len(p.body), 2)

    def test_function_not_matched_inside_another_body_or_prototype(self):
        t = 'void g(void);\nvoid f(void) { g(); }\nvoid g(void) { return; }\n'
        p = ST.parse(t, 'g')
        self.assertEqual(t[p.open:p.close], '{ return; }')


class KRTests(unittest.TestCase):
    def test_kr_definition(self):
        t = 'void f(a, b);\nvoid f(a, b)\ns32 a;\nFoo *b;\n{\n    b->x = a;\n}\n'
        p = ST.parse(t, 'f')
        self.assertEqual([s.kind for s in p.body], ['simple'])
        self.assertTrue(t[p.head:].startswith('void f(a, b)\ns32'))


class SpanTests(unittest.TestCase):
    def test_descends_into_branch_and_trims_stray_lines(self):
        p = ST.parse(SRC, 'func_80001000')
        w = {line_of(SRC, 'p->a = 1'): 5, line_of(SRC, 'p->a += 2'): 6, line_of(SRC, 'p = arg0;'): 1}
        spans = ST.spans(p.body, w)
        outer, inner = spans[0], spans[-1]
        self.assertTrue(SRC[outer[0]:outer[1]].startswith('if (arg1'))
        self.assertEqual(SRC[inner[0]:inner[1]], 'p->a = 1;\n        p->a += 2;')
        self.assertGreater(inner[2], outer[2])

    def test_range_of_statements(self):
        p = ST.parse(SRC, 'func_80001000')
        w = {line_of(SRC, 'D_80001000 += i'): 4, line_of(SRC, 'switch (j)'): 3, line_of(SRC, 'p->a = 5'): 3}
        (a, b, depth), = ST.spans(p.body, w)
        self.assertTrue(SRC[a:b].startswith('for (i = 0'))
        self.assertTrue(SRC[a:b].endswith('}'))
        self.assertEqual(ST.spans(p.body, {}), [])


class TransplantTests(unittest.TestCase):
    def test_adds_needed_locals_types_and_macros_only(self):
        base, donor = ST.parse(SRC, 'func_80001000'), ST.parse(DONOR, 'func_80001000')
        b = base.body[1].children[0][0].children[0]            # then-branch statements of the base
        d = donor.body[0].children[0][0].children[0]
        new = ST.transplant(base, donor, (b[0].start, b[-1].end), (d[0].start, d[-1].end))
        self.assertIn('k = D_80002000 * SCALE;', new)
        self.assertNotIn('p->a += 2', new)
        self.assertIn('extern s32 D_80002000;', new)
        self.assertIn('#define SCALE 3', new)
        self.assertNotIn('Bar', new)                            # not used by the transplanted code
        self.assertEqual(new.count('s32 i;'), 1)                # deduplicated with the base's locals
        p = ST.parse(new, 'func_80001000')
        self.assertIn('k', sum((ST.decl_names(new[x.start:x.end]) for x in p.decls), []))
        self.assertEqual(new.count('#define LIMIT'), 1)


class IndexMapTests(unittest.TestCase):
    def test_scheduling_shift(self):
        a = [0x27bdffc0, 0xafbf002c, 0xafb20028, 0x0c000000, 0x00000000, 0x03e00008, 0x27bd0040]
        b = [0x27bdffc0, 0xafb20028, 0xafbf002c, 0x00000000, 0x0c000000, 0x00000000, 0x03e00008, 0x27bd0040]
        m = ST.index_map(a, b)
        self.assertEqual(m[0], 0)
        self.assertEqual(m[5], 6)
        self.assertTrue(all(0 <= v < len(b) for v in m.values()))


class SiblingAsmTests(unittest.TestCase):
    def test_asm_insns(self):
        asm = ('glabel func_80001000\n'
               '/* 1000 80001000 3C048000 */  lui        $a0, %hi(D_80002000)\n'
               '/* 1004 80001004 0C000400 */  jal        func_80001234\n'
               '/* 1008 80001008 24050010 */   addiu     $a1, $zero, 0x10\n'
               '/* 100C 8000100C 00000000 */  .word 0\n'
               'endlabel func_80001000\n')
        with tempfile.TemporaryDirectory() as td:
            p = Path(td) / 'f.s'
            p.write_text(asm)
            got = SB.asm_insns(p, 10)
        self.assertEqual(got[0][:2], ('lui', ('D_80002000',)))
        self.assertEqual(got[1][:2], ('jal', ('func_80001234',)))
        self.assertEqual(got[2], ('addiu', (), '0x10'))
        self.assertEqual(len(got), 3)


if __name__ == '__main__':
    unittest.main()
