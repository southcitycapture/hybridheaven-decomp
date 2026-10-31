#define func_80380F94 func_80380F94__merge_frozen
#include "common.h"

#define func_80380EEC func_80380EEC__func_80380E90

extern void func_8001F74C(void);
extern void func_80380EEC();
extern void *D_80388D84[];

void func_80380E90(u8 *arg0, s32 arg1) {
    void (*temp_v0)(u8 *, s32);

    func_8001F74C();
    temp_v0 = D_80388D84[arg0[0x90]];
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1);
    }
    func_800058DC(arg0, func_80380EEC);
}
#undef func_80380EEC


struct func_80380EEC_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x44];
    u8 unk90;
    u8 pad2[0x3];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern void func_8001F75C(void *);
extern u16 D_801BCAE0;
extern s32 D_80388E0C[];

void func_80380EEC(struct func_80380EEC_Struct *arg0, s32 arg1) {
    void (*temp_v0)(void *, s32);

    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
    } else {
        func_8001F75C(arg0);
    }
    temp_v0 = (void (*)(void *, s32)) D_80388E0C[arg0->unk90];
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1);
    }
    arg0->unk94 = arg0->unk94 + arg0->unk40;
    arg0->unk98 = arg0->unk98 + arg0->unk44;
    arg0->unk9C = arg0->unk9C + arg0->unk48;
}

#undef func_80380F94


struct func_80380F94_Vec { s32 a; s32 b; s32 c; s32 d; s32 e; };
struct func_80380F94_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x40 - 0x3E];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    u8 unk90;
    u8 pad3[0x94 - 0x91];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};


s32 func_80380F94(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    struct func_80380F94_Struct *p;
extern s32 func_80005C70();
extern struct func_80380F94_Struct *func_8012C4D0(s32, struct func_80380F94_Vec, s32);
    extern s32 D_801BBC2C;
    extern struct func_80380F94_Vec D_80388D70;

    if (func_80005C70() < 0x21) {
        return 0;
    }
    p = (struct func_80380F94_Struct *)func_8012C4D0(D_801BBC2C, D_80388D70, 4);
    if (p != NULL) {
        p->unk94 = arg0;
        p->unk98 = arg1;
        p->unk9C = *(f32 *)&arg2;
        p->unk40 = arg3;
        p->unk44 = arg4;
        p->unk48 = arg5;
        p->unk90 = *((u8 *)&arg6 + 3);
        p->unk3C = 0;
        p->unkA0 = 0;
        p->unkA2 = 0;
        p->unkA4 = 0;
        return 1;
    }
    return 0;
}
#define func_80380F94 func_80380F94__merge_frozen


void func_80381078(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define D_80164F40 D_80164F40__func_80381084
#define D_8017B5A8 D_8017B5A8__func_80381084
#define D_80389AC8 D_80389AC8__func_80381084
#define D_80389ACC D_80389ACC__func_80381084
#define func_80005E44 func_80005E44__func_80381084
#define func_80006214 func_80006214__func_80381084
#define func_8012C89C func_8012C89C__func_80381084
#define func_803813A8_Struct16 func_803813A8_Struct16__func_80381084
struct func_803813A8_Struct16 { s32 a, b, c, d; };
extern struct func_803813A8_Struct16 D_80164F40;

struct func_80381084_StructArg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_80381084_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_80381084_StructOuter {
    u8 pad0[0x30];
    struct func_80381084_StructInner *unk30;
};

struct func_80381084_StructCopy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_8017B5A8[];
extern f32 D_80389AC8;
extern f32 D_80389ACC;

void func_80381084(struct func_80381084_StructArg0 *arg0, struct func_80381084_StructOuter **arg1) {
    register f32 fv;
    struct { s32 a[3]; } sp20;

    *(struct func_80381084_StructCopy *)&sp20 = *(struct func_80381084_StructCopy *)&D_80164F40;
    sp20.a[1] = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    fv = D_80389AC8;
    (*arg1)->unk30->unk24 |= 0x100;
    (*arg1)->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = fv;
    (*arg1)->unk30->unk1C = fv;
    (*arg1)->unk30->unk20 = D_80389ACC;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk48 = 0x40;
    (*arg1)->unk30->unk49 = 0x80;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xAC;
}
#undef D_80164F40
#undef D_8017B5A8
#undef D_80389AC8
#undef D_80389ACC
#undef func_80005E44
#undef func_80006214
#undef func_8012C89C
#undef func_803813A8_Struct16

#define D_80164F40 D_80164F40__func_80381204
#define D_801BBBF0 D_801BBBF0__func_80381204
#define D_80388E98 D_80388E98__func_80381204
#define func_80005E44 func_80005E44__func_80381204
#define func_80006214 func_80006214__func_80381204
#define func_8012C89C func_8012C89C__func_80381204
#define func_8012CF8C func_8012CF8C__func_80381204
#define func_803813A8_Struct16 func_803813A8_Struct16__func_80381204
#define func_803813A8_StructA func_803813A8_StructA__func_80381204
#define func_803813A8_StructIn func_803813A8_StructIn__func_80381204
#define func_803813A8_StructOut func_803813A8_StructOut__func_80381204
struct func_803813A8_Struct16 { s32 a, b, c, d; };
extern struct func_803813A8_Struct16 D_80164F40;
extern u8 D_801BBBF0[];
extern u8 D_80388E98[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, s32, s32, s32);
struct func_803813A8_StructA {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad1[0x8];
    u8 unkA8;
};
struct func_803813A8_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad3[0x8];
    u32 unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803813A8_StructOut {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
};


void func_80381204(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp;
    sp = D_80164F40;
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012CF8C(arg0, (s32)((u8 *)(*arg1)->unk30 + 0x40), 0x374, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = 0.004999999888241291f;
    (*arg1)->unk30->unk1C = 0.004999999888241291f;
    (*arg1)->unk30->unk20 = 0.004999999888241291f;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0x80;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
}
#undef D_80164F40
#undef D_801BBBF0
#undef D_80388E98
#undef func_80005E44
#undef func_80006214
#undef func_8012C89C
#undef func_8012CF8C
#undef func_803813A8_Struct16
#undef func_803813A8_StructA
#undef func_803813A8_StructIn
#undef func_803813A8_StructOut


struct func_803813A8_Struct16 { s32 a, b, c, d; };
struct func_803813A8_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad3[0x8];
    u32 unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803813A8_StructOut {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
};
struct func_803813A8_StructA {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad1[0x8];
    u8 unkA8;
};
extern struct func_803813A8_Struct16 D_80164F40;
extern u8 D_80175C58[];
extern f64 D_80389AD8;
extern f64 D_80389AE0;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, f32, s32);

void func_803813A8(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp30;
    f32 t;

    sp30 = D_80164F40;
    sp30.b = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 1.0f, 1);
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x1A;
    (*arg1)->unk30->unk4E = 0x40;
    t = (f32)func_8012C6B4(0x96) / (1000.0) + (0.05);
    (*arg1)->unk30->unk18 = t;
    (*arg1)->unk30->unk1C = t;
    (*arg1)->unk30->unk20 = t;
    arg0->unkA8 = 0;
}


extern void func_8012CF8C(void *, s32, s32, s32);
extern u8 D_80388E98[];
extern f32 D_80389AE8;

void func_80381568(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp;

    *(struct func_803813A8_Struct16 *)&sp = D_80164F40;
    sp.a[1] = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x374, 0);
    k = (0.003000000026077032f);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
}

extern u8 D_801BBBF0[];
struct func_803816EC_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 unkA0[6];
    u16 unkA6;
    u8 unkA8;
};
extern f32 D_80389AEC;

void func_803816EC(struct func_803816EC_StructArg0 *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(struct func_803813A8_Struct16 *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B2, 0);
    func_8012D814(arg0, 0x4B2, 1, 1.0f, 1);
    k = (0.0010000000474974513f);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    arg0->unkA8 = 0;
    arg0->unk3C = func_8012C6B4(4) + 4;
    arg0->unkA6 = 0;
}


extern u8 D_80388EF8[];
extern f32 D_80389AF0;

void func_803818A4(struct func_803816EC_StructArg0 *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp20;

    sp20 = D_80164F40;
    sp20.b = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B4, 0);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x4B4, 1);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = (9.999999747378752e-05f);
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    arg0->unkA8 = D_80388EF8[0];
    arg0->unk3C = 0;
    arg0->unkA6 = 0;
    if (D_80388EF8[0] == 0) {
        D_80388EF8[0] = 1;
        return;
    }
    D_80388EF8[0] = 0;
}


struct func_80381A7C_A0 { u8 pad0[0x3C]; s16 unk3C; u8 pad1[0x56]; f32 unk94; f32 unk98; f32 unk9C; };
extern f32 D_80389AF4;
extern f32 D_80389AF8;

