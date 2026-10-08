#include "context.h"

extern void func_80377BA0(s32, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_80377CBC(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u16 arg14) {
    func_80377BA0(arg0, arg1 & 0xFF, arg2, arg3, arg4, (s32) arg5, (s32) arg6, (s32) arg7, (s32) arg8, (s32) arg9, (s32) arg10, (s32) arg11, (s32) arg12, 0, 0, 0, 0, 0, 0, 0, 0, (s32) arg13, (s32) arg14);
}
