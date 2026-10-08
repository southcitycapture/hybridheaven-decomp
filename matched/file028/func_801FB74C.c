#include "common.h"

extern s32 func_8038BEF8(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g, f32 h, f32 i, f32 j, f32 k, f32 l, f32 m, f32 n);
extern f32 D_80208D24;
extern f32 D_80208D28;
extern f32 D_80208D2C;

s32 func_801FB74C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.0f, -2.6f, 19.7f, D_80208D24, 7.5f, D_80208D28, D_80208D2C, 34.5f, 6.0f, 0.0f, 34.5f, 6.0f, 0.0f) != 0) {
        return 0x10;
    }
    return 0xF;
}
