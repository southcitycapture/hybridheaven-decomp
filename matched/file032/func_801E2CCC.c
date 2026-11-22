#include "common.h"

s32 func_8038BEF8(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
s32 func_801E2CCC(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;
    f32 temp_c;

    temp_a = (-0.20000000298023224f);
    temp_b = (15.100000381469727f);
    temp_c = (-44.70000076293945f);
    if (func_8038BEF8(0.0f, 2.0f, 0x41000000, 0x41033333, (-28.200000762939453f), (1.399999976158142f), (11.800000190734863f), (-30.299999237060547f), temp_a, temp_b, temp_c, temp_a, temp_b, temp_c) != 0) {
        return 0x34;
    }
    return 0x33;
}
