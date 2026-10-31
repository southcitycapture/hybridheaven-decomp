"""Explicit source-owned BSS spans, shared by splat and the in-file linker."""
import json


def owners():
    return {tuple(key.split('/')): tuple(int(v, 16) for v in value)
            for key, value in json.load(open('tools/hh/bss_splits.json')).items()}


def subsegments(segment, start, end, layout):
    spans = sorted((addr, size, cf) for (seg, cf), (addr, size) in layout.items() if seg == segment)
    if not spans:
        return ['      - { type: bss, vram: 0x%08X }' % start]
    out, cursor = [], start
    for address, size, cf in spans:
        if not start <= cursor <= address < address + size <= end or address % 16 or size % 16:
            raise ValueError('invalid/overlapping BSS ownership in ' + segment)
        if cursor < address:
            # Reuse the old generic name for the head, avoiding a stale assembly
            # input when regenerating an existing checkout without deleting asm/.
            if cursor == start:
                out.append('      - { type: bss, vram: 0x%08X }' % cursor)
            else:
                out.append('      - { type: bss, vram: 0x%08X, name: %s_bss_%08X }' % (cursor, segment, cursor))
        out.append('      - { type: .bss, vram: 0x%08X, name: %s/%s }' % (address, segment, cf))
        cursor = address + size
    if cursor < end:
        out.append('      - { type: bss, vram: 0x%08X, name: %s_bss_%08X }' % (cursor, segment, cursor))
    return out
