#include "common.h"
extern void func_8038BED4(void);
s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);


extern f32 D_80208C6C;
extern f32 D_80208C70;
extern f32 D_80208C74;
extern f32 D_80208C78;

s32 func_801FB144(s32 arg0, s32 arg1) {
    f32 z = D_80208C70;
    f32 x = -0.5f;
    f32 y = D_80208C6C;

    if (func_8038BEF8(0.0f, 2, -10.5f, 11.4f,
                     40.0f, 2.0f, D_80208C74, D_80208C78,
                     x, y, z, x, y, z) != 0) {
        func_8038BED4();
        return 8;
    }
    return 7;
}
