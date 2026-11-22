import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

from elftools.elf.elffile import ELFFile

from bss_layout import check_symbols, linker_layout


class WritableLayoutTests(unittest.TestCase):
    def test_half_aligned_owner_does_not_relax_text_alignment(self):
        script = ('.fixture : SUBALIGN(16)\n.fixture_bss (NOLOAD) : SUBALIGN(16)\n'
                  '        build/src/fixture/80000000.o(.bss);\n')
        unit = ('fixture', '80000000')
        span = {unit: (0x80000018, 16)}
        with self.assertRaisesRegex(ValueError, 'without a valid symbol map'):
            linker_layout(script, span, {})
        linked = linker_layout(script, span, {unit: {'D_80000018': 8, 'D_80000020': 4}})
        self.assertIn('.fixture : SUBALIGN(16)', linked)
        self.assertIn('.fixture_bss (NOLOAD) : SUBALIGN(8)', linked)
        self.assertIn('ASSERT(ABSOLUTE(.) == 0x80000018', linked)
        self.assertIn('ASSERT(ABSOLUTE(.) == 0x80000028', linked)

    @unittest.skipUnless(shutil.which('mips-linux-gnu-as'), 'MIPS assembler required')
    def test_elf_symbols_must_be_listed_and_at_the_original_offsets(self):
        source = ('.bss\n.type D_80000018, @object\nD_80000018: .space 8\n.size D_80000018, 8\n'
                  '.type D_80000020, @object\nD_80000020: .space 4\n.size D_80000020, 4\n')
        with tempfile.TemporaryDirectory(dir='build', prefix='test-bss-') as td:
            asm, obj = Path(td) / 'fixture.s', Path(td) / 'fixture.o'
            asm.write_text(source)
            subprocess.run(['mips-linux-gnu-as', '-EB', '-mabi=32', '-o', str(obj), str(asm)], check=True)
            with obj.open('rb') as f:
                elf = ELFFile(f)
                symbols = {'D_80000018': 8, 'D_80000020': 4}
                check_symbols(elf, (0x80000018, 16), symbols)
                with self.assertRaisesRegex(ValueError, 'objects differ'):
                    check_symbols(elf, (0x80000018, 16), {'D_80000020': 4})
                with self.assertRaisesRegex(ValueError, 'misplaced'):
                    check_symbols(elf, (0x80000010, 16), symbols)
