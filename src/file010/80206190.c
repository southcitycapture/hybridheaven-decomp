#include "common.h"

extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_801BBBF0[];

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


struct func_80206598_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80206598_Inner {
    u8 pad0[0x18];
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
struct func_80206598_Outer {
    u8 pad0[0x30];
    struct func_80206598_Inner *unk30;
};
struct func_80206598_Arg0 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0xA2 - 0x4C];
    s16 unkA2;
};
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C6B4();
extern f32 D_8021A7C8;
extern f32 D_8021A7CC;
extern f64 D_8021A7D0;
extern f64 D_8021A7D8;

void func_80206598(struct func_80206598_Arg0 *arg0, struct func_80206598_Outer **arg1) {
    struct func_80206598_Local loc;
    u8 pad[4];

    loc = *(struct func_80206598_Local *)&D_80164F40;
    loc.unk4 = 0x80000900;
    func_80005E44(arg0, &loc);
    func_80005E44(arg0, &loc);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 2);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = D_8021A7C8;
    arg1[0]->unk30->unk18 = arg1[0]->unk30->unk1C = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0xCF, 3);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = D_8021A7CC;
    arg1[1]->unk30->unk18 = arg1[1]->unk30->unk1C = arg1[1]->unk30->unk20;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[1]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[1]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[1]->unk30->unk4F = D_801BBBF0[0xF35];
    arg0->unk3C = func_8012C6B4(0x3C) + 10;
    arg0->unk44 = 0.0f;
    arg0->unk40 = func_8001EAD0(arg0->unkA2) * D_8021A7D0;
    arg0->unk48 = func_8001EB64(arg0->unkA2) * D_8021A7D8;
}


typedef struct {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_802067F4_Inner;

typedef struct {
    u8 pad0[0x30];
    func_802067F4_Inner *unk30;
} func_802067F4_Outer;

typedef struct {
    u8 pad0[0xA0];
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_802067F4_Arg0;

extern f32 D_8021A7E0;
extern f32 D_8021A7E4;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802067F4_Local;

void func_802067F4(func_802067F4_Arg0 *arg0, func_802067F4_Outer **arg1) {
    func_802067F4_Local sp20;

    sp20 = *(func_802067F4_Local *) &D_80164F40;
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x100;
    (*arg1)->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A7E0;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A7E4;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}


typedef struct {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80206944_Inner;

typedef struct {
    u8 pad0[0x30];
    func_80206944_Inner *unk30;
} func_80206944_Outer;

typedef struct {
    u8 pad0[0xA0];
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_80206944_Arg0;

extern void func_8012CF8C(void *, void *, s32, s32);
extern f32 D_8021A7E8;
extern f32 D_8021A7EC;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80206944_Local;

void func_80206944(func_80206944_Arg0 *arg0, func_80206944_Outer **arg1) {
    func_80206944_Local sp20;

    sp20 = *(func_80206944_Local *) &D_80164F40;
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *) (*arg1)->unk30 + 0x40, 1, 0);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x100;
    (*arg1)->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A7E8;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A7EC;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}


typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80206AB0_Inner;

typedef struct {
    u8 pad0[0x30];
    func_80206AB0_Inner *unk30;
} func_80206AB0_Outer;

typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_80206AB0_Arg0;

extern f32 D_8021A7F0;
extern f32 D_8021A7F4;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80206AB0_Local;

void func_80206AB0(func_80206AB0_Arg0 *arg0, func_80206AB0_Outer **arg1) {
    func_80206AB0_Local sp20;

    sp20 = *(func_80206AB0_Local *) &D_80164F40;
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *) (*arg1)->unk30 + 0x40, 0xC8, 0);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x100;
    (*arg1)->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A7F0;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A7F4;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0x64;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80206C50.s")

struct func_80206F14_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80206F14_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x74 - 0x30];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x92 - 0x8A];
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
};
struct func_80206F14_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
    u8 pad14[4];
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
struct func_80206F14_Outer {
    u8 pad0[0x30];
    struct func_80206F14_Struct *unk30;
};
extern u8 D_80217A00[];
extern s16 D_80217CAC;
extern f32 D_8021A800;

