#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1C14(s32 arg0, s32 arg1) {
    f32 fv0;
    f32 fv1;
    f32 ft4;

    fv0 = (-34.2999992f);
    fv1 = 66.1999969f;
    ft4 = (-1.79999995f);
    if (func_8038BEF8(0.0f, 4.0f, -11.5f, 48.5f, (-64.3000031f), 20.2000008f, 47.2000008f, (-39.2000008f), fv0, fv1, ft4, fv0, fv1, ft4) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}
