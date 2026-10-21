#include "context.h"
f32 func_801C78F8(void);
s32 func_801C88A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u16 arg8);

extern f32 D_801DD2C8;

void func_801C83BC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 dx;
    f32 dz;
    f32 r;
    f32 scale;
    s32 i;
    s32 j;

    scale = D_801DD2C8;
    for (i = 0; i != 30; i++) {
        dx = func_801C78F8() - 0.5f;
        dz = func_801C78F8() - 0.5f;
        for (j = 0; j != 2; j++) {
            r = func_801C78F8();
            func_801C88A4(arg3 * dx + arg0, arg1, arg3 * dz + arg2, 1.0f, 1.0f, 1.0f, 1.0f, scale * r, 0x5A);
        }
    }
    if (scale) {
    }
}
