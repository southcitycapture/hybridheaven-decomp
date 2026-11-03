#include "common.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801EB2D4;
extern f32 D_801EB2D8;
extern f32 D_801EB2DC;
extern f32 D_801EB2E0;
extern f32 D_801EB2E4;
extern f32 D_801EB2E8;
extern f32 D_801EB2EC;
extern f32 D_801EB2F0;
extern f32 D_801EB2F4;

s32 func_801E1DD8(s32 arg0, s32 arg1) {
    f32 a = D_801EB2D4;
    f32 b = D_801EB2D8;
    f32 k = 33.0f;
    f32 c = D_801EB2DC;

    if (D_8038C17C(0.0f, 1.0f, a, b, D_801EB2E0, a, b, D_801EB2E4, k, c, D_801EB2E8, k, c, D_801EB2EC, D_801EB2F0, D_801EB2F4) != 0) {
        return 4;
    }
    return 3;
}
