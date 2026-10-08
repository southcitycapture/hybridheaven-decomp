#!/bin/bash
# One-time setup: Python venv + decomp tools. Needs: python3 (3.10+), git, curl, and MIPS binutils
# (Debian/Ubuntu: sudo apt install binutils-mips-linux-gnu make).
set -e
cd "$(dirname "$0")/.."
python3 -m venv .venv && .venv/bin/pip install -q --upgrade pip && .venv/bin/pip install -q -r requirements.txt
cd tools
for r in matt-kempster/m2c simonlindholm/asm-differ simonlindholm/decomp-permuter simonlindholm/asm-processor; do
  [ -d "$(basename $r)" ] || git clone -q --depth 1 "https://github.com/$r.git"
done
for v in 5.3 7.1; do
  [ -x "ido/$v/cc" ] || { mkdir -p ido/$v; curl -sL "https://github.com/decompals/ido-static-recomp/releases/download/v1.2/ido-$v-recomp-linux.tar.gz" | tar xz -C ido/$v; }
done
mkdir -p bin
[ -x bin/objdiff-cli ] || { curl -sL -o bin/objdiff-cli https://github.com/encounter/objdiff/releases/download/v3.8.2/objdiff-cli-linux-x86_64; chmod +x bin/objdiff-cli; }
# decomp-permuter calls `cpp`; if the system has none, use pcpp
command -v cpp >/dev/null || { printf '#!/bin/bash\nargs=(); for a in "$@"; do case "$a" in -P|-nostdinc) ;; *) args+=("$a");; esac; done\nexec "$(dirname "$0")/../../.venv/bin/pcpp" --line-directive "" --passthru-unfound-includes "${args[@]}" 2>/dev/null\n' > bin/cpp; chmod +x bin/cpp; }
echo "tools ready. Next: put your ROM at baserom/baserom.us.z64, then: . ./env.sh && make setup && make"
