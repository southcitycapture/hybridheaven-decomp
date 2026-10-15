#include "context.h"

s32 func_801E7188(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto case0;
    }
    if (D_801E9800 == 1) {
        goto case1;
    }
    if (D_801E9800 == 2) {
        goto case2;
    }
    return 0x47;
case0:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A8004A, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto block_10;
case1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004A, 0, 0, 10.0f);
        D_801E9800 = 2;
    }
    goto block_10;
case2:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 0x48;
    }
block_10:
    return 0x47;
}
