#include "context.h"

typedef struct func_80202408_B {
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
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80202408_B;

typedef struct func_80202408_A {
    u8 pad0[0x30];
    func_80202408_B *unk30;
} func_80202408_A;

typedef struct func_80202408_C {
    func_80202408_A *unk0;
    func_80202408_A *unk4;
} func_80202408_C;

typedef struct func_80202408_P {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x90 - 0x78];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F;
    u8 padA0[4];
    u8 *unkA4;
} func_80202408_P;

void func_80202408(func_80202408_P *arg0, func_80202408_C *arg1) {
    func_80202408_B *v;
    f32 f;
    func_80005E44(arg0, D_80164F40);
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCD, 3);
    arg1->unk0->unk30->unk24 = 0x13;
    arg1->unk0->unk30->unk30 = func_8000C3B0(arg1->unk0);
    arg1->unk0->unk30->unk20 = 1.0f;
    v = arg1->unk0->unk30;
    f = v->unk20;
    v->unk1C = f;
    arg1->unk0->unk30->unk18 = f;
    arg1->unk0->unk30->unk4 = arg0->unk90;
    arg1->unk0->unk30->unk8 = arg0->unk94;
    arg1->unk0->unk30->unkC = arg0->unk98;
    arg1->unk0->unk30->unk12 = arg0->unk9C;
    v = arg1->unk0->unk30;
    v->unk24 |= 0x400;
    arg1->unk0->unk30->unk4C = D_801BBBF0.unkF32;
    arg1->unk0->unk30->unk4D = D_801BBBF0.unkF33;
    arg1->unk0->unk30->unk4E = D_801BBBF0.unkF34;
    arg1->unk0->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 1, 0xCD, 4);
    arg1->unk4->unk30->unk24 = 0x13;
    arg1->unk4->unk30->unk30 = func_8000C3B0(arg1->unk4);
    arg1->unk4->unk30->unk20 = 1.0f;
    v = arg1->unk4->unk30;
    f = v->unk20;
    v->unk1C = f;
    arg1->unk4->unk30->unk18 = f;
    arg1->unk4->unk30->unk4 = arg0->unk90;
    arg1->unk4->unk30->unk8 = arg0->unk94;
    arg1->unk4->unk30->unkC = arg0->unk98;
    arg1->unk4->unk30->unk12 = arg0->unk9C;
    v = arg1->unk4->unk30;
    v->unk24 |= 0x400;
    arg1->unk4->unk30->unk4C = D_801BBBF0.unkF32;
    arg1->unk4->unk30->unk4D = D_801BBBF0.unkF33;
    arg1->unk4->unk30->unk4E = D_801BBBF0.unkF34;
    arg1->unk4->unk30->unk4F = D_801BBBF0.unkF35;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xCD, 5);
    if (*arg0->unkA4 & 8) {
        arg0->unk9E = 2;
        arg1->unk4->unk30->unk8 = arg0->unk94 + 8.0f;
        arg0->unk74 = func_8012C97C(0xCD, 6);
    }
}
