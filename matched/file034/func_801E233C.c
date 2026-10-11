#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E944C;
extern f32 D_801E9450;
extern f32 D_801E9454;
extern f32 D_801E9458;
extern f32 D_801E945C;
extern f32 D_801E9460;
extern f32 D_801E9464;
extern f32 D_801E9468;
extern f32 D_801E946C;

s32 func_801E233C(s32 arg0, s32 arg1) {
    f32 fa;
    f32 fb;

    fa = D_801E944C;
    fb = D_801E9450;
    if (func_8038BEF8(0.0f, 1.5f, -65.8f, fa, D_801E9454, D_801E9458, fa, D_801E945C, D_801E9460, fb, D_801E9464, D_801E9468, fb, D_801E946C) != 0) {
        return 0x17;
    }
    return 0x16;
}
