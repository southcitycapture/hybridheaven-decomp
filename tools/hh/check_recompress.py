"""Recompress every compressed file and compare with the original ROM bytes."""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from multiprocessing import Pool
import lzkn, lzkn_enc, filetable
ROM = open(os.path.join(os.path.dirname(__file__), "../../baserom/baserom.us.z64"), "rb").read()

def check(f):
    s = f["rom"]; total = int.from_bytes(ROM[s:s + 4], "big")
    orig = ROM[s + 4:s + total]
    raw, _ = lzkn.decode_file(ROM, s)
    enc = lzkn_enc.encode(raw)
    if enc == orig: return (f["id"], True, None, len(orig))
    m = next((k for k in range(min(len(enc), len(orig))) if enc[k] != orig[k]), min(len(enc), len(orig)))
    return (f["id"], False, m, len(orig))

if __name__ == "__main__":
    files = [f for f in filetable.read(ROM) if f["compressed"] and f["rom_end"] > f["rom"]]
    with Pool(os.cpu_count()) as p:
        res = p.map(check, files, chunksize=1)
    ok = [r for r in res if r[1]]; bad = [r for r in res if not r[1]]
    print("match %d / %d" % (len(ok), len(res)))
    for r in bad[:40]: print("  id %d differs at byte %d of %d" % (r[0], r[2], r[3]))
