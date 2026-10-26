#include "common.h"

extern f32 D_802592E0;
extern f32 D_802592E4;
extern f32 D_802592E8;
extern f32 D_802592EC;
extern f32 D_802592F0;
extern f32 D_802592F4;
extern f32 D_802592F8;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_801C2F0C(s32, void *);
extern s32 D_8025A2C0;
extern s32 func_80005670(void *, void *);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern s32 func_801C2FF8(void);
extern s32 func_801C3B5C(void);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_802534DC[];
extern u8 D_80253524[];
extern u8 D_80253738[];
extern u8 D_802538B8[];
extern u8 D_802591F0[];
extern u8 D_8025922C[];
#define func_8024A604 func_8024A604__decl
extern u8 func_8024A604[];
#define func_8024ACB8 func_8024ACB8__decl
extern u8 func_8024ACB8[];
extern u8 func_8024ADE0[];
extern void *D_80253474;
extern void func_80005700(void *);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_800179B0(void *);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80126EAC(void);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801C2F0C(s32 arg0, void *arg1);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB20(void);
extern void func_801FBB30(void);
extern void func_8024A4EC(s32 arg0, s32 arg1);
extern void func_8024A780(s32 arg0, s32 arg1);
extern void func_8024A7C8();
extern void func_8024A984(s32 arg0, s32 arg1);
extern void func_8024A9C8();
extern void func_8024AA38(s32 arg0, s32 arg1);
extern void func_8024AAC4();

#define func_8024A434 func_8024A434__func_8024A3C0
#define func_8024A984 func_8024A984__func_8024A3C0

/* Forward declarations needed because this function sits before func_8024A434 in the file. */
struct func_8024A434_Arg;
void func_8024A434(struct func_8024A434_Arg *arg0, s32 arg1);

extern void func_8024A984(s32 arg0, s32 arg1);

void func_8024A3C0(struct func_8024A434_Arg *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80126EAC) != 0) {
        if (func_80133A24(0x76) != 0) {
            func_800058DC(arg0, (void *)func_8024A984);
            return;
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, (void *)func_8024A434);
    }
}
#undef func_8024A434
#undef func_8024A984

#define func_8024A4EC func_8024A4EC__func_8024A434
#define func_8024AA38_Struct s32
#define func_80249CF8_Obj func_8024A434_Arg
struct func_8024A434_Arg {
    u8 pad[0x3C];
    s16 unk3C;
    u8 pad3E[0x1E];
    s32 unk5C;
};
#undef func_8024AA38_Struct
#undef func_80249CF8_Obj

typedef struct func_8024AA38_Struct {
    s32 a, b, c;
} func_8024AA38_Struct;

struct func_8024A434_StructIn {
    u8 pad[0x40];
    f32 unk40;
    u8 pad44[4];
    f32 unk48;
};

struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_StructIn *unkDC;
};

extern void func_8024A4EC(s32 arg0, s32 arg1);
extern struct func_8024A434_StructBBF0 D_801BBBF0;

void func_8024A434(struct func_8024A434_Arg *arg0, s32 arg1) {
    if (func_801C3D20(-380.0f, -540.0f, 40.0f) != 0) {
        func_80133980(0x76);
        func_801339D0(0x73);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        D_8025A2C0 = func_80005670(arg0, &D_80253474);
        arg0->unk3C = 0;
        func_801FBB30();
        func_80020718(7);
        func_800058DC(arg0, &func_8024A4EC);
    }
}
#undef func_8024A4EC

#define func_8024A588 func_8024A588__func_8024A4EC

struct func_8024A588_Obj;
void func_8024A588(struct func_8024A588_Obj *arg0, s32 arg1);
typedef struct func_8024A4EC_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8024A4EC_Struct;

void func_8024A4EC(s32 arg0, s32 arg1) {
    func_8024A4EC_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = -370.0f;
        sp18.unk4 = -540.0f;
        sp18.unk8 = 0.200000003f;
        sp18.unkC = 0x1100;
        sp18.unk10 = 0x0168003E;
        sp18.unk14 = 1.0f;
        sp18.unk18 = 0;
        sp18.unk1A = 0x5A;
        func_801C2F0C(2, &sp18.unk0);
        func_800208C4(0x7C);
        func_800058DC((void *)arg0, func_8024A588);
    }
}
#undef func_8024A588


typedef struct func_8024A588_Struct {
    s16 unk00;
    s16 pad02;
    s32 unk04;
    f32 unk08;
    s16 unk0C;
    s16 pad0E;
} func_8024A588_Struct;

