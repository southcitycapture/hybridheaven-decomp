#include "context.h"

s32 func_801E57C8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto init;
    }
    if (state == 1) {
        goto ret14;
    }
    return 0x13;
init:
    func_801CC470(0, 0x0348002C, 0, 0, 3.0f);
    D_801F2CD8 = 1;
    goto ret13;
ret14:
    return 0x14;
ret13:
    return 0x13;
}
