#include "context.h"

s32 func_801E5B20(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EB924;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0xD;

case0:
    func_801CC4D8(0, 0x0348002A, 0, 0, 15.0f);
    D_801EB924 = 1;
    goto done;

case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348002A, 0, 0, 3.0f);
        D_801EB924 = 2;
    }
    goto done;

case2:
    if (func_801CE284() == 0) {
        goto done;
    }
    return 0xE;

done:
    return 0xD;
}
