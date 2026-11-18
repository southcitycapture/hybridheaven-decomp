#include "context.h"
s32 func_8038BEF8(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
s32 func_801E1D08(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;
    f32 v2;

    v0 = (-3.3f);
    v1 = (9.4f);
    v2 = (-42.4f);
    if (func_8038BEF8(0.0f, 3.0f, 0x41BE6666, 0x3F666666, (-14.4f), (12.6f), 1.5f, (-6.7f), v0, v1, v2, v0, v1, v2) != 0) {
        return 3;
    }
    return 2;
}
