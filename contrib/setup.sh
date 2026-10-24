#!/bin/bash
# contrib/setup.sh: get a contributor's clone ready to run workers.
#   1. checks the tools (python venv, MIPS binutils, IDO, asm-processor, m2c, Claude Code), installing the
#      decomp tools with tools/setup.sh when they are missing
#   2. checks your ROM at baserom/baserom.us.z64 (byte order fixed if it is a .v64/.n64 dump, SHA-1 checked)
#   3. runs `make setup` (asm/ is generated locally from your ROM) and a full build that must match the original
# Safe to run again at any time.
set -e
. "$(dirname "$0")/lib.sh"
cd "$ROOT"
SHA1=$(sed -n 's/^SHA1 *:= *//p' Makefile)
ROM=baserom/baserom.us.z64

say "== 1/3 tools"
missing=0
for c in python3 git make curl; do
  command -v $c > /dev/null && ok "$c" || { bad "$c not found (Debian/Ubuntu: sudo apt install python3 python3-venv git make curl)"; missing=1; }
done
if command -v python3 > /dev/null && ! python3 -c 'import sys; sys.exit(sys.version_info < (3, 10))'; then
  bad "python3 is $(python3 -V 2>&1 | cut -d' ' -f2); 3.10 or newer is needed"; missing=1
fi
if command -v mips-linux-gnu-as > /dev/null && command -v mips-linux-gnu-ld > /dev/null; then ok "MIPS binutils"
else bad "MIPS binutils not found (Debian/Ubuntu: sudo apt install binutils-mips-linux-gnu; macOS: use a Linux VM or WSL)"; missing=1; fi
[ $missing = 0 ] || die "install the missing programs above, then run contrib/setup.sh again"

need_tools=0
[ -x .venv/bin/python ] && .venv/bin/python -c 'import splat, rabbitizer, elftools' 2> /dev/null || need_tools=1
for t in tools/ido/7.1/cc tools/ido/5.3/cc tools/asm-processor/build.py tools/m2c/m2c.py tools/ultralib; do [ -e $t ] || need_tools=1; done
if [ $need_tools = 1 ]; then
  if [ -x tools/setup.sh ]; then say "  installing the decomp tools (tools/setup.sh: venv, IDO, asm-processor, m2c, ...)"; tools/setup.sh
  else die "decomp tools missing and tools/setup.sh not found: is this a full clone of the public repo?"; fi
fi
ok "python venv ($(.venv/bin/python -V 2>&1))"
for t in tools/ido/7.1/cc tools/ido/5.3/cc tools/asm-processor/build.py tools/m2c/m2c.py; do
  [ -e $t ] && ok "$t" || die "$t still missing after tools/setup.sh; see its output above"
done
if command -v claude > /dev/null; then ok "Claude Code $(claude --version 2>/dev/null | head -1)"
else bad "Claude Code (the 'claude' command) not found. Install it (https://docs.claude.com/en/docs/claude-code) and log in with your own account; setup can continue without it, contrib/work.sh needs it."; fi

say "== 2/3 ROM"
if [ ! -e $ROM ]; then
  # a dump saved under another name in baserom/ is fine too
  other=$(ls baserom/*.z64 baserom/*.v64 baserom/*.n64 2> /dev/null | head -1 || true)
  [ -n "$other" ] || die "put your Hybrid Heaven (USA) cartridge dump at $ROM (see contrib/README.md)"
  say "  using $other"; ROM_IN=$other
else ROM_IN=$ROM; fi
# byte order from the first four bytes: z64 (big-endian) 80 37 12 40, v64 (16-bit swapped) 37 80 40 12, n64 (32-bit little-endian) 40 12 37 80
order=$(head -c4 "$ROM_IN" | od -An -tx1 | tr -d ' \n')
case "$order" in
  80371240) [ "$ROM_IN" = $ROM ] || cp "$ROM_IN" $ROM ;;
  37804012|40123780)
    fmt=v64; [ "$order" = 40123780 ] && fmt=n64
    say "  your dump is in .$fmt byte order; converting it to .z64 (big-endian) as $ROM"
    [ "$ROM_IN" = $ROM ] && { mv $ROM baserom/baserom.us.original.$fmt; ROM_IN=baserom/baserom.us.original.$fmt; say "  (the original is kept as $ROM_IN)"; }
    python3 - "$ROM_IN" $ROM $fmt <<'PY'
import sys, array
src, dst, fmt = sys.argv[1:]
a = array.array("H" if fmt == "v64" else "I", open(src, "rb").read()); a.byteswap()
open(dst, "wb").write(a.tobytes())
PY
    ;;
  *) die "$ROM_IN does not look like an N64 ROM (first bytes $order)" ;;
esac
got=$(sha1sum $ROM | cut -d' ' -f1)
if [ "$got" != "$SHA1" ]; then
  die "$ROM has SHA-1 $got, expected $SHA1 (Hybrid Heaven USA, rev 0). A different region/revision or a bad dump won't build."
fi
ok "$ROM SHA-1 $SHA1"

say "== 3/3 make setup + full build (a few minutes)"
mkdir -p build
J=$(nproc 2> /dev/null || echo 4)
make setup > build/setup.log 2>&1 || { tail -20 build/setup.log; die "make setup failed (full log: build/setup.log)"; }
ok "make setup (asm/ and build/expanded.bin generated from your ROM)"
make -j"$J" > build/build.log 2>&1 || true
if tail -3 build/build.log | grep -q 'hybridheaven.z64: OK'; then ok "build/hybridheaven.z64: OK (matches the original)"
else tail -20 build/build.log; die "the build did not reproduce the ROM (full log: build/build.log). Ask HQ, and include build/build.log."; fi
rm -f build/setup.log
say ""
say "Ready. Next: ask HQ for an assignment, git pull, then: contrib/work.sh YOUR_NAME"
