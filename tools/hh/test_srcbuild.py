"""Registry preservation regressions. Run after sourcing env.sh: .venv/bin/python tools/hh/test_srcbuild.py"""
import hashlib, io, os, subprocess, sys, tempfile, unittest
from pathlib import Path
from unittest.mock import MagicMock, patch
import srcbuild as S


def blob(text):
    data = text.encode()
    return hashlib.sha1(b"blob %d\0" % len(data) + data).hexdigest()


class PreservationTests(unittest.TestCase):
    def test_file_span_excludes_linker_owned_zero_padding(self):
        with patch.object(S, 'entries', return_value=[('func_80000000', 'x.s', 0x100, 0x20)]), \
             patch.object(S, 'SPLITS', {'test': [0x100, 0x140]}), \
             patch.object(S, 'LINKER_PADDING', {'test/80000000': 16}):
            self.assertEqual(S.file_span('test', '80000000'), (0x100, 0x130))

    def test_text_end_includes_padding_before_migrated_data(self):
        yaml = ('      - [0x100, c, seg/80000000]\n'
                '      - [0x120, .data, data/seg/data_80000020]\n'
                '      - [0x200, c, other/80000100]\n'
                '      - [0x250, data]\n')
        with patch.object(S, 'open', return_value=io.StringIO(yaml), create=True):
            self.assertEqual(S._text_ends(), {'seg': 0x120, 'other': 0x250})

    def test_last_readonly_extent_without_bss(self):
        manifest = '{"files":[{"id":32,"vram":2149456864,"exp_len":40416}]}'
        with patch.object(S, 'open', side_effect=lambda p: io.StringIO(
                '  - name: file032\n' if p == 'hybridheaven.yaml' else manifest), create=True):
            ends = S._seg_bss()
        with patch.object(S, 'FILE_RODATA', {('file032', '801E1BF0'): 2149496880}), \
             patch.object(S, 'SEG_BSS', ends), patch.object(S, 'yaml_extent', return_value=None):
            self.assertEqual(S.file_rodata_size('file032', '801E1BF0'), 400)

    def test_repair_trial_protects_unregistered_c_neighbour(self):
        source = 'void func_80000000(void) {}\nvoid func_80000008(void) {}\n'
        lost_stub = 'void func_80000000(void) {}\n'
        with patch.object(S, 'open', side_effect=lambda *a: io.StringIO(source), create=True), \
             patch.object(S, 'entries', return_value=[('func_80000000',), ('func_80000008',)]), \
             patch.object(S, 'registry', return_value={}), \
             patch('reconcile_frozen.verify', return_value=(True, 'ok')), \
             patch('reconcile_frozen.integrate', return_value=(lost_stub, {'func_80000000': 'edit'}, {})):
            kept, _, text, problem = S.trial_snippets('test', 'file', {'func_80000000': 'changed'}, 'build')
        self.assertFalse(kept)
        self.assertEqual(text, source)
        self.assertIn('lost a neighbour', problem)

    def test_repair_trial_does_not_reinterpret_unchanged_frozen_recipe(self):
        source = 'void func_80000000(void) { private_alias(); }\n'
        snippet = 'void func_80000000(void) { original_name(); }\n'
        with patch.object(S, 'open', side_effect=lambda *a: io.StringIO(source), create=True), \
             patch.object(S, 'entries', return_value=[('func_80000000',)]), \
             patch.object(S, 'registry', return_value={('test', 'func_80000000'): snippet}), \
             patch('reconcile_frozen.verify', return_value=(True, 'ok')), \
             patch('reconcile_frozen.integrate', return_value=(source, {}, {})) as integrate:
            kept, _, _, problem = S.trial_snippets('test', 'file', {'func_80000000': snippet}, 'build')
        self.assertEqual(integrate.call_args.args[3], {})
        self.assertEqual(set(kept), {'func_80000000'})
        self.assertIsNone(problem)

    def snapshot(self, snippets=None, source=None, new_keys=None, blocklist="", every_file=False):
        original = {"func_80000000": "void func_80000000(void) {}\n",
                    "func_80000008": "void func_80000008(void) {}\n"}
        src = '#include "common.h"\n' + "".join(original.values())
        head = {"matched/main/%s.c" % n: blob(t) for n, t in original.items()}
        head.update({"src/main/file.c": blob(src), S.LINK_BLOCKLIST: blob("")})
        tree = "".join("100644 blob %s\t%s\n" % (oid, p) for p, oid in head.items())
        captured = []
        pool = MagicMock()
        pool.__enter__.return_value.imap_unordered.side_effect = lambda fn, jobs: captured.extend(jobs) or []
        def opened(path, *args, **kwargs):
            return io.StringIO(blocklist if path == S.LINK_BLOCKLIST else src if source is None else source)
        with patch.object(S, "file_of", return_value="file"), patch.object(S, "added_times", return_value={}), \
             patch.object(S, "link_blocked", return_value=set()), patch.object(S, "LIBFILES", set()), \
             patch.object(S.subprocess, "check_output", side_effect=lambda cmd, **kw: tree if cmd[1] == "ls-tree" else src), \
             patch.object(S, "Pool", return_value=pool), \
             patch.object(S.glob, "glob", side_effect=lambda p: ['asm/nonmatchings/main/file']
                          if p == 'asm/nonmatchings/*/*' else ['src/main/file.c']), \
             patch.object(S.os.path, "isdir", return_value=True), \
             patch.object(S.os.path, "exists", return_value=True), patch.object(S.os.path, "getmtime", return_value=0), \
             patch.object(S, "open", side_effect=opened, create=True):
            S.run({("main", n): t for n, t in (original if snippets is None else snippets).items()},
                  new_keys or set(), every_file=every_file)
        return captured[0][-2]

    def test_unchanged_committed_inputs(self):
        self.assertTrue(self.snapshot())

    def test_declaration_only_change_invalidates_snapshot(self):
        self.assertFalse(self.snapshot({"func_80000000": "extern s32 D_80000020;\nvoid func_80000000(void) {}\n",
                                        "func_80000008": "void func_80000008(void) {}\n"}))

    def test_removed_snippet_invalidates_snapshot(self):
        self.assertFalse(self.snapshot({"func_80000000": "void func_80000000(void) {}\n"}))

    def test_removed_last_snippet_still_rebuilds_no_registry_file(self):
        self.assertFalse(self.snapshot({}, every_file=True))

    def test_source_change_invalidates_snapshot(self):
        self.assertFalse(self.snapshot(source="/* edited source */\n"))

    def test_blocklist_change_invalidates_snapshot(self):
        self.assertFalse(self.snapshot(blocklist="main func_80000000\n"))

    def test_new_candidate_preserves_committed_baseline(self):
        self.assertTrue(self.snapshot({"func_80000000": "void func_80000000(void) {}\n",
                                       "func_80000008": "void func_80000008(void) {}\n",
                                       "func_80000010": "void func_80000010(void) {}\n"},
                                      new_keys={("main", "func_80000010")}))

    def test_committed_file_is_not_rerendered(self):
        snips = {"func_80000000": "registered snippet"}
        with patch.object(S, "settle", side_effect=AssertionError("must keep committed source")):
            self.assertEqual(S.build_one(("main", "file", snips, {"func_80000000": 0}, True, set())),
                             ("main/file", snips, {}, None))

    def test_unbuildable_registered_function_is_not_evicted(self):
        snips = {"func_80000000": "registered snippet", "func_80000008": "new candidate"}
        with patch.object(S, "existing_ok", return_value=False), \
             patch.object(S, "settle", return_value=({}, {"func_80000000": "compile error"}, None, None)), \
             patch.object(S, "open", create=True) as opened:
            with self.assertRaisesRegex(RuntimeError, "cannot rebuild registered functions: func_80000000"):
                S.build_one(("main", "file", snips, {"func_80000000": 0}, False, set()))
            opened.assert_not_called()

    def test_new_candidate_cannot_replace_registered_function(self):
        old = {"func_80000000": "registered snippet"}
        new = {"func_80000008": "new candidate"}
        with patch.object(S, "existing_ok", return_value=False), \
             patch.object(S, "settle", return_value=(new, {}, "bad replacement", None)), \
             patch("reconcile_frozen.reconcile_file", return_value=("original source", {}, {"func_80000008": "conflict"})), \
             patch.object(S, "open", side_effect=lambda *a: io.StringIO("original source"), create=True) as opened:
            result = S.build_one(("main", "file", dict(old, **new), {"func_80000000": 0}, True, set()))
            self.assertEqual(result[1], old)
            self.assertEqual(set(result[2]), set(new))
            opened.assert_called_once_with("src/main/file.c")

    def test_failed_exact_link_is_not_a_match(self):
        with patch.object(S, "IMG", b"\0" * 4), \
             patch.object(S.try_func, "func_bytes", return_value=(b"\0" * 4, {})), \
             patch.object(S.try_func, "linked_func_bytes", return_value=None), \
             patch.object(S.try_func, "UNRESOLVED", []):
            self.assertFalse(S.func_ok("obj", "func_80000000", 0, 4, 0x80000000, 0x80000000))

    def test_existing_file_check_links_owned_bss(self):
        """existing_ok must link a file's own .bss where bss_splits.json puts it, as reconcile_frozen.verify does."""
        with patch.object(S, "FILE_BSS", {("file025", "801D6000"): (0x801E1700, 0x20)}):
            self.assertEqual(S.file_bss("file025", "801D6000"), 0x801E1700)
            self.assertIsNone(S.file_bss("file025", "801D46F0"))
        text = "void func_80000000(void) {}\n"
        seen = []
        with patch.object(S, "FILE_BSS", {("main", "file"): (0x80001000, 0x10)}), \
             patch.object(S, "open", side_effect=lambda *a: io.StringIO(text), create=True), \
             patch.object(S.os.path, "exists", return_value=True), \
             patch.object(S, "entries", return_value=[("func_80000000", 0, 0, 8, 0x80000000)]), \
             patch.object(S, "compile_file", return_value=("obj", "")), \
             patch.object(S, "func_ok", side_effect=lambda *a, **k: seen.append(k.get("bss")) or False):
            self.assertFalse(S.existing_ok("main", "file", {"func_80000000": text}, "td"))
        self.assertEqual(seen, [0x80001000])