void func_80206F14(struct func_80206F14_Arg0 *arg0, struct func_80206F14_Outer **arg1) {
    struct func_80206F14_Local sp28;
    f32 temp;

    sp28 = *(struct func_80206F14_Local *)&D_80164F40;
    ((s32 *)&sp28)[1] = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD4, 0);
    (*arg1)->unk30->unk30 = (s32)D_80217A00;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk20 = D_8021A800;
    temp = (*arg1)->unk30->unk20;
    (*arg1)->unk30->unk1C = temp;
    (*arg1)->unk30->unk18 = temp;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xC8;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xD4, 1);
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
    arg0->unk92 =func_8012C6B4(0x3C) + 0x1E;
    D_80217CAC = 0;
}


struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_802070F4_Inner {
    u8 pad0[0x18];
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
struct func_802070F4_Outer {
    u8 pad0[0x30];
    struct func_802070F4_Inner *unk30;
};
struct func_802070F4_Arg0 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x54];
    s16 unk92;
};

extern f32 D_8021A804;

void func_802070F4(void *arg0, struct func_802070F4_Outer **arg1) {
    struct func_802070F4_Local sp28;
    f32 temp_fv0;
    struct func_802070F4_Inner *temp_v0;

    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xDA, 0);
    (*arg1)->unk30->unk24 = 0x13;
    (*arg1)->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk20 = D_8021A804;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk24 = temp_v0->unk24 | 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    ((struct func_802070F4_Arg0 *) arg0)->unk3C = 0;
    ((struct func_802070F4_Arg0 *) arg0)->unk92 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207238.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802073EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207654.s")


void func_80207808(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

typedef struct { s32 w[4]; } func_80207814_Struct;
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
} func_80207814_Inner;
typedef struct { u8 pad0[0x30]; func_80207814_Inner *unk30; } func_80207814_Outer;
typedef struct {
    u8 pad0[0x94];
    f32 unk94, unk98, unk9C;
    u16 unkA0, unkA2, unkA4;
} func_80207814_Arg0;
extern u8 D_80217B00[];
extern f32 D_8021A824;
extern f32 D_8021A828;

void func_80207814(func_80207814_Arg0 *arg0, func_80207814_Outer **arg1) {
    func_80207814_Struct sp;
    sp = *(func_80207814_Struct *)&D_80164F40;
    sp.w[1] = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD0, 0);
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80217B00 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A824;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A828;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xC8;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}

typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802079BC_StructI;
typedef struct {
    u8 pad0[0x30];
    func_802079BC_StructI *unk30;
} func_802079BC_StructO;
typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_802079BC_StructA;
extern f32 D_8021A82C;
extern f32 D_8021A830;

void func_802079BC(func_802079BC_StructA *arg0, func_802079BC_StructO **arg1) {
    struct func_802070F4_Local sp20;

    sp20 = D_80164F40;
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 1, 0);
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80217B00 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A82C;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A830;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xC8;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207B80.s")

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
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
} func_80207E60_Inner;
typedef struct {
    u8 pad0[0x30];
    func_80207E60_Inner *unk30;
} func_80207E60_Outer;
typedef struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[0xAC - 0xA0];
    u8 unkAC;
} func_80207E60_Arg0;
extern f32 D_8021A83C;

void func_80207E60(func_80207E60_Arg0 *arg0, func_80207E60_Outer **arg1) {
    struct func_802070F4_Local sp38;
    f32 k;
    u8 pad[8];
    sp38 = D_80164F40;
    sp38.unk4 = 0x80000900;
    func_80005E44(arg0, &sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD1, 0);
    k = D_8021A83C;
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    if (arg0->unkAC & 1) {
        arg0->unk90 = 9;
    }
    arg0->unk92 = 0;
    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x316);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020829C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80208548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802087F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80208B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80208CA4.s")


struct func_80208E30_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_80208E30_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
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

struct func_80208E30_Outer {
    u8 pad0[0x30];
    struct func_80208E30_Inner *unk30;
};

struct func_80208E30_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x74 - 0x3E];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x94 - 0x8A];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
    u8 padA4[0xA8 - 0xA4];
    s32 unkA8;
    u8 padAC[0xB0 - 0xAC];
    u8 unkB0;
};

extern s32 func_8012C97C(s32, s32);
extern f32 D_8021A874;

