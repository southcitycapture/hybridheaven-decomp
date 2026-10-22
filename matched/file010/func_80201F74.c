#include "context.h"

struct func_80201F74_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
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
};
struct func_80201F74_StructO {
    u8 pad0[0x30];
    struct func_80201F74_StructX *unk30;
};
struct func_80201F74_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F;
    u8 padA0[4];
    u8 *unkA4;
};
extern f64 D_80219608;
extern s32 func_8000C3B0(void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C97C(s32, s32);
extern void func_80020718();

void func_80201F74(struct func_80201F74_StructA *arg0, struct func_80201F74_StructO **arg1) {
    struct func_80201F74_StructX *v;
    f32 k;

    func_80005E44(arg0, D_80164F40);
    func_80005E44(arg0, D_80164F40);
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCD, 0);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = 1.0f;
    v = arg1[0]->unk30;
    v->unk1C = v->unk20;
    arg1[0]->unk30->unk18 = v->unk20;
    arg1[0]->unk30->unk4 = arg0->unk90;
    arg1[0]->unk30->unk8 = arg0->unk94;
    arg1[0]->unk30->unkC = arg0->unk98;
    arg1[0]->unk30->unk12 = arg0->unk9C;
    v = arg1[0]->unk30;
    v->unk24 = v->unk24 | 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[0]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[0]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[0]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 1, 0xCD, 1);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = 1.0f;
    v = arg1[1]->unk30;
    v->unk1C = v->unk20;
    arg1[1]->unk30->unk18 = v->unk20;
    arg1[1]->unk30->unk4 = func_8001EAD0(arg0->unk9C + 0x800) * 3.0f + arg0->unk90;
    arg1[1]->unk30->unk8 = arg0->unk94 + 3.0f;
    arg1[1]->unk30->unkC = func_8001EB64(arg0->unk9C + 0x800) * 3.0f + arg0->unk98;
    arg1[1]->unk30->unk12 = (s16)(arg0->unk9C + 0x800) & 0x1FFF;
    v = arg1[1]->unk30;
    v->unk24 = v->unk24 | 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[1]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[1]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[1]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 2, 0xCD, 1);
    arg1[2]->unk30->unk24 = 0x13;
    arg1[2]->unk30->unk30 = func_8000C3B0(arg1[2]);
    arg1[2]->unk30->unk20 = 1.0f;
    v = arg1[2]->unk30;
    v->unk1C = v->unk20;
    arg1[2]->unk30->unk18 = v->unk20;
    arg1[2]->unk30->unk4 = func_8001EAD0(arg0->unk9C - 0x800) * 3.0f + arg0->unk90;
    arg1[2]->unk30->unk8 = arg0->unk94 + 3.0f;
    arg1[2]->unk30->unkC = func_8001EB64(arg0->unk9C - 0x800) * 3.0f + arg0->unk98;
    arg1[2]->unk30->unk12 = (s16)(arg0->unk9C - 0x800) & 0x1FFF;
    v = arg1[2]->unk30;
    v->unk24 = v->unk24 | 0x400;
    arg1[2]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[2]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[2]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[2]->unk30->unk4F = D_801BBBF0.unkF35;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xCD, 2);
    if (*arg0->unkA4 & 8) {
        f64 d = D_80219608;
        arg0->unk9E = 2;
        arg1[1]->unk30->unk8 = (f64)(arg0->unk94 + 3.0f) + d;
        arg1[1]->unk30->unk10 = 0xE38;
        arg1[2]->unk30->unk8 = (f64)(arg0->unk94 + 3.0f) + d;
        arg1[2]->unk30->unk10 = 0xE38;
    }
}
