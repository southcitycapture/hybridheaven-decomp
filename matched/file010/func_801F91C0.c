#include "context.h"

extern void func_8013A334(f32 *, s32, void *, s32);
extern void func_801F3C90(void *, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_80218D1C;
extern f32 D_80218D20;
extern u8 func_801F9318[];

void func_801F91C0(u8 *arg0, s32 arg1) {
    u8 *sp4C;
    f32 sp40[3];

    sp4C = *(u8 **)(arg0 + 0x5C);
    func_8013A334(sp40, arg1, sp4C, 6);
    func_801F5210(arg0);
    func_801F3C90(arg0, 0x3C23D70A, 0x3DCCCCCD, *(s32 *)((u8 *)D_801BBCD0->unk2C + 4), *(f32 *)((u8 *)D_801BBCD0->unk2C + 8) + 23.0f, *(f32 *)((u8 *)D_801BBCD0->unk2C + 0xC), D_80218D1C, sp40[0], sp40[1], sp40[2], D_80218D20, 35.0f);
    if (*(u16 *)(arg0 + 0x70) == 0x22) {
        func_80020744(0x13C);
    }
    if (func_80010550(arg1, sp4C) != 0) {
        *(s16 *)(sp4C + 0x78) = 1;
        func_800058DC(arg0, (s32)func_801F9318);
        (&D_8021B028)[0] = (f32)(func_8012C6B4(0xA) - 5);
        (&D_8021B028)[1] = (f32)func_8012C6B4(0x14);
        (&D_8021B028)[2] = (f32)(func_8012C6B4(0xA) - 5);
    }
}
