#include "context.h"

s32 func_801E5190(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8D50;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x1F;

case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x01B80019, 0, 0, 6.0f);
        D_801E8D50 = 1;
    }
    goto ret1F;

case1:
    if (func_801CE274() != 0) {
        goto ret1F;
    }
    return 0x20;

ret1F:
    return 0x1F;
}
