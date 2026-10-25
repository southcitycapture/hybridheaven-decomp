"""Regression checks for data provenance, independent of the current ROM totals."""
import unittest
from types import SimpleNamespace

from progress_data import assembly_mask, c_ranges, compare_ranges, data_measures


def asm_function(regular=None, late=(), table=0):
    return SimpleNamespace(data={
        ".text": (None, SimpleNamespace(size=0)),
        ".data": (None, SimpleNamespace(size=0)),
        ".rodata": (regular, SimpleNamespace(size=4 if regular else 0)),
        ".bss": (None, SimpleNamespace(size=0)),
    }, late_rodata_dummy_bytes=late, jtbl_rodata_size=table)


class DataProgressTests(unittest.TestCase):
    def test_matching_assembly_is_not_c_credit(self):
        raw = b"\1\0\0\0" + b"REAL C!!" + bytes.fromhex("e0123456") + b"TABLE!!!"
        final = b"ASM!" + b"REAL C!!" + b"ASM!TABLE!!!"
        mask = assembly_mask([asm_function("placeholder", [bytes.fromhex("e0123456")], 8)],
                             {"placeholder": 0}, {".rodata": raw})[".rodata"]
        ranges = c_ranges(raw, final, mask, [])
        self.assertEqual(ranges, [(4, 12)])
        # Even though the *entire* linked range matches the original, only the
        # genuine C bytes may earn credit (including no ASM jump-table bytes).
        self.assertEqual(compare_ranges(ranges, final, b"ROM!" + final, 4)[0], 8)

    def test_late_double_alignment_hole_is_not_c(self):
        first, second = bytes.fromhex("e0123456"), bytes.fromhex("e0123457")
        raw = first + b"\0" * 4 + second + b"\0" * 4
        final = b"\0" * 4 + b"ASM!ASM!" + b"\0" * 4
        mask = assembly_mask([asm_function(late=[first, second])], {}, {".rodata": raw})[".rodata"]
        self.assertEqual(c_ranges(raw, final, mask, []), [])

    def test_zero_c_object_is_counted_but_anonymous_padding_is_not(self):
        zeroes = b"\0" * 16
        self.assertEqual(c_ranges(zeroes, zeroes, bytearray(16), []), [])
        self.assertEqual(c_ranges(zeroes, zeroes, bytearray(16), [(0, 4)]), [(0, 16)])

    def test_stale_or_unaccounted_injected_bytes_fail_closed(self):
        with self.assertRaisesRegex(AssertionError, "unaccounted"):
            c_ranges(b"C data", b"OLD!!!", bytearray(6), [])

    def test_wrong_rom_offset_or_partial_match_gets_no_credit(self):
        self.assertEqual(compare_ranges([(0, 8)], b"C data!!", b"C data!?", 0)[0], 0)
        self.assertEqual(compare_ranges([(0, 8)], b"C data!!", b"C data!!", 1)[0], 0)
        self.assertEqual(compare_ranges([], b"ASM!", b"ASM!", 0)[0], 0)

    def test_schema_types_and_code_fields_are_preserved(self):
        measures = {"matched_code": "123", "matched_functions": 7, "total_code": "456"}
        before = measures.copy()
        data_measures(measures, 200, 10)
        self.assertEqual({key: measures[key] for key in before}, before)
        self.assertEqual(measures["total_data"], "200")
        self.assertEqual(measures["matched_data"], "10")
        self.assertEqual(measures["matched_data_percent"], 5.0)


if __name__ == "__main__":
    unittest.main()
