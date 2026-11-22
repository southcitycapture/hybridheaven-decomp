#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2B1C(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = (-0.400000006f);
    b = 13.6000004f;
    c = 0.300000012f;
    if (func_8038BEF8(0.0f, 0.800000191f, 0.6f, 15.2f, (-16.8999996f), 0.5f, 13.0f, (-15.1999998f), a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 0x21;
    }
    return 0x20;
}
