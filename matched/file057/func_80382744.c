#include "context.h"
extern u8 D_8038CA74[];
extern u8 D_801BC339;
extern u8 D_801BC338;
extern u8 D_801BC33A;

void func_80382744(func_803825CC_Struct *arg0, s32 arg1) {
    s8 sp3F;
    s16 v;
    u8 r;
    extern void func_803828F0();

    sp3F = 0;
    v = arg0->unkB0;
    arg0->unkB0 = v - 1;
    if (v < 0 || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_803821B0(arg0, 0x2E, 0x88, 0x50, 0x50, 0xFF, 2, &sp3F);
        r = (u32)(((f32)D_801BC339 / (f32)D_801BC338) * 100.0f);
        D_801BC33A = r;
        func_8001B204(5, 0x74, 0x8B, D_8038CA74, 4, r);
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, func_803828F0);
    }
}
