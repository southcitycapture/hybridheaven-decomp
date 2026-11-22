#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2D2C(s32 arg0, s32 arg1) {
    f32 a = 96.0999985f;
    f32 d;

    d = 33.3f;
    if (D_8038C17C(0.0f, 0.659999847f, 71.3f, 12.1f, (-18.7999992f), 83.0999985f, 12.3000002f, (-4.9000001f), a, 12.5f, 10.5f, a, 12.5f, 10.5f, d, d) != 0) {
        return 0x33;
    }
    return 0x32;
}
