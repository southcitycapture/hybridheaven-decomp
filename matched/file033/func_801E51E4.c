#include "context.h"
extern s32 func_801C0DE4(s32, s32, s32);
extern f64 func_80034C24();
extern u64 func_801C0F18(s32, s32);
extern void func_8038D33C(f32, f32, f32, s32, f32, f32);

extern f64 D_801F4810;
extern f32 D_801F4818;
extern f32 D_801F481C;
extern f32 D_801F4820;
extern s32 func_801CE2D0(s32, s32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern void func_801C0EB0(s32, s32);

s32 func_801E51E4(s32 arg0, s32 arg1) {
    u8 *p;
    if (func_801C0DE4(4, 0, 0x40F00000) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x03480027, 0, 0, 15.0f);
        return 4;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 0x24) + 0x2C) + 0xC) =
        (f32)(func_80034C24(func_801C0F18(4, 0)) / D_801F4810) / 7.5f * D_801F4818 + D_801F481C;
    if (func_801CE2D0(0x0168003E, 0xA) != 0 || func_801CE2D0(0x0168003E, 0x1C) != 0) {
        p = *(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(p + 4), *(f32 *)(p + 8), *(f32 *)(p + 0xC), 0x678, D_801F4820, 1.0f);
    }
    return 3;
}
