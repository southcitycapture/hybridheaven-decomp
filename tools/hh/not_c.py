"""Functions that are not C: the original game had them as hand-written assembly (queue/not_c.tsv).

queue/not_c.tsv has one row per function: segment, function, reason (tab separated, '#' comments). Nothing listed
there is ever credited as C or offered to a model:
  - progress.py leaves them out of the C code measure and reports them on their own "original assembly" line;
    the ones assembled from the SDK's own .s source (a libultra.json part whose src ends in .s) are counted there
  - the pickers / inventories (pick.py, pick_filters.unavailable, hq_tasks.py, score_attempts.py, terra_wave.sh)
    skip them, so no model run is spent on them again
  - merge_rodata.functions (the loop's "C identities") leaves them out

  not_c.py --sections OUT OBJ...   write OUT (JSON): bytes per allocatable section of the assembled SDK .s
                                   objects OBJ (gen_libultra's rules call this, so data accounting can exclude them)
  not_c.py --check                 consistency of queue/not_c.tsv with tools/hh/libultra.json
"""
import json
import os
import sys

HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
TSV = "queue/not_c.tsv"
SECTIONS = (".text", ".data", ".rodata", ".bss")


def load(root=None):
    """{(segment, func): reason} from queue/not_c.tsv (empty if the file is missing)."""
    path = os.path.join(root or HH, TSV)
    out = {}
    if not os.path.exists(path):
        return out
    with open(path) as fh:
        lines = fh.read().splitlines()
    for n, line in enumerate(lines, 1):
        if not line.strip() or line.startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) < 3 or not parts[0] or not parts[1] or not parts[2].strip():
            raise ValueError("%s:%d: expected 'segment<TAB>function<TAB>reason'" % (TSV, n))
        key = (parts[0], parts[1])
        if key in out:
            raise ValueError("%s:%d: duplicate %s %s" % (TSV, n, *key))
        out[key] = parts[2]
    return out


def keys(root=None):
    """{(segment, func)} of every function that is not C."""
    return set(load(root))


def is_asm_part(part):
    return part["src"].endswith(".s")


def parts(entry):
    return [entry] + entry.get("additional", [])


def asm_sources(entry):
    """The SDK .s sources a libultra.json entry assembles."""
    return [p["src"] for p in parts(entry) if is_asm_part(p)]


def sidecar(unit, build="build"):
    """Path of the per-unit record of section bytes that come from assembled .s parts."""
    return os.path.join(build, "src", unit + ".o.asm.json")


def asm_sections(unit, entry, root=None):
    """{section: bytes} contributed by the unit's assembled .s parts ({} for a C-only unit)."""
    if not asm_sources(entry):
        return {}
    path = os.path.join(root or HH, sidecar(unit))
    if not os.path.exists(path):
        raise RuntimeError("%s has assembled parts but no %s; run make" % (unit, sidecar(unit)))
    with open(path) as fh:
        return json.load(fh)


def sdk_assembled(library, root=None):
    """{(segment, func)} of not-C functions in units that assemble SDK .s source."""
    units = {u for u, e in library.items() if asm_sources(e)}
    return {(seg, func) for seg, func in keys(root) if func_unit(root, seg, func) in units}


def func_unit(root, seg, func):
    """The source-file unit (seg/XXXXXXXX) whose asm directory holds func, or None."""
    base = os.path.join(root or HH, "asm", "nonmatchings", seg)
    if not os.path.isdir(base):
        return None
    for cf in os.listdir(base):
        if os.path.exists(os.path.join(base, cf, func + ".s")):
            return seg + "/" + cf
    return None


def section_sizes(path):
    from elftools.elf.elffile import ELFFile
    with open(path, "rb") as fh:
        elf = ELFFile(fh)
        return {s.name: s["sh_size"] for s in elf.iter_sections() if s.name in SECTIONS and s["sh_size"]}


def check(root=None):
    """Problems (list of strings): every listed function exists; units assembling .s source have a listed function."""
    with open(os.path.join(root or HH, "tools/hh/libultra.json")) as fh:
        library = json.load(fh)
    listed = load(root)
    problems = []
    for seg, func in sorted(listed):
        if func_unit(root, seg, func) is None:
            problems.append("%s %s: no asm/nonmatchings file" % (seg, func))
    for unit, entry in sorted(library.items()):
        if asm_sources(entry) and not any(func_unit(root, s, f) == unit for s, f in listed):
            problems.append("%s assembles %s but lists no function in %s" % (unit, asm_sources(entry), TSV))
    return problems


if __name__ == "__main__":
    if sys.argv[1:2] == ["--sections"]:
        out, objs = sys.argv[2], sys.argv[3:]
        total = {}
        for obj in objs:
            for name, size in section_sizes(obj).items():
                total[name] = total.get(name, 0) + size
        with open(out, "w") as fh:
            json.dump(total, fh, sort_keys=True)
            fh.write("\n")
    elif sys.argv[1:2] == ["--check"]:
        bad = check()
        print("\n".join(bad) or "not_c: %d functions, consistent" % len(load()))
        sys.exit(1 if bad else 0)
    else:
        sys.exit(__doc__)