typedef struct func_8024A588_Obj {
    u8 pad00[0x3C];
    s16 unk3C;
} func_8024A588_Obj;


void func_8024A588(func_8024A588_Obj *arg0, s32 arg1) {
    s32 pad[4];
    func_8024A588_Struct sp18;

    if (func_801C3B5C() == 4) {
        sp18.unk00 = 0;
        sp18.unk04 = 0x0348007A;
        sp18.unk0C = 0x14;
        sp18.unk08 = 10.0f;
        func_801C2F0C(3, &sp18);
        func_800179B0(D_802534DC);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024A604);
    }
}

#undef func_8024A604
#define func_800058DC func_800058DC__func_8024A604
#define func_8024A644 func_8024A644__func_8024A604
extern void func_800058DC(void *, void *);


typedef struct func_8024A604_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024A604_Struct;
extern void func_8024A644();

void func_8024A604(func_8024A604_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x16) {
        func_800058DC(arg0, func_8024A644);
    }
}
#undef func_800058DC
#undef func_8024A644
#define func_8024A604 func_8024A604__decl

/* hh-block asm/nonmatchings/file015/8024A3C0/_ro_func_8024A644.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024A3C0/func_8024A644.s","D_802591F0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024A3C0/_ro_func_8024A644.s")

#define func_8024A780 func_8024A780__func_8024A644

void func_8024A780(s32 arg0, s32 arg1);

typedef struct {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024A644_StructG;

#define GG ((func_8024A644_StructG *)&D_801BBBF0)

void func_8024A644(s32 arg0, s32 arg1) {
    struct { s16 unk00; s32 unk04; f32 unk08; u8 pad[0x14]; } sp;

    if (func_800178E8() != 0) {
        func_80133980(0x73);
        sp.unk00 = 0x1100;
        sp.unk04 = 0x0348007A;
        sp.unk08 = 10.0f;
        D_801C2F0C(4, &sp);
        GG->unk1E8 = (-398.799988f);
        GG->unk1EC = (-260.5f);
        GG->unk1F0 = (-533.900024f);
        GG->unk1F4 = -75.0f;
        GG->unk1F8 = (-190.600006f);
        GG->unk1FC = (-568.700012f);
        func_8011AAF4(D_802591F0, 0x143, (void *)arg0, 0, 1, 0.0f, GG->unk1E8, GG->unk1EC, GG->unk1F0, 0.0f, GG->unk1F4, GG->unk1F8, GG->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800058DC((void *)arg0, (void *)func_8024A780);
    }
}
#undef func_8024A780

#define func_8024A7C8 func_8024A7C8__func_8024A780

extern void func_8024A7C8();

void func_8024A780(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_80020718(7);
        func_800058DC(arg0, func_8024A7C8);
    }
}
#undef func_8024A7C8

/* hh-block asm/nonmatchings/file015/8024A3C0/_ro_func_8024A7C8.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024A3C0/func_8024A7C8.s","D_8025922C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024A3C0/_ro_func_8024A7C8.s")

#define func_8024AA38_Struct func_8024AA38_Struct__func_8024A7C8
typedef struct func_8024AA38_Struct_ { unsigned char pad[12]; } func_8024AA38_Struct;
struct func_80249CF8_Obj { unsigned char pad[0x5C]; int unk5C; };

typedef struct func_8024A7C8_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_8024A7C8_StructB;
typedef struct func_8024A7C8_StructA {
    u8 pad[0x2C];
    func_8024A7C8_StructB *p;
} func_8024A7C8_StructA;

extern func_8024A7C8_StructA *D_801BBCD0;
extern func_8024A7C8_StructA *D_801BBCD8;

void func_8024A7C8(void *arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 30.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 30.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4(D_8025922C, 0x15E, arg0, 2, 1, 0.0f, D_801BBCD8->p->f30, D_801BBCD8->p->f34, D_801BBCD8->p->f38, 0.0f, D_801BBCD8->p->f3C, D_801BBCD8->p->f40, D_801BBCD8->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800208C4(0x26);
        func_800208C4(0x27);
        func_800208C4(0x28);
        func_800208C4(0x29);
        func_800058DC(arg0, func_8024A984);
    }
}
#undef func_8024AA38_Struct


void func_8024A984(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_8024A9C8 func_8024A9C8__func_8024A990

extern void func_8024A9C8();

void func_8024A990(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_8024A9C8);
}
#undef func_8024A9C8

#define func_8024AA38 func_8024AA38__func_8024A9C8

struct func_8024A9C8_Inner {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_8024A9C8_Obj {
    u8 pad[0x2C];
    struct func_8024A9C8_Inner *unk2C;
};

extern void func_8024AA38(s32 arg0, s32 arg1);

void func_8024A9C8(void *arg0, struct func_8024A9C8_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -70.0f;
    (*arg1)->unk2C->unk8 = -200.0f;
    (*arg1)->unk2C->unkC = -540.0f;
    (*arg1)->unk2C->unk12 = 0x1800;
    func_800058DC(arg0, (void *) func_8024AA38);
}
#undef func_8024AA38




extern func_8024AA38_Struct D_802534A0;

void func_8024AA38(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_802534A0, 0xFFFFFF);
        func_800179B0(D_80253524);
        func_800058DC((void *) arg0, (void *) func_8024AAC4);
    }
}



#define D_801BBBF0 D_801BBBF0__func_8024AAC4
#define D_8024AC24 D_8024AC24__func_8024AAC4
#define D_802534AC D_802534AC__func_8024AAC4
#define D_8025360C D_8025360C__func_8024AAC4
#define D_80259268 D_80259268__func_8024AAC4
#define D_802592FC D_802592FC__func_8024AAC4
#define D_80259300 D_80259300__func_8024AAC4
#define D_80259304 D_80259304__func_8024AAC4
#define D_80259308 D_80259308__func_8024AAC4
#define D_8025930C D_8025930C__func_8024AAC4
#define func_800058DC func_800058DC__func_8024AAC4
#define func_80010550 func_80010550__func_8024AAC4
#define func_800178E8 func_800178E8__func_8024AAC4
#define func_8013A1B4 func_8013A1B4__func_8024AAC4
#define func_8024A434_StructBBF0 func_8024A434_StructBBF0__func_8024AAC4
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
typedef struct func_80249DD0_G {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80249DD0_G;
#define G_DD0 ((func_80249DD0_G *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern s32 func_800178E8(void);
extern void func_8013A1B4();
typedef struct func_80249DD0_Arg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80249DD0_Arg;


struct func_8024AAC4_Vec { s32 a, b, c; };
extern struct func_8024AAC4_Vec D_802534AC;
extern u8 D_8025360C[];
extern u8 D_80259268[];
extern u8 D_8024AC24[];
extern f32 D_802592FC;
extern f32 D_80259300;
extern f32 D_80259304;
extern f32 D_80259308;
extern f32 D_8025930C;

void func_8024AAC4(arg0, arg1)
func_80249DD0_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534AC, 0xFFFFFF);
            func_800179B0(D_8025360C);
            G_DD0->unk1E8 = -110.5f;
            G_DD0->unk1EC = D_802592FC;
            G_DD0->unk1F0 = D_80259300;
            G_DD0->unk1F4 = D_80259304;
            G_DD0->unk1F8 = D_80259308;
            G_DD0->unk1FC = D_8025930C;
            func_8011AAF4(D_80259268, 0x1B8, arg0, 0, 1, 0.0f, G_DD0->unk1E8, G_DD0->unk1EC, G_DD0->unk1F0, 0.0f, G_DD0->unk1F4, G_DD0->unk1F8, G_DD0->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800058DC(arg0, D_8024AC24);
        }
    }
}
#undef G_DD0
#undef D_801BBBF0
#undef D_8024AC24
#undef D_802534AC
#undef D_8025360C
#undef D_80259268
#undef D_802592FC
#undef D_80259300
#undef D_80259304
#undef D_80259308
#undef D_8025930C
#undef func_800058DC
#undef func_80010550
#undef func_800178E8
#undef func_8013A1B4
#undef func_8024A434_StructBBF0

typedef struct func_8024AC24_Vec {
    s32 a, b, c;
} func_8024AC24_Vec;
typedef struct func_8024AC24_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024AC24_Struct;
extern func_8024AC24_Vec D_802534B8;

void func_8024AC24(arg0, arg1)
func_8024AC24_Struct *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534B8, 0xFFFFFF);
            func_800179B0(D_80253738);
            func_800058DC(arg0, func_8024ACB8);
        }
    }
}


#undef func_8024ACB8


#define D_802534C4 D_802534C4__func_8024ACB8
#define D_80253800 D_80253800__func_8024ACB8
#define func_800058DC func_800058DC__func_8024ACB8
#define func_80010550 func_80010550__func_8024ACB8
#define func_800178E8 func_800178E8__func_8024ACB8
#define func_8013A1B4 func_8013A1B4__func_8024ACB8
#define func_8024AA38_Struct func_8024AA38_Struct__func_8024ACB8
#define func_8024AD4C func_8024AD4C__func_8024ACB8
extern void func_8024ACB8();
#define LPX(a, b) a##b
#define LP(a, b) LPX(a, b)
#define func_8024ACB8 LP(func_8024ACB8_L, __LINE__)
#define func_8024ACB8_L539 func_8024ACB8
#define func_8024AD4C LP(func_8024AD4C_L, __LINE__)
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern s32 func_800178E8(void);
extern void func_8013A1B4();
typedef struct func_80249FC4_Arg {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x3C];
    s16 unk9C;
} func_80249FC4_Arg;
typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;

#undef func_8024ACB8
#undef func_8024AD4C
extern void func_8024AD4C();
extern func_8024AA38_Struct D_802534C4;
extern u8 D_80253800[];
void func_8024ACB8(arg0, arg1)
func_80249FC4_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534C4, 0xFFFFFF);
            func_800179B0(D_80253800);
            func_800058DC(arg0, func_8024AD4C);
        }
    }
}
#undef LPX
#undef LP
#undef func_8024ACB8_L539
#undef D_802534C4
#undef D_80253800
#undef func_800058DC
#undef func_80010550
#undef func_800178E8
#undef func_8013A1B4
#undef func_8024AA38_Struct
#undef func_8024AD4C
#define func_8024ACB8 func_8024ACB8__decl

#define func_8024AA38_Struct u8
#undef func_8024AA38_Struct
struct func_8024AD4C_Vec { s32 a, b, c; };
extern struct func_8024AD4C_Vec D_802534D0;
void func_8024AD4C(arg0, arg1)
struct func_8024AC24_Struct *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534D0, 0xFFFFFF);
            func_800179B0(D_802538B8);
            func_800058DC(arg0, func_8024ADE0);
        }
    }
}



/* hh-block asm/nonmatchings/file015/8024A3C0/_mrg_keep_7404839e57147b64.s {"functions":["func_8024ADE0"],"rodata":[[".rodata","asm/nonmatchings/file015/8024A3C0/func_8024AAC4.s","D_80259268"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024AAC4.s","D_802592FC"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024AAC4.s","D_80259300"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024AAC4.s","D_80259304"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024AAC4.s","D_80259308"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024AAC4.s","D_8025930C"],[".rodata","asm/nonmatchings/file015/8024A3C0/func_8024ADE0.s","D_802592A4"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024ADE0.s","D_80259310"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024ADE0.s","D_80259314"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024ADE0.s","D_80259318"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024ADE0.s","D_8025931C"],[".late_rodata","asm/nonmatchings/file015/8024A3C0/func_8024ADE0.s","D_80259320"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024A3C0/_mrg_keep_7404839e57147b64.s")

#define func_8024B024 func_8024B024__func_8024AF34
struct func_8024B024_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x1E];
    s32 unk5C;
};
void func_8024B024(struct func_8024B024_Struct *arg0, s32 arg1);
struct func_8024AF34_V { s32 a, b, c; };
struct func_8024AF34_B { u8 pad[0x12]; s16 unk12; };
struct func_8024AF34_A { u8 pad[0x2C]; struct func_8024AF34_B *unk2C; };
struct func_8024AF34_P { u8 pad[0x3C]; s16 unk3C; u8 pad2[0x1E]; s32 unk5C; };
extern s32 func_80011140(void *, s32, struct func_8024AF34_V, s32);
extern struct func_8024AF34_V D_80253488;
extern struct func_8024AF34_V D_80253494;

void func_8024AF34(arg0, arg1)
struct func_8024AF34_P *arg0;
struct func_8024AF34_A **arg1;
{
    s32 t = arg0->unk5C;
    (*arg1)->unk2C->unk12 += 0xB6;
    if (func_80011140(arg1, t, D_80253488, 0x14) != 0) {
        if ((*arg1)->unk2C->unk12 >= 0x2400) {
            func_8013A1B4(arg1, D_80253494, 0xFFFFFF);
            (*arg1)->unk2C->unk12 = 0x400;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_8024B024);
        }
    }
}
#undef func_8024B024




void func_8024B024(struct func_8024B024_Struct *arg0, s32 arg1) {
    s32 value;

    value = arg0->unk5C;
    func_80010550(arg1, value);
    if (arg0->unk3C++ == 0x3C) {
        func_80133980(0x73);
        func_80005700(arg0);
    }
}

