#include "context.h"

s32 func_801E6A44(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto case0;
    }
    if (D_801EB9FC == 1) {
        goto case1;
    }
    return 0x18;

case0:
    if (func_801C0B8C(0x632EA0) != 0) {
        func_801CC470(2, 0x03200037, 0, 0, 4.0f);
        D_801EB9FC = 1;
    }
    goto ret18;

case1:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x03200032, 0, 0x100, 3.0f);
        return 0x19;
    }
    goto ret18;

ret18:
    return 0x18;
}