void func_80208E30(struct func_80208E30_Arg0 *arg0, struct func_80208E30_Outer **arg1) {
    struct func_802070F4_Local sp28;
    s32 temp_v1;
    f32 temp_f0;

    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xE4, 0);
    temp_f0 = D_8021A874;
    (*arg1)->unk30->unk24 = (s32) ((*arg1)->unk30->unk24 | 0x400);
    (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AF90 | 0x40000000);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = temp_f0;
    (*arg1)->unk30->unk1C = temp_f0;
    (*arg1)->unk30->unk20 = temp_f0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    arg0->unk2C = (s32) (arg0->unk2C | 0x800);
    arg0->unk74 = func_8012C97C(0xE4, 1);
    temp_v1 = arg0->unkA8;
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
    if (temp_v1 != 0) {
        arg0->unkB0 = temp_v1;
    }
    arg0->unk3C = 0;
}


struct func_80209004_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_80209004_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
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

struct func_80209004_Outer {
    u8 pad0[0x30];
    struct func_80209004_Inner *unk30;
};

struct func_80209004_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x74 - 0x3E];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x94 - 0x8A];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
    u8 padA4[0xA8 - 0xA4];
    s32 unkA8;
    u8 padAC[0xB0 - 0xAC];
    u8 unkB0;
};

extern f32 D_8021A878;

void func_80209004(struct func_80209004_Arg0 *arg0, struct func_80209004_Outer **arg1) {
    struct func_802070F4_Local sp28;
    s32 temp_v1;
    f32 temp_f0;

    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xE5, 0);
    temp_f0 = D_8021A878;
    (*arg1)->unk30->unk24 = (s32) ((*arg1)->unk30->unk24 | 0x400);
    (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AF90 | 0x40000000);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = temp_f0;
    (*arg1)->unk30->unk1C = temp_f0;
    (*arg1)->unk30->unk20 = temp_f0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    arg0->unk2C = (s32) (arg0->unk2C | 0x800);
    arg0->unk74 = func_8012C97C(0xE5, 1);
    temp_v1 = arg0->unkA8;
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
    if (temp_v1 != 0) {
        arg0->unkB0 = temp_v1;
    }
    arg0->unk3C = 0;
}


struct func_802091D8_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_802091D8_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
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

struct func_802091D8_Outer {
    u8 pad0[0x30];
    struct func_802091D8_Inner *unk30;
};

struct func_802091D8_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x74 - 0x3E];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x94 - 0x8A];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
    u8 padA4[0xA8 - 0xA4];
    s32 unkA8;
    u8 padAC[0xB0 - 0xAC];
    u8 unkB0;
};

extern f32 D_8021A87C;

void func_802091D8(struct func_802091D8_Arg0 *arg0, struct func_802091D8_Outer **arg1) {
    struct func_802070F4_Local sp28;
    s32 temp_v1;
    f32 temp_f0;

    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xE6, 0);
    temp_f0 = D_8021A87C;
    (*arg1)->unk30->unk24 = (s32) ((*arg1)->unk30->unk24 | 0x400);
    (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AF90 | 0x40000000);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = temp_f0;
    (*arg1)->unk30->unk1C = temp_f0;
    (*arg1)->unk30->unk20 = temp_f0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    arg0->unk2C = (s32) (arg0->unk2C | 0x800);
    arg0->unk74 = func_8012C97C(0xE6, 1);
    temp_v1 = arg0->unkA8;
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
    if (temp_v1 != 0) {
        arg0->unkB0 = temp_v1;
    }
    arg0->unk3C = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802093AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80209698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020A7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020BCE0.s")


s32 func_8020C030(u8 *arg0, u8 **arg1) {
    u8 *temp_v0;

    *(f32 *) (*(u8 **) (*arg1 + 0x30) + 0x4) = *(f32 *) (arg0 + 0x94);
    *(f32 *) (*(u8 **) (*arg1 + 0x30) + 0x8) = *(f32 *) (arg0 + 0x98);
    *(f32 *) (*(u8 **) (*arg1 + 0x30) + 0xC) = *(f32 *) (arg0 + 0x9C);
    temp_v0 = *(u8 **) (*arg1 + 0x30);
    temp_v0[0x4B] = (u8) (temp_v0[0x4B] - 0x10);
    if ((s32) (*(u8 **) (*arg1 + 0x30))[0x4B] < 0x19) {
        return 0;
    }
    return 1;
}


extern f64 D_8021A9F8;

struct func_8020C0A0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
};

struct func_8020C0A0_Outer {
    u8 pad0[0x30];
    struct func_8020C0A0_Inner *unk30;
};

