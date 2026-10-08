#include "common.h"

void func_801C4028(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 arg7, f32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15);

s32 func_801F6820(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C4028(0, 6.0f, 9.0f, 45.0f, 0, 0xC2, 0x148, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C4028(0, -5.0f, 9.0f, 44.0f, 0, 0xC2, 0, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 2;
    }
    return 1;
}
