#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801F56F0;
extern f32 D_801F56F4;
extern f32 D_801F56F8;
extern f32 D_801F56FC;
extern f32 D_801F5700;
extern f32 D_801F5704;
extern f32 D_801F5708;

s32 func_801E241C(s32 arg0, s32 arg1) {
    f32 f0;
    f32 f1;
    f32 f2;

    f0 = D_801F56F0;
    f1 = D_801F56F4;
    f2 = D_801F56F8;
    if (func_8038BEF8(0.0f, 2.0f, 15.8f, 8.5f, D_801F56FC, D_801F5700, D_801F5704, D_801F5708, f0, f1, f2, f0, f1, f2) != 0) {
        return 0x14;
    }
    return 0x13;
}
