"""Linked-ROM data accounting, with asm-processor placeholders excluded.

objdiff's synthetic function objects are useful for code, but omit standalone
data and don't pair compiler-local constants with address-named asm symbols.
Use the actual link layout for data, and a pre-injection compiler object to
prove which bytes came from C. Never award credit merely for a matching ROM.
"""
import io
import json
import os
import re
import subprocess
import sys

from elftools.elf.elffile import ELFFile

DATA_SECTIONS = (".data", ".rodata")


def object_data(path):
    with open(path, "rb") as f:
        elf = ELFFile(f)
        sections = {s.name: s.data() for s in elf.iter_sections() if s.name in DATA_SECTIONS}
        symbols = {s.name: s["st_value"] for s in elf.get_section_by_name(".symtab").iter_symbols()}
        # Explicit C objects can consist entirely of zeroes. Anonymous zero-only
        # gaps, however, may just be alignment left behind by an asm placeholder.
        objects = {name: [] for name in DATA_SECTIONS}
        for s in elf.get_section_by_name(".symtab").iter_symbols():
            if s["st_info"]["type"] == "STT_OBJECT" and isinstance(s["st_shndx"], int):
                name = elf.get_section(s["st_shndx"]).name
                if name in objects and not s.name.startswith("_asmpp_"):
                    objects[name].append((s["st_value"], s["st_value"] + s["st_size"]))
        return sections, symbols, objects


def assembly_mask(functions, symbols, sections):
    """Locate the exact placeholder bytes asm-processor overwrites.

    Mirror asm_processor.py's to_copy and moved_late_rodata calculations on
    the *pre*-injection object, including its misaligned-double adjustment.
    This also covers _ro_, _mrg_, and padding GLOBAL_ASM blocks, not just funcs.
    """
    masks = {name: bytearray(len(sections.get(name, b""))) for name in DATA_SECTIONS}
    active = []
    last = 0

    def mark(name, pos, count):
        assert 0 <= pos <= pos + count <= len(masks[name]), (name, pos, count)
        masks[name][pos:pos + count] = b"\1" * count

    for function in functions:
        if any(name is not None and name not in symbols for name, _ in function.data.values()):
            continue  # #ifdef'ed out, just as in asm-processor
        active.append(function)
        for section in DATA_SECTIONS:
            name, sizing = function.data[section]
            if name is not None:
                mark(section, symbols[name], sizing.size)
                if section == ".rodata":
                    last = symbols[name] + sizing.size
    rodata = sections.get(".rodata", b"")
    for function in active:
        for i, dummy in enumerate(function.late_rodata_dummy_bytes):
            pos = rodata.index(dummy, last)
            mark(".rodata", pos, 4)
            if i == 0 and len(function.late_rodata_dummy_bytes) > 1 and rodata[pos + 4:pos + 8] == b"\0" * 4:
                pos += 4
                mark(".rodata", pos, 4)
            last = pos + 4
        if function.jtbl_rodata_size:
            assert function.late_rodata_dummy_bytes
            mark(".rodata", last, function.jtbl_rodata_size)
            last += function.jtbl_rodata_size
    return masks


def c_ranges(raw, final, mask, objects):
    """C-owned contiguous ranges; discard anonymous zero-only alignment gaps."""
    assert len(raw) == len(final) == len(mask), "compiler/build data layouts differ; run make"
    ranges = []
    start = 0
    while start < len(mask):
        if mask[start]:
            start += 1
            continue
        end = start + 1
        while end < len(mask) and not mask[end]:
            end += 1
        assert raw[start:end] == final[start:end], "unaccounted asm-processor modification; run make"
        if any(raw[start:end]) or any(a < end and b > start for a, b in objects):
            ranges.append((start, end))
        start = end
    return ranges


