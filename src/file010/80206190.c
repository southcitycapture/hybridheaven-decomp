#include "common.h"

extern f32 D_801BBF74;
extern f32 D_80217CC8[];
extern f32 D_8021A7B4;
extern f32 D_8021A7B8;
extern f32 D_8021A7BC;
extern f32 D_8021A7C0;
extern f32 D_8021A7C4;
extern f32 D_8021A7C8;
extern f32 D_8021A7CC;
extern f32 D_8021A7E0;
extern f32 D_8021A7E4;
extern f32 D_8021A7E8;
extern f32 D_8021A7EC;
extern f32 D_8021A7F0;
extern f32 D_8021A7F4;
extern f32 D_8021A800;
extern f32 D_8021A804;
extern f32 D_8021A818;
extern f32 D_8021A81C;
extern f32 D_8021A820;
extern f32 D_8021A824;
extern f32 D_8021A828;
extern f32 D_8021A82C;
extern f32 D_8021A830;
extern f32 D_8021A83C;
extern f32 D_8021A874;
extern f32 D_8021A878;
extern f32 D_8021A87C;
extern f32 D_8021A9F0;
extern f32 D_8021A9F4;
extern f32 D_8021AA18;
extern f32 D_8021AA1C;
extern f32 D_8021AA28;
extern f32 D_8021AA2C;
extern f32 D_8021AAD0;
extern f32 D_8021ABA0;
extern f32 D_8021ADBC;
extern f32 D_8021ADC0;
extern f32 D_8021AF28;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern f32 func_801FD780(u8);
extern f64 D_8021A7D0;
extern f64 D_8021A7D8;
extern f64 D_8021A808;
extern f64 D_8021A810;
extern f64 D_8021A9F8;
extern f64 D_8021AA00;
extern f64 D_8021AA08;
extern f64 D_8021AA10;
extern f64 D_8021AA20;
extern f64 D_8021AA30;
extern f64 D_8021AA38;
extern f64 D_8021AAC0;
extern f64 D_8021AAC8;
extern f64 D_8021ABA8;
extern f64 D_8021AC38;
extern f64 D_8021AC40;
extern f64 D_8021ACC0;
extern f64 D_8021ACC8;
extern f64 D_8021ACD0;
extern f64 D_8021ACD8;
extern f64 D_8021ACE0;
extern f64 D_8021ACE8;
extern f64 D_8021ACF0;
extern f64 D_8021AF18;
extern f64 D_8021AF20;
extern f64 D_8021AF30;
extern f64 D_8021AF38;
extern f64 D_8021AF40;
extern f64 D_8021AF48;
extern f64 D_8021AF50;
extern f64 D_8021AF58;
extern f64 D_8021AF60;
extern f64 D_8021AF68;
extern f64 D_8021AF70;
extern s16 D_80217CAC;
extern s16 func_8001EF38(f32, f32);
extern s32 func_8000C3B0(void *);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern s32 func_8012C6B4(s32);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80150584();
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern s32 func_801FD5BC(f32, f32, f32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern u16 D_80217C70[];
extern u16 func_8012FF58(void);
extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_801BBBF0[];
extern u8 D_801BBD76;
extern u8 D_802179D8[];
extern u8 D_80217A00[];
extern u8 D_80217B00[];
extern u8 D_80217B60[];
extern u8 D_80217CA8;
extern u8 D_80217CE0[];
extern u8 D_80217DE8[];
extern u8 func_801FD110[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_8012D8C8(void *, s32, s32, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_8013E570();
extern void func_801FC830(f32, f32, f32, f32, s32);
extern void func_801FD260(s32, void *);
extern void func_801FDB3C(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


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


struct func_80207238_Struct1 {
    u8 pad0[4];
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
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80207238_Struct0 {
    u8 pad0[0x30];
    struct func_80207238_Struct1 *unk30;
};
struct func_80207238_Struct2 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
struct func_80207238_Struct3 {
    struct func_802070F4_Local a;
    s32 b;
};

void func_80207238(struct func_80207238_Struct2 *arg0, struct func_80207238_Struct0 **arg1) {
    struct func_802070F4_Local sp30;
    struct func_80207238_Struct1 *v1;

    sp30 = D_80164F40;
    sp30.unk4 = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 4);
    func_8012D8C8(arg0, 1, 3, 0x40000000, 0, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (s32)D_80217B00 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = (f32)((f64)func_8012C6B4(0x32) / D_8021A808 + D_8021A810);
    v1 = (*arg1)->unk30;
    v1->unk20 = v1->unk18;
    (*arg1)->unk30->unk1C = v1->unk18;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xE6;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk3C = 0;
}


struct func_802073EC_Struct_I {
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
struct func_802073EC_Struct_O {
    u8 pad0[0x30];
    struct func_802073EC_Struct_I *unk30;
};
struct func_802073EC_Struct_A {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x91 - 0x3E];
    u8 unk91;
    s16 unk92;
    u8 pad94[0xA6 - 0x94];
    s16 unkA6;
    u8 padA8[0xAC - 0xA8];
    u8 unkAC;
};

void func_802073EC(struct func_802073EC_Struct_A *arg0, struct func_802073EC_Struct_O **arg1) {
    struct func_802070F4_Local sp28;
    f32 k;
    f32 f;

    f = 0.0f;
    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    sp28.unk4 = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD7, 0);
    k = D_8021A818;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[0]->unk30->unk20 = k;
    f = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk1C = f;
    arg1[0]->unk30->unk18 = f;
    arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0xD7, 1);
    k = D_8021A81C;
    arg1[1]->unk30->unk24 |= 0x100;
    arg1[1]->unk30->unk30 = (s32)D_80217B60 | 0x40000000;
    arg1[1]->unk30->unk18 = k;
    arg1[1]->unk30->unk1C = k;
    arg1[1]->unk30->unk20 = k;
    arg1[1]->unk30->unk4B = 0xFF;
    if (arg0->unk91 == 0x11) {
        if (!(arg0->unkAC & 1)) {
            arg1[1]->unk30->unk48 = 0;
            arg1[1]->unk30->unk49 = 0xFF;
            arg1[1]->unk30->unk4A = 0;
        } else {
            arg1[1]->unk30->unk48 = 0xFF;
            arg1[1]->unk30->unk49 = 0xFF;
            arg1[1]->unk30->unk4A = 0;
        }
    } else {
        arg1[1]->unk30->unk48 = 0x80;
        arg1[1]->unk30->unk49 = 0x80;
        arg1[1]->unk30->unk4A = 0xFF;
    }
    arg0->unk3C = 0;
    arg0->unk92 = 0;
    arg0->unkA6 = 0;
}

typedef struct {
    u8 pad0[4];
    f32 u4;
    f32 u8;
    f32 uC;
    u16 u10;
    u16 u12;
    u16 u14;
    u8 pad16[2];
    f32 u18;
    f32 u1C;
    f32 u20;
    s32 u24;
    u8 pad28[8];
    s32 u30;
    u8 pad34[0x14];
    u8 u48;
    u8 u49;
    u8 u4A;
    u8 u4B;
} func_80207654_StructI;
typedef struct {
    u8 pad0[0x30];
    func_80207654_StructI *u30;
} func_80207654_StructO;
typedef struct {
    u8 pad0[0x94];
    f32 u94;
    f32 u98;
    f32 u9C;
    u16 uA0;
    u16 uA2;
    u16 uA4;
    u8 padA6[2];
    s32 uA8;
} func_80207654_StructA;

void func_80207654(func_80207654_StructA *arg0, func_80207654_StructO **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(struct func_802070F4_Local *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD7, 1);
    k = D_8021A820;
    (*arg1)->u30->u24 |= 0x100;
    (*arg1)->u30->u30 = (s32)D_80217B60 | 0x40000000;
    (*arg1)->u30->u4 = arg0->u94;
    (*arg1)->u30->u8 = arg0->u98;
    (*arg1)->u30->uC = arg0->u9C;
    (*arg1)->u30->u10 = arg0->uA0;
    (*arg1)->u30->u12 = arg0->uA2;
    (*arg1)->u30->u14 = arg0->uA4;
    (*arg1)->u30->u18 = k;
    (*arg1)->u30->u1C = k;
    (*arg1)->u30->u20 = k;
    if (arg0->uA8 == 0) {
        (*arg1)->u30->u48 = 0;
    } else {
        (*arg1)->u30->u48 = 0xFF;
    }
    if (arg0->uA8 == 0) {
        (*arg1)->u30->u49 = 0xFF;
    } else {
        (*arg1)->u30->u49 = 0;
    }
    (*arg1)->u30->u4A = 0;
    (*arg1)->u30->u4B = 0xC0;
}


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


struct func_8020BCE0_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};


s32 func_8020BCE0(struct func_8020BCE0_Struct *arg0, s32 arg1) {
    u8 pad[8];
    u16 sp66;
    s32 r;
    f32 z;

    z = 0.0f;
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    if (func_80150584() == 0) {
        r = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, z, z, z, arg0->unkA0, arg0->unkA2, arg0->unkA4, 3, 0, 0);
        if (r != 0) {
            func_801FD260(r, arg0);
        }
    }
    sp66 = func_8012FF58();
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 1.5f, arg0->unkA2, D_8021A9F0, 0.5f, (u32)(func_801FD780(arg0->unk91) * (f32)((sp66 / 10) * 10 + 5))) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, z, z, z, 1);
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, z, z, z, z, 0xD4, 0xD4, 0xD4, 0x80, 0x80, 0x80, 0xA0, -2, D_8021A9F4, 4, 0);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        return 0;
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        r = func_801FD168(*(f32 *)(D_801BBBF0 + 0x380), *(f32 *)(D_801BBBF0 + 0x384), *(f32 *)(D_801BBBF0 + 0x388), z, z, z, 0x1800, 0, 0, 5, 0, 0);
        if (r != 0) {
            func_801FD260(r, arg0);
        }
        return 0;
    }
    return 1;
}


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

