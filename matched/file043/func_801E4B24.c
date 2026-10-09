#include "context.h"

extern s32 func_801CE274();
extern s32 func_801CE284();

s32 func_801E4B24(s32 arg0, s32 arg1) {
    if (D_801E9720 == 0) {
        goto case0;
    }
    if (D_801E9720 == 1) {
        goto case1;
    }
    return 0x1C;

case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 30.0f);
        D_801E9720 = 1;
    }
    goto block_end;

case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 0x1D;
    }

block_end:
    return 0x1C;
}
