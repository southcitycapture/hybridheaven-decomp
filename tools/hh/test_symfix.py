"""Symbol-wall inventory and real frozen-file layout regressions."""
import json
import os
from pathlib import Path
import re
import tempfile
from types import SimpleNamespace
import unittest
from unittest.mock import patch

import symfix as F
import kept_blocks
import rodata_owned
import bss_layout
import symfix_literals
import addrfix


class InventoryTests(unittest.TestCase):
    def test_refreshed_unmatched_union_excludes_reserved_overlay_identity(self):
        historical = [dict(seg='file036', func='func_801E27E4', **{'class': 'symbols'}),
                      dict(seg='file025', func='func_801E27E4', **{'class': 'symbols'}),
                      dict(seg='main', func='landed', **{'class': 'symbols'})]
        fresh = [dict(seg='file025', func='func_801E27E4', **{'class': 'instructions'})]
        with patch.object(F.W, 'inventory', return_value=historical[:2]):
            rows = F.inventory({}, historical, fresh, {('file036', 'func_801E27E4')})
        self.assertEqual([(r['seg'], r['func'], r['fresh_class']) for r in rows],
                         [('file025', 'func_801E27E4', 'instructions')])


class LayoutTests(unittest.TestCase):
    def test_one_neighbour_can_fill_two_disjoint_readonly_gaps(self):
        seg, cf, fn = 'file026', '801E1BE0', 'func_801E8BE4'
        original = Path('src/%s/%s.c' % (seg, cf)).read_text()
        first, owners = rodata_owned.fill_named_gap(F.S, seg, cf, original, 0x801FC518, 0x801FC540)
        self.assertIn(fn, owners)
        second, owners = rodata_owned.fill_named_gap(F.S, seg, cf, first, 0x801FC4E0, 0x801FC518)
        self.assertIn(fn, owners)
        body = F.S.fn_body(second, fn)
        self.assertNotIn('D_801FC4E0__load_', body)
        self.assertNotIn('D_801FC518__load_', body)
        self.assertIsNone(rodata_owned.fill_named_gap(F.S, seg, cf, second, 0x801FC4E0, 0x801FC540))

    def test_whole_file_pool_repartition_preserves_mixed_named_and_literal_loads(self):
        # This last ASM entry formerly had no suffix donor. Later C neighbours
        # must emit their own constants before the target pool can be released.
        seg, cf, name = 'file032', '801E1BF0', 'func_801E22BC'
        source = 'queue/finish1/work/func_801E22BC@file032/attempt.c'
        snippet = F.U.read_saved(seg, name, source)
        snippet, _ = symfix_literals.corrected(F.S, seg, name, source, snippet)
        text = Path('src/%s/%s.c' % (seg, cf)).read_text()
        names = F.S.defined_functions(text) & {e[0] for e in F.S.entries(seg, cf)}
        names.add(name)
        candidates = ([text] if name in F.S.defined_functions(text) else
                      [c for how, c in F.R.insert_variants(seg, cf, text, name, snippet, _file_alias=True)
                       if how == 'named-isolate'])
        with tempfile.TemporaryDirectory(dir='build') as td:
            for candidate in candidates:
                proposed = rodata_owned.repartition(F.S, seg, cf, candidate)
                self.assertIsNotNone(proposed)
                self.assertEqual(F.R.verify(seg, cf, proposed, names, td), (True, 'ok'))
                self.assertIn('/* hh-owned-pool func_801E22BC 801EB8AC 801EB8C4 */', proposed)
                # A prefix data error must still fail the exact whole-file gate.
                bad = proposed
                match = re.search(r'(static const unsigned char rodata_\w+\[\] = \{\s*)0x([0-9A-F]{2})', bad)
                self.assertIsNotNone(match)
                bad = bad[:match.start(2)] + '%02X' % (int(match[2], 16) ^ 1) + bad[match.end(2):]
                self.assertEqual(F.R.verify(seg, cf, bad, names, td), (False, 'file .rodata differs'))
                break
            else:
                self.fail('no named insertion variant')

    def test_batched_relocations_retain_scalar_hi_lo_addends(self):
        text = Path('src/file025/801CC210.c').read_text()
        names = ['func_801CC210', 'func_801CCAB0']
        with tempfile.TemporaryDirectory(dir='build') as td:
            obj, err = F.S.compile_file(text, td)
            self.assertIsNotNone(obj, err)
            batch = addrfix.mine_refs_many(obj, names)
            self.assertEqual(batch, {n: addrfix.mine_refs(obj, n) for n in names})
            self.assertTrue(all(batch.values()))

    def test_partial_pool_keeps_named_late_constants_outside_emitted_range(self):
        seg, name = 'file032', 'func_801E22BC'
        source = 'queue/finish1/work/func_801E22BC@file032/attempt.c'
        snippet = F.U.read_saved(seg, name, source)
        fixed, _ = symfix_literals.corrected(F.S, seg, name, source, snippet)
        path = next(e[1] for e in F.S.entries(seg, '801E1BF0') if e[0] == name)
        self.assertEqual(rodata_owned.emitted_range(F.S, path, name, fixed),
                         (0x801EB8AC, 0x801EB8B4))

    def test_saved_wrong_values_are_recovered_from_original_scalar_relocations(self):
        source = 'queue/symfixS1/work/func_803807D8/attempt.c'
        if not os.path.exists(source):   # a worker's scratch file; housekeeping removes old work dirs
            self.skipTest('saved attempt %s is gone' % source)
        snippet = F.U.read_saved('file057', 'func_803807D8', source)
        fixed, changes = symfix_literals.corrected(F.S, 'file057', 'func_803807D8', source, snippet)
        self.assertEqual(changes, [('0.3f', '0.10000000149011612f'), ('0.1', '0.03')])
        self.assertIn('0.10000000149011612f', fixed)
        cf = '8037FFF0'
        text = Path('src/file057/' + cf + '.c').read_text()
        names = F.S.defined_functions(text) & {e[0] for e in F.S.entries('file057', cf)}
        with tempfile.TemporaryDirectory(dir='build') as td:
            self.assertEqual(F.R.verify('file057', cf, text, names, td), (True, 'ok'))

    def test_bss_split_has_exact_boundaries_and_preserves_generic_head_name(self):
        lines = bss_layout.subsegments('file025', 0x801DD670, 0x801E1BC0,
                                      {('file025', '801CC210'): (0x801E07A0, 0x2B0)})
        self.assertEqual(lines, [
            '      - { type: bss, vram: 0x801DD670 }',
            '      - { type: .bss, vram: 0x801E07A0, name: file025/801CC210 }',
            '      - { type: bss, vram: 0x801E0A50, name: file025_bss_801E0A50 }'])
        with self.assertRaises(ValueError):
            bss_layout.subsegments('x', 0x1000, 0x1100,
                                  {('x', 'a'): (0x1000, 0x80), ('x', 'b'): (0x1070, 0x80)})

    def test_owned_bss_links_at_original_address_and_wrong_extent_is_rejected(self):
        S, R = F.S, F.R
        source = Path('src/file025/801CC210.c').read_text()
        names = S.defined_functions(source) & {e[0] for e in S.entries('file025', '801CC210')}
        with tempfile.TemporaryDirectory(dir='build') as td:
            self.assertEqual(R.verify('file025', '801CC210', source, names, td), (True, 'ok'))
            with patch.dict(S.FILE_BSS, {('file025', '801CC210'): (0x801E07A0, 0x2C0)}):
                self.assertEqual(R.verify('file025', '801CC210', source, names, td),
                                 (False, 'source-owned .bss size differs'))
            with patch.dict(S.FILE_BSS, {('file025', '801CC210'): (0x801E07B0, 0x2B0)}):
                self.assertFalse(R.verify('file025', '801CC210', source, names, td)[0])

    def test_legacy_twin_locates_original_function_in_nested_build_path(self):
        with tempfile.TemporaryDirectory(dir='build') as td:
            parent = Path(td) / 'asm/nonmatchings/main/80000000'
            parent.mkdir(parents=True)
            path = str(parent / '_lr_func_80000000.s')
            Path(path).write_text('.section .text\nglabel func_80000000\n nop\n')
            source = '#pragma GLOBAL_ASM("%s")\n' % path
            with patch.object(F.S, '_rd', return_value='.section .text\nglabel func_80000000\n nop\n'):
                self.assertEqual(F.R.locate(source.splitlines(), 'main', '80000000', 'func_80000000'),
                                 (0, [], []))

    def test_byte_range_recipe_regenerates_original_readonly_bytes_and_alignment(self):
        S = SimpleNamespace(IMG=bytes.fromhex('1122334455667788'),
                            FILE_RODATA={('test', '80000000'): 0x80000004},
                            file_span=lambda *a: (0, 4), file_rodata_size=lambda *a: 4,
                            _rd=lambda p: '.section .text\nglabel func_80000000\n nop\n')
        recipe = dict(functions=['func_80000000'], rodata=[], rodata_bytes=[0x80000004, 4, 4])
        with tempfile.TemporaryDirectory(dir='build') as td, patch.object(kept_blocks, 'catalog', return_value={}):
            path = str(Path(td) / '_mrg_keep_tail_test.s')
            kept_blocks.rebuild(S, 'test', '80000000', path, recipe)
            data = Path(path).read_text()
            self.assertIn('.late_rodata_alignment 4', data)
            self.assertIn('.word 0x55667788', data)
            source = '#pragma GLOBAL_ASM("%s")\n' % path
            annotated = kept_blocks.annotate(S, 'test', '80000000', source)
            self.assertEqual(json.loads(kept_blocks.RECIPE.search(annotated)[2]), recipe)
            self.assertEqual(kept_blocks.annotate(S, 'test', '80000000', annotated), annotated)
            Path(path).unlink()
            kept_blocks.rebuild(S, 'test', '80000000', path, recipe)
            self.assertEqual(Path(path).read_text(), data)
            with self.assertRaises(AssertionError):
                kept_blocks.rebuild(S, 'test', '80000000', path,
                                    dict(recipe, rodata_bytes=[0x80000000, 0, 4]))

    def test_real_compilation_rejects_unplaced_bss_even_before_code_comparison(self):
        # The rejected local-model candidate used 0x37A0 of padding to obtain a
        # matching standalone BSS address, then relocated differently in the ROM.
        with tempfile.TemporaryDirectory(dir='build') as td:
            ok, reason = F.R.verify('test', '80000000',
                '#include "common.h"\nu8 misplaced[0x37A0];\nvoid func_80000000(void) {}\n',
                {'func_80000000'}, td)
        self.assertFalse(ok)
        self.assertIn('unplaced writable storage', reason)


if __name__ == '__main__':
    unittest.main()