void func_80381A7C(struct func_80381A7C_A0 *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(struct func_803813A8_Struct16 *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 3);
    k = (9.999999747378752e-05f);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = (0.0020000000949949026f);
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    arg0->unk3C = 0;
}

/* hh-block asm/nonmatchings/file056/80380E90/_mrg_keep_tail_a4575a57108815e2.s {"functions":["func_80381C08"],"rodata":[],"rodata_bytes":[2151193340,8372316,8]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/_mrg_keep_tail_a4575a57108815e2.s")

struct func_80381D78_In { u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; s16 unk10; s16 unk12; s16 unk14; u8 pad1[2]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad2[8]; s32 unk30; u8 pad3[0x14]; u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E; };
struct func_80381D78_Out { u8 pad0[0x30]; struct func_80381D78_In *unk30; };
struct func_80381D78_A0 { u8 pad0[0x3C]; s16 unk3C; u8 pad1[0x56]; f32 unk94; f32 unk98; f32 unk9C; };
extern f32 D_80389B04;
extern void func_8012D918(void *, s32, s32, s32, s32);

void func_80381D78(struct func_80381D78_A0 *arg0, struct func_80381D78_Out **arg1) {
    register f32 k;
    register s32 t;
    struct { s32 a[2]; } sp28;
    *(struct func_803813A8_Struct16 *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D918(arg0, 1, 0, 0, 0);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = func_8012C6B4(0x2000);
    (*arg1)->unk30->unk12 = func_8012C6B4(0x2000);
    t = func_8012C6B4(0x2000);
    k = (0.009999999776482582f);
    (*arg1)->unk30->unk14 = t;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0;
    (*arg1)->unk30->unk49 = 0;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk3C = 0;
}

struct func_80381F30_Arg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f64 D_80389B08;
extern f64 D_80389B10;
void func_80381F30(struct func_80381F30_Arg0 *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp30;
    f32 t;

    sp30 = D_80164F40;
    sp30.b = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 4);
    func_8012D814(arg0, 1, 1, 1.0f, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    t = (f64)func_8012C6B4(0x3C) / (1000.0) + (0.05);
    (*arg1)->unk30->unk20 = t;
    (*arg1)->unk30->unk1C = t;
    (*arg1)->unk30->unk18 = t;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0x8C;
    (*arg1)->unk30->unk4C = 0x40;
    (*arg1)->unk30->unk4D = 0x40;
    (*arg1)->unk30->unk4E = 0x40;
    arg0->unk3C = 0;
}


void func_803820E0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define D_80164F40 D_80164F40__func_803820EC
#define func_8012C6B4 func_8012C6B4__func_803820EC
#define func_80380F94_Struct func_80380F94_Struct__func_803820EC
#define func_803813A8_Struct16 func_803813A8_Struct16__func_803820EC
#define func_803813A8_StructIn func_803813A8_StructIn__func_803820EC
#define func_803813A8_StructOut func_803813A8_StructOut__func_803820EC
extern u8 D_80164F40[];
extern s32 func_8012C6B4(s32);
struct func_80380F94_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x40 - 0x3E];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    u8 unk90;
    u8 pad3[0x94 - 0x91];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};
struct func_803813A8_Struct16 { s32 a, b, c, d; };
struct func_803813A8_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad3[0x8];
    u32 unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803813A8_StructOut {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
};


void func_803820EC(struct func_80380F94_Struct *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp20;

    sp20 = *(struct func_803813A8_Struct16 *) D_80164F40;
    sp20.b = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012CF8C(arg0, (s32) (*arg1)->unk30 + 0x40, 0x374, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (s32) D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk18 = 0.01f;
    (*arg1)->unk30->unk1C = 0.01f;
    (*arg1)->unk30->unk20 = 0.01f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = func_8012C6B4(0xBF) + 0x40;
    (*arg1)->unk30->unk4D = func_8012C6B4(0xBF) + 0x40;
    (*arg1)->unk30->unk4E = func_8012C6B4(0xBF) + 0x40;
    arg0->unkA0 = func_8012C6B4(0x2000);
}
#undef D_80164F40
#undef func_8012C6B4
#undef func_80380F94_Struct
#undef func_803813A8_Struct16
#undef func_803813A8_StructIn
#undef func_803813A8_StructOut

#define D_80389B1C D_80389B1C__func_80382280
extern f32 D_80389B1C;

void func_80382280(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;
    *(struct func_803813A8_Struct16 *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 1.0f, 1);
    k = (0.11999999731779099f);
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0x19;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
}
#undef D_80389B1C

#define D_80164F40 D_80164F40__func_80382410
#define func_803813A8_Struct16 func_803813A8_Struct16__func_80382410
struct func_803813A8_Struct16 { s32 a, b, c, d; };
extern struct func_803813A8_Struct16 D_80164F40;

struct func_80382410_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80382410_StructOut { u8 pad0[0x30]; struct func_80382410_StructIn *unk30; };
struct func_80382410_StructA { u8 pad0[0x94]; f32 unk94; f32 unk98; f32 unk9C; };

void func_80382410(struct func_80382410_StructA *arg0, struct func_80382410_StructOut **arg1) {
    struct func_803813A8_Struct16 sp28;
    sp28 = D_80164F40;
    sp28.b = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B5, 0);
    func_8012D918(arg0, 0x4B5, 1, 0, 0);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = 0.0020000000949949026f;
    (*arg1)->unk30->unk1C = 0.0020000000949949026f;
    (*arg1)->unk30->unk20 = 0.0020000000949949026f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xF3;
    (*arg1)->unk30->unk4A = 0x22;
    (*arg1)->unk30->unk4B = 0xC0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x66;
    (*arg1)->unk30->unk4E = 0;
}
#undef D_80164F40
#undef func_803813A8_Struct16

extern f32 D_80389B24;
void func_8038259C(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;
    *(struct func_803813A8_Struct16 *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B5, 0);
    func_8012D918(arg0, 0x4B5, 2, 0, 0);
    k = (0.003000000026077032f);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xF3;
    (*arg1)->unk30->unk4A = 0x22;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x66;
    (*arg1)->unk30->unk4E = 0;
}

#define func_8012D918 func_8012D918__func_80382724

typedef struct {
    u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[4]; s16 h14 ; u8 pad16[2]; f32 f18; f32 f1C; f32 f20; s32 i24; u8 pad28[8]; s32 i30; u8 pad34[0x14];
    u8 b48; u8 b49; u8 b4A; u8 b4B; u8 b4C; u8 b4D; u8 b4E;
} func_80382724_StructB;
typedef struct { u8 pad[0x30]; func_80382724_StructB *p30; } func_80382724_StructA;
typedef struct { u8 pad[0x94]; f32 f94; f32 f98; f32 f9C; } func_80382724_StructC;

extern f32 D_80389B28;
extern void func_8012D918();

void func_80382724(func_80382724_StructC *arg0, func_80382724_StructA **arg1) {
    struct func_803813A8_Struct16 sp28;

    sp28 = D_80164F40;
    sp28.b = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B4, 0);
    func_8012D918(arg0, 0x4B4, 1, 0, 0);
    (*arg1)->p30->i24 = 0x300;
    (*arg1)->p30->i30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->p30->f4 = arg0->f94;
    (*arg1)->p30->f8 = arg0->f98;
    (*arg1)->p30->fC = arg0->f9C;
    (*arg1)->p30->h14 = 0x800;
    (*arg1)->p30->f18 = 0.5f;
    (*arg1)->p30->f1C = (0.009999999776482582f);
    (*arg1)->p30->f20 = 0.5f;
    (*arg1)->p30->b48 = 0xFF;
    (*arg1)->p30->b49 = 0xFF;
    (*arg1)->p30->b4A = 0xFF;
    (*arg1)->p30->b4B = 0;
    (*arg1)->p30->b4C = 0xFF;
    (*arg1)->p30->b4D = 0x40;
    (*arg1)->p30->b4E = 0;
}
#undef func_8012D918

#define D_80164F40 D_80164F40__func_803828BC
#define func_80005E44 func_80005E44__func_803828BC
#define func_80006214 func_80006214__func_803828BC
#define func_8012C89C func_8012C89C__func_803828BC
#define func_8012D918 func_8012D918__func_803828BC
extern u8 D_80164F40[];

struct func_803828BC_StructV { s32 a, b, c, d; };
struct func_803828BC_StructIn {
    u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[0x2]; s16 unk12; s16 unk14;
    f32 scale[3]; s32 unk24; u8 pad2[0x8]; s32 unk30; u8 pad3[0x14];
    u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E;
};
struct func_803828BC_StructOut { u8 pad0[0x30]; struct func_803828BC_StructIn *unk30; };
struct func_803828BC_StructA { u8 pad0[0x94]; f32 unk94; f32 unk98; f32 unk9C; };
extern void func_80005E44();
extern void func_80006214();
extern void func_8012C89C();
extern void func_8012D918();

void func_803828BC(struct func_803828BC_StructA *arg0, struct func_803828BC_StructOut **arg1)
{
  struct func_803828BC_StructV sp30;
  s32 slot[1];
  sp30 = *(struct func_803828BC_StructV *)D_80164F40;
  sp30.b = 0x80000300;
  func_80005E44(arg0, &sp30);
  func_80005E44(arg0, &sp30);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 3, 2);
  func_8012D918(arg0, 1, 0, 0, 0);
  arg1[0]->unk30->unk24 = 0x300;
  arg1[0]->unk30->unk30 = ((s32) D_80388E98) | 0x40000000;
  arg1[0]->unk30->unk4 = arg0->unk94;
  arg1[0]->unk30->unk8 = arg0->unk98;
  arg1[0]->unk30->unkC = arg0->unk9C;
  arg1[0]->unk30->unk12 = 0x800;
  arg1[0]->unk30->scale[0] = 0.15;
  arg1[0]->unk30->scale[1] = 0.15;
  arg1[0]->unk30->scale[2] = 0.15;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk48 = 0xC8;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk49 = 0xC8;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk4A = 0xFF;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk4B = 0xDC;
  arg1[0]->unk30->unk4C = 0;
  arg1[0]->unk30->unk4D = 0x64;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk4E = 0xFF;
  slot[0] = ((s32) D_80388E98) | 0x40000000;
  func_8012C89C(arg0, 1, 0x4B5, 0);
  func_8012D918(arg0, 0x4B5, 1, 1, 0);
  arg1[1]->unk30->unk24 = 0x300;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk30 = slot[0];
  arg1[1]->unk30->unk4 = arg0->unk94;
  arg1[1]->unk30->unk8 = arg0->unk98;
  arg1[1]->unk30->unkC = arg0->unk9C;
  arg1[1]->unk30->unk14 = 0x1800;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->scale[0] = 0.005;
  arg1[1]->unk30->scale[1] = 0.005;
  arg1[1]->unk30->scale[2] = 0.005;
  arg1[1]->unk30->unk48 = 0xC8;
  arg1[1]->unk30->unk49 = 0xC8;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4A = 0xFF;
  arg1[1]->unk30->unk4B = 0xDC;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4C = 0;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4D = 0x64;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4E = 0xFF;
}
#undef D_80164F40
#undef func_80005E44
#undef func_80006214
#undef func_8012C89C
#undef func_8012D918

#define D_80388E98 D_80388E98__func_80382B80

struct func_80382B80_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern s32 D_80388E98;
extern f32 D_80389B34;
extern f32 D_80389B38;

void func_80382B80(struct func_80382B80_StructArg0 *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(struct func_803813A8_Struct16 *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 3);
    k = (0.0010000000474974513f);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32) ((s32) &D_80388E98 | 0x40000000);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = (0.009999999776482582f);
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xC0;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0x40;
    (*arg1)->unk30->unk4E = 0xFF;
    arg0->unk3C = 0;
}
#undef D_80388E98

/* hh-block asm/nonmatchings/file056/80380E90/_mrg_keep_tail_48496dbbdb8820ad.s {"functions":["func_80382CF8"],"rodata":[],"rodata_bytes":[2151193404,8372380,20]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/_mrg_keep_tail_48496dbbdb8820ad.s")


extern void func_80005700();
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f32 D_80389B50;
extern f32 D_80389B54;

struct func_80383098_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80383098(struct func_80383098_Struct *arg0, s32 arg1) {
    s32 sp64;
    u8 pad[4];
    s32 sp5C;

    sp64 = arg0->unk3C;
    arg0->unk3C++;
    sp5C = func_8012C6B4(0xC8);
    func_80129FB8((f32) (((f64) (sp5C - 0x64) / 100.0) + (f64) arg0->unk94), arg0->unk98, (f32) (((f64) (func_8012C6B4(0xC8) - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, (0.4000000059604645f), 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x82, -4, (0.03999999910593033f), 4, 0);
    if (sp64 >= 0xA) {
        func_80005700(arg0);
    }
}


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
    D_80129FB8((sp60 - 0x12C) / 100.0 + T->unk4, T->unk8 + 2.0f, (sp64 - 0x12C) / 100.0 + T->unkC, 0.0f, (0.6000000238418579f), 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x82, -4, func_8012C6B4(0x14) / (1000.0) + (0.04), 4, 0);
    if ((sp6C < 5) && !(sp6C % 2)) {
        sp60 = func_8012C6B4(0x320);
        sp64 = func_8012C6B4(0x4B0);
        D_80129FB8((sp60 - 0x190) / 100.0 + T->unk4, (sp64 - 0x258) / 100.0 + T->unk8 + 12.0, (func_8012C6B4(0x320) - 0x190) / 100.0 + T->unkC, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x7A, 0, 0xB2, 0x14, 0, 0x64, -6, (0.15000000596046448f), 3, 0);
    }
    if (sp6C >= 0xF) {
        func_80005700(arg0);
    }
}


struct func_80383490_StructArg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_80383490_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x10];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80383490_StructOuter {
    u8 pad0[0x30];
    struct func_80383490_StructInner *unk30;
};

extern f64 D_80389B78;

void func_80383490(struct func_80383490_StructArg0 *arg0, struct func_80383490_StructOuter **arg1) {
    struct func_80383490_StructInner *temp_v0;

    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 + (0.0025));
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 6);
    if ((s32) (*arg1)->unk30->unk4B < 6) {
        func_80005700();
    }
}

struct func_80383530_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f32 D_80389B80;
extern f32 D_80389B84;
extern f32 D_80389B88;

void func_80383530(struct func_80383530_Struct *arg0, s32 arg1) {
    s32 sp6C;
    u8 pad[8];
    s32 sp60;
    s32 sp5C;

    sp6C = arg0->unk3C++;
    sp5C = func_8012C6B4(0x578);
    sp60 = func_8012C6B4(0x578);
    func_80129FB8((f32) (((f64) (sp5C - 0x2BC) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp60 - 0x2BC) / 100.0) + (f64) (arg0->unk98 + 7.0f)), (f32) (((f64) (func_8012C6B4(0x578) - 0x2BC) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x84, 0, 0x94, 0x14, 0, 0x64, -4, (0.07999999821186066f), 4, 0);
    if (sp6C == 0) {
        func_80129FB8(arg0->unk94, arg0->unk98 + 10.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x84, 0, 0x94, 0x14, 0, 0xF0, -4, (0.699999988079071f), 3, 0);
        func_80129FB8(arg0->unk94, arg0->unk98 + 15.0f, arg0->unk9C, 0.0f, (0.800000011920929f), 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xC8, -2, 0.5f, 2, 0);
    }
    if (sp6C >= 5) {
        func_80005700(arg0);
    }
}



struct func_803837A8_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_803837A8_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x48 - 0x10];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_803837A8_StructOuter {
    u8 pad0[0x30];
    struct func_803837A8_StructInner *unk30;
};

void func_803837A8(struct func_803837A8_StructArg0 *arg0, struct func_803837A8_StructOuter **arg1) {
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    if (arg0->unk3C == 0) {
        goto case0;
    }
    if (arg0->unk3C != 1) {
        return;
    }
    goto case1;
case0:
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B + 0x20);
    if ((s32) (*arg1)->unk30->unk4B >= 0xE0) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unk3C = 1;
    }
    return;
case1:
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B - 0xA);
    if ((s32) (*arg1)->unk30->unk4B < 0xA) {
        func_80005700();
    }
}


extern f32 func_8001EB64(s16);
extern s32 func_80133A24(s32);

struct func_803838EC_StructIn {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
    u8 pad1[0x8];
    u16 unk3C;
    u8 pad2[0x6A];
    u8 unkA8;
};

void func_803838EC(struct func_803838EC_StructIn *arg0, struct func_803813A8_StructOut **arg1) {
    s32 t;
    u8 state;

    t = arg0->unk3C++;
    (*arg1)->unk30->unk4C = func_8001EB64((s16)(t * 100 % 8192)) * 127.0f + 128.0f;
    (*arg1)->unk30->unk4D = func_8001EB64((s16)(t * 120 % 8192)) * 127.0f + 128.0f;
    (*arg1)->unk30->unk4E = func_8001EB64((s16)(t * 140 % 8192)) * 127.0f + 128.0f;
    state = arg0->unkA8;
    if (state == 0) goto case0;
    if (state != 1) goto end;
    goto case1;
case0:
    (*arg1)->unk30->unk4B += 8;
    if ((*arg1)->unk30->unk4B >= 0xF8) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unkA8 = 1;
    }
    goto end;
case1:
    if (func_80133A24(0x13B) != 0) {
        (*arg1)->unk30->unk4B -= 2;
        if ((*arg1)->unk30->unk4B < 2) {
            func_80005700(arg0);
        }
    }
end:;
}

/* hh-block asm/nonmatchings/file056/80380E90/_mrg_keep_tail_788e8d9068127b69.s {"functions":["func_80383C6C"],"rodata":[],"rodata_bytes":[2151193484,8372460,52]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/_mrg_keep_tail_788e8d9068127b69.s")


struct func_803840D0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0xC];
    f32 unk1C;
    u8 pad2[0x2B];
    u8 unk4B;
};
struct func_803840D0_Out {
    u8 pad0[0x30];
    struct func_803840D0_Inner *unk30;
};
struct func_803840D0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[6];
    f32 unk44;
    u8 pad2[0x4C];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f64 D_80389BC0;
extern f64 D_80389BC8;

void func_803840D0(struct func_803840D0_Struct *arg0, struct func_803840D0_Out **arg1) {
    arg0->unk44 = arg0->unk44 * (0.8);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unk44 * (0.05);
    if (arg0->unk3C == 0) goto c0;
    if (arg0->unk3C != 1) goto end;
    goto c1;
c0:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x20;
    if ((*arg1)->unk30->unk4B >= 0xE0) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unk3C = 1;
    }
    return;
c1:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0xA;
    if ((*arg1)->unk30->unk4B < 0xA) {
        func_80005700();
    }
end:
    return;
}

#define D_80380F94 D_80380F94__func_803841EC
#define D_80389BD0 D_80389BD0__func_803841EC
#define D_80389BD8 D_80389BD8__func_803841EC
#define D_80389BE0 D_80389BE0__func_803841EC
#define func_8001EAD0 func_8001EAD0__func_803841EC
extern f32 func_8001EAD0(s16);


struct func_803841EC_StructIn {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0xC];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803841EC_StructOut {
    u8 pad0[0x30];
    struct func_803841EC_StructIn *unk30;
};
struct func_803841EC_StructA {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad2[0x6];
    u16 unkA6;
    u8 unkA8;
};
extern void D_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_80389BD0;
extern f64 D_80389BD8;
extern f64 D_80389BE0;

void func_803841EC(struct func_803841EC_StructA *arg0, struct func_803841EC_StructOut **arg1) {
    f32 sp3C;
    s32 pad[2];
    f32 sp30;

    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (!(arg0->unkA6++ & 0xF)) {
        sp3C = func_8012C6B4(0x2000);
        sp30 = func_8001EAD0((s16)sp3C);
        D_80380F94((f32)(2.0 * sp30 + arg0->unk94), arg0->unk98,
                   (f32)(2.0 * func_8001EB64((s16)sp3C) + arg0->unk9C), 0.0f, 0.3f, 0.0f, 5);
    }
    if (func_80133A24(0x131) == 0) {
        (*arg1)->unk30->unk4B += 8;
        if ((*arg1)->unk30->unk4B >= 0xAD) {
            (*arg1)->unk30->unk4B = 0xB4;
        }
    }
    switch (arg0->unkA8) {
    case 0:
        (*arg1)->unk30->unk18 = (*arg1)->unk30->unk18 + 0.008;
        (*arg1)->unk30->unk1C = (*arg1)->unk30->unk1C + 0.008;
        (*arg1)->unk30->unk20 = (*arg1)->unk30->unk20 + 0.008;
        if (arg0->unk3C-- == 0) {
            arg0->unkA8 = 1;
        }
        break;
    case 1:
        (*arg1)->unk30->unk18 = (*arg1)->unk30->unk18 - 0.004;
        (*arg1)->unk30->unk1C = (*arg1)->unk30->unk1C - 0.004;
        (*arg1)->unk30->unk20 = (*arg1)->unk30->unk20 - 0.004;
        if (arg0->unk3C++ >= 4) {
            arg0->unkA8 = 2;
            (*arg1)->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
        }
        break;
    case 2:
        if (func_80133A24(0x131) != 0) {
            (*arg1)->unk30->unk4B -= 2;
            if ((*arg1)->unk30->unk4B < 2) {
                func_80005700(arg0);
            }
        }
        break;
    }
}
#undef D_80380F94
#undef D_80389BD0
#undef D_80389BD8
#undef D_80389BE0
#undef func_8001EAD0

#define D_80389BE8 D_80389BE8__func_80384518
#define D_80389BF0 D_80389BF0__func_80384518
extern f64 D_80389BE8;
extern f64 D_80389BF0;

struct func_80384518_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad1[0x6A];
    u8 unkA8;
};
struct func_80384518_StructInner {
    u8 pad[0x12];
    s16 unk12;
    u8 pad1[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad2[0x24];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
};
struct func_80384518_StructOuter {
    u8 pad[0x30];
    struct func_80384518_StructInner *unk30;
};

void func_80384518(struct func_80384518_StructArg *arg0, struct func_80384518_StructOuter **arg1) {
    s32 temp_t0;
    s32 temp_a3;
    struct func_80384518_StructInner *temp_v0;

    temp_a3 = arg0->unk3C;
    temp_t0 = temp_a3 + 1;
    arg0->unk3C++;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk18 = 1.5 / ((f64) temp_t0 * 6.0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = temp_v0->unk18;
    (*arg1)->unk30->unk1C = (f64) (temp_a3 * temp_a3) * (5e-06) + (0.002);
    if (arg0->unkA8 == 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk12 = (s16)((arg0->unk3C * 20) + temp_v0->unk12) & 0x1FFF;
    } else {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 - (arg0->unk3C * 20)) & 0x1FFF;
    }
    if (temp_t0 < 9) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B += 0x10;
        return;
    }
    if (temp_t0 >= 0x2F) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B -= 4;
        if ((*arg1)->unk30->unk4B < 4) {
            func_80005700();
        }
    }
}
#undef D_80389BE8
#undef D_80389BF0


struct func_803846EC_StructArg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_803846EC_StructInner {
    u8 pad[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
    u8 pad2[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_803846EC_StructOuter {
    u8 pad[0x30];
    struct func_803846EC_StructInner *unk30;
};

extern f64 D_80389BF8;

void func_803846EC(struct func_803846EC_StructArg0 *arg0, struct func_803846EC_StructOuter **arg1) {
    u16 temp_a3;
    struct func_803846EC_StructInner *temp_v0;

    temp_a3 = arg0->unk3C;
    arg0->unk3C = temp_a3 + 1;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + (0.008));
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = temp_v0->unk18;
    if ((s32) temp_a3 < 4) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B += 0x3C;
        return;
    }
    if ((s32) temp_a3 >= 5) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B -= 0x20;
        if ((s32) (*arg1)->unk30->unk4B < 0x20) {
            func_80005700();
        }
    }
}


struct func_8038480C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f32 D_80389C00;
extern f32 D_80389C04;
extern f64 D_80389C08;
extern f64 D_80389C10;

void func_8038480C(struct func_8038480C_Struct *arg0, s32 arg1) {
    s32 cnt;
    s32 a, b, c, d, p, q;
    s32 i;
    f32 k1, k0;

    k1 = 0.0f;
    i = 0;
    cnt = arg0->unk3C++;
    if (cnt == 0) {
        k0 = (0.003000000026077032f);
        k1 = (-0.029999999329447746f);
        for (; i != 16; i++) {
            a = func_8012C6B4(300);
            b = func_8012C6B4(300);
            c = func_8012C6B4(100);
            d = func_8012C6B4(191);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C,
                          (a - 150) / 100.0, (b - 150) / 100.0, -((c + 30) / 100.0), k1,
                          255, d + 64, 0, func_8012C6B4(112), 0, 0, 180, -18, k0, 21, 0);
        }
    }
    p = func_8012C6B4(300);
    q = func_8012C6B4(300);
    a = func_8012C6B4(300);
    b = func_8012C6B4(191);
    c = func_8012C6B4(112);
    d = func_8012C6B4(80);
    func_80129FB8((p - 150) / 100.0 + arg0->unk94, (q - 150) / 100.0 + arg0->unk98, (a - 150) / 100.0 + arg0->unk9C,
                  0.0f, 0.0f, 0.0f, 0.0f,
                  255, b + 64, 0, c, 0, 0, 120, -4, d / (1000.0) + (0.07), func_8012C6B4(1), 0);
    if (cnt >= 6) {
        func_80005700(arg0);
    }
}


struct func_80384AEC_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

/* -0.029999999329447746f / 0.003000000026077032f are placeholders for the rodata literals D_80389C20 / D_80389C1C (values unknown here) */
void func_80384AEC(struct func_80384AEC_Struct *arg0, s32 arg1) {
    s32 sp9C;
    s32 i;

    sp9C = arg0->unk3C++;
    if (sp9C == 0) {
        func_80129FB8(arg0->unk94, arg0->unk98 + 2.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0, 0xFF, 0x80, 0, 0x78, -6, 0.200000003f, 4, 0);
        for (i = 0; i < 0x20; i++) {
            func_80129FB8(arg0->unk94, arg0->unk98 + 2.0f, arg0->unk9C, (f32) ((f64) (func_8012C6B4(0x154) - 0xAA) / 100.0), (f32) ((f64) (func_8012C6B4(0x154) - 0xAA) / 100.0), (f32) -((f64) (func_8012C6B4(0x50) + 0x1E) / 100.0), -0.029999999329447746f, 0xFF, func_8012C6B4(0xBF) + 0x40, 0, func_8012C6B4(0x70), 0, 0, 0xB4, -0xC, 0.003000000026077032f, 0x15, 0);
        }
    }
    func_80129FB8((f32) (((f64) (func_8012C6B4(0x7D0) - 0x3E8) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (func_8012C6B4(0x7D0) - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (func_8012C6B4(0x7D0) - 0x3E8) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, func_8012C6B4(0xBF) + 0x40, 0, func_8012C6B4(0x70), 0, 0, 0x78, -6, (f32) (((f64) func_8012C6B4(0x78) / 1000.0) + 0.2), func_8012C6B4(1), 0);
    if (sp9C >= 0xA) {
        func_80005700(arg0);
    }
}


extern f64 D_80389C38;
extern f64 D_80389C40;
extern f64 D_80389C48;
extern f64 D_80389C50;

struct func_80384E5C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80384E5C(struct func_80384E5C_Struct *arg0, s32 arg1) {
    s32 sp7C;
    u8 pad[4];
    s32 sp74;
    s32 sp70;
    s32 sp6C;

    sp7C = arg0->unk3C++;
    if (sp7C == 0) {
        sp6C = func_8012C6B4(0xC8);
        sp70 = func_8012C6B4(0xC8);
        sp74 = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp6C - 0x64) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x64) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0, 0x78, -6, (f32) (((f64) func_8012C6B4(0x28) / (1000.0)) + (0.12)), 1, 0);
    }
    if (sp7C == 1) {
        sp6C = func_8012C6B4(0xC8);
        sp70 = func_8012C6B4(0xC8);
        sp74 = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp6C - 0x64) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x64) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x64, -6, (f32) (((f64) func_8012C6B4(0x28) / (1000.0)) + (0.04)), 5, 0);
        func_80005700(arg0);
    }
}

