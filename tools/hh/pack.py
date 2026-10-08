"""Pack an expanded image (see expand.py) back into a ROM: recompress each file and
put it back at its table offset. Usage: pack.py expanded.bin expanded.json out.z64"""
import sys, os, json
sys.path.insert(0, os.path.dirname(__file__))
import lzkn_enc

def main(img_path, man_path, out_path):
    img = open(img_path, "rb").read(); man = json.load(open(man_path))
    rom = bytearray(b"\xFF" * man["rom_size"])
    rom[:man["area_start"]] = img[:man["area_start"]]
    for f in man["files"]:
        if "exp" not in f: continue
        data = img[f["exp"]:f["exp"] + f["exp_len"]]
        if f["compressed"]:
            body = lzkn_enc.encode(data)
            blob = (len(body) + 4).to_bytes(4, "big") + body + bytes.fromhex(f["slot_pad"])
        else:
            blob = data
        if len(blob) != f["rom_end"] - f["rom"]:
            sys.exit("file %d no longer fits its slot (0x%X vs 0x%X): the file table needs relocating"
                     % (f["id"], len(blob), f["rom_end"] - f["rom"]))
        rom[f["rom"]:f["rom_end"]] = blob
    if man.get("tail"): rom[man["area_end"]:] = bytes.fromhex(man["tail"])
    open(out_path, "wb").write(rom)

if __name__ == "__main__":
    main(*sys.argv[1:4])
