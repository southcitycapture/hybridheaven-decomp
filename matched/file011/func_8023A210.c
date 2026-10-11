#include "common.h"
extern void (*D_80216D10[])(void *, s32);

extern s32 D_8023E544;

s32 func_8023A210(void) {
    if (D_8023E544 != 0) {
        return 1;
    }
    return 0;
}
