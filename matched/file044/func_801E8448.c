#include "context.h"

s32 func_801E8448(s32 arg0, s32 arg1) {
    if (D_801ECFF0 == 0) {
        goto block_0;
    }
    if (D_801ECFF0 == 1) {
        goto block_1;
    }
    if (D_801ECFF0 == 2) {
        goto block_2;
    }
    return 0xC;
block_0:
    if (func_801CEDE4() != 0) {
        D_801ECFF0 = 1;
    }
    goto block_c;
block_1:
    if (func_801C0B8C(0x8890EF) != 0) {
        func_801CC4D8(1, 0x02A80030, 0, 0, 5.0f);
        D_801ECFF0 = 2;
    }
    goto block_c;
block_2:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80030, 0, 0x100, 6.0f);
        return 0xD;
    }
block_c:
    return 0xC;
}
