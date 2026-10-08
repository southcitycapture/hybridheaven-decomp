"""Hybrid Heaven master file table ("NisitenmA-Ichigo" header at vram 0x80038FE0).
624 entries, ids 1..624: ROM start/end at table+0x10+4*(id-1) (bit 31 = compressed),
RAM start/end pairs at vram 0x80037C5C + 8*(id-1)."""
import struct
R = lambda va: va - 0x80000400 + 0x1000
def read(rom):
    u = lambda o: struct.unpack(">I", rom[o:o + 4])[0]
    T, V = R(0x80038FE0), R(0x80037C5C)
    out = []
    for i in range(1, 625):
        a, b = u(T + 0x10 + 4 * (i - 1)), u(T + 0x14 + 4 * (i - 1))
        out.append(dict(id=i, rom=a & 0x7FFFFFFF, rom_end=b & 0x7FFFFFFF, compressed=bool(a >> 31),
                        vram=u(V + 8 * (i - 1)), vram_end=u(V + 8 * (i - 1) + 4)))
    return out