/* hh-block asm/nonmatchings/file056/80380E90/_mrg_keep_tail_052c795ef5719c5f.s {"functions":["func_80385114"],"rodata":[],"rodata_bytes":[2151193688,8372664,24]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/_mrg_keep_tail_052c795ef5719c5f.s")

#define D_80389C70 D_80389C70__func_80385584
#define D_80389C74 D_80389C74__func_80385584
#define D_80389C78 D_80389C78__func_80385584
#define D_80389C80 D_80389C80__func_80385584


extern f32 D_80389C70;
extern f32 D_80389C74;
extern f64 D_80389C78;
extern f64 D_80389C80;

struct func_80385584_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80385584(struct func_80385584_Struct *arg0, s32 arg1) {
    s32 sp84;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s3;
    s32 random;

    var_s3 = 0;
    sp84 = (s32) arg0->unk3C++;
    if (sp84 == 0) {
        do {
            temp_s0 = func_8012C6B4(0xC8);
            temp_s1 = func_8012C6B4(0xC8);
            random = func_8012C6B4(0xC8);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) ((f64) (temp_s0 - 0x64) / 100.0), (f32) ((f64) (temp_s1 - 0x32) / 100.0), (f32) -((f64) (random - 0x64) / 100.0), -0.02f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0xDC, -0xE, 0.005f, 0x15, 0);
            temp_s0 = func_8012C6B4(0xC8);
            temp_s1 = func_8012C6B4(0xC8);
            random = func_8012C6B4(0xC8);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) ((f64) (temp_s0 - 0x64) / 100.0), (f32) ((f64) (temp_s1 - 0x32) / 100.0), (f32) -((f64) (random - 0x64) / 100.0), -0.02f, 0, 0xFF, 0, 0, 0x40, 0, 0xDC, -0xE, 0.005f, 0x15, 0);
            var_s3 += 1;
        } while (var_s3 != 3);
    }
    if (!(sp84 % 2)) {
        var_s3 = func_8012C6B4(0x190);
        temp_s0 = func_8012C6B4(0x190);
        temp_s1 = func_8012C6B4(0x190);
        random = func_8012C6B4(0x14);
        func_80129FB8((f32) (((f64) (var_s3 - 0xC8) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (temp_s0 - 0xC8) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (temp_s1 - 0xC8) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0x78, -4, (f32) (((f64) random / (1000.0)) + (0.04)), 0, 0);
    }
    if (sp84 == 0xA) {
        func_80005700(arg0);
    }
}
#undef D_80389C70
#undef D_80389C74
#undef D_80389C78
#undef D_80389C80


typedef struct func_80385918_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80385918_Struct;

extern f32 D_80389C88;
extern f32 D_80389C8C;
extern f32 D_80389C90;
extern f64 D_80389C98;
extern f64 D_80389CA0;

void func_80385918(func_80385918_Struct *arg0, s32 arg1) {
    s32 cnt;
    register f32 fs1;
    s32 r0;
    s32 r1;
    s32 r2;
    s32 i;

    cnt = arg0->unk3C++;
    if (cnt == 0) {
        f32 fs2;
        fs1 = 0.0f;
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0x9A, 0, 0xB4, -4, (0.07000000029802322f), 5, 0);
        for (fs2 = (0.009999999776482582f), fs1 = (-0.019999999552965164f), i = 0; i != 4; i++) {
            r0 = func_8012C6B4(0x190);
            r1 = func_8012C6B4(0x190);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (r0 - 0xC8) / 100.0, (r1 - 0x96) / 100.0, -((func_8012C6B4(0x190) - 0xC8) / 100.0), fs1, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0xDC, -0xE, fs2, 0x15, 0);
            r0 = func_8012C6B4(0x190);
            r1 = func_8012C6B4(0x190);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (r0 - 0xC8) / 100.0, (r1 - 0x96) / 100.0, -((func_8012C6B4(0x190) - 0xC8) / 100.0), fs1, 0, 0xFF, 0, 0, 0x40, 0, 0xDC, -0xE, fs2, 0x15, 0);
        }
    }
    r2 = func_8012C6B4(0x3E8);
    r0 = func_8012C6B4(0x3E8);
    r1 = func_8012C6B4(0x3E8);
    func_80129FB8((r2 - 0x1F4) / 100.0 + arg0->unk94, (r0 - 0x1F4) / 100.0 + arg0->unk98, (r1 - 0x1F4) / 100.0 + arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0x78, -4, func_8012C6B4(0x3C) / (1000.0) + (0.08), 0, 0);
    if (cnt == 0xA) {
        func_80005700(arg0);
    }
}


extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);
extern f64 D_80389CA8;
extern f64 D_80389CB0;
extern f64 D_80389CB8;
extern f64 D_80389CC0;

typedef struct func_80385D08_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80385D08_Struct;

void func_80385D08(func_80385D08_Struct *arg0, s32 arg1) {
    s32 sp8C;
    u8 pad[8];
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;

    sp8C = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    sp6C = func_8012C6B4(0x3E8);
    sp70 = func_8012C6B4(0x3E8);
    sp74 = func_8012C6B4(0x3E8);
    sp78 = func_8012C6B4(0x3C);
    sp7C = func_8012C6B4(0x28);
    sp80 = func_8012C6B4(0x28);
    func_80129FB8((f32) (((f64) (sp6C - 0x1F4) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x1F4) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, sp78 + 0x14, sp7C + 0xD7, sp80 + 0x76, 0xA0, -4, (f32) (((f64) func_8012C6B4(0x28) / (1000.0)) + (0.06)), 0x10, 0);
    if (!(sp8C % 2)) {
        sp70 = func_8012C6B4(0x3E8);
        sp74 = func_8012C6B4(0x3E8);
        sp78 = func_8012C6B4(0x3E8);
        sp7C = func_8012C6B4(0x28);
        sp80 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp70 - 0x1F4) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp74 - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp78 - 0x1F4) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, sp7C + 0x8E, 0, 0x94, sp80, 0, 0x78, -4, (f32) (((f64) func_8012C6B4(0x14) / (1000.0)) + (0.045)), 5, 0);
    }
    if (!(sp8C % 4)) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x15);
    }
    if (sp8C == 0) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x14);
    }
    if (sp8C == 0xA) {
        func_80005700(arg0);
    }
}


extern f64 D_80389CC8;
extern f64 D_80389CD0;
extern f64 D_80389CD8;
extern f64 D_80389CE0;

void func_80386094(struct func_803837A8_StructArg0 *arg0, s32 arg1) {
    s32 sp8C;
    u8 pad[8];
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;

    sp8C = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    sp6C = func_8012C6B4(0x578);
    sp70 = func_8012C6B4(0x578);
    sp74 = func_8012C6B4(0x578);
    sp78 = func_8012C6B4(0x3C);
    sp7C = func_8012C6B4(0x28);
    sp80 = func_8012C6B4(0x28);
    func_80129FB8((f32) (((f64) (sp6C - 0x2BC) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x2BC) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x2BC) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, sp78 + 0x14, sp7C + 0xD7, sp80 + 0x76, 0xA0, -4, (f32) (((f64) func_8012C6B4(0x3C) / (1000.0)) + (0.08)), 0x10, 0);
    if (!(sp8C % 2)) {
        sp70 = func_8012C6B4(0x578);
        sp74 = func_8012C6B4(0x578);
        sp78 = func_8012C6B4(0x578);
        sp7C = func_8012C6B4(0x28);
        sp80 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp70 - 0x2BC) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp74 - 0x2BC) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp78 - 0x2BC) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, sp7C + 0x8E, 0, 0x94, sp80, 0, 0x78, -4, (f32) (((f64) func_8012C6B4(0x28) / (1000.0)) + (0.055)), 5, 0);
    }
    if (!(sp8C % 4)) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x15);
    }
    if (sp8C == 0) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x14);
    }
    if (sp8C == 0xA) {
        func_80005700(arg0);
    }
}


struct func_80386420_StructInner {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80386420_StructOuter {
    u8 pad0[0x30];
    struct func_80386420_StructInner *unk30;
};

struct func_80386420_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
};

extern f64 D_80389CE8;

void func_80386420(struct func_80386420_StructArg0 *arg0, struct func_80386420_StructOuter **arg1) {
    u16 temp_a2;

    temp_a2 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_a2 + 1);
    (*arg1)->unk30->unk18 = (f32) ((f64) (*arg1)->unk30->unk18 + (0.007));
    (*arg1)->unk30->unk20 = (*arg1)->unk30->unk18;
    if (temp_a2 < 4) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x3C;
        return;
    }
    if (temp_a2 >= 5) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0x20;
        if ((s32) (*arg1)->unk30->unk4B < 0x20) {
            func_80005700();
        }
    }
}


struct func_803864D8_StructArg0 {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_803864D8_StructInner {
    u8 pad[0x10];
    s16 unk10;
    u8 pad1[2];
    s16 unk14;
    u8 pad2[2];
    f32 unk18;
    f32 unk1C;
    u8 pad3[0x2B];
    u8 unk4B;
};
struct func_803864D8_StructOuter {
    u8 pad[0x30];
    struct func_803864D8_StructInner *unk30;
};
extern f64 D_80389CF0;
extern f64 D_80389CF8;

void func_803864D8(struct func_803864D8_StructArg0 *arg0, struct func_803864D8_StructOuter **arg1) {
    u16 temp_a2;
    struct func_803864D8_StructInner *temp;

    temp_a2 = arg0->unk3C;
    arg0->unk3C = temp_a2 + 1;
    temp = (*arg1)->unk30;
    temp->unk18 = (f64) temp->unk18 + (0.018);
    temp = (*arg1)->unk30;
    temp->unk1C = (f64) temp->unk1C + (0.008);
    temp = (*arg1)->unk30;
    temp->unk10 = (s16) (temp->unk10 + 0x155) & 0x1FFF;
    temp = (*arg1)->unk30;
    temp->unk14 = (s16) (temp->unk14 + 0x155) & 0x1FFF;
    if ((s32) temp_a2 < 4) {
        temp = (*arg1)->unk30;
        temp->unk4B += 0x32;
        return;
    }
    if ((s32) temp_a2 >= 5) {
        temp = (*arg1)->unk30;
        temp->unk4B -= 0x18;
        if ((*arg1)->unk30->unk4B < 0x18) {
            func_80005700(arg0, arg1);
        }
    }
}


extern f64 D_80389D00;
extern f64 D_80389D08;
extern f64 D_80389D10;
extern f64 D_80389D18;
extern f64 D_80389D20;
extern f64 D_80389D28;

struct func_803865D4_StructIn {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_803865D4_StructOut {
    u8 pad0[0x30];
    struct func_803865D4_StructIn *unk30;
};
struct func_803865D4_StructArg {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x8];
    u16 unk3C;
};

void func_803865D4(struct func_803865D4_StructArg *arg0, struct func_803865D4_StructOut **arg1)
{
  s32 t = arg0->unk3C;
  struct func_803865D4_StructIn *p;
  u8 a3;
  f64 k;
  k = (0.005);
  arg0->unk3C = t + 1;
  p = (*arg1)->unk30;
  p->unk18 = p->unk18 + k;
  p = (*arg1)->unk30;
  p->unk1C = p->unk1C + k;
  p = (*arg1)->unk30;
  p->unk20 = p->unk20 + k;
  p = (*arg1)->unk30;
  a3 = p->unk4B;
  if (a3 < 0x10)
  {
    p->unk4B = 0;
  }
  else
  {
 if (1) { } if (1) { } if (1) { } if (1) { }
    p->unk4B = a3 - 0x10;
  }
  if (t < 4)
  {
    f64 d = 4 - t;
    (*arg1)->unk30->unk49 = (u32) ((d * (28.25)) + (142.0));
    (*arg1)->unk30->unk4A = (u32) (d * (25.5));
  }
  else
    if (t < 8)
  {
    f64 d = 8 - t;
    (*arg1)->unk30->unk48 = (u32) (d * (63.75));
    (*arg1)->unk30->unk49 = (u32) (d * (35.5));
  }
  if ((arg0->unk30 & 0x20) || ((*arg1)->unk30->unk4B == 0))
  {
    func_80005700();
  }
}


extern f32 D_80389D30;
extern f64 D_80389D38;
extern f64 D_80389D40;

typedef struct func_80386968_Struct {
    u8 pad0[0x3C];
    u16 f3C;
    u8 pad3E[0x94 - 0x3E];
    f32 x;
    f32 y;
    f32 z;
} func_80386968_Struct;

void func_80386968(func_80386968_Struct *arg0, s32 arg1)
{
  volatile s32 cnt;
  u16 t;
  s32 e;
  s32 d;
  s32 c;
  s32 b;
  s32 a;
  func_80386968_Struct *p;
  p = arg0;
  cnt = (t = arg0->f3C);
  arg0->f3C = t + 1;
  if (cnt == 0)
  {
    func_80380F94(arg0->x, arg0->y, *((s32 *) (&arg0->z)), 0.0f, 0.0f, 0.0f, 0x1A);
    arg0++;
    arg0--;
    func_80380F94(p->x, p->y, *((s32 *) (&p->z)), 0.0f, 0.0f, 0.0f, 0x1B);
    func_80129FB8(p->x, p->y + 4.0f, p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xF3, 0x22, 0xFF, 0x66, 0, 0xF0, -4, (0.15000000596046448f), 6, 0);
  }
  if (!(cnt % 2))
  {
    a = func_8012C6B4(0x640);
    b = func_8012C6B4(0x258);
    c = func_8012C6B4(0x640);
    d = func_8012C6B4(0x28);
    e = func_8012C6B4(0x28);
    func_80129FB8((f32) ((((f64) (a - 0x320)) / 100.0) + ((f64) p->x)), (f32) ((((f64) b) / 100.0) + ((f64) (p->y + 3.0f))), (f32) ((((f64) (c - 0x320)) / 100.0) + ((f64) p->z)), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, d + 0xC8, 0x1E, 0xFF, e + 0x3C, 0, 0x78, -4, (f32) ((((f64) func_8012C6B4(0x14)) / (1000.0)) + (0.04)), 0xD, 0);
  }
  if (cnt >= 8)
  {
    func_80005700(p);
  }
}


extern f32 func_8001EAD0(s16);

struct func_80386C0C_In {
    u8 pad0[8];
    f32 unk8;
    f32 unkC;
    u8 pad1[0x3B];
    u8 unk4B;
};
struct func_80386C0C_Out {
    u8 pad0[0x30];
    struct func_80386C0C_In *unk30;
};
struct func_80386C0C_A {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x5A];
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
};

void func_80386C0C(struct func_80386C0C_A *arg0, struct func_80386C0C_Out **arg1) {
    s32 a;
    a = arg0->unk3C++;
    (*arg1)->unk30->unk8 = func_8001EB64(arg0->unkA0) * (f32)(0xE - a) * (f64)1.0f + arg0->unk98;
    (*arg1)->unk30->unkC = func_8001EAD0(arg0->unkA0) * (f32)(0xE - a) * (f64)1.0f + arg0->unk9C;
    if (a < 4) {
        (*arg1)->unk30->unk4B += 0x3C;
        return;
    }
    if (0xE - a < 0xA) {
        (*arg1)->unk30->unk4B -= 0x18;
        if ((*arg1)->unk30->unk4B < 0x18) {
            func_80005700(arg0);
        }
    }
}


struct func_80386D54_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    s32 unk9C;
};
struct func_80386D54_StructInner {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_80386D54_StructOuter {
    u8 pad0[0x30];
    struct func_80386D54_StructInner *unk30;
};


void func_80386D54(struct func_80386D54_StructArg0 *arg0, struct func_80386D54_StructOuter **arg1)
{
  s32 sp34;
  u8 temp_a0;
  extern void func_80005700();
  int new_var;
  sp34 = arg0->unk3C++;
  func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) func_8012C6B4(0x2000), 0.0f, 0.0f, 0x18);
  temp_a0 = (*arg1)->unk30->unk4B;
  ;
  if (((s32) temp_a0) < 0xF0)
  {
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B + 4);
  }
  if (sp34 >= 0x3C)
  {
    func_80005700(arg0);
  }
}


struct func_80386DFC_StructB { u8 pad0[0x18]; f32 f18; f32 f1C; f32 f20; u8 pad24[0x27]; u8 f4B; };
struct func_80386DFC_StructA { u8 pad0[0x30]; struct func_80386DFC_StructB *p; };
struct func_80386DFC_StructC { u8 pad0[0x3C]; u16 f3C; };
extern f64 D_80389D48;
extern f64 D_80389D50;

void func_80386DFC(struct func_80386DFC_StructC *arg0, struct func_80386DFC_StructA **arg1) {
    s32 t = arg0->f3C;
    f32 v;
    arg0->f3C = t + 1;
    if (t < 8) {
        (*arg1)->p->f18 = (f32)((f64)(*arg1)->p->f18 + (0.004));
        v = (*arg1)->p->f18;
        (*arg1)->p->f20 = v;
        (*arg1)->p->f1C = v;
        return;
    }
    (*arg1)->p->f18 = (f32)((f64)(*arg1)->p->f18 - (0.0005));
    v = (*arg1)->p->f18;
    (*arg1)->p->f20 = v;
    (*arg1)->p->f1C = v;
    (*arg1)->p->f4B -= 6;
    if ((*arg1)->p->f4B < 6) {
        func_80005700();
    }
}


extern f64 D_80389D58;
extern f64 D_80389D60;

struct func_80386EE0_StructInner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80386EE0_StructOuter {
    u8 pad0[0x30];
    struct func_80386EE0_StructInner *unk30;
};

void func_80386EE0(struct func_80386420_StructArg0 *arg0, struct func_80386EE0_StructOuter **arg1)
{
  u16 temp_a2;
  struct func_80386EE0_StructInner *temp_v0;
  s16 temp_t1;
  temp_a2 = arg0->unk3C;
  arg0->unk3C = (u16) (temp_a2 + 1);
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk18 = (f32) (((f64) temp_v0->unk18) + (0.0042));
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk20 = temp_v0->unk18;
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk18 = (f32) (((f64) temp_v0->unk18) + (0.001));
  temp_v0 = (*arg1)->unk30;
  *((s16 *) (((u8 *) temp_v0) + 0x12)) = (s16) (((short) ((*((s16 *) (((u8 *) temp_v0) + 0x12))) + 0x555)) & 0x1FFF);
  if (((s32) temp_a2) < 4)
  {
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B + 0x37);
    return;
  }
  if (((s32) temp_a2) >= 5)
  {
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 0x10);
    if (((s32) (*arg1)->unk30->unk4B) < 0x10)
    {
      func_80005700();
    }
  }
}


void func_80386FD4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern f32 D_80389D68;
extern f32 D_80389D6C;
extern f64 D_80389D70;
extern f64 D_80389D78;

typedef struct func_80386FE0_Struct30 {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    f32 f20;
    u8 pad24[0x27];
    u8 b4B;
} func_80386FE0_Struct30;

typedef struct func_80386FE0_Struct0 {
    u8 pad0[0x30];
    func_80386FE0_Struct30 *p30;
} func_80386FE0_Struct0;

typedef struct func_80386FE0_Struct1 {
    func_80386FE0_Struct0 *a;
    func_80386FE0_Struct0 *b;
} func_80386FE0_Struct1;

typedef struct func_80386FE0_StructA {
    u8 pad0[0x3C];
    u16 u3C;
    u8 pad3E[0x56];
    f32 f94;
    f32 f98;
    f32 f9C;
} func_80386FE0_StructA;

void func_80386FE0(func_80386FE0_StructA *arg0, func_80386FE0_Struct1 *arg1)
{
  s32 t = arg0->u3C;
  s32 i;
  s32 x;
  s32 y;
  f32 v;
  f32 fs3;
  f32 fs2;
  arg0->u3C = t + 1;
  if (t == 0)
  {
    fs3 = 0.0f;
    fs3 = (0.03500000014901161f);
    if (((!arg1) && (!arg1)) && (!arg1))
    {
    }
    fs2 = (-0.03999999910593033f);
    for (i = 0; i != 0x10; i++)
    {
      x = func_8012C6B4(0xC8);
      y = func_8012C6B4(0x258);
      func_80129FB8(arg0->f94, arg0->f98, arg0->f9C, (-(((f64) x) / 100.0)) - 5.0, ((f64) (y - 0xFA)) / 100.0, ((f64) (func_8012C6B4(0x258) - 0x12C)) / 100.0, fs2, 0xFF, 0xFF, 0xFF, 0x64, 0, 0xFF, 0xF0, -0xC, fs3, 0x15, 0);
    }

  }
  arg1->a->p30->f18 = arg1->a->p30->f18 + (0.022);
  v = arg1->a->p30->f18;
  arg1->a->p30->f20 = v;
  arg1->a->p30->f1C = v;
  arg1->b->p30->f18 = arg1->b->p30->f18 + (0.004);
  v = arg1->b->p30->f18;
  arg1->b->p30->f20 = v;
  arg1->b->p30->f1C = v;
  arg1->a->p30->b4B = arg1->a->p30->b4B - 0x10;
  arg1->b->p30->b4B = arg1->a->p30->b4B;
  if (arg1->a->p30->b4B < 0x11)
  {
    func_80005700(arg0);
  }
}


extern f64 D_80389D80;
extern f64 D_80389D88;
extern f32 D_80389D90;
extern f64 D_80389D98;
extern f64 D_80389DA0;

typedef struct func_80387230_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80387230_Struct;

void func_80387230(func_80387230_Struct *arg0, s32 arg1) {
    s32 sp84;
    u8 pad[12];
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;

    sp84 = arg0->unk3C++;
    if (!(sp84 % 2)) {
        sp64 = func_8012C6B4(0x3E8);
        sp68 = func_8012C6B4(0x3E8);
        sp6C = func_8012C6B4(0x3E8);
        sp70 = func_8012C6B4(0x28);
        sp74 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp64 - 0x1F4) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp68 - 0x1F4) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp6C - 0x1F4) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, sp70 + 0x8E, 0, 0x94, sp74, 0, 0xB4, -4, (f32) (((f64) func_8012C6B4(0x14) / (1000.0)) + (0.02)), 0xD, 0);
    }
    if (!(sp84 % 4)) {
        sp64 = func_8012C6B4(0x320);
        sp68 = func_8012C6B4(0x320);
        sp6C = func_8012C6B4(0x320);
        sp70 = func_8012C6B4(0x28);
        sp74 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp64 - 0x190) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp68 - 0x190) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp6C - 0x190) / 100.0) + (f64) arg0->unk9C), 0.0f, (0.20000000298023224f), 0.0f, 0.0f, 0xFF, sp70 + 0x8E, 0, 0x94, sp74, 0, 0xB4, -4, (f32) (((f64) func_8012C6B4(0x28) / (1000.0)) + (0.05)), 0xD, 0);
    }
    if (sp84 >= 5) {
        func_80005700(arg0);
    }
}


struct func_8038755C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_8038755C(struct func_8038755C_Struct *arg0, s32 arg1) {
    s32 sp8C[1];
    s32 t;
    s16 j;
    s32 i;

    sp8C[0] = t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (sp8C[0] == 0) {
        i = 0;
        do {
            j = i;
            func_80129FB8(arg0->unk94, arg0->unk98 + 3.0f, arg0->unk9C, (f32)((f64)func_8001EAD0(j) * 0.5), 0.0f, (f32)((f64)func_8001EB64(j) * 0.5), 0.0f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x78, -4, 0.07999999821186066f, 0xC, 0);
            i += 0x2AA;
        } while (i != 0x22A2);
    }
    if (sp8C[0] >= 4) {
        func_80129FB8(arg0->unk94, arg0->unk98 + 3.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.029999999329447746f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x64, -4, 0.10000000149011612f, 0xC, 0);
        func_80005700(arg0);
    }
}


struct func_80387764_In {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};
struct func_80387764_Out {
    u8 pad0[0x30];
    struct func_80387764_In *unk30;
};
extern f64 D_80389DB8;

void func_80387764(s32 arg0, struct func_80387764_Out **arg1) {
    f64 k = (0.005);

    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk18 + k;
    (*arg1)->unk30->unk20 = (*arg1)->unk30->unk20 + k;
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0x10;
    if ((*arg1)->unk30->unk4B < 0x10) {
        func_80005700(arg0);
    }
}

extern f32 D_80389DC0;
extern f32 D_80389DC4;
extern f32 D_80389DC8;
struct func_803877F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_803877F0(struct func_803877F0_Struct *arg0, s32 arg1)
{
  u32 t;
  s32 y;
  s32 x;
  u32 i;
  f32 b;
  f32 a;
  t = arg0->unk3C;
  i = 0;
  arg0->unk3C = t + 1;
  if (t == 0)
  {
    if ((0.004999999888241291f))
    {
    }
    b = (-0.019999999552965164f);
    a = (0.004999999888241291f);
    do
    {
      x = func_8012C6B4(0xC8);
      y = func_8012C6B4(0xC8);
      func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) (((f64) (x - 0x64)) / 100.0), (f32) (((f64) (y - 0x32)) / 100.0), (f32) (-(((f64) (func_8012C6B4(0xC8) - 0x64)) / 100.0)), b, 0xFF, 0xFF, 0xFF, t = 0xFF, 0, 0, 0xDC, -0xE, a, 0x15, 0);
      i++;
    }
    while (i != 8);
    func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0x78, -4, (0.03999999910593033f), 0, 0);
    func_80005700(arg0);
  }
}


#undef func_80380F94

/* Original readonly objects; named loads retain their original addresses. */

























































