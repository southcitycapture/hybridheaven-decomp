import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

from elftools.elf.elffile import ELFFile

import rodata_layout


class ReadonlyLayoutTest(unittest.TestCase):
    def test_refuses_overlap_or_discarded_data(self):
        with self.assertRaisesRegex(ValueError, 'overlapping'):
            rodata_layout.mapping(b'ABCDEFGH', 8, [(0, 0, 4), (4, 2, 4)])
        with self.assertRaisesRegex(ValueError, 'drop'):
            rodata_layout.mapping(b'ABCDEFGH', 8, [(0, 0, 4)])

    @unittest.skipUnless(shutil.which('mips-linux-gnu-as'), 'needs MIPS binutils')
    def test_moves_a_table_and_its_relocations(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            source, obj, linked = (root / n for n in ('example.s', 'example.o', 'example.elf'))
            source.write_text('''.set noreorder
.text
.global example
example:
    lui $2,%hi(.Ltable)
    addiu $2,$2,%lo(.Ltable)
    jr $ra
    nop
.section .rodata
.align 2
.Ltable:
    .word example
    .word 0x8000002c
.global named
named:
    .word 0x80000030
''')
            subprocess.run(['mips-linux-gnu-as', '-EB', '-mabi=32', '-o', obj, source], check=True)
            rodata_layout.apply('/* hh-rodata-layout [16,[[0,4,8],[8,0,4]]] */', obj, _unchecked=True)
            script = root / 'example.ld'
            script.write_text('SECTIONS { .text 0x80000000 : { *(.text) } .rodata 0x80000020 : { *(.rodata) } }')
            subprocess.run(['mips-linux-gnu-ld', '-T', script, '-o', linked, obj], check=True)
            with linked.open('rb') as f:
                elf = ELFFile(f)
                self.assertEqual(elf.get_section_by_name('.text').data()[:8].hex(), '3c02800024420024')
                self.assertEqual(elf.get_section_by_name('.rodata').data()[:12].hex(), '80000030800000008000002c')
                named, = elf.get_section_by_name('.symtab').get_symbol_by_name('named')
                self.assertEqual(named['st_value'], 0x80000020)


class GuardrailTest(unittest.TestCase):
    """11-18 guardrails (Fable 5.2 review): synthetic unit at 0x80000000, two live compiler words then a frozen blob."""
    TEXT = ('#pragma GLOBAL_ASM("asm/nonmatchings/file999/80000000/x.s")\n'
            'static const unsigned char rodata_80000000_80000000[] = { 0x01, 0x02, 0x03, 0x04, };\n')
    RAW = bytes.fromhex('3f800000' '40000000' '01020304')

    def sym(self, name, value):
        from types import SimpleNamespace
        return SimpleNamespace(name=name, st_value=value, st_shndx=1, st_type=1)

    def check(self, spans, text=None, raw=None, size=12, refs=(0, 4)):
        syms = [self.sym('rodata_80000000_80000000', 8)]
        return rodata_layout.check_plan(text or self.TEXT, raw or self.RAW, size, spans, 0x80000000, syms, 1, set(refs), set())

    def test_merge_of_frozen_and_live_in_order_is_accepted(self):
        self.check([[8, 0, 4], [0, 4, 8]])

    def test_reordered_compiler_output_is_refused(self):
        with self.assertRaisesRegex(ValueError, 'reorders compiler output'):
            self.check([[8, 0, 4], [4, 4, 4], [0, 8, 4]])

    def test_frozen_unit_must_land_at_its_address(self):
        with self.assertRaisesRegex(ValueError, 'frozen unit'):
            self.check([[0, 0, 8], [8, 8, 4]])

    def test_span_inside_a_unit_is_refused(self):
        with self.assertRaisesRegex(ValueError, 'inside a unit'):
            self.check([[8, 0, 4], [0, 4, 2], [2, 6, 6]], refs=(0,))

    def test_more_than_alignment_zeros_dropped_is_refused(self):
        raw = self.RAW[:8] + bytes(8) + self.RAW[8:]
        syms = [self.sym('rodata_80000000_80000000', 16)]
        with self.assertRaisesRegex(ValueError, 'zero bytes'):
            rodata_layout.check_plan(self.TEXT, raw, 12, [[16, 0, 4], [0, 4, 8]], 0x80000000, syms, 1, {0, 4, 8}, set())

    def test_inserted_gap_beyond_alignment_is_refused(self):
        with self.assertRaisesRegex(ValueError, 'inserts'):
            self.check([[8, 0, 4], [0, 16, 8]], size=24)

    def test_plan_in_fully_c_file_is_refused(self):
        with self.assertRaisesRegex(ValueError, 'no GLOBAL_ASM'):
            self.check([[0, 0, 8]], text='int x;\n', raw=self.RAW[:8], size=8)

    def test_frozen_only_context_must_agree_with_the_source_path(self):
        from types import SimpleNamespace
        from unittest.mock import patch
        import sys

        text = self.TEXT.split('\n', 1)[1] + '/* hh-layout-unit file999/80000000 */\n'
        state = SimpleNamespace(FILE_RODATA={('file999', '80000000'): 0x80000000})
        with patch.dict(sys.modules, {'srcbuild': state}):
            self.assertEqual(rodata_layout.plan_base(text, 'src/file999/80000000.c'), 0x80000000)
            with self.assertRaisesRegex(ValueError, 'source path'):
                rodata_layout.plan_base(text, 'src/file998/80000000.c')
            with self.assertRaisesRegex(ValueError, 'cannot tell the unit'):
                rodata_layout.plan_base(text.splitlines()[1] + '\n')


class ExpiryTest(unittest.TestCase):
    """G3: once a unit's last GLOBAL_ASM goes and nothing is frozen, an identity plan expires (file013 func_80242F80)."""
    PLAN = ('/* hh-placed-function func_80000010 */\n/* hh-layout-unit file999/80000000 */\n'
            '/* hh-rodata-layout [48,[[0,0,48]]] */\n')

    def test_identity_plan_without_asm_or_frozen_bytes_expires(self):
        text = 'void func_80000000(void) {\n}\n' + self.PLAN
        self.assertEqual(rodata_layout.expire(text), 'void func_80000000(void) {\n}\n')

    def test_plan_is_kept_while_asm_or_frozen_bytes_remain(self):
        asm = '#pragma GLOBAL_ASM("asm/nonmatchings/file999/80000000/func_80000000.s")\n' + self.PLAN
        self.assertEqual(rodata_layout.expire(asm), asm)
        frozen = 'static const unsigned char rodata_80000000[] = {0x01, 0x02, 0x03, 0x04};\n' + self.PLAN
        self.assertEqual(rodata_layout.expire(frozen), frozen)

    def test_reordering_plan_never_expires(self):
        text = 'int x;\n/* hh-rodata-layout [48,[[0,16,16],[16,0,16],[32,32,16]]] */\n'
        self.assertEqual(rodata_layout.expire(text), text)
        text = 'int x;\n/* hh-rodata-layout [64,[[0,0,48]]] */\n'       # pads the section: not a no-op
        self.assertEqual(rodata_layout.expire(text), text)


class AuditTest(unittest.TestCase):
    """Every committed plan passes the guardrails on its pre-layout object (Fable: --audit in the test suite)."""
    @unittest.skipUnless(shutil.which('mips-linux-gnu-as'), 'needs MIPS binutils')
    def test_all_committed_plans_pass(self):
        import sys
        root = Path(__file__).resolve().parents[2]
        r = subprocess.run([sys.executable, 'tools/hh/rodata_layout.py', '--audit'], cwd=root, capture_output=True, text=True)
        self.assertEqual(r.returncode, 0, r.stdout + r.stderr)
