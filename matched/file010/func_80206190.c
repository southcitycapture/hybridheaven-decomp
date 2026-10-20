#include "context.h"

struct func_80206190_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80206190_Outer {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_80206190_Inner *unk30;
};
struct func_80206190_Arg1 {
    struct func_80206190_Outer *o[4];
};
struct func_80206190_Arg0 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x92 - 0x4C];
    s16 unk92;
    u8 pad94[0xA0 - 0x94];
    s16 unkA0;
    u8 padA2[4];
    s16 unkA6;
    u8 padA8[4];
    u8 unkAC;
};
struct func_80206190_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_802070F4_Local;
extern struct func_802070F4_Local D_80164F40;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8000C3B0(void *);
extern void func_801FC830(f32, f32, f32, f32, s32);
extern f32 D_8021A7B4;
extern f32 D_8021A7B8;
extern f32 D_8021A7BC;
extern f32 D_8021A7C0;
extern f32 D_8021A7C4;

void func_80206190(struct func_80206190_Arg0 *arg0, struct func_80206190_Arg1 *arg1) {
    struct func_80206190_Local sp30;
    f32 t;

    sp30 = *(struct func_80206190_Local *)&D_80164F40;
    sp30.unk4 = 0x80000900;
    func_80005E44(arg0, &sp30);
    func_80005E44(arg0, &sp30);
    sp30.unk4 = 0x80000600;
    func_80005E44(arg0, &sp30);
    if (arg0->unkAC & 0x20) {
        sp30.unk4 = 0x80000900;
        func_80005E44(arg0, &sp30);
    }
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 0);
    arg1->o[0]->unk30->unk24 = 0x13;
    arg1->o[0]->unk30->unk30 = func_8000C3B0(arg1->o[0]);
    arg1->o[0]->unk30->unk20 = D_8021A7B4;
    t = arg1->o[0]->unk30->unk20;
    arg1->o[0]->unk30->unk1C = t;
    arg1->o[0]->unk30->unk18 = t;
    arg1->o[0]->unk30->unk24 |= 0x400;
    arg1->o[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->o[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->o[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->o[0]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0xCF, 1);
    arg1->o[1]->unk30->unk24 = 0x13;
    arg1->o[1]->unk30->unk30 = func_8000C3B0(arg1->o[1]);
    arg1->o[1]->unk30->unk20 = D_8021A7B8;
    t = arg1->o[1]->unk30->unk20;
    arg1->o[1]->unk30->unk1C = t;
    arg1->o[1]->unk30->unk18 = t;
    arg1->o[1]->unk30->unk24 |= 0x400;
    arg1->o[1]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->o[1]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->o[1]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->o[1]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 2, 0xCF, 5);
    t = D_8021A7BC;
    arg1->o[2]->unk30->unk24 |= 0x100;
    arg1->o[2]->unk30->unk30 = (s32)D_8017B5A8 | 0x40000000;
    arg1->o[2]->unk30->unk18 = t;
    arg1->o[2]->unk30->unk1C = t;
    arg1->o[2]->unk30->unk20 = D_8021A7C0;
    arg1->o[2]->unk30->unk48 = 0xFF;
    arg1->o[2]->unk30->unk49 = 0x60;
    arg1->o[2]->unk30->unk4A = 0x20;
    arg1->o[2]->unk30->unk4B = 0x80;
    if (arg0->unkAC & 0x40) {
        arg1->o[2]->unk22 = 0;
    }
    if (arg0->unkAC & 0x20) {
        func_8012C89C(arg0, 3, 0xE2, 0);
        arg1->o[3]->unk30->unk24 |= 0x400;
        arg1->o[3]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
        arg1->o[3]->unk30->unk20 = D_8021A7C4;
        t = arg1->o[3]->unk30->unk20;
        arg1->o[3]->unk30->unk1C = t;
        arg1->o[3]->unk30->unk18 = t;
        arg1->o[3]->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->o[3]->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->o[3]->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->o[3]->unk30->unk4F = D_801BBBF0[0xF35];
    }
    arg0->unk3C = func_8012C6B4(0x32) + 0x14;
    arg0->unk92 = 0;
    arg0->unkA6 = 0;
    arg0->unkA0 = 0x1C7;
    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
}
