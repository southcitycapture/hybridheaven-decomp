"""Synthetic SDK build fixtures. Helpers and generated files stay in temp dirs."""
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[2]


class LibraryBuildTests(unittest.TestCase):
    def test_grouped_c_retains_code_storage_and_relocations(self):
        with tempfile.TemporaryDirectory(dir=ROOT / 'build', prefix='task36-test-') as td:
            root = Path(td)
            for folder in ('tools/hh', 'tools/ultralib/src', 'src/main'):
                (root / folder).mkdir(parents=True, exist_ok=True)
            shutil.copy(ROOT / 'tools/hh/gen_libultra.py', root / 'tools/hh/gen_libultra.py')
            entry = dict(src='src/first.c', mips='-mips2 -o32', opt='-O1', flags='-DNDEBUG', version='I',
                         additional=[dict(src='src/second.c', opt='-O2')])
            (root / 'tools/hh/libultra.json').write_text(json.dumps({'main/80000000': entry}))
            checks = '#define VERSION_I 6\n#ifndef NDEBUG\n#error assertions enabled\n#endif\n#if BUILD_VERSION != VERSION_I\n#error wrong revision\n#endif\n'
            (root / 'tools/ultralib/src/first.c').write_text(checks + 'int func_80000000(int a) { return a + 1; }\n')
            (root / 'tools/ultralib/src/second.c').write_text(checks +
                'int D_80000080 = 5;\nint D_80000090;\nint func_80000010(void) { return D_80000080 + D_80000090; }\n')
            subprocess.run([sys.executable, 'tools/hh/gen_libultra.py', '--stubs'], cwd=root, check=True, capture_output=True)
            makefile = 'BUILD := build\nULTRALIB := tools/ultralib\nIDO53 := %s\nLD := mips-linux-gnu-ld\nOBJCOPY := mips-linux-gnu-objcopy\ninclude build/libultra.mk\n' % (ROOT / 'tools/ido/5.3/cc')
            (root / 'Makefile').write_text(makefile)
            run = subprocess.run(['make', 'build/src/main/80000000.o'], cwd=root, capture_output=True, text=True)
            self.assertEqual(run.returncode, 0, run.stdout + run.stderr)
            with (root / 'build/src/main/80000000.o').open('rb') as fh:
                elf = ELFFile(fh)
                syms = {s.name: s for s in elf.get_section_by_name('.symtab').iter_symbols()}
                self.assertEqual(syms['func_80000000']['st_value'], 0)
                self.assertEqual(syms['func_80000010']['st_value'], 16)
                self.assertEqual(elf.get_section_by_name('.data').data()[:4], b'\0\0\0\5')
                self.assertEqual(elf.get_section_by_name('.bss')['sh_size'], 16)
                self.assertIsNotNone(elf.get_section_by_name('.rel.text'))
            self.assertEqual(list((root / 'build/src/main').glob('*.part*')), [])
            self.assertIn('2.0I', (root / 'src/main/80000000.c').read_text())

    def test_patched_part_compiles_a_copy_and_leaves_ultralib_untouched(self):
        with tempfile.TemporaryDirectory(dir=ROOT / 'build', prefix='opus-core-test-') as td:
            root = Path(td)
            for folder in ('tools/hh/ultralib_patches', 'tools/ultralib/src/io', 'src/main'):
                (root / folder).mkdir(parents=True, exist_ok=True)
            shutil.copy(ROOT / 'tools/hh/gen_libultra.py', root / 'tools/hh/gen_libultra.py')
            original = '#define VERSION_J 7\nint func_80000000(int a) {\n#if BUILD_VERSION >= VERSION_J\n    return a & 0x7F;\n#else\n    return a;\n#endif\n}\n'
            (root / 'tools/ultralib/src/io/mix.c').write_text(original)
            (root / 'tools/hh/ultralib_patches/mix.patch').write_text(
                'why this revision mix exists\n\n--- a/src/io/mix.c\n+++ b/src/io/mix.c\n@@ -1,6 +1,6 @@\n'
                ' #define VERSION_J 7\n int func_80000000(int a) {\n-#if BUILD_VERSION >= VERSION_J\n+#if 0\n     return a & 0x7F;\n #else\n     return a;\n')
            entry = dict(src='src/io/mix.c', patch='tools/hh/ultralib_patches/mix.patch', mips='-mips2 -o32', opt='-O2')
            (root / 'tools/hh/libultra.json').write_text(json.dumps({'main/80000000': entry}))
            subprocess.run([sys.executable, 'tools/hh/gen_libultra.py', '--stubs'], cwd=root, check=True, capture_output=True)
            makefile = 'BUILD := build\nULTRALIB := tools/ultralib\nIDO53 := %s\nLD := mips-linux-gnu-ld\nOBJCOPY := mips-linux-gnu-objcopy\ninclude build/libultra.mk\n' % (ROOT / 'tools/ido/5.3/cc')
            (root / 'Makefile').write_text(makefile)
            # control: the same entry without its patch keeps the J mask
            plain = dict(entry); del plain['patch']
            (root / 'tools/hh/libultra.json').write_text(json.dumps({'main/80000000': plain}))
            subprocess.run([sys.executable, 'tools/hh/gen_libultra.py'], cwd=root, check=True, capture_output=True)
            run = subprocess.run(['make', 'build/src/main/80000000.o'], cwd=root, capture_output=True, text=True)
            self.assertEqual(run.returncode, 0, run.stdout + run.stderr)
            with (root / 'build/src/main/80000000.o').open('rb') as fh:
                self.assertIn(bytes.fromhex('3082007f'), ELFFile(fh).get_section_by_name('.text').data())
            (root / 'build/src/main/80000000.o').unlink()
            (root / 'tools/hh/libultra.json').write_text(json.dumps({'main/80000000': entry}))
            subprocess.run([sys.executable, 'tools/hh/gen_libultra.py', '--stubs'], cwd=root, check=True, capture_output=True)
            run = subprocess.run(['make', 'build/src/main/80000000.o'], cwd=root, capture_output=True, text=True)
            self.assertEqual(run.returncode, 0, run.stdout + run.stderr)
            self.assertEqual((root / 'tools/ultralib/src/io/mix.c').read_text(), original)
            self.assertIn('#if 0', (root / 'build/ultralib_patched/src/io/mix.c').read_text())
            with (root / 'build/src/main/80000000.o').open('rb') as fh:
                text = ELFFile(fh).get_section_by_name('.text').data()
            # VERSION_J build, but the patched branch: no `andi v0, a0, 0x7f`, just `jr ra; move v0, a0`
            self.assertNotIn(bytes.fromhex('3082007f'), text)
            self.assertIn('mix.patch', (root / 'src/main/80000000.c').read_text())
            # a patch outside tools/hh/ultralib_patches/ is refused
            entry['patch'] = 'elsewhere/mix.patch'
            (root / 'tools/hh/libultra.json').write_text(json.dumps({'main/80000000': entry}))
            bad = subprocess.run([sys.executable, 'tools/hh/gen_libultra.py'], cwd=root, capture_output=True, text=True)
            self.assertNotEqual(bad.returncode, 0)

    def test_library_comparison_dumps_do_not_define_linked_address_aliases(self):
        with tempfile.TemporaryDirectory(dir=ROOT / 'build', prefix='task36-test-') as td:
            root = Path(td)
            for folder in ('tools/hh', 'asm/data/main', 'asm/nonmatchings/main/80000010', 'src/data/main'):
                (root / folder).mkdir(parents=True, exist_ok=True)
            for helper in ('gen_extern_syms.py', 'bss_layout.py', 'data_layout.py', 'data_to_c.py'):
                shutil.copy(ROOT / 'tools/hh' / helper, root / 'tools/hh' / helper)
            (root / 'tools/hh/bss_splits.json').write_text('{}')
            (root / 'tools/hh/libultra.json').write_text(json.dumps({'main/80000000':
                dict(src='fixture.c', storage={'.bss': ['0x80000090', '0x10']})}))
            (root / 'asm/data/main/80000000.data.s').write_text('dlabel D_80000080\n.word 5\n')
            (root / 'asm/data/main/80000000.bss.s').write_text('dlabel D_80000090\n.space 16\n')
            (root / 'asm/nonmatchings/main/80000010/func_80000010.s').write_text(
                'glabel func_80000010\nlui $a0, %hi(D_80000080)\nlui $a1, %hi(D_80000090)\n')
            subprocess.run([sys.executable, 'tools/hh/gen_extern_syms.py'], cwd=root, check=True, capture_output=True)
            linked = (root / 'build/extern_syms.ld').read_text()
            self.assertIn('D_80000080 = 0x80000080;', linked)
            self.assertIn('D_80000090 = 0x80000090;', linked)


if __name__ == '__main__':
    unittest.main()
