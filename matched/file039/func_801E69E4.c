#include "context.h"

s32 func_801E69E4(s32 arg0, s32 arg1) {
    if (D_801EA6EC == 0) {
        goto case0;
    }
    if (D_801EA6EC == 1) {
        goto case1;
    }
    if (D_801EA6EC != 2) {
        goto block_10;
    }
    goto case2;
case0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480066, 0, 0, 4.0f);
        D_801EA6EC = 1;
    }
    goto block_10;
case1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x03480028, 0, 0, 20.0f);
        D_801EA6EC = 2;
    }
    goto block_10;
case2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480028, 0, 0x100, 10.0f);
        return 0x26;
    }
block_10:
    return 0x25;
}
