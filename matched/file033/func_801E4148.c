#include "common.h"

s32 func_801C5414(s32 a0, s32 a1, s32 a2, s32 a3, s32 arg4, s32 arg5, s32 arg6, f32 arg7, f32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16);
extern f32 D_801F47A0;
extern f32 D_801F47A4;

s32 func_801E4148(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB923D5) != 0) {
        func_801C5414(0, 0xC1200000, 0x40A00000, 0xC21C0000, 0, 0x146, 0x1B, D_801F47A0, D_801F47A4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 1);
        return 0xA;
    }
    return 9;
}
