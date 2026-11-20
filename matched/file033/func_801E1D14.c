#include "context.h"
extern void func_8038BED4();
s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
s32 func_801E1D14(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = (-1.1f);
    b = (15.6f);
    c = (-57.6f);
    if (func_8038BEF8(0.0f, 2.5f, 7.4f, 57.0f, (-5.8f), (12.7f), (51.1f), (-27.7f), a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}
