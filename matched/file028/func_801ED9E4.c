#include "context.h"

s32 func_801ED9E4(s32 arg0, s32 arg1) {
    if (D_80206368 == 0) {
        goto block_c0;
    }
    if (D_80206368 == 1) {
        goto block_c1;
    }
    return 0x1A;
block_c0:
    if (func_801D3270() == 0) {
        goto block_ret;
    }
    func_801CC550(2);
    D_80206368 = 1;
    goto block_ret;
block_c1:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001E, 0, 0, 3.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x1B;
    }
block_ret:
    return 0x1A;
}
