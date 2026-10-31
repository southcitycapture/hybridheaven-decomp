"""Move a code segment's initialized .data out of splat's asm and into generated C.

Each `[rom, data]` blob of a segment listed in tools/hh/data_c_segments.txt becomes one C translation unit,
src/data/<seg>/data_<VRAM>.c, linked in the blob's place through a `[rom, .data, data/<seg>/data_<VRAM>]` splat
subsegment (tools/hh/gen_splat.py). The C defines every 4-aligned data label of the asm as a global array of
raw words, in address order, with the bytes taken from the ROM image:

  * a `.word SYM [+/- off]` in the asm is a relocation, so it is written as `(u32)SYM [+/- off]` (a symbol reference,
    never the resolved literal); every other word is a literal;
  * a label splat decoded as a NUL-terminated ASCII string is written as `char NAME[size] = "...";`
  * IDO aligns every global object to 4, so a label at an unaligned address cannot be its own C object: its bytes
    stay inside the preceding object and the label is noted in a comment (gen_extern_syms.py defines it at its
    address, like any other address-named label without a linked definition).

Segments whose data blob still holds .rodata (no per-file rodata split yet: not in rodata_segments.txt) are refused,
because turning that rodata into .data would freeze it out of the C files that own it.

The source asm is splat's output: asm/data/<ROM>.data.s before conversion, and splat's dump of the `.data`
subsegment (asm/data/data/<seg>/data_<VRAM>.data.s, not linked) after it, so regeneration is deterministic.

  data_to_c.py [SEG ...]   write the C files (default: every segment in data_c_segments.txt)
  data_to_c.py --check     exit 1 if any generated file is missing or differs
"""
import os
import re
import sys

HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
SEGMENTS_FILE = "tools/hh/data_c_segments.txt"
RODATA_SEGMENTS_FILE = "tools/hh/rodata_segments.txt"

ADDR = re.compile(r"^\s*/\* ([0-9A-F]+) ([0-9A-F]{8})(?: ([0-9A-F]+))? \*/ \.(\w+)\s*(.*?)\s*$")
LABEL = re.compile(r"^\s*dlabel\s+(\S+)\s*$")
RELOC = re.compile(r"^([A-Za-z_][\w.]*)(?:\s*([+-])\s*(0x[0-9A-Fa-f]+|\d+))?$")
ADDRESS_NAME = re.compile(r"^(?:D_|func_|B_|jtbl_)([0-9A-F]{8})$")


def unit_name(seg, vram):
    return "data/%s/data_%08X" % (seg, vram)


def listed_segments(path=None):
    path = path or os.path.join(HH, SEGMENTS_FILE)
    if not os.path.exists(path):
        return []
    with open(path) as f:
        return [line.split("#")[0].strip() for line in f if line.split("#")[0].strip()]


def parse_asm(text):
    """splat data asm -> labels [(name, vram)], relocs {vram: (sym, addend)}, literals {vram: (size, value)},
    strings {name}."""
    labels, relocs, words, strings = [], {}, {}, set()
    pending, current = [], None
    for line in text.splitlines():
        m = LABEL.match(line)
        if m:
            pending.append(m.group(1))
            current = m.group(1)
            continue
        m = ADDR.match(line)
        if not m:
            continue
        vram, op, arg = int(m.group(2), 16), m.group(4), m.group(5)
        for name in pending:
            labels.append((name, vram))
        pending = []
        size = {"word": 4, "short": 2, "half": 2, "byte": 1}.get(op)
        if size and re.fullmatch(r"-?(0x[0-9A-Fa-f]+|\d+)", arg):
            words[vram] = (size, int(arg, 0) & ((1 << 8 * size) - 1))
        elif op == "word":
            r = RELOC.match(arg)
            if not r:
                raise ValueError("unsupported .word operand %r at %08X" % (arg, vram))
            addend = int(r.group(3), 0) if r.group(3) else 0
            relocs[vram] = (r.group(1), -addend if r.group(2) == "-" else addend)
        elif op in ("asciz", "ascii"):
            if current is not None:
                strings.add(current)
        elif op not in ("float", "double"):
            raise ValueError("unsupported directive .%s at %08X" % (op, vram))
    if pending:
        raise ValueError("label(s) %s with no data" % ", ".join(pending))
    return labels, relocs, words, strings


