#include "context.h"

s32 func_801E5FA0(s32 arg0, s32 arg1) {
    if (D_801E6C34 == 0) {
        goto case0;
    }
    if (D_801E6C34 != 1) {
        goto block_7;
    }
    goto case1;

case0:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(2, 0x0348007C, 0, 0, 3.0f);
        D_801E6C34 = 1;
    }
    goto block_7;

case1:
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x0348007C, 0, 0x100, 10.0f);
        return 0x18;
    }
    goto block_7;

block_7:
    return 0x17;
}
