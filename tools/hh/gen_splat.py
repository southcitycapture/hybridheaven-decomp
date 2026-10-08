"""Generate splat.yaml for build/expanded.bin: main segment + every file from the master
file table in image order (code overlays as code segments, everything else as bin).
Per-overlay text/data split is a first guess (end of the last jr $ra)."""
import json
img = open("build/expanded.bin", "rb").read(); man = json.load(open("build/expanded.json"))

def text_end(b):
    last = max(k for k in range(0, len(b) - 3, 4) if b[k:k + 4] == b"\x03\xe0\x00\x08")
    return min(len(b), (last + 8 + 15) & ~15)

head = open("tools/hh/splat_head.yaml").read()
# original source-file boundaries (see NOTES.md); one C file per original file
SPLITS = {k: [int(x, 16) for x in v] for k, v in json.load(open("tools/hh/file_splits.json")).items()}
def c_lines(seg, start, vram):
    starts = SPLITS.get(seg, [start])
    return ["      - [0x%X, c, %s/%08X]" % (o, seg, vram + (o - start)) for o in starts]
head = head.replace("      - {MAIN_C}", "\n".join(c_lines("main", 0x1060, 0x80000460)).lstrip(" ").join(["      ", ""]) if False else "\n".join(c_lines("main", 0x1060, 0x80000460)))
L = [head.rstrip()]
files = sorted([f for f in man["files"] if "exp" in f], key=lambda f: f["exp"])
L.append("  - [0x4E7D0, bin, rom_4E7D0]   # music, sample banks, misc data (uncompressed)")
for f in files:
    b = img[f["exp"]:f["exp"] + f["exp_len"]]
    jr = sum(1 for k in range(0, len(b) - 3, 4) if b[k:k + 4] == b"\x03\xe0\x00\x08")
    name = "file%03d" % f["id"]
    if (f["vram"] >> 24) != 0x80 or jr < 3:
        L.append("  - [0x%X, bin, %s]   # vram 0x%08X%s" % (f["exp"], name, f["vram"], ", compressed" if f["compressed"] else ""))
        continue
    bss = (f["vram_end"] - f["vram"]) - f["exp_len"]
    L += ["  - name: %s" % name, "    type: code", "    start: 0x%X" % f["exp"],
          "    vram: 0x%08X" % f["vram"], "    exclusive_ram_id: slot%08X" % f["vram"]]
    if bss > 0: L.append("    bss_size: 0x%X" % bss)
    L.append("    subsegments:")
    L += c_lines(name, f["exp"], f["vram"])
    te = text_end(b)
    if te < len(b): L.append("      - [0x%X, data]" % (f["exp"] + te))
    if bss > 0: L.append("      - { type: bss, vram: 0x%08X }" % (f["vram"] + f["exp_len"]))
L.append("  - [0x%X]" % len(img))
open("hybridheaven.yaml", "w").write("\n".join(L) + "\n")
print("wrote hybridheaven.yaml")