def compiler_ranges(src, obj, out, cc):
    """Compile with the real asm placeholders, but stop before asm injection.

    Removing GLOBAL_ASM would change C jump-table relocations and data offsets.
    Preprocessing instead preserves the exact layout used by the ROM build.
    Recompile rather than reuse a source-mtime cache: includes and asm can change.
    """
    sys.path.insert(0, "tools/asm-processor")
    import asm_processor
    source = io.BytesIO()
    functions, _, _ = asm_processor.run(
        ["--input-enc", "utf-8", "--output-enc", "euc-jp", "-O2", src], outfile=source)
    c_path = out + ".c"
    o_path = out + ".o"
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with open(c_path, "wb") as f:
        f.write(source.getvalue())
    try:
        subprocess.run(cc + ["-I", os.path.dirname(src), "-o", o_path, c_path], check=True, capture_output=True)
    except subprocess.CalledProcessError as error:
        raise RuntimeError("data provenance compile failed for " + src + ":\n" + error.stderr.decode(errors="replace")) from error
    import mulfix
    mulfix.fix(o_path)  # also adjusts C jump-table addends when it inserts nops
    raw, symbols, objects = object_data(o_path)
    final, _, _ = object_data(obj)
    masks = assembly_mask(functions, symbols, raw)
    return {name: c_ranges(raw.get(name, b""), final.get(name, b""), masks[name], objects[name])
            for name in DATA_SECTIONS}


def data_measures(measures, total, matched):
    # uint64 fields in objdiff's JSON/protobuf schema are decimal strings.
    measures.update(total_data=str(total), matched_data=str(matched),
                    matched_data_percent=100.0 * matched / total if total else 100.0,
                    complete_data="0", complete_data_percent=0.0 if total else 100.0)


def compare_ranges(ranges, linked, original, rom_start):
    """Credit whole compiler-owned ranges at their linked ROM offsets only."""
    good = 0
    records = []
    for start, end in ranges:
        assert 0 <= start < end <= len(linked)
        rom = rom_start + start
        equal = linked[start:end] == original[rom:rom + end - start]
        if equal:
            good += end - start
        records.append({"offset": start, "size": end - start, "rom_offset": rom, "matched": equal})
    return good, records


