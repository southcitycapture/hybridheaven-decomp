#include "context.h"

s32 func_801E6F74(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto case0;
    }
    if (D_801E9800 == 1) {
        goto case1;
    }
    if (D_801E9800 == 2) {
        goto case2;
    }
    return 0x42;
case0:
    if (func_801CEDE4() != 0) {
        D_801E9800 = 1;
    }
    goto block_9;
case1:
    func_801CC470(1, 0x02A80045, 0, 0, 10.0f);
    D_801E9800 = 2;
    goto block_9;
case2:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 0x43;
    }
block_9:
    return 0x42;
}
