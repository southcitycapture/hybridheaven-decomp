#include "common.h"
f32 func_801C78F8(void);

extern void func_801C89DC(f32, f32, f32, f32, f32, f32, s32);

void func_801C82A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u16 arg7) {
    f32 a;
    f32 b;
    f32 c;
    s32 i;

    for (i = 0; i != 0x1E; i++) {
        a = (func_801C78F8() - 0.5f) * arg6;
        b = (func_801C78F8() - 0.5f) * arg6;
        c = func_801C78F8() * arg5;
        func_801C89DC(arg0, arg1, arg2 + a, arg3 + b, arg4, c, arg7);
    }
}