struct func_8020C0A0_Arg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

s32 func_8020C0A0(struct func_8020C0A0_Arg0 *arg0, struct func_8020C0A0_Outer **arg1) {
    f64 k;
    struct func_8020C0A0_Inner *temp_v0;

    k = D_8021A9F8;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + k);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + k);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 0x18);
    if ((s32) (*arg1)->unk30->unk4B < 0x19) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C61C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020CBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020D358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020D5DC.s")


extern u8 D_801BBD76;

struct func_8020E7C0_Inner {
    u8 pad0[0x4B];
    u8 unk4B;
};

struct func_8020E7C0_Outer {
    u8 pad0[0x30];
    struct func_8020E7C0_Inner *unk30;
};

s32 func_8020E7C0(s32 arg0, struct func_8020E7C0_Outer **arg1) {
    if (D_801BBD76 != 0) {
        return 0;
    }
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B - 0x10);
    if ((s32) (*arg1)->unk30->unk4B < 0x10) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020E81C.s")


s32 func_8020EAA0(s32 arg0, struct func_8020C0A0_Outer **arg1) {
    struct func_8020C0A0_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 0x10);
    if ((s32) (*arg1)->unk30->unk4B < 0x19) {
        return 0;
    }
    return 1;
}


extern f64 D_8021ABA8;

struct func_8020EAE4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
};

struct func_8020EAE4_Outer {
    u8 pad0[0x30];
    struct func_8020EAE4_Inner *unk30;
};

struct func_8020EAE4_Arg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

s32 func_8020EAE4(struct func_8020EAE4_Arg0 *arg0, struct func_8020EAE4_Outer **arg1) {
    f64 k;
    struct func_8020EAE4_Inner *temp_v0;

    k = D_8021ABA8;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + k);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + k);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B -= 0x18;
    if ((*arg1)->unk30->unk4B < 0x19) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020EB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020F4D4.s")


typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x48 - 0x16];
    u8 unk48;
    u8 pad49;
    u8 unk4A;
} func_8020FB98_Inner;

typedef struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_8020FB98_Inner *unk30;
} func_8020FB98_Outer;

typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x44 - 0x3E];
    f32 unk44;
    u8 pad48[0x74 - 0x48];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xAC - 0xA6];
    u8 unkAC;
    u8 padAD[0xB0 - 0xAD];
    u8 unkB0;
} func_8020FB98_Struct;

extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern void func_801FDB3C(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_801BBF74;
extern f32 D_80217CC8[];
extern f64 D_8021AC38;
extern f64 D_8021AC40;

s32 func_8020FB98(func_8020FB98_Struct *arg0, func_8020FB98_Outer **arg1) {
    s16 ang;
    s32 ret;
    s32 idx;
    s32 t;

    idx = arg0->unk91 - 0x18;
    t = arg0->unk3C++;
    if (arg0->unk90 == 7) {
        if (t == 0) {
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
            func_80380F94(arg0->unk94, D_80217CC8[idx] + arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x13);
        }
        if (t >= 8) {
            arg0->unk90 = 0;
            arg0->unk2C &= ~0x800;
            arg0->unk74 = 0;
            func_801FCF98(arg0);
            arg1[0]->unk22 = 0;
            if (!(arg0->unkAC & 0x10)) {
                arg1[1]->unk22 = 0;
            }
            return 0;
        }
    }
    if (!(arg0->unkAC & 0x10)) {
        ang = (s16)(t * 50) & 0x1FFF;
        arg1[1]->unk30->unk48 = (u32)(func_8001EB64(ang) * 127.0f + 128.0f);
        arg1[1]->unk30->unk4A = (u32)(func_8001EAD0(ang) * 127.0f + 128.0f);
    }
    if (arg0->unk90 != 7 && arg0->unk90 != 0 && !(arg0->unkAC & 2)) {
        if (func_80108590(arg0->unk94, arg0->unk98 - arg0->unk44, arg0->unk9C, arg0->unk94, arg0->unk98 - D_8021AC38, arg0->unk9C) != 0) {
            if (arg0->unk44 <= -2.0) {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x1FE);
                func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x1F);
            }
            arg0->unk98 = D_801BBF74;
            arg0->unk44 = 0.0f;
        } else if (arg0->unk44 > -4.0) {
            arg0->unk44 -= D_8021AC40;
        }
        if (arg0->unk98 < -1000.0f) {
            arg1[0]->unk22 = 0;
            arg0->unk90 = 0;
            arg0->unk2C &= ~0x800;
        }
    }
    if (!(arg0->unkAC & 0x10)) {
        if (arg0->unk90 != 7 && arg0->unk90 != 0) {
            ret = func_801FD68C(arg0);
            if (ret != 0) {
                if (--arg0->unkB0 == 0) {
                    arg0->unk90 = 7;
                    arg0->unk3C = 0;
                } else {
                    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                    func_80380F94(arg0->unk94, D_80217CC8[idx] + arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x11);
                }
                func_801FDB3C(ret);
            }
        }
    }
    arg1[0]->unk30->unk4 = arg0->unk94;
    arg1[0]->unk30->unk8 = arg0->unk98;
    arg1[0]->unk30->unkC = arg0->unk9C;
    arg1[0]->unk30->unk10 = arg0->unkA0;
    arg1[0]->unk30->unk12 = arg0->unkA2;
    arg1[0]->unk30->unk14 = arg0->unkA4;
    if (!(arg0->unkAC & 0x10)) {
        arg1[1]->unk30->unk4 = arg0->unk94;
        arg1[1]->unk30->unk8 = arg0->unk98;
        arg1[1]->unk30->unkC = arg0->unk9C;
        arg1[1]->unk30->unk10 = arg0->unkA0;
        arg1[1]->unk30->unk12 = arg0->unkA2;
        arg1[1]->unk30->unk14 = arg0->unkA4;
    }
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk84 = arg0->unkA0;
    arg0->unk86 = arg0->unkA2;
    arg0->unk88 = arg0->unkA4;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80210160.s")


