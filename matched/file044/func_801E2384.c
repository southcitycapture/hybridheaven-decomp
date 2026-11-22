#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2384(s32 arg0, s32 arg1) {
    f32 a = (-3.9000001f);
    f32 b = (-128.899994f);
    f32 c = (-149.199997f);
    f32 d = 33.2999992f;
    if (D_8038C17C(0.0f, 1.65999985f, b, 1.7f,
            a, b, 12.8999996f, a, c, 2.9000001f,
            a, c, 14.1000004f, a, d, d) != 0) {
        return 0x16;
    }
    return 0x15;
}
