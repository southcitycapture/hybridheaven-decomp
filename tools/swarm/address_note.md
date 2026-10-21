
NOTE: the instructions in `previous.c` already compile to exactly the target's instructions; only addresses differ
(which global, function, or offset an instruction refers to). Don't restructure the code. Start from previous.c
(switch it to `#include "context.h"`), run ./check, and read every address the diff reports as wrong. Typical fixes:
the right symbol instead of a neighbour (`D_80123450` vs `D_80123448 + 8`), an array index or struct field that
lands on the right byte, a function call to the right function, a string or float constant that should be a
named global. Change only those references, and check after each one.
