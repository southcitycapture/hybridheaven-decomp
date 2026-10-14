#include "context.h"

s32 func_801E674C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E83B4;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x18;
case0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007B, 0, 0, 3.0f);
        D_801E83B4 = 1;
    }
    goto done;
case1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x03480045, 0, 0, 5.0f);
        D_801E83B4 = 2;
    }
    goto done;
case2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480045, 0, 0, 3.0f);
        return 0x19;
    }
done:
    return 0x18;
}
