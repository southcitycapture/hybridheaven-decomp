#include "context.h"
f32 func_801C78F8(void);
s32 func_801C8940(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u16 arg8);
extern f32 D_801DD2CC;
void func_801C851C(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 k;
    f32 x;
    f32 a;
    f32 b;
    s32 i;
    s32 j;
    f32 r;
    D_801E0650[1] = arg1;
    D_801E0650[0] = arg0;
    D_801E0650[2] = arg2;
    D_801DA6EC = arg3;
    k = D_801DD2CC;
    for (i = 0; i != 50; i++) {
        a = func_801C78F8() - 0.5f;
        b = func_801C78F8() - 0.5f;
        x = arg3 * a + arg0;
        for (j = 0; j != 1; j++) {
            r = func_801C78F8();
            func_801C8940(x, arg1, arg3 * b + arg2, 1.0f, 1.0f, 1.0f, 1.0f, k * r, 0x5A);
        }
    }
}
