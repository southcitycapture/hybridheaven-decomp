#include "context.h"

s32 func_801E6808(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto case0;
    }
    if (D_801EB9FC == 1) {
        goto case1;
    }
    if (D_801EB9FC == 2) {
        goto case2;
    }
    return 0x10;

case0:
    func_801CC470(2, 0x03200037, 0, 0, 4.0f);
    D_801EB9FC = 1;
    goto done;

case1:
    if (func_801D2C10() == 0) {
        goto done;
    }
    func_801CC470(2, 0x03200033, 0, 0, 3.0f);
    D_801EB9FC = 2;
    goto done;

case2:
    if (func_801D2C10() == 0) {
        goto done;
    }
    return 0x11;

done:
    return 0x10;
}
