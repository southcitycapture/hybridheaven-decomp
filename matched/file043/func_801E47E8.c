#include "context.h"

s32 func_801E47E8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E9720;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x11;

case0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004D, 0, 0, 6.0f);
        D_801E9720 = 1;
    }
    goto block_10;
case1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348004E, 0, 0, 5.0f);
        D_801E9720 = 2;
    }
    goto block_10;
case2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004E, 0, 0x100, 10.0f);
        return 0x12;
    }
block_10:
    return 0x11;
}
