#include "context.h"

extern s32 func_801CEDE4();

s32 func_801E6CD4(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8220;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x1F;
case0:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003F, 0, 0, 4.0f);
        D_801E8220 = 1;
    }
    goto block_10;
case1:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80040, 0, 0, 5.0f);
        D_801E8220 = 2;
    }
    goto block_10;
case2:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80040, 0, 0x100, 4.0f);
        return 0x25;
    }
block_10:
    return 0x1F;
}
