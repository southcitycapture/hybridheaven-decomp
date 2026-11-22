"""Original assembly (queue/not_c.tsv, tools/hh/not_c.py): never C, never picked. Fixtures in temp dirs only."""
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools/hh'))
import not_c  # noqa: E402
import pick_filters  # noqa: E402

ROWS = '# comment\nmain\tfunc_80000010\tsdk-asm src/fixture.s\nmain\tfunc_80000040\tlone nop\n'


def tree(root, rows=ROWS):
    (root / 'queue').mkdir(parents=True, exist_ok=True)
    (root / 'queue/not_c.tsv').write_text(rows)
    for unit, func in (('80000000', 'func_80000010'), ('80000040', 'func_80000040'), ('80000000', 'func_80000000')):
        d = root / 'asm/nonmatchings/main' / unit
        d.mkdir(parents=True, exist_ok=True)
        (d / (func + '.s')).write_text('glabel %s\n' % func)


class NotCTests(unittest.TestCase):
    def test_load_and_unit_lookup(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td); tree(root)
            self.assertEqual(not_c.keys(td), {('main', 'func_80000010'), ('main', 'func_80000040')})
            self.assertEqual(not_c.func_unit(td, 'main', 'func_80000010'), 'main/80000000')
            library = {'main/80000000': dict(src='src/first.c', additional=[dict(src='src/fixture.s')]),
                       'main/80000080': dict(src='src/other.c')}
            # only the function in a unit that assembles .s source counts as SDK-assembled; the nop does not
            self.assertEqual(not_c.sdk_assembled(library, td), {('main', 'func_80000010')})
            self.assertEqual(not_c.asm_sources(library['main/80000000']), ['src/fixture.s'])
            self.assertEqual(not_c.asm_sources(library['main/80000080']), [])

    def test_malformed_and_duplicate_rows_are_errors(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tree(root, 'main\tfunc_80000010\n')
            with self.assertRaises(ValueError):
                not_c.load(td)
            tree(root, ROWS + 'main\tfunc_80000010\tagain\n')
            with self.assertRaises(ValueError):
                not_c.load(td)

    def test_check_flags_unlisted_assembled_unit_and_missing_function(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td); tree(root, ROWS + 'main\tfunc_80000080\tnot in the layout\n')
            (root / 'tools/hh').mkdir(parents=True)
            (root / 'tools/hh/libultra.json').write_text(json.dumps({
                'main/80000000': dict(src='src/fixture.s'), 'main/80000040': dict(src='src/other.s'),
                'main/80000090': dict(src='src/third.s')}))
            problems = not_c.check(td)
            self.assertEqual(len(problems), 2, problems)
            self.assertIn('func_80000080', problems[0])
            self.assertIn('main/80000090', problems[1])

    def test_pick_filters_always_exclude_original_assembly(self):
        with tempfile.TemporaryDirectory() as td:
            tree(Path(td))
            cwd = os.getcwd()
            try:
                os.chdir(td)
                excluded = pick_filters.unavailable('none')
            finally:
                os.chdir(cwd)
            self.assertIn(('func_80000010', 'main'), excluded)
            self.assertIn(('func_80000040', 'main'), excluded)

    def test_asm_sections_needs_the_build_record(self):
        with tempfile.TemporaryDirectory() as td:
            entry = dict(src='src/first.c', additional=[dict(src='src/fixture.s')])
            self.assertEqual(not_c.asm_sections('main/80000000', dict(src='src/first.c'), td), {})
            with self.assertRaises(RuntimeError):
                not_c.asm_sections('main/80000000', entry, td)
            path = Path(td) / not_c.sidecar('main/80000000')
            path.parent.mkdir(parents=True)
            path.write_text('{".rodata": 16, ".text": 32}')
            self.assertEqual(not_c.asm_sections('main/80000000', entry, td), {'.rodata': 16, '.text': 32})


class AssembledPartBuildTests(unittest.TestCase):
    def test_c_and_assembled_parts_link_and_record_only_the_assembly(self):
        with tempfile.TemporaryDirectory(dir=ROOT / 'build', prefix='notc-test-') as td:
            root = Path(td)
            for folder in ('tools/hh', 'tools/ultralib/src', 'tools/ultralib/include', 'src/main'):
                (root / folder).mkdir(parents=True, exist_ok=True)
            for helper in ('gen_libultra.py', 'not_c.py'):
                shutil.copy(ROOT / 'tools/hh' / helper, root / 'tools/hh' / helper)
            entry = dict(src='src/first.c', mips='-mips2 -o32', opt='-O1', flags='-DNDEBUG',
                         additional=[dict(src='src/fixture.s', opt='-O2')])
            (root / 'tools/hh/libultra.json').write_text(json.dumps({'main/80000000': entry}))
            (root / 'tools/ultralib/src/first.c').write_text('int D_80000080 = 5;\nint func_80000000(void) { return D_80000080; }\n')
            (root / 'tools/ultralib/src/fixture.s').write_text(
                '#include <regdef.h>\n.text\n.globl func_80000010\n.ent func_80000010\nfunc_80000010:\n'
                '  la v0, local_table\n  jr ra\n  nop\n.end func_80000010\n'
                '.rdata\nlocal_table:\n.word 1, 2, 3, 4\n')
            (root / 'tools/ultralib/include/regdef.h').write_text('#define v0 $2\n#define ra $31\n')
            subprocess.run([sys.executable, 'tools/hh/gen_libultra.py', '--stubs'], cwd=root, check=True, capture_output=True)
            rules = (root / 'build/libultra.mk').read_text()
            s_rule = next(l for l in rules.splitlines() if 'fixture.s' in l and 'IDO53' in l)
            self.assertNotIn('-Xcpluscomm', s_rule)          # ultralib's ASFLAGS, not CFLAGS
            self.assertIn('-O2', s_rule)
            makefile = ('BUILD := build\nULTRALIB := tools/ultralib\nIDO53 := %s\nLD := mips-linux-gnu-ld\nCROSS := mips-linux-gnu-\n'
                        'OBJCOPY := mips-linux-gnu-objcopy\nPYTHON := %s\ninclude build/libultra.mk\n') % (ROOT / 'tools/ido/5.3/cc', sys.executable)
            (root / 'Makefile').write_text(makefile)
            run = subprocess.run(['make', 'build/src/main/80000000.o'], cwd=root, capture_output=True, text=True)
            self.assertEqual(run.returncode, 0, run.stdout + run.stderr)
            with (root / 'build/src/main/80000000.o').open('rb') as fh:
                elf = ELFFile(fh)
                syms = {s.name: s for s in elf.get_section_by_name('.symtab').iter_symbols()}
                self.assertEqual(syms['func_80000000']['st_value'], 0)
                self.assertEqual(syms['func_80000010']['st_value'], 16)
                self.assertIsNone(elf.get_section_by_name('.mdebug'))
            record = json.loads((root / 'build/src/main/80000000.o.asm.json').read_text())
            self.assertEqual(record.get('.rodata'), 16)     # the assembled part's table
            self.assertNotIn('.data', record)               # the C part's D_80000080 is not assembly
            self.assertIn('.text', record)


if __name__ == '__main__':
    unittest.main()
