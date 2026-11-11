"""Generate splat.yaml for build/expanded.bin: main segment + every file from the master
file table in image order (code overlays as code segments, everything else as bin).
Per-overlay text/data split is a first guess (end of the last jr $ra)."""
import json
import bss_layout
BSS = bss_layout.owners()
img = open("build/expanded.bin", "rb").read(); man = json.load(open("build/expanded.json"))

def text_end(b):
    last = max(k for k in range(0, len(b) - 3, 4) if b[k:k + 4] == b"\x03\xe0\x00\x08")
    return min(len(b), (last + 8 + 15) & ~15)

head = open("tools/hh/splat_head.yaml").read()
# original source-file boundaries (see NOTES.md); one C file per original file
SPLITS = {k: [int(x, 16) for x in v] for k, v in json.load(open("tools/hh/file_splits.json")).items()}
# Entire zero-only alignment blocks after otherwise complete C objects. These
# are linker padding, not C objects or instructions (Task 31).
TEXT_PADDING = json.load(open("tools/hh/text_padding.json"))
# Verified text extents for code files missed by the three-return heuristic.
# file099: one debug stage/level selector, 0x544 bytes plus 0xC alignment;
# the remainder is pointer tables and strings, not instructions.
TEXT_ENDS = {"file099": 0x550}
def c_lines(seg, start, vram, end):
    starts = SPLITS.get(seg, [start])
    out = []
    for i, o in enumerate(starts):
        unit = "%s/%08X" % (seg, vram + o - start)
        out.append("      - [0x%X, c, %s]" % (o, unit))
        pad = TEXT_PADDING.get(unit, 0)
        if pad:
            stop = starts[i + 1] if i + 1 < len(starts) else end
            assert pad > 0 and pad % 16 == 0 and stop - pad > o and stop % 16 == 0
            assert img[stop - pad:stop] == b"\0" * pad, "nonzero text padding: " + unit
            out.append("      - [0x%X, pad]" % (stop - pad))
    return out
head = head.replace("      - {MAIN_C}", "\n".join(c_lines("main", 0x1060, 0x80000460, 0x35D20)))
# Library writable sections have real original storage, just like drvrnew's
# parameter arrays and sptask's tmp_task. Do not append a second copy of them
# to the generic main data/BSS spans. Addresses are constrained by the compiled
# objects' HI16/LO16 relocations and verified by the whole-ROM build.
LIBRARY = json.load(open('tools/hh/libultra.json'))
data_spans = [(0x8004AB60, 0x190, 'main/8002C850')]
bss_spans = [(0x800CBE20, 0x40, 'main/800269F0')]
for unit, entry in LIBRARY.items():
    for section, span in entry.get('storage', {}).items():
        assert unit.startswith('main/') and section in ('.data', '.bss')
        address, size = (int(value, 16) for value in span)
        (data_spans if section == '.data' else bss_spans).append((address, size, unit))
main_data, cursor = [], 0x80035120
for address, size, unit in sorted(data_spans):
    assert cursor <= address and address % 16 == size % 16 == 0
    if cursor < address:
        main_data.append('      - [0x%X, data]' % (cursor - 0x80000000 + 0xC00))
    main_data.append('      - [0x%X, .data, %s]' % (address - 0x80000000 + 0xC00, unit))
    cursor = address + size
main_data.append('      - [0x%X, data]' % (cursor - 0x80000000 + 0xC00))
main_bss, cursor = [], 0x8004DBD0
for address, size, unit in sorted(bss_spans):
    assert cursor <= address < address + size <= 0x800CE990 and address % 16 == size % 16 == 0
    if cursor < address:
        name = 'main_bss_head' if cursor == 0x8004DBD0 else 'main_bss_%08X' % cursor
        main_bss.append('      - { type: bss, vram: 0x%08X, name: %s }' % (cursor, name))
    main_bss.append('      - { type: .bss, vram: 0x%08X, name: %s }' % (address, unit))
    cursor = address + size
if cursor < 0x800CE990:
    main_bss.append('      - { type: bss, vram: 0x%08X, name: main_bss_tail }' % cursor)
