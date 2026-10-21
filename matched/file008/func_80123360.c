#include "context.h"

extern f32 func_8002FC20(f32);
extern s32 func_8001EF38(f32, f32);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern f64 D_8018B390;
extern f64 D_8018B398;
extern f64 D_8018B3A0;
extern u16 D_801BBC1C;

void func_80123360(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6, f32 *arg7, f32 *arg8, f32 *arg9, f32 *arg10, f32 *arg11, s16 *arg12) {
    f32 pad[3];
    f32 sp38;
    f32 sp34;
    s16 temp_t2;

    sp38 = func_8002FC20(((arg3 - arg0) * (arg3 - arg0)) + ((arg5 - arg2) * (arg5 - arg2)));
    temp_t2 = (s16)(func_8001EF38(arg5 - arg2, arg3 - arg0) + 0x600) & 0x1FFF;
    *arg9 = (f32) ((f64) (arg0 + arg3) * 0.5);
    *arg10 = (f32) ((f64) (arg1 + arg4) * 0.5 + 8.0);
    *arg11 = (f32) ((f64) (arg2 + arg5) * 0.5);
    *arg12 = temp_t2;
    if (sp38 > 20.0) {
        if (D_801BBC1C == 5) {
            sp34 = (f32) (((((sp38 - 20.0) / 20.0) * 0.25) + 1.0) * D_8018B390);
        } else {
            sp34 = (f32) (((((sp38 - 20.0) / 20.0) * 0.5) + 1.0) * D_8018B398);
        }
    } else {
        sp34 = 55.0f;
    }
    *arg6 = *arg9 - (func_8001EB64(*arg12) * sp34);
    *arg7 = (f32) ((f64) (arg1 + arg4) * 0.5 + D_8018B3A0);
    *arg8 = *arg11 - (func_8001EAD0(*arg12) * sp34);
    if (func_801084C4(*arg9, *arg10, *arg11, *arg6, *arg7, *arg8) != 0) {
        *arg6 = *(f32 *)((u8 *)&D_801BBBF0 + 0x380);
        *arg8 = *(f32 *)((u8 *)&D_801BBBF0 + 0x388);
    }
}
