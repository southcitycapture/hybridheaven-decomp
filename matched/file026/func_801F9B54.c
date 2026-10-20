#include "context.h"

s32 func_801F9B54(s32 arg0, s32 arg1) {
    if (D_801FBB08 != 0) {
        if (D_801FBB08 == 1) {
            goto l1;
        }
        return 1;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        func_8038D28C(0x1E2);
        D_801FBB08 = 1;
    }
    goto done;
l1:
    if (func_801C0B8C(0x2F4D60) != 0) {
        func_8038D28C(0x80);
        return 2;
    }
done:
    return 1;
}
