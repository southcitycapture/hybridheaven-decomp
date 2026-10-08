#include "context.h"

extern s32 D_80206CC8;

s32 func_801F20E4(s32 arg0, s32 arg1) {
    if (D_80206CC8 == 0) {
        goto body;
    }
    if (D_80206CC8 == 1) {
        goto ret2;
    }
    return 1;
body:
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038D28C(0x166);
        D_80206CC8 = 1;
    }
    goto ret1;
ret2:
    return 2;
ret1:
    return 1;
}
