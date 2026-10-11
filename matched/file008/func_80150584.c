#include "context.h"

extern u8 D_801BC025;

s32 func_80150584(void) {
    s32 ret;

    ret = 0;
    return (D_801BC025 & 1) ? 1 : ret;
}
