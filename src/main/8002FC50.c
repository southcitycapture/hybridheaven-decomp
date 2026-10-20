#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002FC50/func_8002FC50.s")


extern void func_8002FC50(f32 *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80029D30(f32 *, void *);

void func_80030388(void *arg0, s32 arg1, s32 arg2, f32 arg3,
    f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9,
    f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14,
    f32 arg15, f32 arg16, f32 arg17, s32 arg18, s32 arg19)
{
    f32 matrix[16];

    func_8002FC50(matrix, arg1, arg2, arg3, arg4, arg5, arg6,
        arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14,
        arg15, arg16, arg17, arg18, arg19);
    func_80029D30(matrix, arg0);
}

