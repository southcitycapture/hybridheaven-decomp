#include "context.h"

extern s32 func_801CE274();
extern s32 func_801CE284();

s32 func_801E5AE4(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto block_0;
    }
    if (state == 1) {
        goto block_1;
    }
    return 0x1D;
block_0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348002F, 0, 0, 3.0f);
        D_801F2CD8 = 1;
    }
    goto ret_1D;
block_1:
    if (func_801CE284() != 0) {
        return 0x1E;
    }
ret_1D:
    return 0x1D;
}
