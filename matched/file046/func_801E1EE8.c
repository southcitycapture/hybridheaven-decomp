#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EB2F8;
extern f32 D_801EB2FC;
extern f32 D_801EB300;
extern f32 D_801EB304;
extern f32 D_801EB308;
extern f32 D_801EB30C;
extern f32 D_801EB310;
extern f32 D_801EB314;
extern f32 D_801EB318;
extern f32 D_801EB31C;

s32 func_801E1EE8(s32 arg0, s32 arg1) {
    f32 a = D_801EB2F8;
    f32 b = D_801EB2FC;
    f32 c = D_801EB300;
    f32 d = D_801EB304;

    if (D_8038C17C(0.0f, 1.0f, a, b, D_801EB308, a, b, D_801EB30C, c, d, D_801EB310, c, d, D_801EB314, D_801EB318, D_801EB31C) != 0) {
        return 6;
    }
    return 5;
}
