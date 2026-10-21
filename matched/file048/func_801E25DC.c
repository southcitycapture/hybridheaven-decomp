#include "context.h"
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

s32 func_801E25DC(s32 arg0, s32 arg1) {
    u8 r;
    f32 q;
    extern void D_801CCE88(s32, u8, u8, u8);

    if (func_801C1088(1, 0, 30) != 0) {
        func_801C10D8(1, 0);
        return 5;
    }
    q = (f32)func_801C1134(1, 0) / 30.0f;
    r = (u32)(150.0f * q);
    D_801CCE88(0, r, r, r);
    return 4;
}
