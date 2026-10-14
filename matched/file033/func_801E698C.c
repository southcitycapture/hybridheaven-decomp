#include "context.h"

s32 func_801E698C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2DB4;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x17;
case0:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200047, 0, 0, 3.0f);
        D_801F2DB4 = 1;
    }
    goto block_10;
case1:
    if (func_801D58EC() != 0) {
        func_801D5938(0);
        func_801CC4D8(2, 0x03200046, 0, 0, 2.0f);
        D_801F2DB4 = 2;
    }
    goto block_10;
case2:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200046, 0, 0x100, 6.0f);
        return 0x18;
    }
block_10:
    return 0x17;
}