struct func_8020C150_In { u8 pad0[0x18]; f32 unk18; f32 unk1C; };
struct func_8020C150_Out { u8 pad0[0x30]; struct func_8020C150_In *unk30; };
struct func_8020C150_A0 { u8 pad0[0x3C]; u16 unk3C; u8 pad3E[0x90-0x3E]; u8 unk90; u8 pad91[3]; f32 unk94; f32 unk98; f32 unk9C; };

s32 func_8020C150(struct func_8020C150_A0 *arg0, struct func_8020C150_Out **arg1) {
    s32 st;
    struct func_8020C150_In *p;
    if ((st = arg0->unk90) == 2) goto c2;
    if (st != 4) goto def;
    goto c4;
c2:
    {
        p = (*arg1)->unk30;
        p->unk18 = (f32)((f64)p->unk18 + D_8021AA00);
        p = (*arg1)->unk30;
        p->unk1C = p->unk18;
        if (D_8021AA08 <= (f64)p->unk18) {
            arg0->unk90 = 4;
            arg0->unk3C = 0;
            func_80129FB8(arg0->unk94, (f32)((f64)arg0->unk98 + D_8021AA10), arg0->unk9C, 0.0f, D_8021AA18, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x8C, -4, D_8021AA1C, 8, 0);
        }
        goto def;
    }
c4:
    {
        st = (arg0->unk3C++ == 4);
        if (st) {
            func_80129FB8(arg0->unk94, (f32)((f64)arg0->unk98 + D_8021AA20), arg0->unk9C, 0.0f, D_8021AA28, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x8C, -4, D_8021AA2C, 8, 0);
        }
        p = (*arg1)->unk30;
        p->unk18 = (f32)((f64)p->unk18 - D_8021AA30);
        p = (*arg1)->unk30;
        p->unk1C = p->unk18;
        if ((f64)p->unk18 <= D_8021AA38) {
            return 0;
        }
    }
def:
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C61C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020CBC0.s")


struct func_8020D358_Struct_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x4B - 0x24];
    u8 unk4B;
};
struct func_8020D358_Struct_Out {
    u8 pad0[0x30];
    struct func_8020D358_Struct_In *unk30;
};
struct func_8020D358_Struct_A0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[8];
    s32 unkA8;
};

