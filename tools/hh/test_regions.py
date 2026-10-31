"""Regional isolation, MIPS boundaries, and executable source/worker checks."""
import json
import os
from pathlib import Path
import subprocess
import tempfile
import unittest
from unittest.mock import patch

import regions as R


def code(*words):
    return b''.join(w.to_bytes(4, 'big') for w in words)


class RegionTests(unittest.TestCase):
    def compare(self, target, mine, **kw):
        return R.compare(code(*target), code(*mine), minimum=4, maximum=4, **kw)

    def test_delay_slots_calls_and_switch_entries(self):
        ws = [0x10800005, 0, 0x0c004000, 0, 0x24020003, 0x24030004,
              0x03e00008, 0]
        bs = R.blocks(ws, table_targets=[4, 5])
        self.assertEqual([(b.start, b.end) for b in bs], [(0, 2), (2, 4), (4, 5), (5, 6), (6, 8)])
        self.assertEqual(bs[1].kind, 'call')
        # A branch target in a delay slot must not split the transfer pair.
        self.assertNotIn(1, [b.start for b in R.blocks(ws, table_targets=[1])])

    def test_region_partition_keeps_long_unsplittable_block(self):
        ws = [0x24020003]*170 + [0x03e00008, 0]
        bs = R.blocks(ws)
        self.assertEqual(R.split_regions(bs), [[0]])

    def test_exact_wrong_load_and_first_difference(self):
        target = [0x8e0e0010, 0x0c004000, 0, 0x03e00008, 0]
        mine = [0x8e0e0014] + target[1:]
        exact = self.compare(target, target)[0]
        changed = self.compare(target, mine)[0]
        self.assertEqual(exact['status'], 'matched')
        self.assertEqual(changed['status'], 'differs')
        self.assertEqual(changed['first_difference']['offset'], 0)
        self.assertIn('0x14', changed['first_difference']['attempt'])
        self.assertAlmostEqual(changed['score'], 2/3, places=6)

    def test_other_region_insert_delete_and_rewrite_do_not_change_score(self):
        prefix = [0x24080001, 0x25080001, 0x0c004000, 0]
        middle = [0x8e0e0010, 0x25ce0002, 0x0c008000, 0]
        suffix = [0x46000002, 0x46020800, 0x03e00008, 0]
        target = prefix + middle + suffix
        baseline = self.compare(target, target)
        # Target region 2 survives displacement, deletion and unrelated edits.
        for mine in ([0x34091234]*7 + prefix + middle + suffix,
                     middle + suffix, [0x46041000]*9 + [0x0c00c000, 0] + middle + suffix,
                     prefix + middle):
            report = self.compare(target, mine)
            for key in ('status', 'score', 'matching_instructions', 'extra_instructions', 'lines', 'start', 'end'):
                self.assertEqual(report[1][key], baseline[1][key], (key, mine))

    def test_missing_region_does_not_eat_later_region(self):
        target = ([0x24080001]*2 + [0x0c004000, 0] +
                  [0x46000002]*2 + [0x0c008000, 0] +
                  [0x8e0e0010]*2 + [0x03e00008, 0])
        rows = self.compare(target, target[:4] + target[8:])
        self.assertEqual(rows[1]['status'], 'missing')
        self.assertEqual(rows[2]['status'], 'matched')

    def test_branch_layout_normalized_but_wrong_internal_edge_differs(self):
        # Two branch destinations are inside the same region.
        target = [0x10800003, 0, 0x24020001, 0x24030002, 0x03e00008, 0]
        bad = [0x10800001] + target[1:]
        self.assertEqual(self.compare(target, target)[0]['status'], 'matched')
        self.assertNotEqual(self.compare(target, bad)[0]['status'], 'matched')

    def test_resolved_wrong_callee_not_masked(self):
        target = [0x24020001, 0x0c004000, 0, 0x03e00008, 0]
        mine = target.copy()
        mine[1] += 1
        row = self.compare(target, mine)[0]
        self.assertEqual(row['status'], 'differs')
        self.assertEqual(row['first_difference']['offset'], 4)

    def test_real_source_and_json_cli(self):
        source = R.W.HH/'docs/sol/task7-file099-attempt.c'
        report = R.check_source('func_8038B7E0', 'file099', source)
        self.assertGreater(len(report['regions']), 1)
        self.assertTrue(report['link_resolved'])
        self.assertIn('region 1 (lines ', R.human(report, 1))
        proc = subprocess.run([sys_executable(), str(R.W.HH/'tools/hh/regions.py'),
            'func_8038B7E0', 'file099', '--json'], capture_output=True, text=True, check=True)
        data = json.loads(proc.stdout)
        self.assertTrue(all(r['status'] == 'target' for r in data['regions']))
        self.assertEqual([r['start'] for r in data['regions']], [r['start'] for r in report['regions']])

    def test_compile_failure_cleans_scratch(self):
        created = []
        factory = tempfile.TemporaryDirectory
        def track(*args, **kwargs):
            manager = factory(*args, **kwargs)
            created.append(Path(manager.name))
            return manager
        with tempfile.TemporaryDirectory(dir=R.W.HH/'build') as td:
            path = Path(td)/'bad.c'
            path.write_text('this is not valid C\n')
            with patch.object(R.tempfile, 'TemporaryDirectory', side_effect=track), self.assertRaises(SystemExit):
                R.check_source('func_8038B7E0', 'file099', path)
        self.assertTrue(created)
        self.assertTrue(all(not p.exists() for p in created))

    def test_worker_flag_appends_report_and_saves_json(self):
        import shutil
        with tempfile.TemporaryDirectory(dir=R.W.HH/'build') as td:
            env = dict(os.environ, HH_ROOT=str(R.W.HH), REGIONS='1', TWIN='', THEORY='')
            subprocess.run(['bash', str(R.W.HH/'tools/swarm/prep2.sh'),
                'func_8038B7E0', 'file099', td], env=env, check=True, capture_output=True)
            prompt = (Path(td)/'prompt.md').read_text()
            self.assertIn('Fixed target regions', prompt)
            self.assertIn('Skeleton first', prompt)
            source = R.W.HH/'docs/sol/task7-file099-attempt.c'
            shutil.copy(source, Path(td)/'attempt.c')
            proc = subprocess.run(['bash', './check'], cwd=td, env=env, capture_output=True, text=True)
            self.assertIn('region 1 (lines ', proc.stdout)
            self.assertTrue((Path(td)/'.regions.json').exists(), proc.stdout + proc.stderr)
            self.assertEqual(json.loads((Path(td)/'.regions.json').read_text()),
                             json.loads((Path(td)/'.attempts/1.regions.json').read_text()))
            # A failed compile must not preserve the preceding successful JSON.
            (Path(td)/'attempt.c').write_text('invalid C\n')
            subprocess.run(['bash', './check'], cwd=td, env=env, capture_output=True)
            self.assertFalse((Path(td)/'.attempts/2.regions.json').exists())

    def test_source_uses_infile_string_encoding(self):
        import srcbuild
        from elftools.elf.elffile import ELFFile
        compile_file = srcbuild.compile_file
        pools = []
        def capture(text, td):
            obj, errors = compile_file(text, td)
            if obj:
                with open(obj, 'rb') as fh:
                    pools.append(ELFFile(fh).get_section_by_name('.rodata').data())
            return obj, errors
        with tempfile.TemporaryDirectory(dir=R.W.HH/'build') as td:
            path = Path(td)/'japanese.c'
            path.write_text('char *func_8038B7E0(void) { return "日本"; }\n')
            with patch.object(srcbuild, 'compile_file', side_effect=capture):
                R.check_source('func_8038B7E0', 'file099', path)
        self.assertIn('日本'.encode('euc-jp')+b'\0', pools[0])
        self.assertNotIn('日本'.encode('utf-8'), pools[0])


def sys_executable():
    import sys
    return sys.executable


if __name__ == '__main__':
    unittest.main()
