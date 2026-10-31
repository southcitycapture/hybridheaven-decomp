#include "common.h"
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;
extern func_80257B10_V D_80164F40;
extern u8 D_801BBBF0[];
extern void func_800058DC();
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
typedef struct func_80251E6C_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80251E6C_Inner;


typedef struct func_80256F0C_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256F0C_StructB;
typedef struct func_80256F0C_StructA {
    u8 pad0[0x30];
    func_80256F0C_StructB *unk30;
} func_80256F0C_StructA;
typedef struct func_80256F0C_Obj {
    u8 pad0[0x2C];
    func_80251E6C_Inner *unk2C;
} func_80256F0C_Obj;
typedef struct func_80256F0C_G {
    u8 pad0[0xE0];
    func_80256F0C_Obj *unkE0;
} func_80256F0C_G;
extern void func_8012D814(void *, s32, s32, s32, s32);
extern f32 D_8025DC80;
extern f32 D_8025DC84;
extern u8 D_802599D0[];
extern u8 func_80257114[];

void func_80256F0C(s32 arg0, func_80256F0C_StructA **arg1) {
    func_80257B10_V sp28;

    sp28 = D_80164F40;
    sp28.b = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B0, 0);
    func_8012D814(arg0, 0x4B0, 1, 0x3F800000, 1);
    (*arg1)->unk30->unk24 &= 0xFFF9FFFF;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (u32)D_802599D0 | 0x40000000;
    (*arg1)->unk30->unk4 = ((func_80256F0C_G *)D_801BBBF0)->unkE0->unk2C->unk4;
    (*arg1)->unk30->unk8 = ((func_80256F0C_G *)D_801BBBF0)->unkE0->unk2C->unk8 - 2.0f;
    (*arg1)->unk30->unkC = ((func_80256F0C_G *)D_801BBBF0)->unkE0->unk2C->unkC;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = 0.006000000052154064f;
    (*arg1)->unk30->unk1C = 0.01600000075995922f;
    (*arg1)->unk30->unk20 = 0.006000000052154064f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xF0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0;
    func_800058DC(arg0, func_80257114);
}
