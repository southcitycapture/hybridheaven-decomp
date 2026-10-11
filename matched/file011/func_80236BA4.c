#include "context.h"
extern void (*D_80216D10[])(void *, s32);

extern u8 D_8023E3B4;

s32 func_80236BA4(void) {
    if (D_8023E3B4 != 0) {
        return 1;
    }
    return 0;
}