def blobs(cfg, segments):
    """Data blobs of the listed segments in a splat config: dicts with seg, rom, end, vram, unit, asm."""
    segs = cfg["segments"]
    out = []
    for i, seg in enumerate(segs):
        if not isinstance(seg, dict) or seg.get("name") not in segments:
            continue
        nxt = segs[i + 1]
        seg_end = nxt[0] if isinstance(nxt, list) else nxt["start"]
        subs = [s for s in seg.get("subsegments", []) if isinstance(s, list)]
        for j, sub in enumerate(subs):
            rom = sub[0]
            end = subs[j + 1][0] if j + 1 < len(subs) else seg_end
            vram = seg["vram"] + rom - seg["start"]
            unit = unit_name(seg["name"], vram)
            if sub[1] == "data":
                asm = "asm/data/%X.data.s" % rom
            elif sub[1] == ".data" and len(sub) > 2 and sub[2] == unit:
                asm = "asm/data/%s.data.s" % unit
            else:
                continue
            out.append({"seg": seg["name"], "rom": rom, "end": end, "vram": vram, "unit": unit, "asm": asm})
    return out


def c_string(data):
    """Escaped C literal for a NUL-terminated printable ASCII string padded with NULs, else None."""
    nul = data.find(b"\0")
    if nul <= 0 or any(data[nul:]):
        return None
    out = []
    for b in data[:nul]:
        c = chr(b)
        if c in '"\\?':
            out.append("\\" + c)
        elif c == "\n":
            out.append("\\n")
        elif c == "\t":
            out.append("\\t")
        elif 0x20 <= b < 0x7F:
            out.append(c)
        else:
            return None
    return "".join(out)


