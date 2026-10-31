#include "common.h"
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801E89B0;
extern f32 D_801E89B4;
extern f32 D_801E89B8;
extern f32 D_801E89BC;
extern f32 D_801E89C0;
extern f32 D_801E89C4;
extern f32 D_801E89C8;

s32 func_801E22D4(s32 arg0, s32 arg1) {
    f32 a = 11.4f;
    f32 b = -0.1f;
    if (func_8038BEF8(0.0f, D_801E89B8, -1.7000000476837158f, a, 70.0f, D_801E89BC, a, D_801E89C0, D_801E89C4, 12.5f, b, D_801E89C8, 12.5f, b) != 0) {
        return 9;
    }
    return 8;
}
