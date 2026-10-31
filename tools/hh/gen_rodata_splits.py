"""Per-file .rodata for code segments, inferred from the bytes and the code's references.

IDO lays out each C file's .rodata as [arrays/strings/consts][late: float/double literals, jump tables], aligned and
padded to 16, files in link order. So walking a segment's rodata word by word, regular data that follows late data
starts a new file, at the next 16-byte boundary. Late words are known from the code: lwc1/ldc1 targets (4/8 bytes) and
jump tables.

Each rodata group belongs to the C file whose functions use its late items (those are always file-local). When the
functions using two consecutive groups sit in one C file, that file is really two: a text split is added at the first
16-aligned function after the last user of the earlier group (any aligned function in that gap gives the same bytes).

  gen_rodata_splits.py [SEG ...]   -> tools/hh/rodata_splits.json {seg: {"start", "files": {cfile: vram}}},
                                      and new text splits in tools/hh/file_splits.json (marked in rodata_text_splits.json)
"""
import glob, json, re, sys, collections
PRESERVE_TEXT = "--preserve-text" in sys.argv
SEGS_ARG = [a for a in sys.argv[1:] if a != "--preserve-text"]
sys.argv = ["x", "none"]; sys.path.insert(0, "tools/hh"); import srcbuild as S
img = S.IMG
REF = re.compile(r"\b(lwc1|ldc1|lw|lh|lhu|lb|lbu|ld|addiu|sw|sh|sb|sd|swc1|sdc1)\s+(?:[^,\n]+,\s*)+%lo\(((?:D|jtbl)_([0-9A-F]{8}))(?:\+(0x[0-9A-F]+))?\)")
STORES = {"sw", "sh", "sb", "sd", "swc1", "sdc1"}

def jump_tables(text):
    # Monolithic splat data has adjacent dlabels without enddlabel directives.
    # Stop at either boundary; otherwise a table swallows later readonly objects.
    return re.finditer(r"^dlabel (jtbl_([0-9A-F]{8}))\n(.*?)(?=^(?:enddlabel|dlabel|\.section)\b|\Z)",
                       text, re.S | re.M)

def yaml_segments():
    out, cur = {}, None
    for l in open("hybridheaven.yaml"):
        m = re.match(r"  - name: (\w+)", l)
        if m: cur = m.group(1); out[cur] = {}; continue
        if cur is None: continue
        m = re.match(r"    (start|vram): (0x[0-9A-F]+)", l)
        if m: out[cur][m.group(1)] = int(m.group(2), 16)
        # a generic data span, or one gen_splat.py links from generated C (data_to_c.py)
        m = re.match(r"\s+- \[0x([0-9A-F]+), (?:data|\.data, data/\w+/data_[0-9A-F]{8})\]", l)
        if m and "vram" in out[cur]: out[cur]["data"] = out[cur]["vram"] + int(m.group(1), 16) - out[cur]["start"]
        m = re.match(r"\s+- \{ type: bss, vram: 0x([0-9A-F]+)", l)
        if m: out[cur]["bss"] = int(m.group(1), 16)
    # A readonly tail exists even when the original object has no BSS. `bss`
    # here is the end of initialized bytes, not a requirement for a BSS section.
    manifest = json.load(open("build/expanded.json"))
    for f in manifest["files"]:
        seg = "file%03d" % f["id"]
        if seg in out and "exp_len" in f:
            out[seg].setdefault("bss", f["vram"] + f["exp_len"])
    return {k: v for k, v in out.items() if "data" in v and "bss" in v}

