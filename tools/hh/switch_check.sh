#!/bin/bash
# A local, isolated rehearsal. No checkout, merge, or ref update in the calling repository.
set -euo pipefail
ROOT=$(git -C "$(dirname "$0")/../.." rev-parse --show-toplevel)
. "$ROOT/contrib/lib.sh"
exec "$PY" "$ROOT/tools/hh/switch_check.py" "$@"
