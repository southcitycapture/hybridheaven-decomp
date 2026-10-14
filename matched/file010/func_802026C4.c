#include "context.h"

typedef struct func_802026C4_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802026C4_StructX;

typedef struct func_802026C4_StructO {
    u8 pad0[0x30];
    func_802026C4_StructX *unk30;
} func_802026C4_StructO;

typedef struct func_802026C4_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_802026C4_StructA;

typedef struct func_802026C4_StructS {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802026C4_StructS;

typedef struct func_802026C4_StructD {
    u8 pad0[0xF32];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_802026C4_StructD;

extern s32 func_8000C3B0(void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C97C(s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern func_802026C4_StructD D_801BBBF0;

void func_802026C4(func_802026C4_StructA *arg0, func_802026C4_StructO **arg1) {
    func_802026C4_StructS s;

    s = *(func_802026C4_StructS *)D_80164F40;
    s.unk4 = 0x80000C00;
    func_80005E44(arg0, &s);
    func_80005E44(arg0, &s);
    func_80005E44(arg0, &s);
    func_80005E44(arg0, &s);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCE, 4);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = 1.0f;
    arg1[0]->unk30->unk18 = arg1[0]->unk30->unk1C = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk4 = arg0->unk90;
    arg1[0]->unk30->unk8 = arg0->unk94;
    arg1[0]->unk30->unkC = arg0->unk98;
    arg1[0]->unk30->unk12 = arg0->unk9C;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[0]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[0]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[0]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 1, 0xCE, 5);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = 1.0f;
    arg1[1]->unk30->unk18 = arg1[1]->unk30->unk1C = arg1[1]->unk30->unk20;
    arg1[1]->unk30->unk4 = arg0->unk90;
    arg1[1]->unk30->unk8 = arg0->unk94;
    arg1[1]->unk30->unkC = arg0->unk98;
    arg1[1]->unk30->unk12 = arg0->unk9C;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[1]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[1]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[1]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 2, 0xCE, 6);
    func_8012CF8C(arg0, (u8 *)arg1[2]->unk30 + 0x40, 0xCE, 9);
    arg1[2]->unk30->unk24 = 0x13;
    arg1[2]->unk30->unk30 = func_8000C3B0(arg1[2]);
    arg1[2]->unk30->unk20 = 1.0f;
    arg1[2]->unk30->unk18 = arg1[2]->unk30->unk1C = arg1[2]->unk30->unk20;
    arg1[2]->unk30->unk4 = arg0->unk90 - 2.0 * func_8001EAD0(arg0->unk9C);
    arg1[2]->unk30->unk8 = arg0->unk94;
    arg1[2]->unk30->unkC = arg0->unk98 - 2.0 * func_8001EB64(arg0->unk9C);
    arg1[2]->unk30->unk12 = arg0->unk9C;
    arg1[2]->unk30->unk24 |= 0x400;
    arg1[2]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[2]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[2]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[2]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 3, 0xCE, 7);
    arg1[3]->unk30->unk24 = 0x13;
    arg1[3]->unk30->unk30 = func_8000C3B0(arg1[3]);
    arg1[3]->unk30->unk20 = 1.0f;
    arg1[3]->unk30->unk18 = arg1[3]->unk30->unk1C = arg1[3]->unk30->unk20;
    arg1[3]->unk30->unk4 = arg0->unk90;
    arg1[3]->unk30->unk8 = arg0->unk94;
    arg1[3]->unk30->unkC = arg0->unk98;
    arg1[3]->unk30->unk12 = arg0->unk9C;
    arg1[3]->unk30->unk24 |= 0x400;
    arg1[3]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[3]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[3]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[3]->unk30->unk4F = D_801BBBF0.unkF35;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xCE, 8);
}
