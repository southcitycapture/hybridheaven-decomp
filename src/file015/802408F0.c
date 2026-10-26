#include "common.h"

extern void func_800058DC(void *, void *);

extern s32 func_80126CC0(s32, void *);
extern u8 func_80126EAC[];
#define func_80240930 func_80240930__decl
extern u8 func_80240930[];

void func_802408F0(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80240930);
    }
}

#undef func_80240930
#define D_801BBBF0 D_801BBBF0__func_80240930
#define func_80005E44 func_80005E44__func_80240930
#define func_80006214 func_80006214__func_80240930
#define func_8000C3B0 func_8000C3B0__func_80240930
#define func_8012C89C func_8012C89C__func_80240930
#define func_80133A24 func_80133A24__func_80240930
#define func_80240C00 func_80240C00__func_80240930
#define func_80242A54 func_80242A54__func_80240930
#define func_8024315C func_8024315C__func_80240930
#define func_8024443C func_8024443C__func_80240930
#define SGCAT2(a, b) a##b
#define SGCAT(a, b) SGCAT2(a, b)
#define func_80242F38_StructGlobal SGCAT(SG_, __LINE__)
#define SG_348 struct SGtag
#define SG_407 SGtag
#define SG_411 func_80242F38_StructGlobal
#define SG_412 func_80242F38_StructGlobal
#define SG_413 func_80242F38_StructGlobal
#define SG_584 func_80242F38_StructGlobal
#define F30_7 func_80240930_ctxdummy
#define F54_342 func_80242A54_ctxdummy
#define F54_351 func_80242A54
#define F5C_423 func_8024315C_ctxdummy
#define F5C_433 func_8024315C
#define F3C_585 func_8024443C_ctxdummy
#define F3C_603 func_8024443C
extern u8 D_801BBBF0[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8000C3B0(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_80133A24(s32);
extern u8 func_80242A54[];
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
void func_8024315C(void);
extern void func_8024443C(void);

#undef func_80242F38_StructGlobal

typedef struct func_80240930_StructSub {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C, unk4D, unk4E, unk4F;
} func_80240930_StructSub;
typedef struct func_80240930_StructNode {
    u8 pad0[0x30];
    func_80240930_StructSub *unk30;
} func_80240930_StructNode;

typedef struct func_80240930_Vec { s32 w[4]; } func_80240930_Vec;
extern func_80240930_Vec B_80164F40;
extern void func_80240C00();

void func_80240930(void *arg0, func_80240930_StructNode **arg1) {
    func_80240930_Vec sp28 = B_80164F40;

    sp28.w[1] = 0x80000C00;
    func_80005E44(arg0, &sp28);
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x286, 0);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = 1.0f;
    arg1[0]->unk30->unk18 = arg1[0]->unk30->unk1C = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk4 = 50.0f;
    arg1[0]->unk30->unk8 = 5.0f;
    arg1[0]->unk30->unkC = 444.0f;
    arg1[0]->unk30->unk12 = 0;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x286, 1);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = 1.0f;
    arg1[1]->unk30->unk18 = arg1[1]->unk30->unk1C = arg1[1]->unk30->unk20;
    arg1[1]->unk30->unk4 = 50.0f;
    arg1[1]->unk30->unk8 = 5.0f;
    arg1[1]->unk30->unkC = 444.0f;
    arg1[1]->unk30->unk12 = 0;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[1]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[1]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[1]->unk30->unk4F = D_801BBBF0[0xF35];
    if (func_80133A24(0x6F)) {
        arg1[0]->unk30->unk12 = -0x800;
        arg1[1]->unk30->unk12 = 0x800;
    }
    func_800058DC(arg0, func_80240C00);
}
#undef SGCAT2
#undef SGCAT
#undef SG_348
#undef SG_407
#undef SG_411
#undef SG_412
#undef SG_413
#undef SG_584
#undef F30_7
#undef F54_342
#undef F54_351
#undef F5C_423
#undef F5C_433
#undef F3C_585
#undef F3C_603
#undef D_801BBBF0
#undef func_80005E44
#undef func_80006214
#undef func_8000C3B0
#undef func_8012C89C
#undef func_80133A24
#undef func_80240C00
#undef func_80242A54
#undef func_8024315C
#undef func_8024443C
#define func_80240930 func_80240930__decl

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/D_802581F0.s")

