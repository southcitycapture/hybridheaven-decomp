#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E7C98(s32 arg0, s32 arg1) {
    f32 fa;
    f32 fb;
    f32 fc;

    fa = (-18.3999996f);
    fb = 11.8999996f;
    fc = (-7.30000019f);

    if (func_8038BEF8(0.0f, 3.5f, 11.2f, 41.0f, 51.7999992f, 1.70000005f, 58.5f, 76.6999969f, fa, fb, fc, fa, fb, fc) != 0) {
        return 0xB;
    }
    return 0xA;
}
