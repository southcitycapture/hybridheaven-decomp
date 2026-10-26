import unittest
import argparse
from pathlib import Path
import subprocess
import tempfile

from switch_check import verdict, combine_history, prepare, git, parse_allow_missing


class SwitchCheckTests(unittest.TestCase):
    def test_temporary_merge_resolves_history_without_touching_source_refs(self):
        with tempfile.TemporaryDirectory(dir='build') as td:
            directory = Path(td).resolve()
            root = directory / 'source'
            subprocess.run(['git', 'init', '--quiet', '--initial-branch=sol-rodata', str(root)], check=True)
            (root / 'src/main').mkdir(parents=True)
            (root / 'src/main/file.c').write_text('void func_80000000(void) {}\n')
            (root / 'dashboard').mkdir()
            history = root / 'dashboard/history.jsonl'
            history.write_text('{"t":1}\n')
            def commit():
                git(root, 'add', '.')
                git(root, '-c', 'user.name=Fixture', '-c', 'user.email=fixture@localhost', 'commit', '-qm', 'fixture')
                return git(root, 'rev-parse', 'HEAD')
            commit()
            git(root, 'checkout', '--quiet', '-b', 'master')
            history.write_text('{"t":1}\n{"t":2}\n')
            master = commit()
            git(root, 'checkout', '--quiet', 'sol-rodata')
            history.write_text('{"t":1}\n{"t":3}\n')
            rodata = commit()
            refs = git(root, 'show-ref')
            checkout = directory / 'checkout'
            prepare(root, checkout, rodata, master, directory / 'check.log')
            self.assertEqual(git(root, 'show-ref'), refs)
            self.assertEqual(git(root, 'status', '--porcelain'), '')
            self.assertEqual(git(checkout, 'branch', '--show-current'), 'switch-check')
            self.assertEqual((checkout / 'dashboard/history.jsonl').read_text(), '{"t":1}\n{"t":2}\n{"t":3}\n')
            self.assertEqual(git(checkout, 'diff', '--name-only', '--diff-filter=U'), '')

    def test_concurrent_history_appends_keep_both_points(self):
        first = '{"t":1,"matched_code":10}'
        left = '{"t":3,"matched_code":30}'
        right = '{"t":2,"matched_code":20}'
        self.assertEqual(combine_history(first + '\n' + left, first + '\n' + right),
                         first + '\n' + right + '\n' + left + '\n')

    def audit(self, **changes):
        audit = dict(after=101, master=100, lost_before=[], missing_master=[])
        audit.update(changes)
        return audit

    def test_more_functions_cannot_hide_a_lost_identity(self):
        self.assertFalse(verdict(self.audit(missing_master=[['file001', 'func_80000000']]), True, True))
        self.assertFalse(verdict(self.audit(lost_before=[['file001', 'func_80000004']]), True, True))

    def test_all_gates_are_required(self):
        self.assertTrue(verdict(self.audit(), True, True))
        self.assertFalse(verdict(self.audit(after=99), True, True))
        self.assertFalse(verdict(self.audit(), False, True))
        self.assertFalse(verdict(self.audit(), True, False))

    def test_explicit_master_gaps_do_not_waive_other_gates(self):
        allowed = parse_allow_missing('file028:func_801F8008,file028:func_801FC490')
        audit = self.audit(missing_master=[list(key) for key in sorted(allowed)])
        self.assertTrue(verdict(audit, True, True, allowed))
        self.assertFalse(verdict(audit, True, True))
        self.assertFalse(verdict(dict(audit, missing_master=audit['missing_master'] +
                                     [['file027', 'func_801F8008']]), True, True, allowed))
        self.assertFalse(verdict(dict(audit, lost_before=[['file028', 'func_801F8008']]), True, True, allowed))
        self.assertFalse(verdict(dict(audit, after=99), True, True, allowed))
        self.assertFalse(verdict(audit, False, True, allowed))
        self.assertFalse(verdict(audit, True, False, allowed))
        self.assertTrue(verdict(self.audit(), True, True, allowed))  # a repaired gap needs no waiver

    def test_allow_list_requires_complete_explicit_identities(self):
        for value in ('', 'file028:*', '*:func_801F8008', 'file028', 'file028:func_801F8008,',
                      'file028:func_801F8008:extra'):
            with self.subTest(value=value), self.assertRaises(argparse.ArgumentTypeError):
                parse_allow_missing(value)


if __name__ == '__main__':
    unittest.main()
