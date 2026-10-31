"""Multiply padding boundaries and real ELF relocation/layout regressions."""
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile
import unittest

from elftools.elf.elffile import ELFFile
import mulfix as M


MUL_S, MUL_D, DIV_S, DIV_D = 0x46020802, 0x46220802, 0x46020803, 0x46220803
ADD = 0x24420001


class MulfixTests(unittest.TestCase):
    def test_pairs_labels_division_and_existing_padding(self):
        for mul in (MUL_S, MUL_D):
            self.assertEqual(M.insertion_points([mul, MUL_S, ADD]), [1])
            self.assertEqual(M.insertion_points([0x10800002, 0, mul, ADD]), [3])
            self.assertEqual(M.insertion_points([mul, ADD]), [])
            self.assertEqual(M.insertion_points([0x10800003, 0, mul, 0, ADD]), [])
            # a destination that is itself a nop is still a label after a multiply
            self.assertEqual(M.insertion_points([0x10800002, 0, mul, 0, ADD]), [3])
        for div in (DIV_S, DIV_D):
            self.assertEqual(M.insertion_points([0x10800002, 0, div, ADD]), [])
            self.assertEqual(M.insertion_points([div, MUL_S, ADD]), [])

    def test_backward_likely_and_cop1_destinations(self):
        for branch in (0x5480fffe, 0x4500fffe, 0x0480fffe):
            self.assertEqual(M.insertion_points([MUL_S, ADD, branch, 0]), [1])

    def test_return_label_of_leaf_with_early_return(self):
        JR = M.JR_RA
        # func_8002EA88 shape: early inline `jr $ra`, final mul.s; jr $ra; nop
        early = [0x14400003, 0, JR, 0, ADD, MUL_S, JR, 0]
        self.assertEqual(M.insertion_points(early, [(0, len(early))]), [6])
        self.assertEqual(M.insertion_points(early), [])                      # rule 3 needs function ranges
        # one jr $ra (no early return): no return label, no padding (func_8002DD00)
        single = [ADD, MUL_S, JR, 0]
        self.assertEqual(M.insertion_points(single, [(0, 4)]), [])
        # the delay slot was filled from before the jr: the label could not have been there (func_801C87E0)
        filled = [JR, 0, MUL_S, JR, ADD]
        self.assertEqual(M.insertion_points(filled, [(0, 5)]), [])
        # only the final jr $ra holds the return label; mid-function returns are not padded (func_801D44A4)
        mid = [MUL_S, JR, 0, ADD, JR, 0]
        self.assertEqual(M.insertion_points(mid, [(0, 6)]), [])
        # ranges are per function: two one-return functions are not one function with an early return
        two = [JR, 0, ADD, MUL_S, JR, 0]
        self.assertEqual(M.insertion_points(two, [(0, 2), (2, 6)]), [])
        self.assertEqual(M.insertion_points(two, [(0, 6)]), [4])
        # idempotent once padded
        padded = early[:6] + [0] + early[6:]
        self.assertEqual(M.insertion_points(padded, [(0, len(padded))]), [])

    @unittest.skipUnless(shutil.which('mips-linux-gnu-as'), 'requires MIPS binutils')
    def test_real_elf_relocation_symbols_sizes_and_idempotence(self):
        source = '''.set noreorder
.text
.globl f
.ent f
f:
beq $4,$0,label
nop
mul.s $f2,$f2,$f4
label:
addiu $2,$2,1
mul.d $f6,$f6,$f8
mul.s $f2,$f2,$f4
lui $8,%hi(label)
addiu $8,$8,%lo(label)
j label
nop
jr $31
nop
.end f
.globl g
.ent g
g:
jr $31
nop
.end g
.section .rodata
.word label, f, g
.data
.word label
'''
        with tempfile.TemporaryDirectory(dir='build') as td:
            src, obj, linked = [Path(td)/n for n in ('test.s', 'test.o', 'test.elf')]
            src.write_text(source)
            subprocess.run(['mips-linux-gnu-as', '-EB', '-march=vr4300', '-o', str(obj), str(src)], check=True)
            def read(path):
                with path.open('rb') as fh:
                    elf = ELFFile(fh)
                    syms = {s.name: (s['st_value'], s['st_size']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
                    sections = {s.name: s.data() for s in elf.iter_sections() if s.name in ('.text', '.rodata', '.data', '.rel.text')}
                return syms, sections
            oldsyms, old = read(obj)
            oldwords = struct.unpack('>%dI' % (len(old['.text'])//4), old['.text'])
            self.assertEqual(M.fix(obj), 2)
            syms, data = read(obj)
            self.assertEqual(syms['label'][0], oldsyms['label'][0] + 4)
            self.assertEqual(syms['g'][0], oldsyms['g'][0] + 8)
            self.assertEqual(syms['f'][1], oldsyms['f'][1] + 8)
            ws = list(struct.unpack('>%dI' % (len(data['.text'])//4), data['.text']))
            self.assertEqual(ws[0] & 0xffff, 3)  # skip padding, land on label's instruction
            self.assertEqual(ws[2:5], [oldwords[2], 0, ADD])
            self.assertEqual(ws[5:8], [oldwords[4], 0, oldwords[5]])
            offsets = lambda b: [struct.unpack_from('>I', b, o)[0] for o in range(0, len(b), 8)]
            self.assertEqual(offsets(data['.rel.text']), [o+8 for o in offsets(old['.rel.text'])])
            subprocess.run(['mips-linux-gnu-ld', '-EB', '-Ttext=0x80010000', '-e', 'f', '-o', str(linked), str(obj)], check=True)
            ls, ld = read(linked)
            label, g = ls['label'][0], ls['g'][0]
            self.assertEqual(struct.unpack_from('>III', ld['.rodata']), (label, 0x80010000, g))
            self.assertEqual(struct.unpack_from('>I', ld['.data'])[0], label)
            lw = struct.unpack('>%dI' % (len(ld['.text'])//4), ld['.text'])
            self.assertEqual(((lw[8] & 0xffff) << 16) + ((lw[9] & 0xffff) - (0x10000 if lw[9] & 0x8000 else 0)), label)
            self.assertEqual((lw[10] & 0x3ffffff) << 2, label & 0xfffffff)
            fixed = obj.read_bytes()
            self.assertEqual(M.fix(obj), 0)
            self.assertEqual(obj.read_bytes(), fixed)

    @unittest.skipUnless(Path('tools/ido/7.1/cc').exists(), 'requires IDO 7.1')
    def test_ido_return_label_and_branch_destination(self):
        """IDO puts its return label before the final `j $31` only when there is an early return."""
        source = (
            'float early(float a, float b, int n) { if (n) return a; b = b + a; return a * b; }\n'
            'float single(float a, float b, float c) { return a - b * c; }\n'
            'float join(float a, float b, int n) { if (n) { a = a * b; } return a; }\n')
        with tempfile.TemporaryDirectory(dir='build') as td:
            src, obj = Path(td)/'t.c', Path(td)/'t.o'
            src.write_text(source)
            subprocess.run(['tools/ido/7.1/cc', '-c', '-G', '0', '-non_shared', '-Xcpluscomm', '-mips2', '-O2',
                            '-o', str(obj), str(src)], check=True)
            def bodies():
                with obj.open('rb') as fh:
                    elf = ELFFile(fh)
                    text = elf.get_section_by_name('.text').data()
                    return {s.name: text[s['st_value']:s['st_value'] + s['st_size']]
                            for s in elf.get_section_by_name('.symtab').iter_symbols()
                            if s['st_info']['type'] == 'STT_FUNC'}
            before = bodies()
            self.assertEqual(M.fix(obj), 2)
            after = bodies()
            def after_mul(name):
                ws = struct.unpack('>%dI' % (len(after[name]) // 4), after[name])
                k = next(i for i, w in enumerate(ws) if M.is_mul(w))
                return ws[k + 1:k + 3]
            self.assertEqual(after_mul('early'), (0, M.JR_RA))                   # rule 3
            self.assertEqual(after['single'], before['single'])                  # one return: no label
            self.assertEqual(after_mul('join')[0], 0)                            # rule 2
            self.assertEqual(len(after['join']), len(before['join']) + 4)
            self.assertEqual(M.fix(obj), 0)
