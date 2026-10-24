# Shared by the contrib/*.sh scripts (sourced, not run). Sets ROOT (the repo checkout) and the tool PATH.
# It does not source env.sh: everything is relative to this checkout, wherever it lives.
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PY="$ROOT/.venv/bin/python"
export PATH="$ROOT/tools/bin:$ROOT/.venv/bin:$PATH"
# MIPS binutils unpacked into ~/.local/opt/decomp (machines without root), as env.sh does
if [ -d "$HOME/.local/opt/decomp/usr/bin" ]; then
  export PATH="$HOME/.local/opt/decomp/usr/bin:$PATH"
  export LD_LIBRARY_PATH="$HOME/.local/opt/decomp/usr/lib/x86_64-linux-gnu${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"
fi
export IDO53="$ROOT/tools/ido/5.3" IDO71="$ROOT/tools/ido/7.1"
# tools/swarm/prep2.sh and run_one3.sh use this checkout instead of HQ's fixed path
export HH_ROOT="$ROOT"

say()  { printf '%s\n' "$*"; }
ok()   { printf '  ok    %s\n' "$*"; }
bad()  { printf '  FIX   %s\n' "$*"; }
die()  { printf 'error: %s\n' "$*" >&2; exit 1; }

# a contributor key: letters, digits, - and _ (it names files and directories)
check_name() { [[ "$1" =~ ^[A-Za-z0-9_-]{1,32}$ ]] || die "contributor name must be 1-32 letters, digits, - or _ (got '$1')"; }

# where work.sh keeps one contributor's local runs (ignored by git: contrib/.gitignore). Given to run_one3.sh as its
# BATCH, relative to queue/, so the worker harness's usual layout (BATCH/work/FUNC, BATCH/results.jsonl) lands here.
local_batch() { echo "../contrib/local/$1"; }
