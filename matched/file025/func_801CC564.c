#include "context.h"

void func_801CC4D8(s32, s32, u16, u16, f32);
extern u8 D_801DAACC[];

s32 func_801CC564(s32 arg0, s32 (*arg1)(), s32 arg2, u16 arg3, u16 arg4, f32 arg5, s32 (*arg6)(), s32 arg7, u16 arg8, u16 arg9, f32 arg10) {
    s32 *temp_v1;

    temp_v1 = (s32 *)(D_801DAACC + (arg0 * 4));
    if (*temp_v1 == 0) {
        goto case0;
    }
    if (*temp_v1 == 1) {
        goto case1;
    }
    if (*temp_v1 == 2) {
        goto case2;
    }
    return 0;
case0:
    func_801CC470(arg0, arg2, arg3, arg4, arg5);
    *temp_v1 = 1;
    goto out;
case1:
    if (arg1() != 0) {
        func_801CC4D8(arg0, arg7, arg8, arg9, arg10);
        *temp_v1 = 2;
    }
    goto out;
case2:
    if (arg6() == 0) {
        *temp_v1 = -1;
        return 1;
    }
out:
    return 0;
}
