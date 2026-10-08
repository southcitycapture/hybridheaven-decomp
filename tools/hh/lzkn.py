"""Hybrid Heaven (N64) LZ decoder, a Konami LZKN-family format.

File layout: u32 big-endian total length (header included), then the stream.
Stream codes:
  0x00-0x7F + 1 byte : copy (b>>2)+2 bytes from distance ((b&3)<<8)|next   (distance 1..1023)
  0x80-0xBF          : copy (b&0x3F) literal bytes
  0xC0-0xDF + 1 byte : repeat next byte (b&0x1F)+2 times
  0xE0-0xFE          : write (b&0x1F)+2 zero bytes
  0xFF + 1 byte      : write next+2 zero bytes
Worked out 2026-10-08 against file 8 (main game code): the whole stream decodes
cleanly and 1509 of 1526 internal jal targets land on function boundaries.
"""
import struct

def decode_stream(buf, start, end):
    out = bytearray(); i = start
    while i < end:
        c = buf[i]
        if c < 0x80:
            n = (c >> 2) + 2; o = ((c & 3) << 8) | buf[i + 1]; i += 2
            if o == 0 or o > len(out):
                raise ValueError("bad back-reference at input 0x%X" % (i - 2))
            for _ in range(n):
                out.append(out[-o])
        elif c < 0xC0:
            n = c & 0x3F; out += buf[i + 1:i + 1 + n]; i += 1 + n
        elif c < 0xE0:
            out += bytes([buf[i + 1]]) * ((c & 0x1F) + 2); i += 2
        elif c < 0xFF:
            out += bytes((c & 0x1F) + 2); i += 1
        else:
            out += bytes(buf[i + 1] + 2); i += 2
    if i != end:
        raise ValueError("stream overran its end (0x%X != 0x%X)" % (i, end))
    return out

def decode_file(buf, rom_start):
    total = struct.unpack(">I", buf[rom_start:rom_start + 4])[0]
    return decode_stream(buf, rom_start + 4, rom_start + total), total