typedef struct func_802113B4_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xA8 - 0xA6];
    s32 unkA8;
} func_802113B4_Struct;

struct func_80212A28_Struct;
void func_80212A28(struct func_80212A28_Struct *arg0);
u8 func_80212A48(struct func_80212A28_Struct *arg0);
extern s32 func_801FD5BC(f32, f32, f32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern f32 func_801FD780(u8);
extern u16 D_80217C70[];
extern f64 D_8021ACC0;

s32 func_802113B4(func_802113B4_Struct *arg0, func_8020FB98_Outer **arg1) {
    arg0->unk44 = arg0->unk44 - D_8021ACC0;
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.6f, arg0->unkA2, 0.5f, 1.0f, func_801FD780(arg0->unk91) * arg0->unkA8) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0);
        func_80212A28((struct func_80212A28_Struct *)arg0);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C70[func_80212A48((struct func_80212A28_Struct *)arg0) % 3]);
        return 0;
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C70[func_80212A48((struct func_80212A28_Struct *)arg0) % 3]);
        func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 8.0f, arg0->unkA2, 0.5f, 1.0f, func_801FD780(arg0->unk91) * arg0->unkA8);
        return 0;
    }
    arg0->unkA2 = (s16)(arg0->unkA2 + 0x5B) & 0x1FFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80211760.s")


typedef struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
    u8 pad91[0x94 - 0x91];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[0xA8 - 0xA0];
    s32 unkA8;
    u8 padAC[0xB0 - 0xAC];
    u8 unkB0;
} func_802119A8_Struct;

typedef struct {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_802119A8_Inner;

typedef struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_802119A8_Inner *unk30;
} func_802119A8_Outer;

extern u8 D_802179D8[];
extern f64 D_8021ACC8;
extern f64 D_8021ACD0;
extern f64 D_8021ACD8;
extern f64 D_8021ACE0;
extern f64 D_8021ACE8;
extern f64 D_8021ACF0;

s32 func_802119A8(func_802119A8_Struct *arg0, func_802119A8_Outer **arg1) {
    s32 v;
    s32 ret;
    s32 t;
    s32 ang;

    t = arg0->unk3C++;
    v = arg0->unk90;
    if (v == 0) {
        goto c0;
    }
    if (v != 7) {
        goto block;
    }
    goto c7;
c0:
    return 1;
c7:
    if (t == 0) {
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x12);
    }
    if (t >= 8) {
        arg0->unk90 = 0;
        arg1[0]->unk22 = 0;
        arg1[1]->unk22 = 0;
        func_801FCF98((func_8020FB98_Struct *)arg0);
        return 0;
    }
