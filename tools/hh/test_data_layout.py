"""Source-owned .data spans (data_layout.py) on synthetic units at 0x800000xx: splat lines, linker asserts, the
comparison link that places a unit's .data, and the isolation of a data definition the file declares differently."""
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

import data_layout
import try_func as T


class SplitTest(unittest.TestCase):
    LAYOUT = {('file999', '80000000'): (0x80000060, 0x20)}

    def test_owned_span_splits_the_generic_blob(self):
        # segment at ROM 0x1000, vram 0x80000000; its data blob starts at ROM 0x1040 (vram 0x80000040)
        self.assertEqual(data_layout.subsegments('file999', 0x1000, 0x80000000, 0x1040, self.LAYOUT), [
            '      - [0x1040, data]', '      - [0x1060, .data, file999/80000000]', '      - [0x1080, data]'])
        # a span at the blob's start needs no empty head; other segments keep one generic line
        self.assertEqual(data_layout.subsegments('file999', 0x1000, 0x80000000, 0x1060, self.LAYOUT)[0],
                         '      - [0x1060, .data, file999/80000000]')
        self.assertEqual(data_layout.subsegments('file998', 0x1000, 0x80000000, 0x1040, self.LAYOUT),
                         ['      - [0x1040, data]'])
        with self.assertRaisesRegex(ValueError, 'overlapping'):
            data_layout.subsegments('file999', 0x1000, 0x80000000, 0x1070, self.LAYOUT)

    def test_spans_must_be_16_aligned(self):
        with tempfile.TemporaryDirectory() as td:
            path = Path(td) / 'splits.json'
            path.write_text(json.dumps({'file999/80000000': ['0x8000006C', '0x14']}))
            with self.assertRaisesRegex(ValueError, '16-aligned'):
                data_layout.owners(str(path))
            path.write_text(json.dumps({'file999/80000000': ['0x80000060', '0x20']}))
            self.assertEqual(data_layout.owners(str(path)), self.LAYOUT)
            self.assertEqual(data_layout.claimants(str(path)), {})
            # the long form names the function whose C definition brings the storage
            path.write_text(json.dumps({'file999/80000000': {'span': ['0x80000060', '0x20'], 'function': 'func_80000000'}}))
            self.assertEqual(data_layout.owners(str(path)), self.LAYOUT)
            self.assertEqual(data_layout.claimants(str(path)), {('file999', '80000000'): 'func_80000000'})

    def test_linker_asserts_start_and_end(self):
        script = '        build/src/file999/80000000.o(.data);\n'
        linked = data_layout.linker_layout(script, self.LAYOUT)
        self.assertIn('ASSERT(ABSOLUTE(.) == 0x80000060, "file999/80000000: wrong .data start");', linked)
        self.assertIn('ASSERT(ABSOLUTE(.) == 0x80000080, "file999/80000000: wrong .data end");', linked)
        with self.assertRaisesRegex(ValueError, 'missing .data input section'):
            data_layout.linker_layout('', self.LAYOUT)


@unittest.skipUnless(shutil.which('mips-linux-gnu-as') and shutil.which('mips-linux-gnu-ld'), 'MIPS binutils required')
class PlacedDataTest(unittest.TestCase):
    def test_statics_resolve_at_the_owned_address(self):
        """A function static is relocated against .data; only a link that places .data at the span resolves it."""
        with tempfile.TemporaryDirectory(dir='build', prefix='test-data-') as td:
            source, obj = Path(td) / 'unit.s', str(Path(td) / 'unit.o')
            source.write_text('''.set noreorder
.text
.globl func_80000000
.type func_80000000, @function
func_80000000:
lui $2, %hi(.Lstatic)
lw $2, %lo(.Lstatic)($2)
jr $31
nop
.size func_80000000, .-func_80000000
.data
.word func_80000000
.Lstatic:
.word 0x12345678
''')
            subprocess.run(['mips-linux-gnu-as', '-EB', '-mabi=32', '-march=vr4300', '-o', obj, str(source)], check=True)
            code, ro, data = T.linked_func_bytes(obj, 'func_80000000', 0x80000000, 0x80000000, want_file=True,
                                                 data=0x80000060)
            self.assertEqual(code[:8], bytes.fromhex('3c028000' '8c420064'))
            self.assertEqual(data[:8], bytes.fromhex('80000000' '12345678'))   # gas pads the section to 16
            # without a placement the 2-tuple interface is unchanged
            self.assertEqual(len(T.linked_func_bytes(obj, 'func_80000000', 0x80000000, 0x80000000, want_file=True)), 2)


class DataDefinitionTest(unittest.TestCase):
    def test_file_scope_data_definitions_are_recognised(self):
        import reconcile_frozen as R
        hits = lambda line: (R.DATA_DEF.match(line) or [None, None])[1]
        self.assertEqual(hits('u32 D_80000060[4] = {'), 'D_80000060')
        self.assertEqual(hits('static s32 B_80000070;'), 'B_80000070')
        self.assertEqual(hits('u8 *D_80000074 = 0;'), 'D_80000074')
        for line in ('extern u8 D_80000060[];', 'typedef s32 D_80000060;', '    return D_80000060;',
                     'D_80000060 = 3;', 'static const unsigned char rodata_80000000_80000100[] = {'):
            self.assertIsNone(hits(line), line)


if __name__ == '__main__':
    unittest.main()
