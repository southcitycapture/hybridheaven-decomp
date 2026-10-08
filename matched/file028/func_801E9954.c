#include "common.h"

s32 func_8038BEF8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13);
extern f32 D_802088A0;
extern f32 D_802088A4;
extern f32 D_802088A8;
extern f32 D_802088AC;
extern f32 D_802088B0;
extern f32 D_802088B4;

s32 func_801E9954(s32 arg0, s32 arg1) {
    f32 sp20 = D_802088A0;
    f32 sp24 = D_802088A4;
    f32 sp28 = D_802088A8;

    if (func_8038BEF8(0.0f, 5.5f, 16.6f, 39.9f, D_802088AC, D_802088B0, D_802088B4, 49.5f, sp20, sp24, sp28, sp20, sp24, sp28) != 0) {
        return 6;
    }
    return 5;
}
