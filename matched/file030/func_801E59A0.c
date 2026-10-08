#include "context.h"

s32 func_801E59A0(s32 arg0, s32 arg1) {
    if (D_801EB924 == 0) {
        goto block_case0;
    }
    if (D_801EB924 == 1) {
        goto block_case1;
    }
    if (D_801EB924 == 2) {
        goto block_case2;
    }
    goto block_default;

block_default:
    return 0xA;

block_case0:
    func_801CC4D8(0, 0x03480029, 0, 0, 15.0f);
    D_801EB924 = 1;
    goto block_ret10;

block_case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480029, 0, 0, 4.0f);
        D_801EB924 = 2;
    }
    goto block_ret10;

block_case2:
    if (func_801CE284() != 0) {
        return 0xB;
    }
    goto block_ret10;

block_ret10:
    return 0xA;
}