extern u8 D_801BBBF0[];
extern s32 D_801BBCD0;

struct func_8024148C_StructArg;
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, s32);
void func_8024148C(struct func_8024148C_StructArg *arg0, s32 arg1);
extern s16 func_8001EF38(f32, f32);
extern s32 func_80133A24(s32);

extern u8 D_80258050[];
extern u8 D_8025808C[];
#define func_80240E14 func_80240E14__decl165
extern u8 func_80240E14[];
typedef struct func_80240C00_Struct { u8 pad0[4]; f32 unk4; u8 pad1[4]; f32 unkC; u8 pad2[2]; u16 unk12; } func_80240C00_Struct;
typedef struct func_80240C00_Node { u8 pad0[0x2C]; func_80240C00_Struct *unk2C; } func_80240C00_Node;
typedef struct func_80240C00_Inner { u8 pad0[0x40]; f32 unk40; u8 pad1[4]; f32 unk48; } func_80240C00_Inner;
typedef struct func_80240C00_Outer { u8 pad0[0xDC]; func_80240C00_Inner *unkDC; } func_80240C00_Outer;
typedef struct func_80240C00_Struct2 { u8 pad0[0x3C]; u16 unk3C; } func_80240C00_Struct2;
#define F80240C00_N (*(func_80240C00_Node **)&D_801BBCD0)->unk2C

void func_80240C00(func_80240C00_Struct2 *arg0, s32 arg1) {
    if (func_801C3D20(50.0f, 455.0f, 0x41000000) != 0) {
        (*(func_80240C00_Outer *)&D_801BBBF0).unkDC->unk40 = 0.0f;
        (*(func_80240C00_Outer *)&D_801BBBF0).unkDC->unk48 = 0.0f;
        func_801C3B2C(2);
        func_801C3B10(1);
        if (func_80133A24(0x6F) != 0) {
            func_8011AAF4(D_80258050, 0xED, arg0, 0, 1, 0.0f, 45.2999992f, 17.6000004f, 465.600006f, 0.0f, 50.2999992f, 16.2000008f, 450.0f, 0.0f, 35.0f, -1, -1);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_8024148C);
        } else {
            func_8011AAF4(D_8025808C, 0xF6, arg0, 0, 1, 0.0f, 21.0f, 17.7000008f, 523.799988f, 0.0f, 48.5f, 16.5f, 458.100006f, 0.0f, 35.0f, -1, -1);
            F80240C00_N->unk12 = func_8001EF38(50.0f - F80240C00_N->unk4, 444.0f - F80240C00_N->unkC);
            arg0->unk3C = 0;
            *(s16 *)((u8 *)arg0 + 0x9C) = 0;
            func_800058DC(arg0, func_80240E14);
        }
    }
}
#undef func_80240E14

#define D_801C3B5C D_801C3B5C__func_80240E14
#define D_802580C8 D_802580C8__func_80240E14
#define D_80258104 D_80258104__func_80240E14
#define func_8001EAD0 func_8001EAD0__func_80240E14
#define func_8001EB64 func_8001EB64__func_80240E14
#define func_80020718 func_80020718__func_80240E14
#define func_801C2F0C func_801C2F0C__func_80240E14
#define func_801C2FF8 func_801C2FF8__func_80240E14
#define func_80241130 func_80241130__func_80240E14
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80240E14
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80242F38_StructGlobal LP(SG, __LINE__)
#define SG_348 struct SGT
#define SG_407 SGT
#define SG_411 SGtd
#define SG_412 struct SGT
#define SG_413 struct SGT
#define SG_584 struct SGT
extern void func_80020718(s32);
extern void func_801C2F0C(s32, s16 *);
void func_80241130(void * volatile arg0, s32 volatile arg1);
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

#undef func_80242F38_StructGlobal

