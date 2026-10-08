#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_80208B48;
extern f32 D_80208B4C;
extern f32 D_80208B50;

s32 func_801F51B0(s32 arg0, s32 arg1) {
    func_8038BD50(D_80208B48, D_80208B4C, 0x42500000);
    D_8038BD88(D_80208B50, 3.5f, 0xC1D80000);
    return 1;
}
