#include "context.h"

void func_80014990(void *a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6);
void func_80029D30(void *a0, s32 a1);

void func_80014B2C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, s16 arg5, s16 arg6) {
    s32 sp28[16];

    func_80014990(sp28, arg1, arg2, arg3, arg4, arg5, arg6);
    func_80029D30(sp28, arg0);
}
