"""Registry preservation regressions. Run after sourcing env.sh: .venv/bin/python tools/hh/test_srcbuild.py"""
import hashlib, io, unittest
from unittest.mock import MagicMock, patch
import srcbuild as S


def blob(text):
    data = text.encode()
    return hashlib.sha1(b"blob %d\0" % len(data) + data).hexdigest()


class PreservationTests(unittest.TestCase):
    def snapshot(self, snippets=None, source=None, new_keys=None, blocklist=""):
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
             patch.object(S.os.path, "exists", return_value=True), patch.object(S.os.path, "getmtime", return_value=0), \
             patch.object(S, "open", side_effect=opened, create=True):
            S.run({("main", n): t for n, t in (original if snippets is None else snippets).items()}, new_keys or set())
        return captured[0][-2]

    def test_unchanged_committed_inputs(self):
        self.assertTrue(self.snapshot())

    def test_declaration_only_change_invalidates_snapshot(self):
        self.assertFalse(self.snapshot({"func_80000000": "extern s32 D_80000020;\nvoid func_80000000(void) {}\n",
                                        "func_80000008": "void func_80000008(void) {}\n"}))

    def test_removed_snippet_invalidates_snapshot(self):
        self.assertFalse(self.snapshot({"func_80000000": "void func_80000000(void) {}\n"}))

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


class ExistingSourceTests(unittest.TestCase):
    def check_source(self, source, asm_ok=()):
        info = [("func_80000000", "a.s", 0, 8, 0x80000000),
                ("func_80000008", "b.s", 8, 8, 0x80000008)]
        elf = MagicMock()
        elf.get_section_by_name.return_value = {"sh_size": 16}
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


if __name__ == "__main__": unittest.main()