def render(blob, image, parsed, source=None):
    """C source for one data blob. image: the expanded ROM bytes; parsed: parse_asm() of the blob's asm."""
    labels, relocs, words, strings = parsed
    start, end = blob["vram"], blob["vram"] + blob["end"] - blob["rom"]
    if start % 16 or end % 16:
        raise ValueError("%s: blob %08X-%08X is not 16-aligned" % (blob["unit"], start, end))
    data = image[blob["rom"]:blob["end"]]
    assert len(data) == end - start
    value = lambda a, n: int.from_bytes(data[a - start:a - start + n], "big")
    word = lambda a: value(a, 4)
    for a, (n, v) in words.items():
        if not start <= a <= end - n or a % n or value(a, n) != v:
            raise ValueError("%s: asm literal at %08X does not match the ROM" % (blob["unit"], a))
    for a in relocs:
        if not start <= a < end or a % 4:
            raise ValueError("%s: relocation at %08X outside the blob or unaligned" % (blob["unit"], a))
    labels = sorted(labels, key=lambda l: l[1])
    if not labels or labels[0][1] != start:
        raise ValueError("%s: no data label at the blob start %08X" % (blob["unit"], start))
    if labels[-1][1] >= end or len({a for _, a in labels}) != len(labels):
        raise ValueError("%s: label outside the blob or two labels at one address" % blob["unit"])
    # objects: one per 4-aligned label, running to the next 4-aligned label; unaligned labels become aliases
    objects, alias = [], {}
    for name, a in labels:
        if a % 4 == 0:
            objects.append({"name": name, "start": a, "aliases": []})
        else:
            objects[-1]["aliases"].append((name, a))
            alias[name] = (objects[-1]["name"], a - objects[-1]["start"])
    for k, obj in enumerate(objects):
        obj["end"] = objects[k + 1]["start"] if k + 1 < len(objects) else end
    local = {o["name"]: o for o in objects}

    def expr(sym, addend):
        if sym in alias:
            sym, off = alias[sym]
            addend += off
        if addend:
            return "(u32)%s %s 0x%X" % (sym, "+" if addend > 0 else "-", abs(addend))
        return "(u32)%s" % sym

    for a, (sym, addend) in relocs.items():
        m = ADDRESS_NAME.match(sym)
        target = local[sym]["start"] if sym in local else (int(m.group(1), 16) if m else None)
        if sym in alias:
            parent, off = alias[sym]
            target = local[parent]["start"] + off
        if target is not None and word(a) != (target + addend) & 0xFFFFFFFF:
            raise ValueError("%s: relocation %s%+d at %08X does not match the ROM word %08X" % (blob["unit"], sym, addend, a, word(a)))

    body, externs, forward = [], set(), set()
    for obj in objects:
        size = obj["end"] - obj["start"]
        chunk = data[obj["start"] - start:obj["end"] - start]
        note = "".join("/* %s = %s + 0x%X (unaligned: IDO aligns C objects to 4) */\n" % (n, obj["name"], a - obj["start"])
                       for n, a in obj["aliases"])
        rel = [a for a in relocs if obj["start"] <= a < obj["end"]]
        text = c_string(chunk) if obj["name"] in strings and not rel and not obj["aliases"] else None
        if text is not None:
            body.append('%schar %s[0x%X] = "%s";\n' % (note, obj["name"], size, text))
            obj["type"] = "char"
            continue
        # element type: the width splat disassembled the object with (.short/.byte tables), else raw words
        widths = {words[a][0] for a in words if obj["start"] <= a < obj["end"]}
        n = 4 if rel or len(widths) != 1 else widths.pop()
        obj["type"] = {4: "u32", 2: "u16", 1: "u8"}[n]
        items = []
        for a in range(obj["start"], obj["end"], n):
            if a in relocs:
                sym, addend = relocs[a]
                base = alias[sym][0] if sym in alias else sym
                (forward if base in local else externs).add(base)
                items.append(expr(sym, addend))
            else:
                items.append("0x%0*X" % (2 * n, value(a, n)))
        per = {4: 4, 2: 8, 1: 16}[n]
        lines = ["    " + ", ".join(items[k:k + per]) + "," for k in range(0, len(items), per)]
        body.append("%s%s %s[0x%X] = {\n%s\n};\n" % (note, obj["type"], obj["name"], size // n, "\n".join(lines)))
    head = ["/* Generated by tools/hh/data_to_c.py from %s (%s .data, ROM 0x%X-0x%X): do not edit. */\n"
            % (source or blob["asm"], blob["seg"], blob["rom"], blob["end"]),
            "typedef unsigned int u32;\ntypedef unsigned short u16;\ntypedef unsigned char u8;\n\n"]
    for sym in sorted(externs):
        head.append("extern void %s();\n" % sym if sym.startswith("func_") else "extern u8 %s[];\n" % sym)
    for sym in sorted(forward):
        head.append("extern %s %s[];\n" % (local[sym]["type"], sym))
    if externs or forward:
        head.append("\n")
    return "".join(head) + "\n".join(body)


def defined_symbols(text):
    """Global objects a generated data file defines (for gen_extern_syms.py)."""
    return re.findall(r"^(?:u32|u16|u8|char) (\w+)\[", text, re.M)


def generate(segments=None, check=False):
    import yaml
    os.chdir(HH)
    listed = listed_segments()
    segments = segments or listed
    rodata_split = set(open(RODATA_SEGMENTS_FILE).read().split()) if os.path.exists(RODATA_SEGMENTS_FILE) else set()
    bad = [s for s in segments if s not in rodata_split]
    if bad:
        raise SystemExit("data_to_c: %s still keep .rodata in their data blob (not in %s)" % (" ".join(bad), RODATA_SEGMENTS_FILE))
    cfg = yaml.safe_load(open("hybridheaven.yaml"))
    image = open(cfg["options"]["target_path"], "rb").read()
    found = blobs(cfg, set(segments))
    missing = set(segments) - {b["seg"] for b in found}
    if missing:
        raise SystemExit("data_to_c: no data blob for %s in hybridheaven.yaml" % " ".join(sorted(missing)))
    stale = 0
    for blob in found:
        text = render(blob, image, parse_asm(open(blob["asm"]).read()),
                      source="asm/data/%s.data.s" % blob["unit"])
        path = "src/%s.c" % blob["unit"]
        old = open(path).read() if os.path.exists(path) else None
        if old == text:
            continue
        stale += 1
        if check:
            print("data_to_c: %s is out of date" % path)
        else:
            os.makedirs(os.path.dirname(path), exist_ok=True)
            open(path, "w").write(text)
    print("data_to_c: %d blobs, %d %s" % (len(found), stale, "stale" if check else "written"))
    return stale


if __name__ == "__main__":
    args = sys.argv[1:]
    check = "--check" in args
    sys.exit(1 if generate([a for a in args if a != "--check"] or None, check) and check else 0)
