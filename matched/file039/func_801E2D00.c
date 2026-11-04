#include "common.h"
extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801EB1F0;
extern f32 D_801EB1F4;
extern f32 D_801EB1F8;
extern f32 D_801EB1FC;
extern f32 D_801EB200;
extern f32 D_801EB204;
extern f32 D_801EB208;
extern f32 D_801EB20C;

s32 func_801E2D00(s32 arg0, s32 arg1) {
    f32 b;
    f32 a;
    f32 k;
    a = D_801EB1F0;

    k = 1.5f;
    b = D_801EB1F4;

    if (D_8038C17C(0.0f, D_801EB1F8, 0x40C00000, 0xC44BB99A, D_801EB1FC, D_801EB200, D_801EB204, -13.0f, a, D_801EB208, k, a, D_801EB20C, k, b, b) != 0) {
        return 0x2A;
    }
    return 0x29;
}
