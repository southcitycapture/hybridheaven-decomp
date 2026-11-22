#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E243C(s32 arg0, s32 arg1) {
    f32 temp;

    temp = 3.5999999f;
    if (func_8038BEF8(0.0f, 1.9000001f, 67.1f, 19.4f, -8.5f, (-17.1000004f), temp, 37.2999992f, -2.5f, 11.8999996f, temp, (-22.2000008f), 4.9000001f, 39.2000008f) != 0) {
        return 0x18;
    }
    return 0x17;
}
