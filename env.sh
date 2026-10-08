# source this: . ./env.sh
export HH="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export PATH="$HH/tools/bin:$HH/.venv/bin:$PATH"
# optional: MIPS binutils unpacked into ~/.local/opt/decomp (for machines without root)
if [ -d "$HOME/.local/opt/decomp/usr/bin" ]; then
  export PATH="$HOME/.local/opt/decomp/usr/bin:$PATH"
  export LD_LIBRARY_PATH="$HOME/.local/opt/decomp/usr/lib/x86_64-linux-gnu${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"
fi
export IDO53="$HH/tools/ido/5.3" IDO71="$HH/tools/ido/7.1"