head = head.replace('      - {MAIN_DATA}', '\n'.join(main_data))
head = head.replace('      - {MAIN_BSS}', '\n'.join(main_bss))
L = [head.rstrip()]
files = sorted([f for f in man["files"] if "exp" in f], key=lambda f: f["exp"])
L.append("  - [0x4E7D0, bin, rom_4E7D0]   # music, sample banks, misc data (uncompressed)")
for f in files:
    b = img[f["exp"]:f["exp"] + f["exp_len"]]
    jr = sum(1 for k in range(0, len(b) - 3, 4) if b[k:k + 4] == b"\x03\xe0\x00\x08")
    name = "file%03d" % f["id"]
    if (f["vram"] >> 24) != 0x80 or (jr < 3 and name not in TEXT_ENDS):
        L.append("  - [0x%X, bin, %s]   # vram 0x%08X%s" % (f["exp"], name, f["vram"], ", compressed" if f["compressed"] else ""))
        continue
    bss = (f["vram_end"] - f["vram"]) - f["exp_len"]
    L += ["  - name: %s" % name, "    type: code", "    start: 0x%X" % f["exp"],
          "    vram: 0x%08X" % f["vram"], "    exclusive_ram_id: slot%08X" % f["vram"]]
    if bss > 0: L.append("    bss_size: 0x%X" % bss)
    L.append("    subsegments:")
    te = TEXT_ENDS[name] if name in TEXT_ENDS else text_end(b)
    L += c_lines(name, f["exp"], f["vram"], f["exp"] + te)
    if te < len(b): L.append("      - [0x%X, data]" % (f["exp"] + te))
    if bss > 0: L += bss_layout.subsegments(name, f['vram'] + f['exp_len'], f['vram_end'], BSS)
L.append("  - [0x%X]" % len(img))
# per-file .rodata subsegments (tools/hh/rodata_splits.json, from gen_rodata_splits.py), after each segment's data line
import os, re
import data_to_c
RO = json.load(open("tools/hh/rodata_splits.json")) if os.path.exists("tools/hh/rodata_splits.json") else {}
# segments whose .rodata is split per C file (tools/hh/rodata_segments.txt); the rest keep one data blob for now
RO_SEGS = set(open("tools/hh/rodata_segments.txt").read().split()) if os.path.exists("tools/hh/rodata_segments.txt") else set()
if os.environ.get("RODATA_SEGS"): RO_SEGS = set(os.environ["RODATA_SEGS"].split(","))
out, cur = [], {}
# A segment can have several data subsegments (including source-owned .data).
# Insert rodata only after its final generic data span.
last_data, seg = {}, None
for line in "\n".join(L).split("\n"):
    m = re.match(r"  - name: (\w+)", line)
    if m: seg = m.group(1)
    m = re.match(r"      - \[0x([0-9A-F]+), data\]", line)
    if m: last_data[seg] = int(m.group(1), 16)
for line in "\n".join(L).split("\n"):
    out.append(line)
    m = re.match(r"  - name: (\w+)", line)
    if m: cur = {"name": m.group(1)}; continue
    m = re.match(r"    (start|vram): (0x[0-9A-F]+)", line)
    if m: cur[m.group(1)] = int(m.group(2), 16); continue
    m = re.match(r"      - \[0x([0-9A-F]+), data\]", line)
    seg = cur.get("name")
    if m and seg in RO and seg in RO_SEGS and int(m.group(1), 16) == last_data[seg]:
        rom = lambda v: cur["start"] + int(v, 16) - cur["vram"]
        r = RO[seg]; first = min(r["files"].values())
        if int(r["start"], 16) < int(first, 16): out.append("      - [0x%X, rodata]" % rom(r["start"]))
        ro = [(int(v, 16), "      - [0x%X, .rodata, %s/%s]" % (rom(v), seg, cf)) for cf, v in r["files"].items()]
        ro += [(int(v, 16), "      - [0x%X, rodata]" % rom(v)) for v in r.get("orphans", [])]   # data-only objects
        out += [l for v, l in sorted(ro)]
L = out
# initialized .data moved into generated C (tools/hh/data_to_c.py writes src/data/<seg>/data_<VRAM>.c) for the
# segments in tools/hh/data_c_segments.txt: each generic data span links that C object's .data instead
DATA_C = set(data_to_c.listed_segments())
if "DATA_C_SEGS" in os.environ: DATA_C = set(filter(None, os.environ["DATA_C_SEGS"].split(",")))
out, cur = [], {}
for line in L:
    m = re.match(r"  - name: (\w+)", line)
    if m: cur = {"name": m.group(1)}
    m = re.match(r"    (start|vram): (0x[0-9A-F]+)", line)
    if m: cur[m.group(1)] = int(m.group(2), 16)
    m = re.match(r"      - \[0x([0-9A-F]+), data\]\s*$", line)
    if m and cur.get("name") in DATA_C:
        rom = int(m.group(1), 16)
        line = "      - [0x%X, .data, %s]" % (rom, data_to_c.unit_name(cur["name"], cur["vram"] + rom - cur["start"]))
    out.append(line)
L = out
open("hybridheaven.yaml", "w").write("\n".join(L) + "\n")
print("wrote hybridheaven.yaml")