static const unsigned char rodata_80380E90[] = {
    0x53, 0x45, 0x54, 0xA1, 0xB8, 0x43, 0x4F, 0x4D, 0x42, 0x4F, 0x31, 0x00, 0x53, 0x45, 0x54, 0xA1,
    0xB8, 0x43, 0x4F, 0x4D, 0x42, 0x4F, 0x32, 0x00, 0x43, 0x55, 0x53, 0x54, 0x4F, 0x4D, 0x20, 0x31,
    0x00, 0x00, 0x00, 0x00, 0x43, 0x55, 0x53, 0x54, 0x4F, 0x4D, 0x20, 0x32, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x55, 0x53, 0x54, 0x4F, 0x4D, 0x20, 0x33, 0x00, 0x00, 0x00, 0x00, 0x4D, 0x41, 0x50, 0x00,
    0x52, 0x4F, 0x4C, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x46, 0x49, 0x58, 0x00, 0x43, 0x41, 0x4D, 0x45,
    0x52, 0x41, 0x00, 0x00, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x00, 0x52, 0x45, 0x56, 0x45,
    0x52, 0x53, 0x45, 0x00, 0x44, 0x45, 0x46, 0x55, 0x53, 0x45, 0x52, 0x00, 0x4E, 0x4F, 0x52, 0x4D,
    0x41, 0x4C, 0x00, 0x00, 0x52, 0x45, 0x56, 0x45, 0x52, 0x53, 0x45, 0x00, 0x53, 0x54, 0x41, 0x4E,
    0x43, 0x45, 0x00, 0x00, 0x52, 0x49, 0x47, 0x48, 0x54, 0x00, 0x00, 0x00, 0x4C, 0x45, 0x46, 0x54,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x41, 0x54, 0x54, 0x4C, 0x45, 0xA1, 0xB8, 0x43, 0x41, 0x4D, 0x00,
    0x4F, 0x4E, 0x00, 0x00, 0x4F, 0x46, 0x46, 0x00, 0x42, 0x41, 0x54, 0x54, 0x4C, 0x45, 0xA1, 0xB8,
    0x44, 0x49, 0x53, 0x50, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x4E, 0x00, 0x00, 0x4F, 0x46, 0x46, 0x00,
    0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00,
    0x25, 0x70, 0x25, 0x64, 0xA1, 0xB8, 0x48, 0x49, 0x54, 0x00, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D,
    0x25, 0x73, 0x25, 0x30, 0x33, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x65, 0x78, 0x70, 0x6C, 0x6F, 0x64, 0x65, 0x5F, 0x73, 0x70, 0x20, 0x3A, 0x20, 0xB6, 0xF5, 0xA4,
    0xAD, 0xA3, 0xC7, 0xA3, 0xCF, 0xA3, 0xC2, 0xA3, 0xCA, 0xA4, 0xAC, 0x25, 0x64, 0xA4, 0xE8, 0xA4,
    0xEA, 0xBE, 0xAF, 0xA4, 0xCA, 0xA4, 0xA4, 0xA4, 0xCE, 0xA4, 0xC7, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5,
    0xC8, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0xA5, 0xA8, 0xA5, 0xEA,
    0xA5, 0xA2, 0xA3, 0xB5, 0xA1, 0xBC, 0xA3, 0xB1, 0xA3, 0xB0, 0xA4, 0xCE, 0xB2, 0xD0, 0xA4, 0xCE,
    0xB6, 0xCC, 0x0A, 0x00, 0xBD, 0xE9, 0xB4, 0xFC, 0xB2, 0xBD, 0xBD, 0xAA, 0xCE, 0xBB, 0x0A, 0x00,
    0xB5, 0xF0, 0xC2, 0xE7, 0xB4, 0xC6, 0xBB, 0xEB, 0xA5, 0xED, 0xA5, 0xDC, 0xA5, 0xC3, 0xA5, 0xC8,
    0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xC3, 0xA5, 0xC8, 0xBB, 0xFE, 0xCA, 0xFC, 0xBD, 0xD0, 0xCE, 0xD8,
    0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x0A, 0x00, 0x3B, 0x03, 0x12, 0x6F, 0x38, 0xD1, 0xB7, 0x17,
};
/* hh-owned-pool func_80381204 80389AD0 80389AD4 */
/* hh-owned-pool func_803813A8 80389AD8 80389AE8 */
/* hh-owned-pool func_80381568 80389AE8 80389AEC */
/* hh-owned-pool func_803816EC 80389AEC 80389AF0 */
/* hh-owned-pool func_803818A4 80389AF0 80389AF4 */
/* hh-owned-pool func_80381A7C 80389AF4 80389AFC */
/* hh-owned-pool func_80381D78 80389B04 80389B08 */
/* hh-owned-pool func_80381F30 80389B08 80389B18 */
/* hh-owned-pool func_803820EC 80389B18 80389B1C */
/* hh-owned-pool func_80382280 80389B1C 80389B20 */
/* hh-owned-pool func_80382410 80389B20 80389B24 */
/* hh-owned-pool func_8038259C 80389B24 80389B28 */
/* hh-owned-pool func_80382724 80389B28 80389B2C */
/* hh-owned-pool func_803828BC 80389B2C 80389B34 */
/* hh-owned-pool func_80382B80 80389B34 80389B3C */
/* hh-owned-pool func_80383098 80389B50 80389B58 */
/* hh-owned-pool func_803831D0 80389B58 80389B74 */
/* hh-owned-pool func_80383490 80389B78 80389B80 */
/* hh-owned-pool func_80383530 80389B80 80389B8C */
/* hh-owned-pool func_803840D0 80389BC0 80389BD0 */
/* hh-owned-pool func_803841EC 80389BD0 80389BE8 */
/* hh-owned-pool func_80384518 80389BE8 80389BF8 */
/* hh-owned-pool func_803846EC 80389BF8 80389C00 */
/* hh-owned-pool func_8038480C 80389C00 80389C18 */
/* hh-owned-pool func_80384AEC 80389C18 80389C38 */
/* hh-owned-pool func_80384E5C 80389C38 80389C58 */
/* hh-owned-pool func_80385584 80389C70 80389C88 */
/* hh-owned-pool func_80385918 80389C88 80389CA8 */
/* hh-owned-pool func_80385D08 80389CA8 80389CC8 */
/* hh-owned-pool func_80386094 80389CC8 80389CE8 */
/* hh-owned-pool func_80386420 80389CE8 80389CF0 */
/* hh-owned-pool func_803864D8 80389CF0 80389D00 */
/* hh-owned-pool func_803865D4 80389D00 80389D30 */
/* hh-owned-pool func_80386968 80389D30 80389D48 */
/* hh-owned-pool func_80386DFC 80389D48 80389D58 */
/* hh-owned-pool func_80386EE0 80389D58 80389D68 */
/* hh-owned-pool func_80386FE0 80389D68 80389D80 */
/* hh-owned-pool func_80387230 80389D80 80389DA8 */
/* hh-owned-pool func_8038755C 80389DA8 80389DB4 */
/* hh-owned-pool func_80387764 80389DB8 80389DC0 */
/* hh-owned-pool func_803877F0 80389DC0 80389DCC */