s32 func_8020D358(struct func_8020D358_Struct_A0 *arg0, struct func_8020D358_Struct_Out **arg1) {
    u8 pad[4];
    s32 sp38;
    u8 pad2[4];
    s16 sp32;
    f32 t;

    sp38 = arg0->unk3C++;
    t = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40) * D_8021AAC0;
    (*arg1)->unk30->unk18 += t;
    (*arg1)->unk30->unk1C += t;
    (*arg1)->unk30->unk20 += t;
    arg0->unk44 = arg0->unk44 + D_8021AAC8;
    if (sp38 < 4) {
        (*arg1)->unk30->unk4B += 0x30;
    } else if (sp38 >= 0x14) {
        (*arg1)->unk30->unk4B -= 0xC;
        if ((*arg1)->unk30->unk4B < 0x18) {
            return 0;
        }
    }
    if (arg0->unkA8 != 0 && sp38 < 0x14) {
        sp32 = func_8001EF38(arg0->unk40, arg0->unk48);
        if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.2f, sp32, 1.5f, D_8021AAD0, (u32)(func_801FD780(arg0->unk91) * (f32)arg0->unkA8)) != 0) {
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 2);
        }
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020D5DC.s")



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



typedef struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_8020E81C_Struct;

s32 func_8020E81C(func_8020E81C_Struct *arg0, s32 arg1) {
    u8 pad[8];
    u16 sp46;
    s32 temp_v0;

    if (func_80150584() != 0) {
        return 0;
    }
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    temp_v0 = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, arg0->unkA0, arg0->unkA2, arg0->unkA4, 0x14, 0, 0);
    if (temp_v0 != 0) {
        func_801FD260(temp_v0, arg0);
    }
    sp46 = func_8012FF58();
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 1.5f, arg0->unkA2, D_8021ABA0, 0.5f, (u32) (func_801FD780(arg0->unk91) * (f32) ((((s32) sp46 / 10) * 0xA) + 5))) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 1);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        return 0;
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        return 0;
    }
    return 1;
}


