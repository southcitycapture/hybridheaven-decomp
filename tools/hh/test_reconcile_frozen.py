"""Renderer regressions; run with `. ./env.sh; python -m unittest discover -s tools/hh -p test_reconcile_frozen.py`."""
import io, json, os, sys, tempfile, unittest
from unittest.mock import patch

import reconcile_frozen as R
S = R.S


class ContextTests(unittest.TestCase):
    def test_b_address_alias_prototype_is_private_like_func_and_data_aliases(self):
        sc = R.Scan('extern void B_80000004(int, float, float);\n')
        snippet = 'extern int B_80000004(void *, float, int);\nvoid func_80000000(void) { B_80000004(0, 1.0f, 0x3F800000); }\n'
        with patch.object(S, 'late_literals', side_effect=lambda p,t:t), \
             patch.object(S, 'kept_rodata_block', return_value=None), \
             patch.object(S, 'missing_decls', return_value=[]):
            body, private = R.body_for('test', 'file', 'func_80000000', snippet, sc, 1, 'isolate')
        self.assertIn('B_80000004', private)
        self.assertIn('#define B_80000004 B_80000004__func_80000000', body)
        self.assertEqual(body[-1], '#undef B_80000004')

    def test_last_donor_keeps_string_position_and_promotes_scalar_late(self):
        regular = '.section .rodata\nnonmatching D_80000010\ndlabel D_80000010\n/* 10 80000010 */ .asciz "message"\nenddlabel D_80000010\n'
        late = '.section .late_rodata\nnonmatching D_80000018\ndlabel D_80000018\n/* 18 80000018 3F800000 */ .float 1.0\nenddlabel D_80000018\n'
        with tempfile.TemporaryDirectory(dir='build') as td:
            path = os.path.join(td, '_ro_named_test.s')
            with open(path, 'w') as fh: fh.write(regular + late)
            source = '#pragma GLOBAL_ASM("%s")\nvoid func_80000000(void) {}\n' % path
            promoted = R.orphan_lates(source)
            self.assertNotIn(path, promoted)
            self.assertIn('static const f32 D_80000018__rodata[] = {1.0f};', promoted)
            retained = R.PRAGMA.match(promoted.splitlines()[0])[1]
            with open(retained) as fh: data = fh.read()
            self.assertIn('message', data)
            self.assertNotIn('late_rodata', data)
            self.assertLess(promoted.index(retained), promoted.index('void func_80000000'))
            self.assertEqual(R.orphan_lates(promoted), promoted)

    def test_orphan_promotion_does_not_consume_jump_tables_or_asm_functions(self):
        table = '.section .late_rodata\nnonmatching jtbl_80000010\ndlabel jtbl_80000010\n/* 10 80000010 80000004 */ .word .L80000004\nenddlabel jtbl_80000010\n'
        with tempfile.TemporaryDirectory(dir='build') as td:
            path = os.path.join(td, '_ro_named_test.s')
            with open(path, 'w') as fh: fh.write(table)
            source = '#pragma GLOBAL_ASM("%s")\n' % path
            self.assertEqual(R.orphan_lates(source), source)
            with patch.object(S, 'asm_weights', return_value=(4, 0)):
                self.assertEqual(R.orphan_lates(source), source)

    def test_archived_snapshot_exposes_used_hidden_callback_alias(self):
        with tempfile.TemporaryDirectory(dir='build') as td:
            os.mkdir(os.path.join(td, '.attempts'))
            with open(os.path.join(td, 'context.h'), 'w') as fh:
                fh.write('extern unsigned char func_80000000[];\nextern int UNUSED;\n')
            path = os.path.join(td, '.attempts', '1.c')
            with open(path, 'w') as fh:
                fh.write('#define func_80000000 D_80000000\n#include "context.h"\n#undef func_80000000\nvoid func_80000000(void) { void *p = D_80000000; }\n')
            with patch.object(S, 'file_of', return_value='file'):
                snippet = R.read_attempt('test', 'func_80000000', path)
            self.assertIn('extern unsigned char D_80000000[];', snippet)
            self.assertNotIn('extern unsigned char func_80000000', snippet)
            self.assertNotIn('UNUSED', snippet)
            self.assertNotIn('context.h', snippet)
            self.assertNotIn('#define', snippet)

    def test_borrowed_late_budget_does_not_move_regular_strings(self):
        regular = '.section .rodata\nnonmatching D_80000010\ndlabel D_80000010\n/* 10 80000010 41000000 */ .word 0x41000000\nenddlabel D_80000010\n'
        late = '.section .late_rodata\nnonmatching D_80000014\ndlabel D_80000014\n/* 14 80000014 3F800000 */ .float 1.0\nenddlabel D_80000014\n'
        named = 'asm/nonmatchings/test/file/_ro_named_test.s'
        donor = 'asm/nonmatchings/test/file/func_80000004.s'
        files = {named: regular + late, donor: 'glabel func_80000004\n nop\n'}
        class Output(io.StringIO):
            def close(self):
                files[self.path] = self.getvalue()
                super().close()
        def opened(path, mode='r'):
            if mode == 'w':
                stream = Output(); stream.path = path; return stream
            return io.StringIO(files[path])
        source = '#pragma GLOBAL_ASM("%s")\nvoid func_80000000(void) {}\n#pragma GLOBAL_ASM("%s")\n' % (named, donor)
        with patch.object(R, 'open', side_effect=opened, create=True), patch.object(S, 'asm_weights', return_value=(8, 0)):
            result = R.merge_kept_lates('test', 'file', source)
        regular_path = next(p for p in files if '/_ro_regular_' in p)
        mixed_path = next(p for p in files if '/_mrg_keep_' in p)
        self.assertLess(result.index(regular_path), result.index('void func_80000000'))
        self.assertNotIn('D_80000010', files[mixed_path])
        self.assertIn('D_80000014', files[mixed_path])

    def test_c_owned_prefix_is_not_reintroduced_by_insertion(self):
        late = '.section .late_rodata\nnonmatching D_80000014\ndlabel D_80000014\n/* 14 80000014 3F800000 */ .float 1.0\nenddlabel D_80000014\n'
        with tempfile.TemporaryDirectory(dir='build') as td:
            block = os.path.join(td, '_ro_named_test.s')
            with open(block, 'w') as fh: fh.write(late)
            sc = R.Scan('static const f32 D_80000014__rodata[] = {1.0f};\n')
            with patch.object(S, 'late_literals', side_effect=lambda p,t:t), \
                 patch.object(S, 'kept_rodata_block', return_value=block), \
                 patch.object(S, 'missing_decls', return_value=[]):
                lines, _ = R.body_for('test', 'file', 'func_80000000', 'void func_80000000(void) {}', sc, 1, 'isolate')
            self.assertFalse(any('#pragma GLOBAL_ASM' in line for line in lines))
            with open(block) as fh: self.assertEqual(fh.read(), late)

    def test_nested_members_are_not_type_dependencies(self):
        text = 'struct Obj {\n union {\n int x;\n } value;\n};\ntypedef struct {\n struct { int x; } member;\n} Alias;\n'
        sc = R.Scan(text)
        self.assertEqual([ns for _, _, ns in sc.types], [{'Obj'}, {'Alias'}])
        imported = self.dependencies('void func_80000000(void) { int value; }', text)
        self.assertNotIn('struct Obj', imported)

    def test_insertion_retains_only_data_outside_explicit_byte_storage(self):
        def item(addr):
            n = 'D_%08X' % addr
            return 'nonmatching %s\ndlabel %s\n/* 0 %08X 3F800000 */ .float 1.0\nenddlabel %s\n' % (n,n,addr,n)
        late = '.section .late_rodata\n' + item(0x80000010) + item(0x80000014)
        with tempfile.TemporaryDirectory(dir='build') as td:
            block = os.path.join(td, '_ro_named_test.s')
            with open(block, 'w') as fh: fh.write(late)
            sc = R.Scan('static const unsigned char rodata_file[] = {0x3F,0x80,0x00,0x00};\n')
            with patch.object(S, 'FILE_RODATA', {('test', 'file'): 0x80000010}), \
                 patch.object(S, 'late_literals', side_effect=lambda p,t:t), \
                 patch.object(S, 'kept_rodata_block', return_value=block), \
                 patch.object(S, 'missing_decls', return_value=[]), \
                 patch.object(R, 'open', wraps=open) as opened:
                # The generated remainder path need not exist in this unit test.
                real_open = open
                def redirected(path, *args, **kwargs):
                    if '/_ro_named_' in path and path != block:
                        path = os.path.join(td, 'remainder.s')
                    return real_open(path, *args, **kwargs)
                opened.side_effect = redirected
                lines, _ = R.body_for('test', 'file', 'func_80000000', 'void func_80000000(void) {}', sc, 1, 'isolate')
            with open(os.path.join(td, 'remainder.s')) as fh: remainder = fh.read()
            self.assertNotIn('D_80000010', remainder)
            self.assertIn('D_80000014', remainder)

    def test_regular_only_kept_block_recipe_does_not_reintroduce_late_literals(self):
        regular = '.section .rodata\nnonmatching D_80000010\ndlabel D_80000010\n/* 10 80000010 00000000 */ .word 0\nenddlabel D_80000010\n'
        late = '.section .late_rodata\nnonmatching D_80000014\ndlabel D_80000014\n/* 14 80000014 3F800000 */ .float 1.0\nenddlabel D_80000014\n'
        with tempfile.TemporaryDirectory() as td:
            source = os.path.join(td, 'original.s')
            block = os.path.join(td, '_ro_func_80000000.s')
            with open(source, 'w') as fh: fh.write(regular + late)
            with open(block, 'w') as fh: fh.write(regular)
            with patch.object(S, 'entries', return_value=[('func_80000000', source, 0, 8, 0x80000000)]), \
                 patch.object(S, 'rodata_blocks', return_value=[]), \
                 patch.object(S, '_rd', side_effect=lambda p: regular + late):
                annotated = R.kept_blocks.annotate(S, 'test', 'file', '#pragma GLOBAL_ASM("%s")\n' % block)
                self.assertEqual(R.kept_blocks.annotate(S, 'test', 'file', annotated), annotated)
                recipe = json.loads(R.kept_blocks.RECIPE.findall(annotated)[0][1])
                with open(block, 'w') as fh: fh.write(regular + late)
                R.kept_blocks.rebuild(S, 'test', 'file', block, recipe)
            with open(block) as fh: rebuilt = fh.read()
            self.assertIn('D_80000010', rebuilt)
            self.assertNotIn('D_80000014', rebuilt)

    def test_recipe_survives_standalone_data_migrating_into_function(self):
        lines = ['nonmatching D_80000014', 'dlabel D_80000014',
                 '/* 14 80000014 3F800000 */ .float 1.0', 'enddlabel D_80000014']
        recipe = {'functions': [], 'rodata': [['.late_rodata', 'old-standalone.s', 'D_80000014']]}
        with tempfile.TemporaryDirectory(dir='build') as td:
            path = os.path.join(td, '_ro_rebuilt.s')
            with patch.object(S, '_rd', side_effect=FileNotFoundError), \
                 patch.object(R.kept_blocks, 'catalog', return_value={'D_80000014': ('current-function.s', lines)}) as catalog:
                R.kept_blocks.rebuild(S, 'test', 'original_file', path, recipe)
            catalog.assert_called_once_with(S, 'test', 'original_file')
            with open(path) as fh: rebuilt = fh.read()
            self.assertIn('.section .late_rodata', rebuilt)
            self.assertIn('.float 1.0', rebuilt)

    def test_snapshot_hiding_macros_are_removed_before_import(self):
        text = R.normalize('#define func_80000000 D_80000000\n#define D_80000004 JOIN(old_, __LINE__)\n#include "context.h"\n#undef func_80000000\n#undef D_80000004\nvoid func_80000000(void) {}\n')
        self.assertNotIn("#define", text)
        self.assertNotIn("#undef", text)

    def test_identical_prototype_can_need_alias_after_private_type_expansion(self):
        lines = ['extern void func_80000000(struct Obj *arg0);', '#pragma GLOBAL_ASM("a.s")']
        snippet = 'void func_80000000(struct Obj *arg0) {}'
        self.assertIn("alias-later", dict(R.own_decl_fixes(lines, 'func_80000000', snippet, 1)))

    def test_anonymous_typedef_is_available_and_isolated(self):
        text = "typedef struct {\n int x;\n} Obj;\n"
        sc = R.Scan(text)
        self.assertIn("Obj", sc.declared_at[-1])
        self.assertIn("Obj", sc.decl_text)
        snippet = text + "extern Obj D_80000004;\nvoid func_80000000(void) { D_80000004.x = 1; }\n"
        with patch.object(S, 'late_literals', side_effect=lambda p, t: t), \
             patch.object(S, 'kept_rodata_block', return_value=None), \
             patch.object(S, 'missing_decls', return_value=[]):
            body, private = R.body_for('test', 'file', 'func_80000000', snippet, sc, len(sc.lines), 'isolate')
        self.assertIn("Obj", private)
        self.assertEqual("\n".join(body).count("typedef struct"), 1)

    def dependencies(self, snippet, context):
        with patch.object(S, "registry", return_value={}):
            return R.context_dependencies("test", "file", "func_80000000", snippet, R.Scan(""), 0, context)

    def test_snapshot_types_are_transitive_and_private_standins_are_ignored(self):
        context = """typedef struct Vec { int x; } Vec;
typedef struct Obj { Vec v; } Obj;
extern Obj D_80000004;
#define Obj Obj__neighbour
typedef struct Obj { int dummy; } Obj;
#undef Obj
extern int D_80000008;
"""
        text = self.dependencies('#include "context.h"\nvoid func_80000000(void) { D_80000004.v.x = 1; }', context)
        self.assertLess(text.index("struct Vec"), text.index("struct Obj"))
        self.assertLess(text.index("struct Obj"), text.index("extern Obj"))
        self.assertNotIn("dummy", text)
        self.assertNotIn("D_80000008", text)

    def test_prerequisite_before_include_stays_before_imported_prototype(self):
        text = self.dependencies('typedef int Own;\n#include "context.h"\nvoid func_80000000(void) { func_80000004((Own)1); }',
                                 'extern void func_80000004(Own);')
        self.assertLess(text.index("typedef int Own"), text.index("extern void"))

    def test_leaked_macro_uses_last_live_definition(self):
        text = self.dependencies('#include "context.h"\nvoid func_80000000(void) { int x = OBJ; }',
                                 '#define OBJ(i) (i)\n#define OBJ 42\n#define UNUSED 1\n#undef UNUSED\n')
        self.assertIn("#define OBJ 42", text)
        self.assertNotIn("OBJ(i)", text)
        self.assertNotIn("UNUSED", text)

    def test_multiline_extern_is_not_a_definition(self):
        text = R.normalize('extern void func_80000004(int a,\n float b);\nvoid func_80000000(void) {\n}\n')
        self.assertEqual([m.group(1) for l in text.splitlines() for m in [S.DEFN.match(l)] if m], ["func_80000000"])
        self.assertIn("extern void func_80000004(int a, float b);", text)

    def test_small_double_can_be_emitted_at_its_original_late_position(self):
        asm = '.section .late_rodata\ndlabel D_8025BE08\n    /* 66E5B8 8025BE08 3F0A36E2EB1C432D */ .double 0.00005\n.section .text\n'
        with patch.object(S, '_rd', return_value=asm):
            text = S._late_literals('test.s', 'extern f64 D_8025BE08;\nf64 func_80000000(void) { return D_8025BE08; }\n')
        self.assertNotIn('D_8025BE08', text)
        self.assertIn('return 5e-05;', text)

    def test_data_using_a_private_typedef_gets_its_own_alias(self):
        sc = R.Scan('typedef struct Vec { int x; } Vec;\nextern Vec D_80000004;\n')
        snippet = 'typedef struct Vec { int x; } Vec;\nextern Vec D_80000004;\nvoid func_80000000(void) { D_80000004.x = 1; }\n'
        with patch.object(S, 'late_literals', side_effect=lambda p, t: t), \
             patch.object(S, 'kept_rodata_block', return_value=None), \
             patch.object(S, 'missing_decls', return_value=[]):
            _, private = R.body_for('test', 'file', 'func_80000000', snippet, sc, len(sc.lines), 'isolate')
        self.assertIn('Vec', private)
        self.assertIn('D_80000004', private)

    def test_mixed_block_is_recreated_without_generated_asm(self):
        asm = '.section .late_rodata\nnonmatching D_80000008\ndlabel D_80000008\n/* 000008 80000008 3F800000 */ .float 1.0\nenddlabel D_80000008\n.section .text\nglabel func_80000004\n    nop\n'
        recipe = dict(functions=['func_80000004'], rodata=[['.late_rodata', 'original.s', 'D_80000008']])
        with tempfile.TemporaryDirectory() as td, patch.object(S, '_rd', return_value=asm):
            p = os.path.join(td, 'fresh', '_lr_test.s')
            R.kept_blocks.rebuild(S, 'test', 'file', p, recipe)
            with open(p) as fh: rebuilt = fh.read()
        self.assertEqual(rebuilt.count('dlabel D_80000008\n'), 2)  # dlabel and enddlabel
        self.assertEqual(rebuilt.count('glabel func_80000004'), 1)
        self.assertLess(rebuilt.index('dlabel D_80000008'), rebuilt.index('glabel func_80000004'))
        self.assertTrue(R.kept_blocks.custom(p))

    def test_integration_protects_present_registry_entries_only(self):
        source = 'void func_80000004(void) {\n}\n'
        reg = {('test', 'func_80000004'): source, ('test', 'func_80000008'): 'absent'}
        with patch.object(S, "registry", return_value=reg), \
             patch.object(S, "entries", return_value=[('func_80000004',), ('func_80000008',)]), \
             patch.object(R, "reconcile_file", return_value=(source, {}, {})) as reconcile:
            R.integrate('test', 'file', source, {'func_80000008': 'new'})
        self.assertEqual(set(reconcile.call_args.args[3]), {'func_80000004'})
        self.assertEqual(set(reconcile.call_args.args[4]), {'func_80000008'})


if __name__ == "__main__":
    unittest.main()
