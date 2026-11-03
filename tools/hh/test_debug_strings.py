"""Focused regressions for segment identity, Japanese decoding and call evidence."""
import unittest
from pathlib import Path
import tempfile

import debug_strings as D


class DebugStringTests(unittest.TestCase):
    def test_binary_ranges_and_one_line_segment_end(self):
        yaml = '''  - name: main
    type: code
    start: 0x1000
    vram: 0x80000400
    subsegments:
      - [0x1000, c, main/80000400]
      - [0x1100, .data, data/main/data_80000500]
      - [0x1200, .rodata, main/80000400]
  - [0x1300, bin, bank]
  - name: file008
    type: code
    start: 0x1400
    vram: 0x80000400
    subsegments:
      - [0x1400, c, file008/80000400]
      - [0x1500, rodata]
  - [0x1600, bin, tail]
'''
        segs = D.segments(yaml)
        self.assertEqual(segs[0]['ranges'], [(0x1100, 0x1200, '.data', 'data/main/data_80000500'),
                                            (0x1200, 0x1300, '.rodata', 'main/80000400')])
        self.assertEqual(segs[1]['ranges'], [(0x1500, 0x1600, 'rodata', None)])

    def test_japanese_and_short_anchored_string(self):
        for enc in ('euc_jp',):
            raw = 'エラー発生'.encode(enc)
            self.assertIn(dict(text='エラー発生', encoding=enc), D.decodings(raw))
        data = b'\0' + 'メモリ不足\n'.encode('euc_jp') + b'\0X\0\xff\x01\0'
        x = data.index(b'X')
        strings = D.extract(data, 0, len(data), {x})
        self.assertEqual(strings[1][1][0]['text'], 'メモリ不足\n')
        self.assertEqual(strings[x][0], b'X')
        self.assertNotIn(x + 2, strings)
        marked = D.extract(b'\0B\x8c\0', 0, 4, {0, 1}, {0, 1})
        self.assertEqual(marked[0][0], b'')
        self.assertEqual(marked[1][1][0], dict(encoding='raw', text=r'B\x8c'))
        self.assertEqual(D.decodings('エラー発生'.encode('shift_jis')), [])

    def test_local_bss_and_foreign_bss_overlap(self):
        segs = [dict(name='a', start=0, end=0x80, vram=0x80000000, bss_size=0x80),
                dict(name='b', start=0x100, end=0x200, vram=0x80000000)]
        self.assertEqual(D.target_segment(segs, 'a', 0x80000090), 'a')
        self.assertIsNone(D.target_segment(segs, 'main', 0x80000090))
        self.assertIsNone(D.target_segment(segs[:1], 'main', 0x80000090))
        self.assertEqual(D.target_segment(segs[1:], 'main', 0x80000090), 'b')

    def test_straddle_recovers_full_path(self):
        data = b'../source/device/bridge.c\0'
        rows = D.extract(data, 0, 17, limit=len(data))
        self.assertEqual(rows[0][0], data[:-1])
        self.assertEqual(D.SOURCE.findall(rows[0][1][0]['text']), ['../source/device/bridge.c'])
        # The old rodata cut has an asm string directive for the misleading tail.
        rows = D.extract(data, 0, 17, {0, 17}, {17}, len(data), {0})
        self.assertEqual(rows[0][0], data[:-1])
        prefixed = b'{' + data
        rows = D.extract(prefixed, 0, len(prefixed), {0, 1}, (), preferred={1})
        self.assertNotIn(0, rows)
        self.assertEqual(rows[1][0], data[:-1])

    def test_per_call_scan_recovers_setup_before_branch(self):
        asm = '''/* 1000 80000000 3C048002 */ lui $a0, 0x8002
/* 1004 80000004 2484F000 */ addiu $a0, $a0, -0x1000
/* 1008 80000008 24050235 */ addiu $a1, $zero, 565
/* 100C 8000000C 10000001 */ b .L80000014
/* 1010 80000010 00000000 */ nop
/* 1014 80000014 0C046ABD */ jal func_8011AAF4
/* 1018 80000018 00000000 */ nop
/* 101C 8000001C 0C046ABD */ jal func_8011AAF4
/* 1020 80000020 00000000 */ nop
'''
        calls = list(D.debug_call_arguments(D.instructions(asm)))
        self.assertEqual((calls[0][1][0], calls[0][1][1]), (0x8001f000, 565))
        self.assertIsNone(calls[1][1][0])
        self.assertIsNone(calls[1][1][1])

    def test_alternative_arm_skips_an_earlier_call(self):
        asm = '''/* 1000 80000000 3C048002 */ lui $a0, 0x8002
/* 1004 80000004 10080005 */ beq $zero, $t0, .L8000001C
/* 1008 80000008 2484F000 */ addiu $a0, $a0, -0x1000
/* 100C 8000000C 0C000400 */ jal other
/* 1010 80000010 00000000 */ nop
/* 1014 80000014 03E00008 */ jr $ra
/* 1018 80000018 00000000 */ nop
/* 101C 8000001C 240504AC */ addiu $a1, $zero, 1196
/* 1020 80000020 0C046ABD */ jal func_8011AAF4
/* 1024 80000024 00000000 */ nop
'''
        calls = list(D.debug_call_arguments(D.instructions(asm)))
        self.assertEqual(calls[0][1][0], 0x8001f000)
        self.assertEqual(calls[0][1][1], 1196)

    def test_dead_fallthrough_is_not_a_path_but_indirect_entry_is(self):
        asm = '''/* 1000 80000000 3C048002 */ lui $a0, 0x8002
/* 1004 80000004 10000002 */ b .L80000010
/* 1008 80000008 00000000 */ nop
/* 100C 8000000C 8C440000 */ lw $a0, 0($v0)
/* 1010 80000010 2484F000 */ addiu $a0, $a0, -0x1000
/* 1014 80000014 24050123 */ addiu $a1, $zero, 0x123
/* 1018 80000018 0C046ABD */ jal func_8011AAF4
/* 101C 8000001C 00000000 */ nop
'''
        insns = D.instructions(asm)
        self.assertEqual(list(D.debug_call_arguments(insns))[0][1][0], 0x8001f000)
        self.assertIsNone(list(D.debug_call_arguments(insns, {0x8000000c}))[0][1][0])

    def test_only_pointer_relocations(self):
        asm = '''nonmatching func_80000000, 0x10
/* 1000 80000000 3C048001 */ lui $a0, %hi(D_80008000)
/* 1004 80000004 24848004 */ addiu $a0, $a0, %lo(D_80008000 + 0x4)
/* 1008 80000008 3C058001 */ lui $a1, %hi(D_80008000 + 0x4)
/* 100C 8000000C 24A58004 */ addiu $a1, $a1, %lo(D_80008000 + 0x4)
/* 1010 80000010 8CA68000 */ lw $a2, %lo(D_80008000)($a1)
'''
        self.assertEqual(D.asm_references(asm), [(0x80008004, 0x80000004), (0x80008004, 0x8000000c)])

    def test_c_definitions_not_declarations_or_comments(self):
        source = '''extern char D_80000000[];
extern void func_80000100(void);
void func_80000100(void) {
    /* D_80000004 and { */
    print("brace }", D_80000000);
}
void func_80000200(void) { print(D_80000008); }
'''
        bodies = list(D.c_functions(source))
        self.assertEqual([x[0] for x in bodies], ['func_80000100', 'func_80000200'])
        self.assertEqual(D.SYMBOL.findall(bodies[0][2]), [('80000000', '')])
        self.assertIn(b'a\n\xa4\xa2', list(D.c_bytes(r'a\n\244\242')))
        kr = 'void f(int);\nvoid other(void) { return; }\nvoid f(x, p)\ns32 x;\nvoid *p;\n{ print(D_80000000); }\n'
        self.assertEqual([x[0] for x in D.c_functions(kr)], ['other', 'f'])

    def test_call_delay_slot_line_and_stale_argument_kill(self):
        asm = '''/* 1000 80000000 3C048002 */ lui $a0, 0x8002
/* 1004 80000004 2484F000 */ addiu $a0, $a0, -0x1000
/* 1008 80000008 0C000400 */ jal func_80001000
/* 100C 8000000C 24050123 */ addiu $a1, $zero, 0x123
/* 1010 80000010 0C000400 */ jal func_80001000
/* 1014 80000014 00000000 */ nop
'''
        calls = list(D.call_arguments(D.instructions(asm)))
        self.assertEqual(calls[0][1][0], 0x8001f000)
        self.assertEqual(calls[0][1][1], 0x123)
        self.assertIsNone(calls[1][1][0])
        self.assertIsNone(calls[1][1][1])

    def test_floating_writes_and_control_flow_do_not_reuse_constants(self):
        asm = '''/* 1000 80000000 24050123 */ addiu $a1, $zero, 0x123
/* 1004 80000004 24080055 */ addiu $t0, $zero, 0x55
/* 1008 80000008 AFA80010 */ sw $t0, 0x10($sp)
/* 100C 8000000C E7A00010 */ swc1 $f0, 0x10($sp)
/* 1010 80000010 44050000 */ mfc1 $a1, $f0
/* 1014 80000014 0C000400 */ jal func_80001000
/* 1018 80000018 00000000 */ nop
/* 101C 8000001C 50000002 */ beql $zero, $zero, .L80000028
/* 1020 80000020 24050123 */ addiu $a1, $zero, 0x123
/* 1024 80000024 24040100 */ addiu $a0, $zero, 0x100
/* 1028 80000028 0C000400 */ jal func_80001000
/* 102C 8000002C 00000000 */ nop
'''
        calls = list(D.call_arguments(D.instructions(asm)))
        self.assertIsNone(calls[0][1][1])
        self.assertNotIn(4, calls[0][1])
        self.assertIsNone(calls[1][1][0])
        self.assertIsNone(calls[1][1][1])

    def test_end_to_end_overlapping_overlays_and_c_literal_concatenation(self):
        # Stay inside the workspace; TemporaryDirectory removes the tiny fixture.
        with tempfile.TemporaryDirectory(prefix='debug-strings-test-', dir=Path(__file__).resolve().parents[2] / 'build') as tmp:
            root = Path(tmp)

            def put(path, text):
                path = root / path
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text(text)

            yaml = ''
            image = bytearray(0x180)
            for seg, start, vram in [('main', 0, 0x80000000), ('file008', 0x80, 0x80100000),
                                     ('file009', 0x100, 0x80100000)]:
                yaml += f'''  - name: {seg}
    type: code
    start: 0x{start:X}
    vram: 0x{vram:X}
    subsegments:
      - [0x{start:X}, c, {seg}/{vram:08X}]
      - [0x{start + 0x40:X}, .data, data/{seg}/data_{vram + 0x40:08X}]
'''
                if seg == 'file008':
                    yaml += f'      - [0x{start + 0x47:X}, .rodata, file008/80100020]\n'
                raw = b'resident.c' if seg == 'main' else b'overlay message'
                image[start + 0x40:start + 0x40 + len(raw)] = raw
                put(f'asm/nonmatchings/{seg}/{vram:08X}/func_{vram:08X}.s', f'''nonmatching func_{vram:08X}, 0x10
glabel func_{vram:08X}
/* {start:X} {vram:08X} 3C048010 */ lui $a0, %hi(D_80100040)
/* {start + 4:X} {vram + 4:08X} 24840040 */ addiu $a0, $a0, %lo(D_80100040)
/* {start + 8:X} {vram + 8:08X} 0C000400 */ jal func_80001000
/* {start + 12:X} {vram + 12:08X} 00000000 */ nop
''')
                put(f'asm/data/{seg}.data.s', f'''dlabel D_{vram + 0x40:08X}
/* {start + 0x40:X} {vram + 0x40:08X} */ .asciz "{raw.decode()}"
''')
            yaml += '  - [0x180, bin, tail]\n'
            put('hybridheaven.yaml', yaml)
            put('src/file008/80100000.c', 'void func_80100000(void) { print("overlay " "message"); print(D_80000040); }')
            put('matched/file008/func_80100000.c', 'void func_80100000(void) { print(D_80100040); }')
            image[0xe0:0xe2] = b'X\0'
            put('src/data/file008/data_80100040.c', 'u8 D_80100060[2] = {88, 0};')
            (root / 'build').mkdir()
            (root / 'build/expanded.bin').write_bytes(image)
            rows, segs, functions = D.mine(root)
            by_address = {(r['segment'], r['address']): r for r in rows}
            first = by_address[('file008', '0x80100040')]
            second = by_address[('file009', '0x80100040')]
            self.assertEqual({r['segment'] for r in first['references']}, {'file008'})
            self.assertEqual({r['segment'] for r in second['references']}, {'file009'})
            self.assertEqual({r['kind'] for r in first['references']}, {'asm_hi_lo', 'c_literal', 'c_symbol'})
            self.assertEqual(by_address[('file008', '0x80100060')]['text'], 'X')
            self.assertEqual(by_address[('main', '0x80000040')]['source_paths'], ['resident.c'])
            self.assertEqual({r['segment'] for r in by_address[('main', '0x80000040')]['references']}, {'file008'})
            self.assertEqual({r['source_file'] for r in first['references']}, {'src/file008/80100000.c'})
            self.assertTrue(first['straddles_subsegment'])
            self.assertNotIn(('file008', '0x80100047'), by_address)
            self.assertIn('overlay message', D.source_map(rows, segs, functions))
            first['section'], first['data_owner'] = 'rodata', 'file008/80100020'
            self.assertEqual(list(D.ownership_mismatches(rows)),
                             [('src/file008/80100020.c', 'src/file008/80100000.c')])
            self.assertIn('Rodata owner versus referencing C file', D.source_map(rows, segs, functions))


if __name__ == '__main__':
    unittest.main()
