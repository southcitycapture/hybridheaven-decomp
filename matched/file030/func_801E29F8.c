#include "common.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801EC600;
extern f32 D_801EC604;
extern f32 D_801EC608;
extern f32 D_801EC60C;
extern f32 D_801EC610;

s32 func_801E29F8(s32 arg0, s32 arg1) {
    f32 k0 = -2.6f;
    f32 k1 = 28.0f;
    f32 k2 = -38.6f;

    if (func_8038BEF8(0.0f, 3.0f, -59.9f, 77.7f, D_801EC600, D_801EC604, D_801EC608, 2.5f, k0, k1, k2, k0, k1, k2) != 0) {
        func_8038BD50(D_801EC60C, D_801EC610, 0x40A00000);
        D_8038BD88(0.0f, 30.0f, 0xC21F999A);
        func_8038BED4();
        return 0x21;
    }
    return 0x20;
}