block:
    ang = (s16)(t * 150) & 0x1FFF;
    arg1[1]->unk30->unk48 = (func_8001EAD0(ang) * D_8021ACC8 + D_8021ACD0) * (u32)D_802179D8[arg0->unkA8 * 4];
    arg1[1]->unk30->unk49 = (func_8001EAD0(ang) * D_8021ACD8 + D_8021ACE0) * (u32)D_802179D8[arg0->unkA8 * 4 + 1];
    arg1[1]->unk30->unk4A = (func_8001EAD0(ang) * D_8021ACE8 + D_8021ACF0) * (u32)D_802179D8[arg0->unkA8 * 4 + 2];
    if (arg0->unk90 != 7 && arg0->unk90 != 0) {
        ret = func_801FD68C((func_8020FB98_Struct *)arg0);
        if (ret != 0) {
            if (--arg0->unkB0 == 0) {
                arg0->unk90 = 7;
                arg0->unk3C = 0;
            } else {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x10);
            }
            func_801FDB3C(ret);
        }
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80211E34.s")


extern u8 D_80217CA8;

struct func_80212A28_Struct {
    u8 pad0[0xAD];
    u8 unkAD;
};

void func_80212A28(struct func_80212A28_Struct *arg0) {
    arg0->unkAD = D_80217CA8;
    D_80217CA8 += 1;
}


u8 func_80212A48(struct func_80212A28_Struct *arg0) {
    return arg0->unkAD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80212A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80212CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80212EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213594.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80214D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80215604.s")


typedef struct {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0x18 - 0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x4B - 0x24];
    u8 unk4B;
} func_80215D84_Inner;

typedef struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_80215D84_Inner *unk30;
} func_80215D84_Outer;

extern void func_8012D918(void *, s32, s32, s32, s32);
extern u16 func_8012FF58(void);
extern f64 D_8021AF50;
extern f64 D_8021AF58;
extern f64 D_8021AF60;
extern f64 D_8021AF68;
extern f64 D_8021AF70;

s32 func_80215D84(func_8020FB98_Struct *arg0, func_80215D84_Outer **arg1) {
    s32 cnt;
    s32 pad;
    u16 r;
    f64 d;
    f64 k;

    cnt = arg0->unk3C++;
    if (cnt < 0x4B) {
        if (cnt == 0) {
            d = 12.0;
        } else {
            d = 3.0;
        }
        r = func_8012FF58();
        if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, d, arg0->unkA2, 1.0f, 1.0f,
                          func_801FD780(arg0->unk91) * ((r / 10) * 15 + 5)) != 0) {
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 2);
        }
    }
    if (arg1[0]->unk30->unk1C < D_8021AF50) {
        arg1[0]->unk30->unk1C += D_8021AF58;
    }
    k = D_8021AF60;
    arg1[0]->unk30->unk8 = arg1[0]->unk30->unk1C * 100.0f + arg0->unk98;
    arg1[0]->unk30->unk18 -= k;
    arg1[0]->unk30->unk20 -= k;
    if (cnt < 4) {
        arg1[0]->unk30->unk4B += 0x37;
    } else if (cnt >= 0x15) {
        arg1[0]->unk30->unk4B -= 4;
        if (arg1[0]->unk30->unk4B < 8) {
            return 0;
        }
    }
    func_8012D918(arg0, 0x4B5, 1, 1, 0);
    k = D_8021AF68;
    arg1[1]->unk30->unk18 += k;
    arg1[1]->unk30->unk1C += k;
    arg1[1]->unk30->unk20 += k;
    if (arg1[1]->unk22 != 0) {
        arg1[1]->unk30->unk4B -= 5;
        if (arg1[1]->unk30->unk4B < 0x14) {
            arg1[1]->unk22 = 0;
        }
    }
    k = D_8021AF70;
    arg1[2]->unk30->unk18 += k;
    arg1[2]->unk30->unk20 += k;
    if (arg1[2]->unk22 != 0) {
        if (cnt < 4) {
            arg1[2]->unk30->unk4B += 0x3C;
        } else if (cnt >= 5) {
            arg1[2]->unk30->unk4B -= 5;
            if (arg1[2]->unk30->unk4B < 5) {
                arg1[2]->unk22 = 0;
            }
        }
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80216188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80216550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802169AC.s")

