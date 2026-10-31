"""Checks for tools/hh/data_to_c.py (asm .data -> generated C)."""
import os
import shutil
import subprocess
import tempfile
import unittest

import data_to_c as D

HH = D.HH
ASM = """.include "macro.inc"

.section .data, "wa"

nonmatching D_80100000

dlabel D_80100000
    /* 1000 80100000 00000001 */ .word 0x00000001
    /* 1004 80100004 80100010 */ .word D_80100010
    /* 1008 80100008 80100016 */ .word D_80100014 + 0x2
    /* 100C 8010000C 80000400 */ .word func_80000400
enddlabel D_80100000

dlabel D_80100010
    /* 1010 80100010 1234 */ .short 0x1234
    /* 1012 80100012 5678 */ .short 0x5678

dlabel D_80100014
    /* 1014 80100014 0001 */ .short 0x0001

dlabel D_80100016
    /* 1016 80100016 0002 */ .short 0x0002

dlabel D_80100018
    /* 1018 80100018 */ .asciz "a?\\"b"
    /* 613F2262 00000000 */
.align 2

dlabel D_80100020
    /* 1020 80100020 3F800000 */ .float 1.0
    /* 1024 80100024 80100002 */ .word D_80100016 - 0x14
    /* 1028 80100028 00000000 */ .word 0x00000000
    /* 102C 8010002C 00000000 */ .word 0x00000000
"""
WORDS = ["00000001", "80100010", "80100016", "80000400", "12345678", "00010002",
         "613F2262", "00000000", "3F800000", "80100002", "00000000", "00000000"]
BLOB = {"seg": "file999", "rom": 0x1000, "end": 0x1030, "vram": 0x80100000,
        "unit": "data/file999/data_80100000", "asm": "asm/data/1000.data.s"}


def image():
    return b"\0" * 0x1000 + bytes.fromhex("".join(WORDS))


class DataToCTests(unittest.TestCase):
    def test_parse(self):
        labels, relocs, words, strings = D.parse_asm(ASM)
        self.assertEqual(labels[0], ("D_80100000", 0x80100000))
        self.assertEqual(relocs[0x80100008], ("D_80100014", 2))
        self.assertEqual(relocs[0x80100024], ("D_80100016", -0x14))
        self.assertEqual(words[0x80100012], (2, 0x5678))
        self.assertEqual(strings, {"D_80100018"})

    def test_render(self):
        text = D.render(BLOB, image(), D.parse_asm(ASM))
        # relocations stay symbol references (an unaligned label goes through its containing object)
        self.assertIn("(u32)D_80100010, (u32)D_80100014 + 0x2, (u32)func_80000400", text)
        self.assertIn("(u32)D_80100014 - 0x12", text)
        self.assertNotIn("0x80100010", text)
        self.assertIn("extern void func_80000400();", text)
        self.assertIn("extern u16 D_80100010[];", text)
        self.assertIn("u16 D_80100010[0x2] = {\n    0x1234, 0x5678,\n};", text)
        self.assertIn("/* D_80100016 = D_80100014 + 0x2 (unaligned", text)
        self.assertIn('char D_80100018[0x8] = "a\\?\\"b";', text)
        self.assertIn("u32 D_80100020[0x4] = {\n    0x3F800000,", text)
        self.assertEqual(D.defined_symbols(text), ["D_80100000", "D_80100010", "D_80100014", "D_80100018", "D_80100020"])

    def test_rejects_mismatches(self):
        bad = bytearray(image())
        bad[0x1000 + 3] = 2                     # literal no longer matches the ROM
        with self.assertRaises(ValueError):
            D.render(BLOB, bytes(bad), D.parse_asm(ASM))
        bad = bytearray(image())
        bad[0x1000 + 7] = 0x14                  # relocation value disagrees with its symbol
        with self.assertRaises(ValueError):
            D.render(BLOB, bytes(bad), D.parse_asm(ASM))
        with self.assertRaises(ValueError):     # IDO pads each .data section to 16
            D.render(dict(BLOB, end=0x1028), image(), D.parse_asm(ASM))
        with self.assertRaises(ValueError):
            D.parse_asm("dlabel D_80100000\n    /* 1000 80100000 */ .word foo bar\n")

    def test_c_string(self):
        self.assertEqual(D.c_string(b"ab\n\0\0\0"), "ab\\n")
        self.assertIsNone(D.c_string(b"ab\0x"))     # bytes after the terminator
        self.assertIsNone(D.c_string(b"\xa4\xa2\0\0"))  # EUC-JP stays raw bytes
        self.assertIsNone(D.c_string(b"\0\0\0\0"))

    @unittest.skipUnless(os.path.exists(os.path.join(HH, "tools/ido/7.1/cc")) and shutil.which("mips-linux-gnu-readelf"),
                         "IDO / binutils not available")
    def test_ido_layout(self):
        from elftools.elf.elffile import ELFFile
        text = D.render(BLOB, image(), D.parse_asm(ASM))
        with tempfile.TemporaryDirectory() as tmp:
            c, o = os.path.join(tmp, "d.c"), os.path.join(tmp, "d.o")
            with open(c, "w") as f:
                f.write(text)
            subprocess.run([os.path.join(HH, "tools/ido/7.1/cc"), "-c", "-G", "0", "-non_shared", "-Xcpluscomm",
                            "-mips2", "-O2", "-o", o, c], check=True, capture_output=True)
            with open(o, "rb") as f:
                elf = ELFFile(f)
                data = elf.get_section_by_name(".data").data()
                rel = {r["r_offset"] for r in elf.get_section_by_name(".rel.data").iter_relocations()}
                syms = {s.name: s["st_value"] for s in elf.get_section_by_name(".symtab").iter_symbols()}
        self.assertEqual(rel, {4, 8, 12, 0x24})
        rom = image()[0x1000:]
        self.assertEqual(len(data), len(rom))
        self.assertTrue(all(data[i:i + 4] == rom[i:i + 4] for i in range(0, len(rom), 4) if i not in rel))
        self.assertEqual(syms["D_80100014"], 0x14)
        self.assertEqual(syms["D_80100018"], 0x18)

    @unittest.skipUnless(os.path.exists(os.path.join(HH, "build/expanded.bin")) and D.listed_segments(),
                         "needs make setup")
    def test_generated_files_current(self):
        cwd = os.getcwd()
        try:
            self.assertEqual(D.generate(check=True), 0)
        finally:
            os.chdir(cwd)


if __name__ == "__main__":
    unittest.main()
