"""Known MIPS cases: wall precedence, delay slots, and saved-attempt identity."""
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import wall as W


def code(*ws):
    return b''.join(w.to_bytes(4, 'big') for w in ws)


class WallTests(unittest.TestCase):
    # Actual game prologue/epilogue idioms, with concrete relocation-bearing jal.
    target = code(0x27bdffe8, 0xafbf0014, 0x0c006c81, 0,
                  0x8fbf0014, 0x03e00008, 0x27bd0018)

    def classify(self, mine, target=None, **kwargs):
        target = self.target if target is None else target
        return W.classify(mine, target, vram=0x80001000, exact=mine, **kwargs)

    def test_exact_control(self):
        cls, details, route = self.classify(self.target)
        self.assertEqual(cls, 'match')
        self.assertIsNone(details['first_divergence'])
        self.assertEqual(route['tool'], 'srcbuild.py')

    def test_wrong_callee_precedes_symbols(self):
        mine = bytearray(self.target)
        mine[8:12] = code(0x0c006c82)
        cls, details, route = self.classify(bytes(mine), rel={8: 4})
        self.assertEqual(cls, 'calls')
        self.assertEqual(details['differing_calls']['0x8001B204'], dict(target=1, attempt=0))
        self.assertIn('target calls', route['note'])

    def test_call_multiplicity_precedes_size_and_cfg(self):
        mine = self.target[:16] + code(0x0c006c81, 0) + self.target[16:]
        cls, details, _ = self.classify(mine)
        self.assertEqual(cls, 'calls')
        self.assertTrue(details['size_mismatch'])
        self.assertEqual(details['differing_calls']['0x8001B204']['attempt'], 2)

    def test_symbol_aliases_use_address_not_spelling(self):
        cls, _, _ = self.classify(self.target, mine_refs={8: ('jal', 'func_8001B200', 4)},
                                  target_refs={8: ('jal', 'func_8001B204', 0)})
        self.assertEqual(cls, 'match')

    def test_delay_slot_cfg(self):
        # beq a0,zero,+3; delay; addiu v0,1; delay; jr ra; delay
        counts, edges = W.cfg(W.words(code(0x10800003, 0, 0x24020001, 0, 0x03e00008, 0)), 0)
        self.assertEqual(counts['blocks'], 3)
        self.assertEqual(counts['conditional_branches'], 1)
        self.assertEqual(edges[0], (0, 'conditional', 2, 1))

    def test_control_flow_precedes_registers(self):
        target = code(0x10800002, 0, 0x24020001, 0x03e00008, 0)
        mine = code(0x24020000, 0, 0x24020001, 0x03e00008, 0)
        cls, details, _ = self.classify(mine, target)
        self.assertEqual(cls, 'control_flow')
        self.assertIn('conditional_branches', details['differing_counts'])

    def test_same_counts_different_edges(self):
        target = code(0x10800002, 0, 0x24020001, 0x03e00008, 0)
        mine = code(0x10800001, 0, 0x24020001, 0x03e00008, 0)
        self.assertEqual(self.classify(mine, target)[0], 'control_flow')

    def test_jump_table_count_precedes_instruction_identity(self):
        self.assertEqual(self.classify(self.target, mine_tables=2, target_tables=3)[0], 'control_flow')

    def test_jump_table_destinations_start_blocks(self):
        counts, _ = W.cfg(W.words(code(0x01000008, 0, 0x24020001, 0x24030002, 0x03e00008, 0)),
                          0, 2, [2, 3])
        self.assertEqual(counts['blocks'], 3)

    def test_unmigrated_overlay_table_and_real_register_case(self):
        off, size, vram, asm = W.T.find_func('func_80247B6C', seg='file016')
        targets = W.target_table_targets(Path(asm).read_text(), off, size, vram)
        self.assertEqual(len(targets), 13)
        row = dict(func='func_8038B7E0', seg='file099', size=1348)
        r = W.check_source(row, str(W.HH/'docs/sol/task7-file099-attempt.c'))
        self.assertEqual(r['class'], 'registers_schedule')
        self.assertEqual(r['details']['matching_words'], 317)
        self.assertEqual(r['details']['frame']['target'][0], 40)
        self.assertEqual(r['details']['frame']['attempt'][0], 48)

    def test_register_schedule_and_frame(self):
        target = code(0x27bdffe8, 0x00804021, 0x01051021, 0x03e00008, 0x27bd0018)
        mine = code(0x27bdffe0, 0x00804821, 0x01251021, 0x03e00008, 0x27bd0020)
        cls, details, route = self.classify(mine, target)
        self.assertEqual(cls, 'registers_schedule')
        self.assertEqual(details['frame']['attempt'][0], 32)
        self.assertEqual(details['instruction_differences'][1]['attempt_gprs'][-1], 9)
        self.assertEqual(route['tool'], 'permute.py')

    def test_scheduled_instructions(self):
        target = code(0x24080001, 0x24090002, 0x03e00008, 0)
        mine = code(0x24090002, 0x24080001, 0x03e00008, 0)
        self.assertEqual(self.classify(mine, target)[0], 'registers_schedule')

    def test_non_address_constant_is_not_register_wall(self):
        target = code(0x24020001, 0x03e00008, 0)
        mine = code(0x24020002, 0x03e00008, 0)
        self.assertEqual(self.classify(mine, target)[0], 'instructions')

    def test_lui_float_constant_is_not_an_address(self):
        target = code(0x3c014000, 0x44810000, 0x03e00008, 0)
        mine = code(0x3c014080, 0x44810000, 0x03e00008, 0)
        self.assertEqual(self.classify(mine, target)[0], 'instructions')

    def test_relocated_data_address(self):
        target = code(0x3c088001, 0x8d020100, 0x03e00008, 0)
        mine = code(0x3c088002, 0x8d020100, 0x03e00008, 0)
        cls, details, route = self.classify(mine, target, rel={0: 5, 4: 6},
                                          mine_refs={0: ('hi', 'D_80020100', 0)},
                                          target_refs={0: ('hi', 'D_80010100', 0)})
        self.assertEqual(cls, 'symbols')
        self.assertEqual(details['first_divergence']['offset'], 0)
        self.assertEqual(route['tool'], 'addrfix.py')

    def test_rodata_mismatch_not_match(self):
        self.assertEqual(self.classify(self.target, rodata_equal=False)[0], 'symbols')

    def test_size_recorded_separately(self):
        mine = code(0x24080001) + self.target
        cls, details, _ = self.classify(mine)
        self.assertEqual(cls, 'size_mismatch')
        self.assertTrue(details['size_mismatch'])

    def test_jalr_register_rename_same_provenance(self):
        # lw t0/t1,0(a0); jalr t0/t1; nop
        target = code(0x8c880000, 0x0100f809, 0)
        mine = code(0x8c890000, 0x0120f809, 0)
        self.assertEqual(self.classify(mine, target)[0], 'registers_schedule')

    def test_inventory_includes_registered_but_nonmatching(self):
        report = dict(units=[dict(name='main/80001000', functions=[
            dict(name='a', size='8', fuzzy_match_percent=100.0),
            dict(name='b', size='12', fuzzy_match_percent=99.0)])])
        self.assertEqual(W.inventory(report), [dict(func='b', seg='main', size=12, file='80001000')])

    def test_best_attempt_and_overlay_ambiguity(self):
        root = Path(W.HH) / 'build' / 'wall'
        root.mkdir(parents=True, exist_ok=True)
        with tempfile.TemporaryDirectory(dir=root) as td:
            hh = Path(td)
            b = hh / 'queue' / 'batch'
            attempts = b / 'work' / 'func_80001000' / '.attempts'
            attempts.mkdir(parents=True)
            (b / 'results.jsonl').write_text(json.dumps(dict(func='func_80001000', segment='file008', verified='FAIL'))+'\n')
            for n, score in [(1, 990), (2, 500), (3, 990)]:
                (attempts / ('%d.c' % n)).write_text('/* saved */')
                (attempts / ('%d.ali' % n)).write_text(str(score))
            rejected = hh / 'matched_rejected' / 'file008' / 'func_80001000.c'
            rejected.parent.mkdir(parents=True)
            rejected.write_text('/* rejected */')
            rows = [dict(seg=seg, func='func_80001000') for seg in ('file008', 'file009')]
            with patch.object(W, 'HH', hh):
                index = W.attempt_index(rows)
            self.assertEqual(index[('file008', 'func_80001000')], sorted([str(attempts/'3.c'), str(rejected)]))
            self.assertEqual(index[('file009', 'func_80001000')], [])

    def test_no_attempt(self):
        row = dict(func='func_80001000', seg='main', size=8)
        self.assertEqual(W.check_row((row, []))['class'], 'no_attempt')


if __name__ == '__main__':
    unittest.main()