s32 func_8020EAA0(s32 arg0, struct func_8020C0A0_Outer **arg1) {
    struct func_8020C0A0_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 0x10);
    if ((s32) (*arg1)->unk30->unk4B < 0x19) {
        return 0;
    }
    return 1;
}



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

extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD68C(func_8020FB98_Struct *);

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


typedef struct { u8 pad0[0x18]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30;
  u8 pad34[0x14]; u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F; } F_In;
typedef struct { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; F_In *unk30; } F_Out;
typedef struct {
    u8 pad0[0x24]; struct { u8 pad[0x30]; s32 unk30; } *unk24;
    u8 pad28[0x14];
    s16 unk3C; u8 pad3E[0x4E];
    void *unk8C; u8 pad90[2]; s16 unk92; u8 pad94[0xC];
    u16 unkA0; u16 unkA2; u8 padA4[2]; u16 unkA6;
} F_A0;
extern f32 D_8021ADB0, D_8021ADB4, D_8021ADB8;

void func_80212A50(F_A0 *arg0, F_Out **arg1)
{
  struct func_802070F4_Local sp30;
  f32 t;
  s32 v;
  sp30 = D_80164F40;
  sp30.unk4 = 0x80000900;
  func_80005E44(arg0, &sp30);
  sp30.unk4 = 0x80000600;
  func_80005E44(arg0, &sp30);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0xD9, 0);
  arg1[0]->unk30->unk24 = 0x13;
  arg1[0]->unk30->unk30 = ((s32) D_8017AF90) | 0x40000000;
  arg1[0]->unk30->unk20 = D_8021ADB0;
  t = arg1[0]->unk30->unk20;
  arg1[0]->unk30->unk1C = t;
  arg1[0]->unk30->unk18 = t;
  arg1[0]->unk30->unk24 |= 0x400;
  arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
  arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
  arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
  arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
  func_8012C89C(arg0, 1, 0xD9, 1);
  func_8012D918(arg0, 0xD9, 2, 1, 0);
  t = D_8021ADB4;
  arg1[1]->unk30->unk24 |= 0x4100;
  arg1[1]->unk30->unk30 = ((s32) D_80217DE8) | 0x40000000;
  arg1[1]->unk30->unk18 = t;
  arg1[1]->unk30->unk1C = D_8021ADB8;
  arg1[1]->unk30->unk20 = t;
  arg1[1]->unk30->unk48 = 0;
  arg1[1]->unk30->unk49 = 0x40;
  arg1[1]->unk30->unk4A = 0xFF;
  arg1[1]->unk30->unk4B = 0;
  arg1[1]->unk30->unk4C = 0;
  arg1[1]->unk30->unk4D = 0x66;
  arg1[1]->unk30->unk4E = 0xCD;
  arg1[1]->unk30->unk4F = 0x4C;
  arg1[1]->unk22 = 0;
  arg0->unk3C = 0;
  arg0->unk92 = 0;
  arg0->unkA0 = arg0->unkA2;
  arg0->unkA6 = 0x16;
  v = arg0->unk24->unk30;
  func_8013E570(arg1[0], 0, v + 4, v + 8, v + 0xC);
  arg0->unk8C = func_801FD110;
}


typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80212CF8_Struct0;
typedef struct {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80212CF8_StructX;
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x48 - 0x10];
    u8 c[8];
} func_80212CF8_StructI;
typedef struct {
    u8 pad0[0x30];
    func_80212CF8_StructI *unk30;
} func_80212CF8_StructO;

void func_80212CF8(func_80212CF8_Struct0 *arg0, func_80212CF8_StructO **arg1) {
    register f32 k;
    struct {
        s32 a[3];
    } sp;

    *(struct func_802070F4_Local *)&sp = D_80164F40;
    sp.a[1] = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    k = D_8021ADBC;
    ((s32 *)(*arg1)->unk30)[9] |= 0x60300;
    ((s32 *)(*arg1)->unk30)[12] = (s32)D_80217CE0 | 0x40000000;
    ((f32 *)(*arg1)->unk30)[6] = k;
    ((f32 *)(*arg1)->unk30)[7] = k;
    ((f32 *)(*arg1)->unk30)[8] = k;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->c[0] = 0xFF;
    (*arg1)->unk30->c[1] = 0xFF;
    (*arg1)->unk30->c[2] = 0xFF;
    (*arg1)->unk30->c[3] = 0xDC;
    (*arg1)->unk30->c[4] = 0x66;
    (*arg1)->unk30->c[5] = 0xCD;
    (*arg1)->unk30->c[6] = 0x4C;
    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x223);
}


typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80212EAC_Inner;
typedef struct {
    u8 pad0[0x30];
    func_80212EAC_Inner *unk30;
} func_80212EAC_Outer;
typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80212EAC_Arg0;

