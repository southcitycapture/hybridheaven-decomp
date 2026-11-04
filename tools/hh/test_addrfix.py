"""Address-only discovery must follow actual source provenance, not recipes."""
import unittest
from unittest.mock import patch

import addrfix
import srcbuild


class WallCandidateTests(unittest.TestCase):
    def test_asm_recipe_is_reoffered_but_c_library_and_blocklist_are_not(self):
        row = dict(seg='test', func='func_80000000', **{'class': 'symbols'}, attempt_source='attempt.c')
        with patch.object(srcbuild, 'file_of', return_value='file'), \
             patch.object(srcbuild, 'LIBFILES', set()), \
             patch.object(srcbuild, 'link_blocked', return_value=set()), \
             patch.object(srcbuild, 'source_has_function', return_value=False) as present:
            self.assertTrue(addrfix.wall_candidate(row))
            present.return_value = True
            self.assertFalse(addrfix.wall_candidate(row))
            present.return_value = False
            with patch.object(srcbuild, 'LIBFILES', {('test', 'file')}):
                self.assertFalse(addrfix.wall_candidate(row))
            with patch.object(srcbuild, 'link_blocked', return_value={('test', 'func_80000000')}):
                self.assertFalse(addrfix.wall_candidate(row))
        self.assertFalse(addrfix.wall_candidate(dict(row, **{'class': 'instructions'})))
        self.assertFalse(addrfix.wall_candidate(dict(row, attempt_source=None)))
