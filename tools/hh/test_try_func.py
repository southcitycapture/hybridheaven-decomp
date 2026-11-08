"""Explicit comparison-link placement must preserve non-16-aligned pools."""
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

import try_func as T
from elftools.elf.elffile import ELFFile


@unittest.skipUnless(shutil.which('mips-linux-gnu-as') and shutil.which('mips-linux-gnu-ld'), 'MIPS binutils required')
class ReadonlyPlacement(unittest.TestCase):
    def test_local_table_targets_use_exact_function_address(self):
        with tempfile.TemporaryDirectory() as td:
            source = Path(td) / 'input.s'
            obj = str(Path(td) / 'input.o')
            source.write_text('''.text
.balign 16
.space 8
.globl func_80000048
.type func_80000048, @function
func_80000048:
jr $31
nop
.size func_80000048, .-func_80000048
.section .rodata
.balign 16
.word func_80000048
.word func_80000048+4
''')
            subprocess.run(['mips-linux-gnu-as', '-EB', '-o', obj, str(source)], check=True)
            _, data = T.linked_func_bytes(obj, 'func_80000048', 0x80000048, rodata=0x80000008, want_rodata=True)
            self.assertEqual(data[:8], bytes.fromhex('800000488000004c'))

    def test_original_pool_address_overrides_object_alignment(self):
        for address in (0x80000004, 0x80000008, 0x80000010):
            with self.subTest(address=address), tempfile.TemporaryDirectory() as td:
                source = Path(td) / 'input.s'
                obj = str(Path(td) / 'input.o')
                source.write_text('''.text
.globl func_80000040
.type func_80000040, @function
func_80000040:
lui $2, %hi(pool)
lw $2, %lo(pool)($2)
jr $31
nop
.size func_80000040, .-func_80000040
.section .rodata
.balign 16
pool:
.word 0x12345678
.word 0x9abcdef0
''')
                subprocess.run(['mips-linux-gnu-as', '-EB', '-o', obj, str(source)], check=True)
                code, data = T.linked_func_bytes(obj, 'func_80000040', 0x80000040, rodata=address, want_rodata=True)
                self.assertEqual(int.from_bytes(code[4:8], 'big') & 0xffff, address & 0xffff)
                self.assertEqual(data[:8], bytes.fromhex('123456789abcdef0'))
                with open(obj + '.linked', 'rb') as fh:
                    self.assertEqual(ELFFile(fh).get_section_by_name('.rodata')['sh_addr'], address)


if __name__ == '__main__':
    unittest.main()
