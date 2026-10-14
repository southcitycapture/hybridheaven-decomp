#include "context.h"

extern s32 D_801EA7B0;

s32 func_801E75B8(s32 arg0, s32 arg1) {
    s32 v = D_801EA7AC;

    if (v == 0) {
        goto case0;
    }
    if (v == 1) {
        goto case1;
    }
    if (v == 2) {
        goto case2;
    }
    return 0x19;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348006A, 0, 0, 4.0f);
        D_801EA7B0 = 0;
        D_801EA7AC = 1;
    }
    goto block_end;
case1:
    if (func_801D51A4() != 0) {
        func_801CC4D8(1, 0x0348007E, 0, 0, 3.0f);
        D_801EA7AC = 2;
    }
    goto block_end;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348007E, 0, 0x100, 10.0f);
        return 0x1A;
    }
block_end:
    return 0x19;
}