def update_report(report, libfiles, out, cc):
    link_time = min(os.stat(path).st_mtime_ns for path in ("build/hybridheaven.elf", "build/hybridheaven.map"))
    with open("build/hybridheaven.elf", "rb") as f:
        elf = ELFFile(f)
        symbols = {s.name: s["st_value"] for s in elf.get_section_by_name(".symtab").iter_symbols()}
        segments = {}
        for name in symbols:
            if not name.endswith("_TEXT_START"):
                continue
            seg = name[:-11]
            section = elf.get_section_by_name("." + seg)
            segments[seg] = {"vram": section["sh_addr"], "rom": symbols[seg + "_ROM_START"],
                             "bytes": section.data(), "total": {}, "assigned": {}, "matched": 0}
            for kind in DATA_SECTIONS:
                tag = kind[1:].upper()
                segments[seg]["total"][kind] = symbols[seg + "_" + tag + "_SIZE"]
                segments[seg]["assigned"][kind] = 0
    with open("build/expanded.bin", "rb") as f:
        original = f.read()
    # Map input objects to their actual linked addresses. Overlay VRAM overlaps,
    # so use the owning segment as well as the address throughout.
    inputs = {}
    # build/src/<seg>/<file>.o, or a data-only unit generated by data_to_c.py: build/src/data/<seg>/data_<VRAM>.o
    pattern = r"\s+(\.data|\.rodata)\s+(0x[0-9a-fA-F]+)\s+(0x[0-9a-fA-F]+)\s+(build/src/(?:data/)?(\w+)/\w+\.o)\s*$"
    with open("build/hybridheaven.map") as f:
        for line in f:
            match = re.fullmatch(pattern, line)
            if match and int(match[3], 16):
                kind, address, size, obj, seg = match.groups()
                assert (obj, kind) not in inputs
                inputs[obj, kind] = seg, int(address, 16), int(size, 16)

    audit = {"method": "C compiler bytes only, excluding GLOBAL_ASM placeholders; whole C-owned ranges must match linked original ROM",
             "objects": [], "segments": []}
    # Data-only C units (data_to_c.py) have no functions, so objdiff has no unit for them: add one per linked
    # object, measured exactly like any other C object below (compiler bytes, compared with the original ROM).
    named = {"build/src/" + unit["name"] + ".o" for unit in report["units"]}
    for obj in sorted({obj for obj, _ in inputs} - named):
        if not obj.startswith("build/src/data/"):
            continue
        name = obj[len("build/src/"):-len(".o")]
        report["units"].append({"name": name, "measures": {"total_units": 1}, "sections": [],
                                "metadata": {"progress_categories": ["main" if inputs[next(
                                    (obj, k) for k in DATA_SECTIONS if (obj, k) in inputs)][0] == "main" else "overlays"]}})
    for unit in report["units"]:
        name = unit["name"]
        obj = "build/src/" + name + ".o"
        ranges = {}
        if any((obj, kind) in inputs for kind in DATA_SECTIONS):
            assert os.stat(obj).st_mtime_ns <= link_time, "link is older than " + obj + "; run make"
            if name in libfiles:
                # libultra.json lists C translation units built directly, with
                # no asm-processor injection (unlike the game objects).
                ranges = {kind: [(0, inputs[obj, kind][2])] for kind in DATA_SECTIONS if (obj, kind) in inputs}
            else:
                ranges = compiler_ranges("src/" + name + ".c", obj, out + "/data/" + name, cc)
        total = matched = 0
        sections = {s["name"]: s for s in unit.get("sections", [])}
        for kind in DATA_SECTIONS:
            count = good = 0
            if (obj, kind) in inputs:
                seg, address, count = inputs[obj, kind]
                layout = segments[seg]
                tag = kind[1:].upper()
                assert symbols[seg + "_" + tag + "_START"] <= address
                assert address + count <= symbols[seg + "_" + tag + "_END"]
                offset = address - layout["vram"]
                linked = layout["bytes"][offset:offset + count]
                assert len(linked) == count
                good, records = compare_ranges(ranges.get(kind, []), linked, original, layout["rom"] + offset)
                layout["assigned"][kind] += count
                layout["matched"] += good
                audit["objects"].append({"name": name, "section": kind, "size": count,
                                         "matched": good, "c_ranges": records})
            total += count
            matched += good
            if count or kind in sections:
                section = sections.get(kind)
                if section is None:
                    section = {"name": kind, "metadata": {}}
                    unit.setdefault("sections", []).append(section)
                section["size"] = str(count)
                section["fuzzy_match_percent"] = 100.0 * good / count if count else 100.0
        data_measures(unit["measures"], total, matched)

    for seg, layout in sorted(segments.items()):
        residual = {kind: layout["total"][kind] - layout["assigned"][kind] for kind in DATA_SECTIONS}
        assert all(size >= 0 for size in residual.values())
        audit["segments"].append({"name": seg, "total": layout["total"], "matched": layout["matched"],
                                  "standalone_and_padding": residual})
        if not any(residual.values()):
            continue
        # These bytes are standalone asm data/rodata or linker padding, never C
        # credit. Give them real report units so unit/category/global sums agree.
        measures = {"total_units": 1}
        data_measures(measures, sum(residual.values()), 0)
        report["units"].append({"name": seg + "/data", "measures": measures,
                                "sections": [{"name": kind, "size": str(size), "metadata": {}}
                                             for kind, size in residual.items() if size],
                                "metadata": {"progress_categories": ["main" if seg in ("main", "entry") else "overlays"]}})
    for group, members in [(report, report["units"])] + [
            (category, [u for u in report["units"] if category["id"] in u["metadata"]["progress_categories"]])
            for category in report["categories"]]:
        data_measures(group["measures"], sum(int(u["measures"]["total_data"]) for u in members),
                      sum(int(u["measures"]["matched_data"]) for u in members))
        group["measures"]["total_units"] = len(members)
    with open(out + "/data-audit.json", "w") as f:
        json.dump(audit, f, indent=2)
