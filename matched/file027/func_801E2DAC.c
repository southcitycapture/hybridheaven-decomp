#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2DAC(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.0f, 24.6f, 27.7f, 21.0f, -1.0f,
                      53.2999992f, 2.5999999f, -2.5f, 14.1999998f,
                      (-44.9000015f), (-1.39999998f), 9.10000038f, (-41.9000015f)) != 0) {
        return 0x29;
    }
    return 0x28;
}
