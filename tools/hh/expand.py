"""Unpack the ROM into an 'expanded' image: everything before the file area is copied
as-is, then every file from the master table is appended decompressed (16-byte aligned).
Writes build/expanded.bin and build/expanded.json (the manifest pack.py needs)."""
import sys, os, json
sys.path.insert(0, os.path.dirname(__file__))
import lzkn, filetable

def main(rom_path, out_dir):
    rom = open(rom_path, "rb").read()
    ft = filetable.read(rom)
    area_start = min(f["rom"] for f in ft if f["rom_end"] > f["rom"])
    area_end = max(f["rom_end"] for f in ft)
    img = bytearray(rom[:area_start]); man = {"area_start": area_start, "area_end": area_end,
                                           "rom_size": len(rom), "files": []}
    for f in ft:
        e = dict(f)
        if f["rom_end"] > f["rom"]:
            if f["compressed"]:
                data, total = lzkn.decode_file(rom, f["rom"])
                e["header_len"] = total
                e["slot_pad"] = rom[f["rom"] + total:f["rom_end"]].hex()
            else:
                data = rom[f["rom"]:f["rom_end"]]
            while len(img) % 16: img.append(0)
            e["exp"] = len(img); e["exp_len"] = len(data); img += data
        man["files"].append(e)
    man["tail"] = rom[area_end:].hex() if any(b != 0xFF for b in rom[area_end:]) else None
    os.makedirs(out_dir, exist_ok=True)
    open(os.path.join(out_dir, "expanded.bin"), "wb").write(img)
    json.dump(man, open(os.path.join(out_dir, "expanded.json"), "w"), indent=1)
    print("expanded image 0x%X bytes, %d files" % (len(img), sum(1 for f in ft if f["rom_end"] > f["rom"])))

if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
