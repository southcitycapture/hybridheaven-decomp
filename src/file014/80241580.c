#include "common.h"

#define func_802416D4 func_802416D4__func_80241580
extern void func_800058DC(void *, void *);
struct func_80241834_StructObj2C {
    u8 pad0[0xC];
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    u16 unk12;
};
struct func_80241834_StructObj1 {
    u8 pad0[0x2C];
    struct func_80241834_StructObj2C *unk2C;
};
struct func_80241834_StructBBBF0 {
    u8 pad0[0xE0];
    struct func_80241834_StructObj1 *unkE0;
};
extern struct func_80241834_StructBBBF0 D_801BBBF0;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern u8 D_80164F40[];

struct func_80241580_StructGlobal {
    u8 pad0[0xE0];
    void *unkE0;
    u8 pad1[0xF32 - 0xE4];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};

struct func_80241580_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    u16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad3[0x8];
    s32 unk30;
    u8 pad4[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80241580_StructA {
    u8 pad0[0x30];
    struct func_80241580_StructB *unk30;
};

extern s32 func_8000C3B0(void *);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_802416D4();

void func_80241580(s32 arg0, struct func_80241580_StructA **arg1) {
    f32 temp_fv0;
    struct func_80241580_StructB *temp_v1;
    struct func_80241580_StructGlobal *g;

    if (((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkE0 != 0) {
        func_80005E44((void *)arg0, &D_80164F40);
        func_80006214((void *)arg0);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF32;
        (*arg1)->unk30->unk4D = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF33;
        (*arg1)->unk30->unk4E = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF34;
        (*arg1)->unk30->unk4F = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF35;
        (*arg1)->unk30->unk20 = 1.0f;
        temp_v1 = (*arg1)->unk30;
        temp_fv0 = temp_v1->unk20;
        temp_v1->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        func_8012C89C(arg0, 0, 0x23A, 2);
        (*arg1)->unk30->unk4 = 35.0f;
        (*arg1)->unk30->unk8 = 5.0f;
        (*arg1)->unk30->unkC = 310.0f;
        (*arg1)->unk30->unk12 = 0;
        func_800058DC((void *)arg0, (void *)func_802416D4);
    }
}
#undef func_802416D4

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/D_8024A390.s")

/* hh-block asm/nonmatchings/file014/80241580/_ro_func_802416D4.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241580/func_802416D4.s","D_8024A3B4"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/_ro_func_802416D4.s")

#define func_80241834 func_80241834__func_802416D4
#define func_80242390 func_80242390__func_802416D4
#define func_8024252C func_8024252C__func_802416D4

struct func_802416D4_StructV { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802416D4_StructO { u8 pad0[0x2C]; struct func_802416D4_StructV *unk2C; u8 pad30[0x10]; f32 unk40; u8 pad44[4]; f32 unk48; };
struct func_802416D4_StructG { u8 pad0[0xDC]; struct func_802416D4_StructO *unkDC; struct func_802416D4_StructO *unkE0; };

struct func_802416D4_StructArg { u8 pad0[0x3C]; u16 unk3C; };
struct func_80241834_StructArg0;
void func_80241834(struct func_80241834_StructArg0 *arg0, s32 arg1);
struct func_80241960_StructObj;
extern struct func_80241960_StructObj *D_801BBCD0;
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_80242390();
extern void func_8024252C();
extern f32 func_8002FC20(f32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern u8 D_8024A3B4[];

void func_802416D4(struct func_802416D4_StructArg *arg0, s32 arg1) {
    struct func_802416D4_StructV *p;
    f32 dx;
    f32 dz;
    struct func_802416D4_StructG *g;

    p = (*(struct func_802416D4_StructO **)&D_801BBCD0)->unk2C;
    dx = p->unk4 - 55.0f;
    dz = p->unkC - 110.0f;
    if ((f64)func_8002FC20(dx * dx + dz * dz) < 5.0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        arg0->unk3C = 0;
        g = (struct func_802416D4_StructG *)&D_801BBBF0;
        g->unkDC->unk40 = 0.0f;
        g->unkDC->unk48 = 0.0f;
        func_8011AAF4(D_8024A3B4, 0xFD, (s32)arg0, 0, 1, 0.0f, 20.0f, 5.0f, 270.0f, 0.0f, g->unkE0->unk2C->unk4, g->unkE0->unk2C->unk8 + 15.0f, g->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        func_80133980(0x6A);
        func_800058DC(arg0, (void *)func_80241834);
    }
}
#undef func_80241834
#undef func_80242390
#undef func_8024252C

#define func_802418D8 func_802418D8__func_80241834
void func_802418D8(void *arg0, s32 arg1);

struct func_80241834_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};





void func_80241834(struct func_80241834_StructArg0 *arg0, s32 arg1) {
    u16 temp;

    temp = arg0->unk3C;
    if (temp == 0) {
        D_801BBBF0.unkE0->unk2C->unkC = D_801BBBF0.unkE0->unk2C->unkC + 10.0f;
        D_801BBBF0.unkE0->unk2C->unk12 = 0;
    }
    if (arg0->unk3C++ >= 0x28) {
        arg0->unk3C = 0;
        arg0->unk90 = 2.0f;
        arg0->unk94 = 5.0f;
        arg0->unk98 = 260.0f;
        func_800058DC(arg0, (void *) func_802418D8);
    }
}
#undef func_802418D8

#define func_80241960 func_80241960__func_802418D8

extern s32 func_801C3DC8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5);

extern void func_80241960();

void func_802418D8(void *arg0, s32 arg1) {
    s32 *temp_v0;

    temp_v0 = ((s32 **)arg0)[0x24 / 4][0x30 / 4];
    if (func_801C3DC8(arg0, ((s32 *)arg0)[0x90 / 4], ((s32 *)arg0)[0x94 / 4], ((s32 *)arg0)[0x98 / 4], ((f32 *)temp_v0)[1], ((f32 *)temp_v0)[2] + 3.0f, ((f32 *)temp_v0)[3], 0.200000003f, 35.0f) == 0) {
        func_800058DC(arg0, func_80241960);
    }
}
#undef func_80241960


struct func_80241960_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0xA0 - 0x3E];
    f32 unkA0;
};
struct func_80241960_StructC {
    u8 pad0[0xC];
    f32 unkC;
};
struct func_80241960_StructObj {
    u8 pad0[0x2C];
    struct func_80241960_StructC *unk2C;
};
extern void func_802419CC();

void func_80241960(struct func_80241960_StructArg0 *arg0, s32 arg1) {
    struct func_80241960_StructC *temp_v0_2;

    if (arg0->unk3C++ >= 0xF) {
        arg0->unk3C = 0U;
        arg0->unkA0 = 0.0f;
        temp_v0_2 = D_801BBCD0->unk2C;
        temp_v0_2->unkC = (f32) (temp_v0_2->unkC + 30.0f);
        func_800058DC(arg0, &func_802419CC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_802419CC.s")

/* hh-block asm/nonmatchings/file014/80241580/_ro_func_80241D64.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241580/func_80241D64.s","D_8024A3F0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/_ro_func_80241D64.s")

#define func_802420B0 func_802420B0__func_80241D64
#define func_80242778 func_80242778__func_80241D64

struct func_80241D64_StructV {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
};
struct func_80241D64_StructP {
    u8 pad0[0x30];
    struct func_80241D64_StructV *unk30;
};
struct func_80241D64_Struct {
    u8 pad0[0x24];
    struct func_80241D64_StructP *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x74 - 0x4C];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[0x9C - 0x8A];
    u16 unk9C;
};

extern void func_80020718(u16);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern u8 D_802483E8[];
extern u8 D_8024A3F0[];

void func_802420B0();
void func_80242778();

void func_80241D64(struct func_80241D64_Struct *arg0, s32 arg1) {
    struct func_80241D64_StructP *p;
    s32 sp58;
    s16 h;
    f64 k;

    sp58 = arg0->unk3C++;
    if (sp58 == 0xF) {
        func_8011AAF4(D_8024A3F0, 0x19E, (s32)arg0, 0, 1, 0.0f, 0.0f, 24.0f, 300.0f, 0.0f, 30.0f, 15.0f, 235.0f, 0.0f, 35.0f, -1, -1);
    } else {
        func_80242778((void *)arg0, sp58);
    }
    if (arg0->unk9C < 2) {
        if (!(sp58 % 2)) {
            func_80129FB8(arg0->unk24->unk30->unk4, arg0->unk24->unk30->unk8, arg0->unk24->unk30->unkC, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0x80, 0, 0x40, 0, 0, 0x50, -2, (f32)(((f64)func_8012C6B4(0x28) / 1000.0) + 0.15), 0, 0);
        }
        func_80380F94(arg0->unk24->unk30->unk4, arg0->unk24->unk30->unk8, arg0->unk24->unk30->unkC, 0.0f, 0.0f, 0.0f, 0xE);
    }
    if (arg0->unk24->unk30->unk10 >= -0x7FF) {
        arg0->unk24->unk30->unk10 = arg0->unk24->unk30->unk10 - 0x71;
    } else {
        arg0->unk24->unk30->unk10 = -0x800;
    }
    if ((f64)arg0->unk24->unk30->unk8 <= 1.2) {
        u16 t = *(u16 *)(D_802483E8 + arg0->unk9C * 2);
        if (t != 0) {
            arg0->unk9C = arg0->unk9C + 1;
            func_80020718(t);
        }
        k = 0.8;
        arg0->unk24->unk30->unk8 = 1.20000005f;
        arg0->unk44 = (f32)((f64)-arg0->unk44 * 0.5);
        arg0->unk40 = (f32)((f64)arg0->unk40 * k);
        arg0->unk48 = (f32)((f64)arg0->unk48 * k);
        if ((s32)arg0->unk48 == 0) {
            arg0->unk2C = 0x800;
            arg0->unk74 = func_8012C97C(0x23A, 3);
            p = arg0->unk24;
            arg0->unk78 = p->unk30->unk4;
            arg0->unk7C = p->unk30->unk8;
            arg0->unk80 = p->unk30->unkC;
            arg0->unk84 = 0;
            arg0->unk86 = p->unk30->unk12;
            arg0->unk88 = 0;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802420B0);
        }
    }
}
#undef func_802420B0
#undef func_80242778

/* hh-block asm/nonmatchings/file014/80241580/_ro_func_802420B0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241580/func_802420B0.s","D_8024A42C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/_ro_func_802420B0.s")

#define func_802422C0 func_802422C0__func_802420B0

struct func_802420B0_StructB { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802420B0_StructC { u8 pad0[0x30]; struct func_802420B0_StructB *unk30; };
struct func_802420B0_Struct { u8 pad0[0x24]; struct func_802420B0_StructC *unk24; u8 pad1[0x14]; u16 unk3C; };
void func_802422C0(s32 arg0, s32 arg1);
extern u8 D_8024A42C[];

void func_802420B0(struct func_802420B0_Struct *arg0, s32 arg1) {
    s32 sp64;

    sp64 = arg0->unk3C++;
    if ((sp64 < 0xF) && !(sp64 % 2)) {
        func_80129FB8((f32) (((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 100.0) + (f64) arg0->unk24->unk30->unk4), arg0->unk24->unk30->unk8 + 2.0f, (f32) (((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 100.0) + (f64) arg0->unk24->unk30->unkC), 0.0f, 0.600000024f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0, 0x50, -4, (f32) (((f64) func_8012C6B4(0x3C) / 1000.0) + 0.06), 1, 0);
    }
    if (sp64 >= 0x1E) {
        func_8011AAF4(D_8024A42C, 0x1DE, (s32)arg0, 0, 1, 0.0f, 35.0f, 34.0f, 134.0f, 0.0f, 35.0f, 5.0f, 310.0f, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, (void *)func_802422C0);
    }
}
#undef func_802422C0

/* hh-block asm/nonmatchings/file014/80241580/_ro_func_802422C0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241580/func_802422C0.s","D_8024A468"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/_ro_func_802422C0.s")

#define func_80242390 func_80242390__func_802422C0

extern void func_800179B0(void *);
extern void func_80242390();
extern u8 D_80248404[];
extern u8 D_8024A468[];

void func_802422C0(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_8024A468, 0x1EA, arg0, 0, 2, 1.5f, 35.0f, 5.0f, 280.0f, 0.0f, 35.0f, 5.0f, 310.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_80133980(0x68);
        func_800179B0(D_80248404);
        func_800058DC(arg0, func_80242390);
    }
}
#undef func_80242390

/* hh-block asm/nonmatchings/file014/80241580/_ro_func_80242390.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241580/func_80242390.s","D_8024A4A4"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/_ro_func_80242390.s")

#define func_802424C0 func_802424C0__func_80242390

struct func_80242390_StructBuf {
    f32 f0;
    f32 f4;
    f32 f8;
    s16 s0;
    s16 pad;
    s32 w;
    f32 f10;
    s16 s1;
    s16 s2;
    s32 pad2;
};
struct func_80242390_StructC {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
};
struct func_80242390_StructO {
    u8 pad0[0x2C];
    struct func_80242390_StructC *unk2C;
};
extern s32 func_800178E8();
void func_802424C0(s32 arg0, s32 arg1);
extern void func_801C2F0C(s32, s16 *);
extern u8 D_8024A4A4[];

void func_80242390(s32 arg0, s32 arg1) {
    struct func_80242390_StructBuf b;

    if (func_800178E8() != 0) {
        func_8011AAF4(D_8024A4A4, 0x1FC, arg0, 0, 1, 0.0f, 14.0f, 52.0f, 278.0f, 0.0f, 35.0f, 26.0f, 206.0f, 0.0f, 35.0f, -1, -1);
        b.f0 = ((struct func_80242390_StructO *)D_801BBCD0)->unk2C->unk4;
        b.f4 = ((struct func_80242390_StructO *)D_801BBCD0)->unk2C->unkC + 30.0f;
        b.s0 = 0x1100;
        b.w = 0x0168003E;
        b.s1 = 0;
        b.s2 = 0x96;
        b.f8 = 0.0f;
        b.f10 = 1.0f;
        func_801C2F0C(2, (s16 *)&b);
        func_800058DC((void *)arg0, func_802424C0);
    }
}
#undef func_802424C0

#define func_8024252C func_8024252C__func_802424C0

extern s32 func_801C3044();
extern void func_8024252C();

struct func_802424C0_Struct {
    s16 a;
    s16 b;
    s32 c;
    f32 d;
    s16 e;
    u8 pad[0x10];
};

void func_802424C0(s32 arg0, s32 arg1) {
    struct func_802424C0_Struct sp;

    if (func_801C3044() == 0) {
        sp.a = 0x1000;
        sp.c = 0x01680041;
        sp.e = 0xF;
        sp.d = 1.0f;
        func_801C2F0C(3, &sp.a);
        func_800058DC(arg0, func_8024252C);
    }
}
#undef func_8024252C

/* hh-block asm/nonmatchings/file014/80241580/_ro_func_8024252C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241580/func_8024252C.s","D_8024A4E0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/_ro_func_8024252C.s")

#define func_802426D0 func_802426D0__func_8024252C

struct func_8024252C_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_8024252C_StructA {
    u8 pad0[0x2C];
    struct func_8024252C_StructB *unk2C;
};
struct func_8024252C_StructD {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_8024252C_StructC {
    u8 pad[0x2C];
    struct func_8024252C_StructD *unk2C;
};
struct func_80242778_StructA;
extern struct func_80242778_StructA *D_801BBCD8;
void func_802426D0(s32 arg0, s32 arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_8024A4E0[];

#define CD0 ((struct func_8024252C_StructA *)D_801BBCD0)
#define CD8 ((struct func_8024252C_StructC *)D_801BBCD8)

void func_8024252C(s32 arg0, s32 arg1) {
    s32 pad;
    f32 sp50;
    s32 pad2;

    sp50 = func_8001EAD0(CD0->unk2C->unk12);
    if (D_801C3DC8((void *)arg0,
            (f64)CD0->unk2C->unk4 - (f64)sp50 * 30.0,
            CD0->unk2C->unk8 + 20.0f,
            CD0->unk2C->unkC - (f64)func_8001EB64(CD0->unk2C->unk12) * 30.0,
            CD0->unk2C->unk4,
            CD0->unk2C->unk8 + 17.0f,
            CD0->unk2C->unkC, 0.200000003f, 35.0f) == 0) {
        if (func_801C3044() == 0) {
            func_8011AAF4(D_8024A4E0, 0x226, arg0, 2, 1, 0.0f, CD8->unk2C->unk30, CD8->unk2C->unk34, CD8->unk2C->unk38, 0.0f, CD8->unk2C->unk3C, CD8->unk2C->unk40, CD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
            func_801C2F0C(1, 0);
            func_800058DC((void *)arg0, (void *)func_802426D0);
        }
    }
}
#undef CD0
#undef CD8
#undef func_802426D0


void func_802426D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_8024276C func_8024276C__func_802426DC

typedef struct func_802426DC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_802426DC_Struct;

extern s32 func_80133A24(s32);
extern s32 func_8012C97C(s32, s32);
extern void func_8024276C(s32 arg0, s32 arg1);

void func_802426DC(func_802426DC_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x68) != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        arg0->unk74 = func_8012C97C(0x23A, 4);
        arg0->unk2C = 0x800;
        func_800058DC(arg0, func_8024276C);
    }
}
#undef func_8024276C


void func_8024276C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

/* hh-block asm/nonmatchings/file014/80241580/_ro_func_80242778.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80241580/func_80242778.s","D_8024A53C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/_ro_func_80242778.s")


struct func_80242778_StructB { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44; };
struct func_80242778_StructA { u8 pad[0x2C]; struct func_80242778_StructB *unk2C; };
struct func_80242778_StructC { u8 pad[0xA0]; f32 unkA0; };
extern u8 D_8024A53C[];

void func_80242778(struct func_80242778_StructC *arg0, s32 arg1) {
    f64 k;

    func_8011AAF4(D_8024A53C, 0x25B, (s32)arg0, 0, 1, 0.0f, D_801BBCD8->unk2C->unk30, arg0->unkA0 + D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
    k = 1.0 - 2.0;
    arg0->unkA0 = (f32)((f64)arg0->unkA0 * k);
    if (!(arg1 % 2)) {
    } else {
        arg0->unkA0 = (f32)((f64)arg0->unkA0 * 0.6);
    }
}

