#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1DE0(s32 arg0, s32 arg1) {
    extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
    if (func_8038BEF8(0.0f, 4.0f, -1.6f, 16.6f,
                      23.6000004f, -3.0f, 41.0999985f, 58.2000008f, (-0.600000024f), 11.5f,
                      (-30.7999992f), 2.0999999f, (-3.20000005f), (-25.3999996f)) != 0) {
        return 6;
    }
    return 5;
}