class AllFilesTests(unittest.TestCase):
    def test_all_keeps_committed_files_without_registered_functions(self):
        # Exercise the CLI too: its old post-run reset undid build_one's preservation.
        with tempfile.TemporaryDirectory(dir=os.path.join(S.HH, 'build')) as td:
            root = Path(td)
            def put(path, text):
                p = root / path
                p.parent.mkdir(parents=True, exist_ok=True)
                p.write_text(text)
            for name in ('srcbuild.py', 'try_func.py', 'workdir.py', 'bss_layout.py', 'idoflags.py'):
                put('tools/hh/' + name, (Path(S.HH) / 'tools/hh' / name).read_text())
            put('build/expanded.bin', '')
            put('build/expanded.json', '{"files":[]}')
            put('tools/hh/file_splits.json', '{}')
            put('tools/hh/text_padding.json', '{}')
            put('tools/hh/bss_splits.json', '{}')
            put('hybridheaven.yaml', '')
            (root / 'queue').mkdir()
            sources = {
                '80000000': '#include "common.h"\n\n'
                    '/* hh-block asm/nonmatchings/test/80000000/_mrg_keep_text_func_80000000.s '
                    '{"functions":["func_80000000"],"rodata":[]} */\n'
                    '#pragma GLOBAL_ASM("asm/nonmatchings/test/80000000/_mrg_keep_text_func_80000000.s")\n'
                    'static const unsigned char rodata_80000000[] = {1, 2, 3, 4};\n',
                '80000010': '#include "common.h"\n\n'
                    '#pragma GLOBAL_ASM("asm/nonmatchings/test/80000010/func_80000010.s")\n',
                '80000020': '#include "common.h"\n\n'
                    '#pragma GLOBAL_ASM("asm/nonmatchings/test/80000020/func_80000020.s")\n\n',
            }
            for cf, source in sources.items():
                put('src/test/%s.c' % cf, source)
                put('asm/nonmatchings/test/%s/func_%s.s' % (cf, cf),
                    'nonmatching func_%s, 0x10\nglabel func_%s\n/* 000000 %s 03E00008 */ jr $ra\n' % (cf, cf, cf))
            def git(*args):
                return subprocess.run(['git', *args], cwd=td, check=True, capture_output=True, text=True)
            git('init', '--quiet', '--initial-branch=sol-rodata')
            git('add', '--', 'src')
            git('-c', 'user.name=Test', '-c', 'user.email=test@example.com',
                'commit', '--quiet', '-m', 'committed readonly data and ASM placeholders')
            result = subprocess.run([sys.executable, str(root / 'tools/hh/srcbuild.py'), 'all'],
                                    cwd=td, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            self.assertIn('0 functions in C, 0 rejected', result.stdout)
            for cf, source in sources.items():
                self.assertEqual((root / ('src/test/%s.c' % cf)).read_text(), source)
            self.assertEqual(git('diff', '--exit-code', '--', 'src').stdout, '')

    def test_uncommitted_no_registry_file_is_rebuilt(self):
        stale = 'static const int removed_snippet_data[] = {123};\n'
        asm = '#include "common.h"\n#pragma GLOBAL_ASM("current.s")\n'
        output = io.StringIO()
        def opened(path, mode='r'):
            return io.StringIO(stale) if mode == 'r' else output
        with patch.object(S.os.path, 'exists', return_value=True), \
             patch.object(S, 'open', side_effect=opened, create=True), \
             patch.object(S, 'settle', return_value=({}, {}, asm, None)) as settle:
            self.assertEqual(S.build_one(('test', 'file', {}, {}, False, set())),
                             ('test/file', {}, {}, None))
        settle.assert_called_once()
        self.assertEqual(output.getvalue(), asm)


class ExistingSourceTests(unittest.TestCase):
    def check_source(self, source, asm_ok=()):
        info = [("func_80000000", "a.s", 0, 8, 0x80000000),
                ("func_80000008", "b.s", 8, 8, 0x80000008)]
        elf = MagicMock()
        section = MagicMock(); section.__getitem__.side_effect = {"sh_size": 16}.__getitem__
        section.data.return_value = b"\0" * 16
        elf.get_section_by_name.return_value = section
        with patch.object(S, "open", side_effect=lambda *a: io.StringIO(source), create=True), \
             patch.object(S.os.path, "exists", return_value=True), patch.object(S, "entries", return_value=info), \
             patch.object(S, "is_stub", side_effect=lambda off, size: off == 8), \
             patch.object(S, "compile_file", return_value=("obj", "")), patch.object(S, "func_ok", return_value=True), \
             patch.object(S, "file_span", return_value=(0, 16)), patch.object(S, "ELFFile", return_value=elf):
            return S.existing_ok("main", "file", {"func_80000000": "snippet"}, "build", bodies=False, asm_ok=asm_ok)

    def test_prototype_before_kr_definition_and_unregistered_stub(self):
        self.assertTrue(self.check_source("""extern void func_80000020(s32);
void func_80000000(arg0)
s32 arg0;
{
    func_80000020(arg0);
}
void func_80000008(void) {}
"""))

    def test_alias_directive_between_signature_and_brace(self):
        self.assertTrue(self.check_source("""void func_80000000(void)
#undef func_80000020
{
}
void func_80000008(void) {}
"""))

    def test_extra_nonstub_definition_is_still_rejected(self):
        self.assertFalse(self.check_source("""void func_80000000(void) {}
void func_80000020(void) {}
"""))

    def test_only_known_committed_asm_may_stand_in_for_a_snippet(self):
        source = '#pragma GLOBAL_ASM("a.s")\nvoid func_80000008(void) {}\n'
        self.assertFalse(self.check_source(source))
        self.assertTrue(self.check_source(source, asm_ok={"func_80000000"}))


class ExactLinkTests(unittest.TestCase):
    def test_default_linker_crash_without_rodata_uses_exact_fallback(self):
        run = subprocess.run
        with tempfile.TemporaryDirectory() as td:
            obj = os.path.join(td, "f.o")
            asm = ".set noreorder\n.text\n.globl func_80000000\n.type func_80000000,@function\nfunc_80000000:\njr $ra\nnop\n.size func_80000000,.-func_80000000\n"
            run(["mips-linux-gnu-as", "-EB", "-march=vr4300", "-o", obj], input=asm, text=True, check=True)
            def crash_default(cmd, **kwargs):
                if any(arg.startswith("-Ttext=") for arg in cmd):
                    return subprocess.CompletedProcess(cmd, -11, "", "")
                return run(cmd, **kwargs)
            with patch.object(S.try_func.subprocess, "run", side_effect=crash_default):
                linked = S.try_func.linked_func_bytes(obj, "func_80000000", 0x80000000, base=0x80000000)
            self.assertEqual(linked, bytes.fromhex("03e0000800000000"))


class TextExtentTests(unittest.TestCase):
    """Task 27: IDO pads every object's .text to 16 bytes, and the linker script places each input section SUBALIGN(16).
    A file whose original .text ends 4/8/12 bytes before a 16-byte boundary followed by zeros links the same either way."""
    def run_check(self, data, gap=b"\0" * 4, after=b"\x11" * 16):
        img = b"\0" * 0x100 + b"\x24" * 0x1C + gap + after         # span 0x1C at 0x100 (vram 0x80000000), next at 0x120
        with patch.object(S, 'IMG', img), patch.object(S, 'file_span', return_value=(0x100, 0x11C)), \
             patch.object(S, 'entries', return_value=[('func_80000000', 'p', 0x100, 0x1C, 0x80000000)]):
            return S.text_extent('test', 'file'), S.text_problem('test', 'file', data)

    def test_exact_original_length(self):
        self.assertEqual(self.run_check(b"\x24" * 0x1C), ((0x1C, 0x20), None))

    def test_ido_padding_into_original_zeros_links_the_same(self):
        self.assertIsNone(self.run_check(b"\x24" * 0x1C + b"\0" * 4)[1])

    def test_past_the_boundary_moves_the_next_section(self):
        self.assertEqual(self.run_check(b"\x24" * 0x1C + b"\0" * 0x14)[1], "file .text is 0x30, original 0x1C")

    def test_nonzero_original_gap_allows_no_padding(self):
        extent, why = self.run_check(b"\x24" * 0x1C + b"\0" * 4, gap=b"\x00\x00\x00\x01")
        self.assertEqual(extent, (0x1C, 0x1C))
        self.assertEqual(why, "file .text is 0x20, original 0x1C")

    def test_nonzero_object_padding_changes_a_linked_byte(self):
        self.assertIn("padding past 0x1C is not zero", self.run_check(b"\x24" * 0x1C + b"\0\0\0\x01")[1])

    def test_short_object_keeps_the_padding_retry_message(self):
        import re
        why = self.run_check(b"\x24" * 0x10)[1]
        self.assertRegex(why, r"^file \.text is 0x([0-9A-F]+), original 0x([0-9A-F]+)$")


if __name__ == "__main__": unittest.main()
