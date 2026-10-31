"""Recover wrong saved literal values from matched instruction relocations.

Only proposes C edits when all uses of a compiled literal agree on the original
scalar bytes. Scheduling, symbol placement and the full file still need the
normal integration check.
"""
from collections import defaultdict
from pathlib import Path
import re
import struct
import tempfile

from elftools.elf.elffile import ELFFile
import wall as W

FLOAT = re.compile(r'(?<![\w.])(-?(?:\d+\.\d*|\.\d+)(?:[eE][-+]?\d+)?[fF]?)(?![\w.])')


def corrected(S, seg, name, source, snippet):
    off, size, vram, asm = S.try_func.find_func(name, seg=seg)
    constants = {n: (kind, bits) for n, bits, kind in S.LATE_ITEM.findall(S._rd(asm))}
    if not constants:
        return None
    with tempfile.TemporaryDirectory(dir='build') as td:
        path = W.stage(source, td, dict(seg=seg, func=name))
        obj = str(Path(td) / 'values.o')
        try:
            S.try_func.compile_c(path, '7.1', '-O2', obj)
            mine, rel = S.try_func.func_bytes(obj, name)
        except (Exception, SystemExit):
            return None
        while len(mine) > size and mine[-4:] == b'\0' * 4:
            mine = mine[:-4]
        if S.try_func.compare(mine, rel, S.IMG[off:off+size])[2]:
            return None
        refs, _ = W.object_info(obj, name)
        import addrfix
        target = addrfix.target_refs(asm, vram)
        mapping = defaultdict(set)
        with open(obj, 'rb') as fh:
            elf = ELFFile(fh)
            ro = elf.get_section_by_name('.rodata')
            if ro is None:
                return None
            data = ro.data()
        for pos, (kind, symbol, addend) in refs.items():
            wanted = target.get(pos)
            if symbol != '<section .rodata>' or not wanted or wanted[1] not in constants or wanted[2]:
                continue
            typ, bits = constants[wanted[1]]
            length = 4 if typ == 'float' else 8
            got = data[addend:addend+length].hex().upper()
            mapping[typ, got].add(bits)
        changes = []
        def replace(m):
            token = m[1]
            typ = 'float' if token[-1:].lower() == 'f' else 'double'
            value = float(token.rstrip('fF'))
            bits = struct.pack('>f' if typ == 'float' else '>d', value).hex().upper()
            values = mapping.get((typ, bits), set())
            if len(values) != 1:
                return token
            wanted = next(iter(values))
            if wanted == bits:
                return token
            new = repr(struct.unpack('>f' if typ == 'float' else '>d', bytes.fromhex(wanted))[0])
            new += 'f' if typ == 'float' else ''
            changes.append((token, new))
            return new
        out = FLOAT.sub(replace, snippet)
        return (out, changes) if changes else None
