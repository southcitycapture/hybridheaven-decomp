#include "common.h"
extern u8 *D_801DAB14;
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

extern s32 func_801C1134();
extern s32 func_801C1088();
extern void func_801C10D8();
extern s32 func_801CEE30();
extern f32 D_801E7924;
extern f32 D_801E7928;
extern f32 D_801E792C;

s32 func_801E5900(s32 arg0, s32 arg1) {
    u32 t;
    f32 q;
    t = func_801C1134(4, 1);
    q = (f32)t / 45.0f;
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 8) + 0x24) + 0x2C) + 0xC) = D_801E7924 * q + D_801E7928;
    if (func_801C1088(4, 1, 0x2D)) {
        func_801C10D8(4, 1);
        return 0x24;
    }
    if (func_801CEE30(0x4100000, 9) || func_801CEE30(0x4100000, 0x12)) {
        u8 *p = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(p + 4), *(f32 *)(p + 8), *(s32 *)(p + 0xC), 0x67B, D_801E792C, 1.0f);
    }
    return 0x23;
}
