#include "common.h"

extern f32 D_80208794;
extern f32 D_80208798;
extern f32 D_8020879C;
extern f32 D_802087A0;
extern f32 D_802087A4;

s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E1F2C(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;
    f32 temp_c;

    temp_a = D_80208794;
    temp_b = D_80208798;
    temp_c = D_8020879C;
    if (func_8038BEF8(0.0f, 5.0f, -10.4f, 57.5f, -62.0f, D_802087A0, 47.0f, D_802087A4, temp_a, temp_b, temp_c, temp_a, temp_b, temp_c) != 0) {
        return 9;
    }
    return 8;
}
