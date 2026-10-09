#include "context.h"

extern s32 D_801EB9FC;
s32 func_801D2C10(void);

s32 func_801E6670(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto case0;
    }
    if (D_801EB9FC == 1) {
        goto case1;
    }
    if (D_801EB9FC != 2) {
        goto done;
    }
    goto case2;

case0:
    func_801CC470(2, 0x03200036, 0, 0, 3.0f);
    D_801EB9FC = 1;
    goto done;

case1:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x03200033, 0, 0, 3.0f);
        D_801EB9FC = 2;
    }
    goto done;

case2:
    if (func_801D2C10() != 0) {
        return 0xD;
    }
    goto done;

done:
    return 0xC;
}
