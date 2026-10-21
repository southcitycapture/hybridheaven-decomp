#include "context.h"

struct func_803831D0_Struct { u8 pad0[0x3C]; u16 unk3C; };
struct func_803831D0_Struct2 { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_803831D0_Struct3 { u8 pad0[0x2C]; struct func_803831D0_Struct2 *unk2C; };
extern struct func_803831D0_Struct3 *D_801BBCD0;
extern f32 D_80389B58;
extern f64 D_80389B60;
extern f64 D_80389B68;
extern f32 D_80389B70;
extern s32 D_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);

#define T (D_801BBCD0->unk2C)

void func_803831D0(struct func_803831D0_Struct *arg0, s32 arg1) {
    s32 sp6C;
    s32 pad;
    s32 sp64;
    s32 sp60;

    sp6C = arg0->unk3C++;
    sp60 = func_8012C6B4(0x258);
    sp64 = func_8012C6B4(0x258);
    D_80129FB8((sp60 - 0x12C) / 100.0 + T->unk4, T->unk8 + 2.0f, (sp64 - 0x12C) / 100.0 + T->unkC, 0.0f, D_80389B58, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x82, -4, func_8012C6B4(0x14) / D_80389B60 + D_80389B68, 4, 0);
    if ((sp6C < 5) && !(sp6C % 2)) {
        sp60 = func_8012C6B4(0x320);
        sp64 = func_8012C6B4(0x4B0);
        D_80129FB8((sp60 - 0x190) / 100.0 + T->unk4, (sp64 - 0x258) / 100.0 + T->unk8 + 12.0, (func_8012C6B4(0x320) - 0x190) / 100.0 + T->unkC, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x7A, 0, 0xB2, 0x14, 0, 0x64, -6, D_80389B70, 3, 0);
    }
    if (sp6C >= 0xF) {
        func_80005700(arg0);
    }
}
