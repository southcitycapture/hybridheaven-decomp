#include "context.h"

s32 func_801E6EE0(s32 arg0, s32 arg1) {
    if (D_801EA990 == 0) {
        goto case0;
    }
    if (D_801EA990 != 1) {
        goto done;
    }
    goto case1;
case0:
    if (func_801D3630() == 0) {
        goto done;
    }
    func_801CC4D8(2, 0x0320005A, 0, 0, 5.0f);
    D_801EA990 = 1;
    goto done;
case1:
    if (func_801D3620() != 0) {
        goto done;
    }
    func_801CC470(2, 0x0320005A, 0, 0x100, 6.0f);
    return 0x29;
done:
    return 0x28;
}