void func_80212EAC(func_80212EAC_Arg0 *arg0, func_80212EAC_Outer **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(struct func_802070F4_Local *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    k = D_8021ADC0;
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80217CE0 | 0x40000000;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xDC;
    (*arg1)->unk30->unk4C = 0x66;
    (*arg1)->unk30->unk4D = 0xCD;
    (*arg1)->unk30->unk4E = 0x4C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213594.s")


struct func_80214D20_StructIn {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x38];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 pad4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80214D20_StructOut {
    u8 pad0[0x30];
    struct func_80214D20_StructIn *unk30;
};
struct func_80214D20_StructA0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
    u8 pad48[0x91 - 0x48];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
};

s32 func_80214D20(struct func_80214D20_StructA0 *arg0, struct func_80214D20_StructOut **arg1) {
    u8 pad94[4];
    s32 sp90;
    u8 pad80[0x10];
    s32 sp7C;
    f32 fs1;
    f32 fs2;
    s32 i;
    s32 s1;
    s32 s3;
    s32 r;
    s32 m;
    s32 lim;
    s16 j;

    sp90 = arg0->unk3C++;
    i = 0;
    arg0->unk44 = (f32)((f64)arg0->unk44 * D_8021AF18);
    if ((f64)arg0->unk44 < D_8021AF20) {
        fs2 = D_8021AF28;
        lim = 0x2000;
        do {
            j = i;
            r = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, (f32)((f64)func_8001EAD0(j) * 4.0), fs2, (f32)((f64)func_8001EB64(j) * 4.0), 0, 0, 0, 0x1D, 0, 0);
            if (r != 0) {
                func_801FD260(r, arg0);
            }
            i += 0x400;
        } while (i != lim);
        return 0;
    }
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = 0x66;
    (*arg1)->unk30->unk4D = 0xCD;
    (*arg1)->unk30->unk4E = 0x4C;
    m = sp90 % 2;
    if (m == 0) {
        (*arg1)->unk30->unk48 = (u32)((f64)(u32)(*arg1)->unk30->unk48 * 0.5);
        (*arg1)->unk30->unk49 = (u32)((f64)(u32)(*arg1)->unk30->unk49 * 0.5);
        (*arg1)->unk30->unk4A = (u32)((f64)(u32)(*arg1)->unk30->unk4A * 0.5);
        (*arg1)->unk30->unk4C = (u32)((f64)(u32)(*arg1)->unk30->unk4C * 0.5);
        (*arg1)->unk30->unk4D = (u32)((f64)(u32)(*arg1)->unk30->unk4D * 0.5);
        (*arg1)->unk30->unk4E = (u32)((f64)(u32)(*arg1)->unk30->unk4E * 0.5);
    }
    if (m == 0) {
        s1 = func_8012C6B4(0xC8);
        s3 = func_8012C6B4(0xC8);
        sp7C = func_8012C6B4(0xC8);
        func_80129FB8((f32)(((f64)(s1 - 0x64) / 100.0) + (f64)arg0->unk94), (f32)(((f64)(s3 - 0x64) / 100.0) + (f64)arg0->unk98), (f32)(((f64)(sp7C - 0x64) / 100.0) + (f64)arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x34, 0x50, -6, (f32)(((f64)func_8012C6B4(0x28) / D_8021AF30) + D_8021AF38), 9, 0);
    }
    if (!(sp90 % 4)) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x14);
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.3f, arg0->unkA2, 1.0f, 1.0f, (u32)(func_801FD780(arg0->unk91) * 40.0f)) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x1E);
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}


struct func_80215604_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x48 - 0x10];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80215604_StructO {
    u8 pad0[0x30];
    struct func_80215604_StructI *unk30;
};
struct func_80215604_StructA {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x94 - 0x4C];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};


s32 func_80215604(struct func_80215604_StructA *arg0, struct func_80215604_StructO **arg1) {
    s32 old;
    s32 t;

    old = arg0->unk3C++;
    arg0->unk44 = arg0->unk44 - 0.25;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = 0x66;
    (*arg1)->unk30->unk4D = 0xCD;
    (*arg1)->unk30->unk4E = 0x4C;
    if (old % 2 == 0) {
        (*arg1)->unk30->unk48 = (u32)((u32)(*arg1)->unk30->unk48 * 0.5);
        (*arg1)->unk30->unk49 = (u32)((u32)(*arg1)->unk30->unk49 * 0.5);
        (*arg1)->unk30->unk4A = (u32)((u32)(*arg1)->unk30->unk4A * 0.5);
        (*arg1)->unk30->unk4C = (u32)((u32)(*arg1)->unk30->unk4C * 0.5);
        (*arg1)->unk30->unk4D = (u32)((u32)(*arg1)->unk30->unk4D * 0.5);
        (*arg1)->unk30->unk4E = (u32)((u32)(*arg1)->unk30->unk4E * 0.5);
    }
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    if (old % 2 == 0) {
        func_80129FB8((func_8012C6B4(0xA0) - 0x50) / 100.0 + arg0->unk94, (func_8012C6B4(0xA0) - 0x50) / 100.0 + arg0->unk98, (func_8012C6B4(0xA0) - 0x50) / 100.0 + arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x34, 0x78, -6, func_8012C6B4(0x14) / D_8021AF40 + D_8021AF48, 9, 0);
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        t = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0x1E, 0, 0);
        if (t != 0) {
            func_801FD260(t, arg0);
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x317);
        }
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}


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