typedef struct func_80240E14_Loc {
    union { f32 f; s16 s; } a;
    union { f32 f; s32 i; } b;
    f32 c;
    s16 d;
    s16 pad;
    s32 e;
    f32 f;
    s16 g;
    s16 h;
    s32 i;
} func_80240E14_Loc;
typedef struct func_80240E14_In { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80240E14_In;
typedef struct func_80240E14_Nd { u8 pad0[0x2C]; func_80240E14_In *unk2C; } func_80240E14_Nd;
typedef struct func_80240E14_Nd2 { u8 pad0[0x30]; func_80240E14_In *unk30; } func_80240E14_Nd2;
typedef struct func_80240E14_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80240E14_Arg;
extern s32 func_801C2FF8();
extern s32 D_801C3B5C(void);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_802580C8[];
extern u8 D_80258104[];

void func_80240E14(func_80240E14_Arg *arg0, func_80240E14_Nd2 **arg1) {
    func_80240E14_Loc l;
    s32 t;

    if (func_801C2FF8() != 0) {
        t = arg0->unk3C++;
        if (t >= 0x16) {
            if (t == 0x16) {
                l.a.f = ((func_80240E14_Nd *)D_801BBCD0)->unk2C->unk4 - func_8001EAD0(((func_80240E14_Nd *)D_801BBCD0)->unk2C->unk12) * 8.0f;
                l.b.f = ((func_80240E14_Nd *)D_801BBCD0)->unk2C->unkC - func_8001EB64(((func_80240E14_Nd *)D_801BBCD0)->unk2C->unk12) * 8.0f;
                l.d = 0x1102;
                l.e = 0x01680003;
                l.g = 0x1000;
                l.h = 0;
                l.c = 0.150000006f;
                l.f = 1.0f;
                func_801C2F0C(2, (s16 *)&l);
            }
            if (D_801C3B5C() == 4) {
                l.a.s = 0;
                l.b.i = 0x01680041;
                l.d = 0x14;
                l.c = 1.0f;
                func_801C2F0C(3, (s16 *)&l);
            }
        }
        if (t >= 0xF) {
            if (t == 0xF) {
                func_80020718(0x14B);
            }
            arg1[0]->unk30->unk12 -= 0x16;
            arg1[1]->unk30->unk12 += 0x16;
            if (45.0 == (f64)t) {
                func_8011AAF4(D_802580C8, 0x135, arg0, 0, 1, 0.0f, 45.2999992f, 30.0f, 465.600006f, 0.0f, 50.2999992f, 28.5f, 450.0f, 0.0f, 35.0f, -1, -1);
            }
            if (46.0 == (f64)t) {
                func_8011AAF4(D_80258104, 0x13B, arg0, 0, 2, 0.187878788f, 45.2999992f, 17.6000004f, 465.600006f, 0.186363637f, 50.2999992f, 16.2000008f, 450.0f, 0.0f, 35.0f, -1, -1);
            }
            if (t >= 0x69) {
                arg0->unk3C = 0;
                func_800058DC(arg0, func_80241130);
            }
        }
    }
}
#undef LP
#undef LQ
#undef SG_348
#undef SG_407
#undef SG_411
#undef SG_412
#undef SG_413
#undef SG_584
#undef D_801C3B5C
#undef D_802580C8
#undef D_80258104
#undef func_8001EAD0
#undef func_8001EB64
#undef func_80020718
#undef func_801C2F0C
#undef func_801C2FF8
#undef func_80241130
#undef func_80242F38_StructGlobal


extern void func_800179B0(void *);
extern u8 D_80252014[];
#define func_80241214 func_80241214__decl315
extern void func_80241214(void);
extern u8 D_80258140[];

void func_80241130(void * volatile arg0, s32 volatile arg1) {
    if (func_8011AAF4(D_80258140, 0x14F, arg0, 0, 2,
        0.187878788f, 45.2999992f, 17.6000004f, 465.600006f,
        0.186363637f, 50.2999992f, 16.2000008f, 450.0f, 0.0f, 35.0f,
        -1, -1) == 0) {
        func_800179B0(D_80252014);
        func_800058DC(arg0, (void *)func_80241214);
    }
}
#undef func_80241214

#define D_8025817C D_8025817C__func_80241214
#define func_800178E8 func_800178E8__func_80241214
#define func_80133980 func_80133980__func_80241214
#define func_801C3044 func_801C3044__func_80241214
#define func_802412F8 func_802412F8__func_80241214
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80241214
#define SG_CAT2(a, b) a##b
#define SG_CAT(a, b) SG_CAT2(a, b)
#define func_80242F38_StructGlobal SG_CAT(SGL_, __LINE__)
#define SGL_348 int
#define SGL_407 func_80242F38_StructGlobal
#define SGL_411 func_80242F38_StructGlobal
#define SGL_412 func_80242F38_StructGlobal
#define SGL_413 func_80242F38_StructGlobal
#define SGL_584 func_80242F38_StructGlobal
extern s32 func_800178E8();
extern void func_80133980(s32);
extern s32 func_801C3044(void);
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

#undef func_80242F38_StructGlobal
extern void func_802412F8();
extern u8 D_8025817C[];

void func_80241214(s32 arg0, s32 arg1) {
    if ((func_801C3044() == 0) && (func_800178E8() != 0)) {
        func_8011AAF4(D_8025817C, 0x15F, (void *)arg0, 2, 1, 0.0f, 45.2999992f, 17.6000004f, 465.600006f, 0.0f, 50.2999992f, 16.2000008f, 450.0f, 0.0f, 35.0f, -1, -1);
        func_80133980(0x6F);
        func_800058DC((void *)arg0, (void *)func_802412F8);
    }
}
#undef SG_CAT2
#undef SG_CAT
#undef SGL_348
#undef SGL_407
#undef SGL_411
#undef SGL_412
#undef SGL_413
#undef SGL_584
#undef D_8025817C
#undef func_800178E8
#undef func_80133980
#undef func_801C3044
#undef func_802412F8
#undef func_80242F38_StructGlobal

#define func_80240C00 func_80240C00__func_802412F8

typedef struct func_802412F8_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_802412F8_StructB;
typedef struct func_802412F8_StructA {
    u8 pad[0x2C];
    func_802412F8_StructB *p;
} func_802412F8_StructA;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_80240C00(void);
#define PLAYER ((func_802412F8_StructA *)D_801BBCD0)
extern u8 D_802581B8[];

void func_802412F8(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(PLAYER->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)PLAYER->p->f4 - (f64)sp50 * 40.0), PLAYER->p->f8 + 20.0f,
                      (f32)((f64)PLAYER->p->fC - (f64)func_8001EB64(PLAYER->p->s12) * 40.0),
                      PLAYER->p->f4, PLAYER->p->f8 + 17.0f, PLAYER->p->fC, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4(D_802581B8, 0x171, (void *)arg0, 2, 1, 0.0f, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f30, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f34, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f38, 0.0f, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f3C, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f40, (*(func_802412F8_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC((void *)arg0, (void *)func_80240C00);
    }
}
#undef func_80240C00

#define D_801BBBF0 D_801BBBF0__func_8024148C
#define func_801C2F0C func_801C2F0C__func_8024148C
typedef struct func_80241928_StructInner {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80241928_StructInner;
typedef struct func_80241928_StructOuter {
    u8 pad0[0xDC];
    func_80241928_StructInner *unkDC;
} func_80241928_StructOuter;
extern func_80241928_StructOuter D_801BBBF0;
extern void func_801C2F0C(s32, s16 *);


typedef struct func_8024148C_StructInner {
    u8 pad0[0xC];
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_8024148C_StructInner;

typedef struct func_8024148C_StructNode {
    u8 pad0[0x2C];
    func_8024148C_StructInner *unk2C;
} func_8024148C_StructNode;

typedef struct func_8024148C_StructArg {
    u8 pad0[0x3C];
    u16 unk3C;
} func_8024148C_StructArg;

typedef struct func_8024148C_StructLoc {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0x12];
} func_8024148C_StructLoc;

void func_8024148C(func_8024148C_StructArg *arg0, s32 arg1) {
extern void func_801C2F0C();
    func_8024148C_StructLoc loc;
    u16 var_v1;
    func_8024148C_StructInner *inner;

    var_v1 = arg0->unk3C;
    if (var_v1 == 0) {
        (*(func_8024148C_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unk12 = 0x1000;
        inner = (*(func_8024148C_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C;
        inner->unkC = inner->unkC + 10.0f;
        var_v1 = arg0->unk3C;
    }
    if ((s32) arg0->unk3C++ >= 0x15) {
        loc.unk0 = 0;
        loc.unk4 = 0x01680041;
        loc.unkC = 0xA;
        loc.unk8 = 1.0f;
        func_801C2F0C(3, &loc.unk0, arg0);
        func_800179B0(D_80252014);
        func_800058DC(arg0, (void *) func_80241214);
    }
}
#undef D_801BBBF0
#undef func_801C2F0C

