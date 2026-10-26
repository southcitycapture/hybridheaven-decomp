"""Regression checks for fully-linked credit and the stale-section count bug."""
import copy
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

from elftools.elf.elffile import ELFFile

from progress_code import source_units, target_source, unit_complete, c_only_source


class CodeProgressTests(unittest.TestCase):
    def test_c_only_compile_preserves_line_number_aliases(self):
        source = '#define NAME CAT(private_, __LINE__)\n#pragma GLOBAL_ASM("first.s")\n\nint NAME;\n  #pragma GLOBAL_ASM("last.s")'
        result = c_only_source(source)
        self.assertNotIn('GLOBAL_ASM', result)
        self.assertEqual(result.splitlines()[3], 'int NAME;')
        self.assertEqual(result.count('\n'), source.count('\n'))

    def setUp(self):
        self.unit = {"measures": {"total_functions": 2, "matched_functions": 2},
                     "functions": [{"name": "first", "fuzzy_match_percent": 100.0},
                                   {"name": "second", "fuzzy_match_percent": 100.0}]}

    def test_all_functions_match_and_no_asm_is_complete(self):
        self.assertTrue(unit_complete(self.unit, "void first(void) {}\nvoid second(void) {}"))

    def test_matching_functions_cannot_hide_asm_or_padding(self):
        for source in ('#pragma GLOBAL_ASM("func.s")', 'INCLUDE_ASM("func.s", second);',
                       '#pragma GLOBAL_ASM("_pad_4.s")', '#pragma GLOBAL_ASM("_ro_first.s")'):
            with self.subTest(source=source):
                self.assertFalse(unit_complete(self.unit, source))

    def test_unmatched_missing_or_rounded_function_is_incomplete(self):
        for percent in (None, 0, 99.99999):
            with self.subTest(percent=percent):
                unit = copy.deepcopy(self.unit)
                unit["functions"][1]["fuzzy_match_percent"] = percent
                self.assertFalse(unit_complete(unit, "C only"))
        unit = copy.deepcopy(self.unit)
        unit["functions"].pop()
        self.assertFalse(unit_complete(unit, "C only"))
        self.unit["measures"]["matched_functions"] = 1
        self.assertFalse(unit_complete(self.unit, "C only"))
        self.assertFalse(unit_complete({"measures": {}, "functions": []}, "C only"))

    def test_configured_units_include_only_c_subsegments(self):
        config = {"segments": [[0, "bin", "asset"], {"subsegments": [
            [0, "c", "main/first"], [16, ".rodata", "main/first"],
            [32, "c", "main/second"], {"type": "bss"}]}]}
        self.assertEqual(source_units(config), ["main/first", "main/second"])
        config["segments"][1]["subsegments"].append([48, "c", "main/first"])
        with self.assertRaisesRegex(AssertionError, "duplicate"):
            source_units(config)

    @unittest.skipUnless(shutil.which("mips-linux-gnu-as"), "MIPS assembler required")
    def test_rodata_input_does_not_swallow_following_functions(self):
        # The historical targets for 800024D0/80005270 began with D_*.s;
        # without a section reset, the following functions became data symbols.
        head = '.set noreorder\n.section .text, "ax"\n'
        assembly = ['.section .rodata\n.word 0x1234\n',
                    '.global first\n.type first, @function\nfirst: jr $ra\nnop\n.size first, .-first\n'
                    '.late_rodata_alignment 4\n.late_rodata\n.word 0x5678\n',
                    '.global second\n.type second, @function\nsecond: jr $ra\nnop\n.size second, .-second\n']
        # All test products stay in this checkout, like the progress build.
        root = Path(__file__).resolve().parents[2]
        with tempfile.TemporaryDirectory(dir=root / "build", prefix="test-progress-") as temp:
            src, obj = Path(temp) / "target.s", Path(temp) / "target.o"
            src.write_text(target_source(head, assembly))
            subprocess.run(["mips-linux-gnu-as", "-EB", "-march=vr4300", "-o", str(obj), str(src)], check=True)
            with obj.open("rb") as f:
                elf = ELFFile(f)
                symbols = {s.name: s for s in elf.get_section_by_name(".symtab").iter_symbols()}
                for name in ("first", "second"):
                    self.assertEqual(elf.get_section(symbols[name]["st_shndx"]).name, ".text")
                    self.assertEqual(symbols[name]["st_size"], 8)


if __name__ == "__main__":
    unittest.main()
