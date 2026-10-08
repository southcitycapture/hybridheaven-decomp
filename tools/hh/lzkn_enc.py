"""Matching encoder for the Hybrid Heaven LZ format (see lzkn.py).

Reproduces all 482 compressed files in the USA ROM byte-for-byte (2026-10-08).
Rules recovered from the original output:
  - greedy; at each position take the longest of: zero run, byte-repeat run, back-reference
  - ties: zero run > repeat run > back-reference
  - back-reference: length 4..33, distance 1..0x3DF (1024 - 33), nearest distance wins
  - repeat run (0xC0-0xDF): non-zero byte, length 3..32
  - zero run: 2..32 -> 0xE0|(n-2); 33..257 -> 0xFF, n-2
  - literal runs capped at 31 bytes
  - input is buffered 0x400 bytes at a time; the buffer is refilled once 0x21 or fewer
    lookahead bytes remain, and zero runs cannot extend past the current buffer end
    (buffer ends are always == 0x21 mod 0x400, the first one is 0x421)
"""
from collections import defaultdict

DEFAULT = dict(lmin=4, lmax=0x21, window=0x3DF, maxlit=0x1F, zmin=2, zmax=0x101,
               rmin=3, rmax=0x20, order="ZRL")


def encode(data, opts=None):
    o = dict(DEFAULT); o.update(opts or {})
    data = bytes(data); n = len(data)
    out = bytearray(); lit = bytearray()
    chains = defaultdict(list)          # 4-byte prefix -> positions (ascending)
    indexed = 0

    def index_upto(p):
        nonlocal indexed
        while indexed < p and indexed + 4 <= n:
            chains[data[indexed:indexed + 4]].append(indexed); indexed += 1

    def flush():
        nonlocal lit
        while lit:
            chunk = lit[:o["maxlit"]]
            out.append(0x80 | len(chunk)); out.extend(chunk); lit = lit[len(chunk):]

    buf_end = o.get("buf0", 0x21)
    i = 0
    while i < n:
        index_upto(i)
        # The original encoder reads input into a buffer 0x400 bytes at a time and only
        # refills when 0x21 or fewer bytes of lookahead remain; zero runs stop at the
        # buffer end (always == 0x21 mod 0x400).
        if o.get("blocklimit", True):
            while i + 0x21 >= buf_end: buf_end += 0x400
            lim = min(n, buf_end)
        else:
            lim = n
        z = 0
        while i + z < lim and data[i + z] == 0 and z < o["zmax"]: z += 1
        r = 0
        if data[i] != 0:
            while i + r < n and data[i + r] == data[i] and r < o["rmax"]: r += 1
        best_len = 0; best_off = 0
        if i + 4 <= n:
            maxl = min(o["lmax"], n - i)
            for s in reversed(chains.get(data[i:i + 4], ())):
                if i - s > o["window"]: break
                l = 4
                while l < maxl and data[s + l] == data[i + l]: l += 1
                if l > best_len:
                    best_len, best_off = l, i - s
                    if l == maxl: break
        cands = []
        if z >= o["zmin"]: cands.append(("Z", z))
        if r >= o["rmin"]: cands.append(("R", r))
        if best_len >= o["lmin"]: cands.append(("L", best_len))
        if not cands:
            lit.append(data[i]); i += 1
            if len(lit) == o["maxlit"]: flush()
            continue
        cands.sort(key=lambda c: (-c[1], o["order"].index(c[0])))
        kind, ln = cands[0]
        flush()
        if kind == "Z":
            out += bytes([0xE0 | (ln - 2)]) if ln <= 0x20 else bytes([0xFF, ln - 2])
        elif kind == "R":
            out += bytes([0xC0 | (ln - 2), data[i]])
        else:
            out += bytes([((ln - 2) << 2) | (best_off >> 8), best_off & 0xFF])
        i += ln
    flush()
    return out
