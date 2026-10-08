#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, u32);
extern void D_8038BD88(f32, f32, u32);
extern f32 D_801E86D8;
extern f32 D_801E86DC;
extern f32 D_801E86E0;
extern f32 D_801E86E4;

s32 func_801E1D28(s32 arg0, s32 arg1) {
    func_8038BE98(20.0f);
    func_8038BD50(D_801E86D8, D_801E86DC, 0x4213999A);
    D_8038BD88(D_801E86E0, D_801E86E4, 0x4240CCCD);
    return 4;
}
