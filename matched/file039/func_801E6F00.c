#include "context.h"

s32 func_801E6F00(s32 arg0, s32 arg1) {
    if (D_801EA7AC == 0) {
        goto case0;
    }
    if (D_801EA7AC == 1) {
        goto case1;
    }
    if (D_801EA7AC == 2) {
        goto case2;
    }
    return 9;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348001D, 0, 0, 4.0f);
        D_801EA7AC = 1;
    }
    goto block_10;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(1, 0x0348007D, 0, 0, 3.0f);
        D_801EA7AC = 2;
    }
    goto block_10;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348007D, 0, 0x100, 10.0f);
        return 0xA;
    }
block_10:
    return 9;
}
