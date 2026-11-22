import unittest
from pathlib import Path
from unittest.mock import patch

import registry_sync as R


class RegistrySyncTest(unittest.TestCase):
    def test_literal_and_dependencies_from_source(self):
        source = '''#include "common.h"
extern f32 D_80000080;
extern void func_80000018(f32);

void func_80000008(void) {
    /* A brace } is not the end of the definition. */
    func_80000018(75.0f);
}
void func_80000018(f32 x) {
    D_80000080 = x;
}
'''
        name = 'func_80000008'
        span = R.definitions(source)[name]
        text = R.recipe('fixture', '80000008', name, source, span)
        self.assertIn('extern void func_80000018(f32);', text)
        self.assertIn('func_80000018(75.0f);', text)
        self.assertNotIn('D_80000080', text)
        self.assertNotEqual(R.body_tokens('return "a b";'), R.body_tokens('return "ab";'))

    def test_refuses_a_render_that_changes_a_neighbour(self):
        name, other = 'func_80000008', 'func_80000018'
        source = f'int {name}(void) {{ return 75; }}\nint {other}(void) {{ return 2; }}\n'
        old = {name: f'int {name}(void) {{ return 70 + 5; }}\n',
               other: f'int {other}(void) {{ return 2; }}\n'}
        with patch.object(Path, 'exists', return_value=True), patch.object(Path, 'read_text', return_value=source), \
             patch.object(R.F, 'verify', return_value=(True, 'ok')), \
             patch.object(R, 'verify_render', return_value='file .text differs (including asm neighbours)') as verify:
            result = R.unit((('fixture', '80000008'), old))
            self.assertEqual(result[other], ('in sync', None))
            self.assertEqual(result[name], ('cannot sync: file .text differs (including asm neighbours)', None))
            self.assertEqual(verify.call_args.args[3], [name, other])
            self.assertIn('return 75;', verify.call_args.args[2][name])


if __name__ == '__main__':
    unittest.main()