def analyse(seg, sv):
    v2o = lambda v: sv["start"] + v - sv["vram"]
    word = lambda v: int.from_bytes(img[v2o(v):v2o(v) + 4], "big")
    cfs = sorted({p.split("/")[3] for p in glob.glob("asm/nonmatchings/%s/*/func_*.s" % seg)}, key=lambda c: int(c, 16))
    ents = [e + (cf,) for cf in cfs for e in S.entries(seg, cf)]       # (name, path, off, size, vram, cf)
    idx = {e[0]: k for k, e in enumerate(ents)}
    late, owners, stored, jtbls = {}, collections.defaultdict(set), set(), set()
    for cf in cfs:
        for p in glob.glob("asm/nonmatchings/%s/%s/*.s" % (seg, cf)):
            fn = p.split("/")[-1][:-2]; t = open(p).read()
            for m in REF.finditer(t):
                a = int(m.group(3), 16) + (int(m.group(4), 16) if m.group(4) else 0)
                if not sv["data"] <= a < sv["bss"]: continue
                if m.group(1) in STORES: stored.add(a)
                if fn in idx: owners[a].add(idx[fn])
                if m.group(1) in ("lwc1", "ldc1"): late[a] = 4 if m.group(1) == "lwc1" else 8
            for m in jump_tables(t):
                late[int(m.group(2), 16)] = 4 * len(re.findall(r"\.word", m.group(3))); jtbls.add(int(m.group(2), 16))
    # jump tables still in the segment's data file (first pass, before splat migrates them into functions)
    for p in glob.glob("asm/data/%s/*.s" % seg) + glob.glob("asm/data/data/%s/*.s" % seg) + glob.glob("asm/data/*.s"):
        for m in jump_tables(open(p).read()):
            a = int(m.group(2), 16)
            if sv["data"] <= a < sv["bss"]: late.setdefault(a, 4 * len(re.findall(r"\.word", m.group(3)))); jtbls.add(a)
    if not late: return None
    lo = (max([a for a in stored] or [sv["data"]]) + 4)                 # .rodata starts after the last written address
    lo = min([a for a in late if a >= lo] or [None]) if any(a >= lo for a in late) else None
    if lo is None: return None
    lo &= ~0xF
    lateword = {k for a, n in late.items() if a >= lo for k in range(a, a + n, 4)}
    splits0 = sorted(set(int(x, 16) for x in json.load(open("tools/hh/file_splits.json")).get(seg, [])))
    def cur_file(j): return max(x for x in splits0 if x <= ents[j][2])
    late_file = {a: collections.Counter(cur_file(j) for j in owners[a]).most_common(1)[0][0] for a in late if owners.get(a)}
    starts, last_late_end, last_owner = [lo], None, None
    for v in range(lo, sv["bss"], 4):
        if v in late_file:                                  # a late item: file-local, so a change of user file is a new file
            if last_owner is not None and late_file[v] != last_owner and v % 16 == 0 and v > starts[-1]: starts.append(v)
            last_owner = late_file[v]
        if v in lateword: last_late_end = v + 4; continue
        if word(v) == 0: continue
        if last_late_end is not None:
            s = (last_late_end + 15) & ~15
            if v >= s and s > starts[-1]: starts.append(s)
            last_late_end = None; last_owner = None
    groups = [(s, starts[i + 1] if i + 1 < len(starts) else sv["bss"]) for i, s in enumerate(starts)]
    # owner of a group: the function indices using its LATE items (file-local), else any reference
    def users(s, e, only_late):
        return sorted({o for a, os_ in owners.items() if s <= a < e and (not only_late or a in late) for o in os_})
    gu = [users(s, e, True) or users(s, e, False) for s, e in groups]
    splits = set(int(x, 16) for x in json.load(open("tools/hh/file_splits.json")).get(seg, []))
    new_splits = []
    for (g0, u0), (g1, u1) in zip(zip(groups, gu), zip(groups[1:], gu[1:])):
        if not u0 or not u1: continue
        a, b = max(u0), min(u1)
        if a >= b: continue                                            # cross-file const reference; nothing to split
        if any(ents[j][2] in splits for j in range(a + 1, b + 1)): continue
        cand = [j for j in range(a + 1, b + 1) if ents[j][2] % 16 == 0]
        if cand: new_splits.append(ents[cand[0]][2])
    return groups, gu, ents, new_splits, jtbls

def file_of_index(ents, splits, j):
    off = ents[j][2]; st = max(s for s in splits if s <= off)
    return st

