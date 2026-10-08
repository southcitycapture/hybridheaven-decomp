# Technical notes

## ROM

- Hybrid Heaven (USA), game code `NHVE`, revision 0, 16 MiB, big-endian `.z64`. SHA-1 `16dbc21620b52deab5c5abf8a309ac60adfbee85`.
- Entry point `0x80000400` (ROM `0x1000`). The entry code clears BSS at `0x8004DBD0` (size `0x80DC0`) and jumps to `0x80001078`.
- Main segment: text at ROM `0x1060`–`0x35D20` (≈ 800 functions: engine, NuSystem, libultra), then RSP ucode and data up to `0x4E7D0`.
- Debug strings name Konami's sources: `.../nu64/rz011_usa/main/game/source/<dir>/<file>.c`
  (`player/`, `enemy/`, `device/`, `ground/`, `titlescreen.c`, `democamera.c`, `expansionram.c`, ...).

## Master file table

- At vram `0x80038FE0` (ROM `0x39BE0`), after the header string `NisitenmA-Ichigo`.
- 624 entries (ids 1..624): ROM start/end at `table + 0x10 + 4*(id-1)`; **bit 31 set = compressed**.
- RAM ranges at vram `0x80037C5C`, 8 bytes per id. Loader: `func_8000469C(id, dest)`; uninitialized tails are zeroed by the loader.
- Code overlays (91): id 8 is the core game (`0x80107830`); 9–11 resident; 12–23 and 54 share the area/demo slot at
  `0x802408F0`; 24–25 share `0x801BF1A0`; 26–53 share `0x801E1BE0`; 55–57 high RAM; 58–98 small overlays at `0x8038CFC0`; 100.
- Also in main data: the music table (vram `0x800479E8`, loaded by `func_80022044`), and 6 sample banks (vram `0x80047960`).

## Compression (Konami LZ, LZKN-style)

Each compressed file: big-endian `u32` total length (header included), then a byte stream:

| Code | Meaning |
|---|---|
| `0x00–0x7F` + 1 byte | copy `(b>>2)+2` bytes from distance `((b&3)<<8) \| next` (1..1023) |
| `0x80–0xBF` | copy `b&0x3F` literal bytes |
| `0xC0–0xDF` + 1 byte | repeat the next byte `(b&0x1F)+2` times |
| `0xE0–0xFE` | `(b&0x1F)+2` zero bytes |
| `0xFF` + 1 byte | `next+2` zero bytes |

The original encoder (reproduced in `tools/hh/lzkn_enc.py`, matching all 482 files) is greedy: the longest of zero run /
repeat run / back-reference wins, ties go zero > repeat > reference, back-references are 4..33 bytes within distance
`0x3DF`, literal runs are capped at 31, and the input is buffered `0x400` bytes at a time: the buffer refills once 0x21 or
fewer bytes of lookahead remain, and zero runs can't cross the buffer end (buffer ends are `0x21 mod 0x400`, the first is `0x421`).

## Build pipeline

1. `tools/hh/expand.py`: the ROM → `build/expanded.bin` (everything before the file area copied, then each file decompressed) +
   `build/expanded.json`.
2. `tools/hh/gen_splat.py` → `hybridheaven.yaml`: main + 92 code segments as C files (one per original source file, from
   `tools/hh/file_splits.json`), everything else as binary.
3. asm-processor + IDO 7.1 for C; GNU as for asm; link with splat's linker script plus address-named symbols
   (`tools/hh/gen_extern_syms.py`; `-z muldefs` because overlays sharing a RAM slot define the same address-named symbols).
4. `tools/hh/pack.py` recompresses every file into its original slot.

## Source files

Original `.c` file boundaries are recovered from end-of-file padding: a function followed by zero bytes, with the next
function starting 16-byte aligned, ends a file. That gives 398 files (136 in main). When a file's last function is C,
IDO doesn't emit the original's padding, so `srcbuild.py` adds a small asm block with it (`_pad.s`).

## Confirmed facts

- `func_801C0B8C` takes **one 64-bit argument** (a duration, passed in `$a0:$a1`). m2c shows calls as
  `func_801C0B8C(0, 3800000)`; the real call is `func_801C0B8C(3800000)`. 1,126 functions call it. This was the
  single biggest blocker in the first Haiku runs.

## Verification

`tools/hh/try_func.py FUNC file.c --seg SEGMENT` compiles one function and compares it with the ROM. Instructions are
compared with relocated fields masked, then the object is linked with every address-named symbol at the address in its
name and the final bytes are compared, so a wrong symbol or offset is caught even when every instruction "matches".
