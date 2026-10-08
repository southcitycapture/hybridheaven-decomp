
NOTE: this is a repair job. `previous.c` is an earlier attempt that matched on its own, but it conflicts with
declarations that other functions in the same source file already use (see context.h), or it pointed at the wrong
symbol/offset. Start from previous.c: switch it to `#include "context.h"`, remove declarations context.h already
provides, adapt the code to those types, and keep it matching. `./check` now also verifies every address exactly.