def preserved_layout(seg, sv, analysis):
    """Keep frozen text units, including units containing multiple original pools.

    A later reference back into an earlier pool is shared data, not ownership.
    End each unit after its last literal/table, rounded to IDO's object alignment.
    Interleaved readonly objects are retained explicitly by the source instead
    of demanding new text boundaries that could invalidate frozen C declarations.
    """
    tables = {}
    paths = glob.glob("asm/nonmatchings/%s/*/func_*.s" % seg)
    for p in paths + glob.glob("asm/data/%s/*.s" % seg) + glob.glob("asm/data/data/%s/*.s" % seg) + glob.glob("asm/data/*.s"):
        for m in jump_tables(open(p).read()):
            tables[int(m[2], 16)] = 4 * len(re.findall(r"\.word", m[3]))
    cursor = analysis[0][0][0]
    files = {}
    for cf in sorted({e[-1] for e in analysis[2]}, key=lambda c: int(c, 16)):
        ends = []
        for p in glob.glob("asm/nonmatchings/%s/%s/func_*.s" % (seg, cf)):
            text = open(p).read()
            for m in REF.finditer(text):
                a = int(m[3], 16) + (int(m[4], 16) if m[4] else 0)
                if cursor <= a < sv["bss"] and m[1] in ("lwc1", "ldc1"):
                    ends.append(a + (8 if m[1] == "ldc1" else 4))
            for m in re.finditer(r"%lo\(jtbl_([0-9A-F]{8})\)", text):
                a = int(m[1], 16)
                if cursor <= a < sv["bss"]:
                    if a not in tables: raise ValueError("unknown jump table: " + m[1])
                    ends.append(a + tables[a])
        if ends:
            files[cf] = "%08X" % cursor
            cursor = (max(ends) + 15) & ~15
    # A final string-only object is independently placeable from its regular refs.
    for (s, e), users in zip(analysis[0], analysis[1]):
        if s >= cursor and users:
            cf = analysis[2][min(users)][-1]
            if cf not in files: files[cf] = "%08X" % cursor
            cursor = e
    return {"start": "%08X" % analysis[0][0][0], "files": files, "orphans": [],
            "preserve_text": True}

if __name__ == "__main__":
    segs = yaml_segments()
    fs = json.load(open("tools/hh/file_splits.json"))
    added = json.load(open("tools/hh/rodata_text_splits.json")) if glob.glob("tools/hh/rodata_text_splits.json") else {}
    out = json.load(open("tools/hh/rodata_splits.json")) if glob.glob("tools/hh/rodata_splits.json") else {}
    enabled = open("tools/hh/rodata_segments.txt").read().split() if glob.glob("tools/hh/rodata_segments.txt") else []
    for seg in (SEGS_ARG or enabled):
        if seg not in segs: continue
        r = analyse(seg, segs[seg])
        if not r: continue
        if PRESERVE_TEXT or out.get(seg, {}).get("preserve_text"):
            out[seg] = preserved_layout(seg, segs[seg], r)
            print("%s: %d readonly units, frozen text boundaries preserved" % (seg, len(out[seg]["files"])))
            continue
        groups, gu, ents, new, r_jtbl = r
        sp = sorted(set(int(x, 16) for x in fs.get(seg, [])) | set(new))
        fs[seg] = ["0x%X" % x for x in sp]
        added[seg] = sorted(set(added.get(seg, [])) | {"0x%X" % x for x in new})
        sv = segs[seg]; files = {}; orphans = []; merged = []
        v2o = lambda v: sv["start"] + v - sv["vram"]
        def points_into_text(s, e):
            """any word in [s, e) that is an address inside this segment's code (a jump table splat didn't label)"""
            return any(sv["vram"] <= int.from_bytes(img[v2o(v):v2o(v) + 4], "big") < sv["data"] for v in range(s, e, 4))
        for (s, e), u in zip(groups, gu):
            if not u: continue
            cnt = collections.Counter(file_of_index(ents, sp, j) for j in u)
            st = cnt.most_common(1)[0][0]
            cf = "%08X" % (sv["vram"] + st - sv["start"])
            if cf not in files: files[cf] = "%08X" % s
            elif not any(s <= a < e for a in r_jtbl) and not points_into_text(s, e):   # no jump table: another
                orphans.append("%08X" % s)                    # object's const data (e.g. a libm const): plain rodata
            else: merged.append("%08X" % s)                   # a jump table (always file-local): a boundary we couldn't place
        if merged:      # a jump table we can't give its own file yet: leave this segment on the old layout (one data blob)
            out.pop(seg, None); fs[seg] = ["0x%X" % x for x in sorted(set(int(x, 16) for x in fs.get(seg, [])) - set(new))]
            print("%s: %d unplaced rodata boundary(ies): segment kept on the old layout" % (seg, len(merged))); continue
        out[seg] = {"start": "%08X" % groups[0][0], "files": files, "orphans": orphans}
        print("%s: %d rodata groups, %d files with rodata, %d new text splits, %d data-only, %d unplaced" % (seg, len(groups), len(files), len(new), len(orphans), len(merged)))
    json.dump(fs, open("tools/hh/file_splits.json", "w"), indent=1)
    json.dump(added, open("tools/hh/rodata_text_splits.json", "w"), indent=1)
    json.dump(out, open("tools/hh/rodata_splits.json", "w"), indent=1)
