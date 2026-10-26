#define func_80248B7C func_80248B7C__merge_frozen
#include "common.h"

#define func_802486B4 func_802486B4__func_80248340
#define func_80249810 func_80249810__func_80248340
typedef struct { u8 pad0[4]; f32 f4; f32 f8; f32 fC; s16 h10; s16 h12; s16 h14; u8 pad16[2]; f32 f18; f32 f1C; f32 f20; s32 w24; u8 pad28[8]; s32 w30; u8 pad34[0x18]; u8 b4C; u8 b4D; u8 b4E; u8 b4F; } func_80248340_S3;
typedef struct { u8 pad[0x30]; func_80248340_S3 *unk30; } func_80248340_S2;
typedef struct { func_80248340_S2 *unk0; func_80248340_S2 *unk4; func_80248340_S2 *unk8; } func_80248340_S1;
typedef struct { u8 pad[0x74]; s32 w74; f32 f78; f32 f7C; f32 f80; s16 h84; s16 h86; s16 h88; } func_80248340_S0;
typedef struct { s32 a; s32 b; s32 c; s32 d; } func_80248340_V;
typedef struct { u8 pad[0xBA2]; u8 bBA2; u8 pad2[0xF32 - 0xBA3]; u8 bF32; u8 bF33; u8 bF34; u8 bF35; } func_80248340_G;
extern func_80248340_V D_80164F40;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern s32 func_8000C3B0(void *);
extern void func_800058DC(void *, void *);
extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
s32 func_80133A24(s32);
struct func_802486B4_Arg;
void func_802486B4(struct func_802486B4_Arg *arg0, s32 arg1);
extern void func_80249810(s32, s32);
struct func_8024A434_StructBBF0;
extern struct func_8024A434_StructBBF0 D_801BBBF0;

void func_80248340(func_80248340_S0 *arg0, func_80248340_S1 *arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x70) == 0) {
            func_80248340_V sp;
            sp = D_80164F40;
            sp.b = 0x80000C00;
            func_80005E44(arg0, &sp);
            func_80005E44(arg0, &sp);
            func_80005E44(arg0, &sp);
            func_80006214(arg0);
            arg1->unk0->unk30->f4 = 0.0f;
            arg1->unk0->unk30->f8 = 0.0f;
            arg1->unk0->unk30->fC = 0.0f;
            arg1->unk0->unk30->h10 = 0;
            arg1->unk0->unk30->h12 = 0;
            arg1->unk0->unk30->h14 = 0;
            func_8012C89C(arg0, 1, 0x28A, 7);
            arg1->unk4->unk30->w24 = 0x13;
            arg1->unk4->unk30->w30 = func_8000C3B0(arg1->unk4);
            arg1->unk4->unk30->f20 = 1.0f;
            arg1->unk4->unk30->f18 = arg1->unk4->unk30->f1C = arg1->unk4->unk30->f20;
            arg1->unk4->unk30->f4 = 100.0f;
            arg1->unk4->unk30->f8 = -202.0f;
            arg1->unk4->unk30->fC = -230.0f;
            arg1->unk4->unk30->h12 = 0;
            arg1->unk4->unk30->w24 |= 0x400;
            arg1->unk4->unk30->b4C = ((func_80248340_G *)&D_801BBBF0)->bF32;
            arg1->unk4->unk30->b4D = ((func_80248340_G *)&D_801BBBF0)->bF33;
            arg1->unk4->unk30->b4E = ((func_80248340_G *)&D_801BBBF0)->bF34;
            arg1->unk4->unk30->b4F = ((func_80248340_G *)&D_801BBBF0)->bF35;
            func_8012C89C(arg0, 2, 0x28A, 7);
            arg1->unk8->unk30->w24 = 0x13;
            arg1->unk8->unk30->w30 = func_8000C3B0(arg1->unk8);
            arg1->unk8->unk30->f20 = 1.0f;
            arg1->unk8->unk30->f18 = arg1->unk8->unk30->f1C = arg1->unk8->unk30->f20;
            arg1->unk8->unk30->f4 = 100.0f;
            arg1->unk8->unk30->f8 = -202.0f;
            arg1->unk8->unk30->fC = -290.0f;
            arg1->unk8->unk30->h12 = 0;
            arg1->unk8->unk30->w24 |= 0x400;
            arg1->unk8->unk30->b4C = ((func_80248340_G *)&D_801BBBF0)->bF32;
            arg1->unk8->unk30->b4D = ((func_80248340_G *)&D_801BBBF0)->bF33;
            arg1->unk8->unk30->b4E = ((func_80248340_G *)&D_801BBBF0)->bF34;
            arg1->unk8->unk30->b4F = ((func_80248340_G *)&D_801BBBF0)->bF35;
            arg0->w74 = func_8012C97C(0x28A, 8);
            arg0->f78 = 0.0f;
            arg0->f7C = 0.0f;
            arg0->f80 = 0.0f;
            arg0->h84 = 0;
            arg0->h86 = 0;
            arg0->h88 = 0;
            ((func_80248340_G *)&D_801BBBF0)->bBA2 = 1;
            func_800058DC(arg0, func_802486B4);
            return;
        }
        func_800058DC(arg0, func_80249810);
    }
}
#undef func_802486B4
#undef func_80249810

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_802486B4.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_802486B4.s","D_80258D80"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_802486B4.s")

#define func_802487F8 func_802487F8__func_802486B4

struct func_802486B4_Struct {
    u8 pad[0xE8];
    struct func_802486B4_Node *unkE8;
    u8 pad2[0xFC];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
struct func_802486B4_Node {
    u8 pad[0x2C];
    f32 *unk2C;
};
struct func_802486B4_Arg {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
};
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_802487F8_Arg;
void func_802487F8(struct func_802487F8_Arg *arg0, s32 arg1);
extern void func_801339D0(s32);
extern void *D_8025A2B0;
struct func_8024A434_StructBBF0;
extern u8 D_80253044[];
extern u8 D_80258D80[];

void func_802486B4(struct func_802486B4_Arg *arg0, s32 arg1) {
    struct func_802486B4_Node *n;
    struct func_802486B4_Struct *g;
    if (func_80133A24(0x70) != 0) {
        D_8025A2B0 = (void *)func_80005670(arg0, D_80253044);
        g = (struct func_802486B4_Struct *)&D_801BBBF0;
        n = g->unkE8;
        g->unk1E8 = n->unk2C[0xC];
        g->unk1EC = n->unk2C[0xD];
        g->unk1F0 = n->unk2C[0xE];
        g->unk1F4 = n->unk2C[0xF];
        g->unk1F8 = n->unk2C[0x10];
        g->unk1FC = n->unk2C[0x11];
        func_8011AAF4(D_80258D80, 0x169, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
        func_801339D0(0x73);
        arg0->unk3C = 0;
        arg0->unk2C |= 0x800;
        func_800058DC(arg0, func_802487F8);
    }
}
#undef func_802487F8

#define func_802488BC func_802488BC__func_802487F8
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
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB30(void);

extern void func_802488BC();

struct func_802487F8_Arg {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad2[0x50];
    f32 unk90;
};

struct func_802487F8_NodeB {
    u8 pad[0x12];
    u16 unk12;
};

struct func_802487F8_NodeA {
    u8 pad[0x2C];
    struct func_802487F8_NodeB *unk2C;
};

struct func_802487F8_Glob {
    u8 pad[0xE0];
    struct func_802487F8_NodeA *unkE0;
    u8 pad2[0x10C];
    f32 unk1F0;
};

struct func_802487F8_E {
    u8 pad[0xC];
    f32 unkC;
};

struct func_802487F8_D {
    u8 pad[0x2C];
    struct func_802487F8_E *unk2C;
};

struct func_802487F8_C {
    u8 pad[0x24];
    struct func_802487F8_D *unk24;
};

void func_802487F8(struct func_802487F8_Arg *arg0, s32 arg1)
{
  s32 temp_v0;
  if (func_80133A24(0x71) != 0)
  {
    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 + 1);
    if ((((s32) temp_v0) >= 5) != ((((s32) temp_v0) >= 5) * 0))
    {
      func_801C3B2C(2);
      func_801C3B10(1);
      ((struct func_802487F8_Glob *) (&D_801BBBF0))->unkE0->unk2C->unk12 = 0x1000;
      arg0->unk90 = (f32) (((f64) ((struct func_802487F8_Glob *) (&D_801BBBF0))->unk1F0) - (((f64) ((struct func_802487F8_C *) D_8025A2B0)->unk24->unk2C->unkC) + 30.0));
      func_801FBB30();
      func_800058DC(arg0, &func_802488BC);
    }
  }
}
#undef func_802488BC

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_802488BC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_802488BC.s","D_80258DC0"],[".rodata","asm/nonmatchings/file015/80248340/func_802488BC.s","D_80258E00"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_802488BC.s")

struct func_802488BC_Struct3 { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802488BC_Struct2 { u8 pad[0x2C]; struct func_802488BC_Struct3 *unk2C; };
struct func_802488BC_Struct1 { u8 pad[0x24]; struct func_802488BC_Struct2 *unk24; };
struct func_802488BC_Struct4 { u8 pad[0xE0]; struct func_802488BC_Struct2 *unkE0; u8 pad2[0x104]; f32 unk1E8, unk1EC, unk1F0, unk1F4, unk1F8, unk1FC; };
extern u8 D_80258DC0[];
extern u8 D_80258E00[];

extern u8 func_80248B7C[];
#define G ((struct func_802488BC_Struct4 *)&D_801BBBF0)
#define S ((struct func_802488BC_Struct1 *)D_8025A2B0)

void func_802488BC(arg0, arg1)
struct func_802487F8_Arg *arg0;
s32 arg1;
{
    f32 a, b, c;
    c = G->unk1F4;
    a = G->unk1F8;
    b = G->unk1FC;
    G->unk1F4 = (f32)((f64)c + (f64)(S->unk24->unk2C->unk4 - c) * 0.2);
    G->unk1F8 = (f32)((f64)a + (f64)((S->unk24->unk2C->unk8 + 15.0f) - a) * 0.2);
    G->unk1FC = (f32)((f64)b + (f64)(S->unk24->unk2C->unkC - b) * 0.2);
    func_8011AAF4(D_80258DC0, 0x196, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, (f32)((f64)arg0->unk90 + ((f64)S->unk24->unk2C->unkC + 30.0)), 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
    arg0->unk90 = (f32)((f64)arg0->unk90 * 0.9);
    if (S->unk24->unk2C->unkC < -250.0f) {
        G->unk1E8 = 105.300003f;
        G->unk1EC = (-191.899994f);
        G->unk1F0 = 138.399994f;
        G->unk1F4 = 86.1999969f;
        G->unk1F8 = -187.0f;
        G->unk1FC = (-319.5f);
        func_8011AAF4(D_80258E00, 0x1A5, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
        G->unkE0->unk2C->unkC = G->unkE0->unk2C->unkC - 20.0f;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80248B7C);
    }
}

#undef func_80248B7C
/* hh-block asm/nonmatchings/file015/80248340/_ro_func_80248B7C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_80248B7C.s","D_80258E40"],[".rodata","asm/nonmatchings/file015/80248340/func_80248B7C.s","D_80258E80"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_80248B7C.s")

#define D_801BBBF0 D_801BBBF0__func_80248B7C
#define D_80258E40 D_80258E40__func_80248B7C
#define D_80258E80 D_80258E80__func_80248B7C
#define func_801C2F0C func_801C2F0C__func_80248B7C
#define func_802486B4_Arg func_802486B4_Arg__func_80248B7C
#define func_802486B4_Node func_802486B4_Node__func_80248B7C
#define func_802486B4_Struct func_802486B4_Struct__func_80248B7C
#define func_802487F8_C func_802487F8_C__func_80248B7C
#define func_802487F8_D func_802487F8_D__func_80248B7C
#define func_802487F8_E func_802487F8_E__func_80248B7C
#define func_80248E18 func_80248E18__func_80248B7C
#define func_8024A434_StructBBF0 func_8024A434_StructBBF0__func_80248B7C
#define func_8024A434_Sub func_8024A434_Sub__func_80248B7C
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
extern void func_801C2F0C(s32 arg0, void *arg1);
struct func_802486B4_Arg {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
};
struct func_802486B4_Node {
    u8 pad[0x2C];
    f32 *unk2C;
};
struct func_802486B4_Struct {
    u8 pad[0xE8];
    struct func_802486B4_Node *unkE8;
    u8 pad2[0xFC];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
struct func_802487F8_E {
    u8 pad[0xC];
    f32 unkC;
};
struct func_802487F8_D {
    u8 pad[0x2C];
    struct func_802487F8_E *unk2C;
};
struct func_802487F8_C {
    u8 pad[0x24];
    struct func_802487F8_D *unk24;
};

extern u8 D_80258E40[];
extern u8 D_80258E80[];
void func_80248E18(void *arg0, s32 arg1);

union func_80248B7C_U { f32 f; s32 w; struct { s16 x, y; } h; };
struct func_80248B7C_Struct {
    union func_80248B7C_U a, b, c, d, e, g, h;
};

void func_80248B7C(struct func_802486B4_Arg *arg0, s32 arg1) {
    s32 pad;
    struct func_80248B7C_Struct s;
#define gv ((struct func_802486B4_Struct *)&D_801BBBF0)
    s32 t;

    t = arg0->unk3C++;
    func_8011AAF4(D_80258E40, 0x1BC, arg0, 0, 1, 0.0f, gv->unk1E8, gv->unk1EC, gv->unk1F0, 0.0f, gv->unk1F4, gv->unk1F8, gv->unk1FC, 0.0f, 35.0f, -1, -1);
    gv->unk1EC = gv->unk1EC + 0.06;
    if (t == 0) {
        s.a.h.x = 0x1000;
        s.b.w = 0x01B8000B;
        s.c.f = 1.0f;
        s.d.h.x = 0xA;
        func_801C2F0C(5, &s);
    }
    if (t == 0x28) {
        s.c.f = 0.0f;
        s.d.h.x = 0x1100;
        s.e.w = 0x01680040;
        s.h.h.x = 0;
        s.h.h.y = 0x96;
        s.a.f = 100.0f;
        s.b.f = -160.0f;
        s.g.f = 1.20000005f;
        func_801C2F0C(2, &s);
    }
    if (((struct func_802487F8_C *)D_8025A2B0)->unk24->unk2C->unkC < -400.0f) {
        gv->unk1E8 = 87.1999969f;
        gv->unk1EC = (-185.600006f);
        gv->unk1F0 = (-404.799988f);
        gv->unk1F4 = 111.199997f;
        gv->unk1F8 = (-189.100006f);
        gv->unk1FC = (-429.200012f);
        func_8011AAF4(D_80258E80, 0x1E8, arg0, 0, 1, 0.0f, gv->unk1E8, gv->unk1EC, gv->unk1F0, 0.0f, gv->unk1F4, gv->unk1F8, gv->unk1FC, 0.0f, 35.0f, -1, -1);
        arg0->unk2C &= ~0x800;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80248E18);
    }
}
#undef gv
#undef D_801BBBF0
#undef D_80258E40
#undef D_80258E80
#undef func_801C2F0C
#undef func_802486B4_Arg
#undef func_802486B4_Node
#undef func_802486B4_Struct
#undef func_802487F8_C
#undef func_802487F8_D
#undef func_802487F8_E
#undef func_80248E18
#undef func_8024A434_StructBBF0
#undef func_8024A434_Sub
#define func_80248B7C func_80248B7C__merge_frozen

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_80248E18.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_80248E18.s","D_80258ED0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_80248E18.s")

extern void func_801518D4(s32, s32, s32);
extern void func_80020718(s32);
extern u8 D_80258ED0[];

extern u8 func_80248F7C[];

#define G(o) (*(f32 *)((u8 *)&D_801BBBF0 + (o)))
#define P(T, o) (*(T *)((u8 *)arg0 + (o)))

void func_80248E18(void *arg0, s32 arg1) {
    s32 t;

    if (func_80133A24(0x73) != 0) {
        t = P(u16, 0x3C)++;
        if (t >= 5) {
            G(0x1E8) = 41.5f;
            G(0x1EC) = -95.5f;
            G(0x1F0) = (-162.699997f);
            G(0x1F4) = 144.699997f;
            G(0x1F8) = (-265.600006f);
            G(0x1FC) = (-299.5f);
            func_8011AAF4(D_80258ED0, 0x208, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
            if (t >= 10) {
                P(u16, 0x3C) = 0;
                P(f32, 0x94) = 4.0f;
                P(f32, 0x98) = 4.0f;
                func_80020718(0x1BC);
                func_801518D4(0, 6, 0xF);
                func_800058DC(arg0, (void *)func_80248F7C);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248F7C.s")

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_8024965C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_8024965C.s","D_80258F90"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_8024965C.s")

#define func_80249810 func_80249810__func_8024965C

typedef struct func_8024965C_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_8024965C_StructB;
typedef struct func_8024965C_StructA {
    u8 pad[0x2C];
    func_8024965C_StructB *p;
} func_8024965C_StructA;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_800208C4(s32);
extern void func_80249810(s32, s32);
extern void func_801C2F0C(s32 arg0, void *arg1);
extern s32 func_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801FBB20(void);
extern func_8024965C_StructA *D_801BBCD0;
extern func_8024965C_StructA *D_801BBCD8;
extern u8 D_801BC3D8[];
extern u8 D_80258F90[];

void func_8024965C(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 40.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 40.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4(D_80258F90, 0x2BD, (void *)arg0, 2, 1, 0.0f, D_801BBCD8->p->f30, D_801BBCD8->p->f34, D_801BBCD8->p->f38, 0.0f, D_801BBCD8->p->f3C, D_801BBCD8->p->f40, D_801BBCD8->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        D_801BC3D8[0x3BA] = 0;
        func_800208C4(0x26);
        func_800208C4(0x32);
        func_800058DC((void *)arg0, (void *)func_80249810);
    }
}
#undef func_80249810


void func_80249810(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80249854 func_80249854__func_8024981C

extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_80249854();

void func_8024981C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_80249854);
}
#undef func_80249854

#define func_800058DC func_800058DC__func_80249854
#define func_8024990C func_8024990C__func_80249854
typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;
extern void func_8013A1B4();

typedef struct func_80249854_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
} func_80249854_Sub;

typedef struct func_80249854_Inner {
    u8 pad[0x2C];
    func_80249854_Sub *unk2C;
} func_80249854_Inner;

typedef struct func_80249854_Arg0 {
    u8 pad[0x9C];
    s16 unk9C;
} func_80249854_Arg0;

extern void func_800058DC(void *arg0, void *arg1);
extern void func_8024990C();

extern struct func_8024AA38_Struct D_80253064;

void func_80249854(void *arg0, func_80249854_Inner **arg1) {
    (*arg1)->unk2C->unk4 = 0.0f;
    (*arg1)->unk2C->unk8 = -200.0f;
    (*arg1)->unk2C->unkC = -100.0f;
    (*arg1)->unk2C->unk12 = 0x800;
    func_8013A1B4((s32)arg1, D_80253064, 0xFFFFFF);
    ((func_80249854_Arg0 *)arg0)->unk9C = 0;
    func_800058DC(arg0, (void *)func_8024990C);
}
#undef func_800058DC
#undef func_8024990C

#define func_800058DC func_800058DC__func_8024990C
#define func_80249970 func_80249970__func_8024990C

typedef struct func_8024990C_Sub {
    u8 pad[4];
    f32 unk4;
} func_8024990C_Sub;

typedef struct func_8024990C_Inner {
    u8 pad[0x2C];
    func_8024990C_Sub *unk2C;
} func_8024990C_Inner;

typedef struct func_8024990C_Obj {
    u8 pad[0x5C];
    void *unk5C;
} func_8024990C_Obj;

extern s32 func_80010550(s32, s32);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80249970();

void func_8024990C(func_8024990C_Obj *arg0, func_8024990C_Inner **arg1) {
    void *tmp;

    tmp = arg0->unk5C;
    func_80010550(arg1, tmp);
    if (((*arg1)->unk2C)->unk4 >= 80.0f) {
        func_800058DC(arg0, func_80249970);
    }
}
#undef func_800058DC
#undef func_80249970


typedef struct func_80249970_StructSub {
    u8 pad[0x12];
    s16 unk12;
} func_80249970_StructSub;

typedef struct func_80249970_StructInner {
    u8 pad[0x2C];
    func_80249970_StructSub *unk2C;
} func_80249970_StructInner;

typedef struct func_80249970_StructObj {
    u8 pad[0x5C];
    s32 unk5C;
} func_80249970_StructObj;

void func_80249970(func_80249970_StructObj *arg0, func_80249970_StructInner **arg1) {
    func_80249970_StructSub *temp_v0;
    s32 temp_a1;
    extern void func_800058DC();
    extern void func_802499E8();

    temp_a1 = arg0->unk5C;
    func_80010550((s32) arg1, temp_a1);
    temp_v0 = (*arg1)->unk2C;
    temp_v0->unk12 = temp_v0->unk12 + 0x5B;
    temp_v0 = (*arg1)->unk2C;
    if (temp_v0->unk12 >= 0xFDD) {
        temp_v0->unk12 = 0xFDD;
        func_800058DC(arg0, func_802499E8, arg1);
    }
}

#define func_80249A84 func_80249A84__func_802499E8

struct func_802499E8_Inner {
    u8 pad[0xC];
    f32 unkC;
};
struct func_802499E8_Struct {
    u8 pad[0x2C];
    struct func_802499E8_Inner *unk2C;
};
struct func_802499E8_Arg {
    u8 pad[0x5C];
    s32 unk5C;
};

extern void func_80249A84();
extern func_8024AA38_Struct D_80253070;

void func_802499E8(struct func_802499E8_Arg *arg0, void **arg1) {
    s32 val;

    val = arg0->unk5C;
    func_80010550(arg1, val);
    if ((f64) ((struct func_802499E8_Struct *) *arg1)->unk2C->unkC <= (-436.5)) {
        func_8013A1B4((s32) arg1, D_80253070, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80249A84);
    }
}
#undef func_80249A84

#define func_80249B54 func_80249B54__func_80249A84
extern void func_800179B0(void *);

typedef struct func_80249A84_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x9C - 0x60];
    s16 unk9C;
} func_80249A84_Struct;

typedef struct func_80249A84_Locals {
    s16 unk28;
    s32 unk2C;
    f32 unk30;
    s16 unk34;
    u8 pad36[0x10];
} func_80249A84_Locals;

void func_801C3C60(void *, s32);
extern func_8024AA38_Struct D_8025307C;
extern u8 D_802530C4[];
extern void func_80249B54();

void func_80249A84(func_80249A84_Struct *arg0, s32 arg1) {
    func_80249A84_Locals sp;
    s32 temp;

    temp = arg0->unk5C;
    if (func_80010550(arg1, temp) != 0) {
        sp.unk28 = 0x1000;
        sp.unk2C = 0x01680041;
        sp.unk34 = 0xF;
        sp.unk30 = 1.0f;
        func_801C2F0C(3, &sp.unk28);
        func_800179B0(D_802530C4);
        func_8013A1B4(arg1, D_8025307C, 0xFFFFFF);
        arg0->unk9C = 0;
        func_800058DC(arg0, func_80249B54);
        return;
    }
    func_801C3C60(arg0, 0x40A00000);
}
#undef func_80249B54

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_80249B54.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_80249B54.s","D_80258FEC"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_80249B54.s")

#define func_80249CF8 func_80249CF8__func_80249B54
extern func_8024AA38_Struct D_80253088;
struct func_80249CF8_Obj;
void func_80249CF8(struct func_80249CF8_Obj *arg0, s32 arg1);
extern u8 D_80253164[];
extern u8 D_80258FEC[];

void func_80249B54(func_80249A84_Struct *arg0, func_80249854_Inner **arg1) {
    s32 t = arg0->unk5C;
    u16 *p = (u16 *)&arg0->unk9C;
    s32 first = (*p)++ == 0;
    if (first) {
        (*arg1)->unk2C->unk12 = 0;
    }
    if (func_80010550((s32)arg1, t) != 0 && func_800178E8() != 0) {
        struct func_802486B4_Struct *g = (struct func_802486B4_Struct *)&D_801BBBF0;
        g->unk1E8 = 109.699997f;
        g->unk1EC = (-193.899994f);
        g->unk1F0 = (-471.600006f);
        g->unk1F4 = 111.199997f;
        g->unk1F8 = (-188.199997f);
        g->unk1FC = (-429.200012f);
        func_8011AAF4(D_80258FEC, 0x359, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80253164);
        func_8013A1B4(arg1, D_80253088, 0xFFFFFF);
        func_800058DC(arg0, func_80249CF8);
        return;
    }
    func_801C3C60(arg0, 0x40A00000);
}
#undef func_80249CF8


struct func_80249CF8_Obj {
    u8 pad[0x5C];
    s32 unk5C;
};
struct func_80249CF8_Vec {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_80249CF8_Mid {
    u8 pad[0x2C];
    struct func_80249CF8_Vec *unk2C;
};
struct func_80249CF8_Bbf0 {
    u8 pad[0xE0];
    struct func_80249CF8_Mid *unkE0;
};

extern s32 func_800178E8(void);
extern void func_80249DD0();
extern func_8024AA38_Struct D_80253094;
extern u8 D_802532B4[];

void func_80249CF8(struct func_80249CF8_Obj *arg0, s32 arg1) {
    s32 tmp = arg0->unk5C;

    if (func_80010550(arg1, tmp) != 0 && func_800178E8() != 0) {
        func_800179B0(D_802532B4);
        func_8013A1B4(arg1, D_80253094, 0xFFFFFF);
        ((struct func_80249CF8_Bbf0 *)&D_801BBBF0)->unkE0->unk2C->unk4 = 100.0f;
        ((struct func_80249CF8_Bbf0 *)&D_801BBBF0)->unkE0->unk2C->unk8 = -200.0f;
        ((struct func_80249CF8_Bbf0 *)&D_801BBBF0)->unkE0->unk2C->unkC = -180.0f;
        func_800058DC(arg0, func_80249DD0);
    }
}

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_80249DD0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_80249DD0.s","D_8025902C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_80249DD0.s")

#define D_80253300 D_80253300__func_80249DD0
#define D_8025902C D_8025902C__func_80249DD0
#define func_80249F30 func_80249F30__func_80249DD0

typedef struct func_80249DD0_Arg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80249DD0_Arg;
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
extern u8 D_8025902C[];
extern u8 D_80253300[];

void func_80249F30(void *arg0, s32 arg1);

void func_80249DD0(arg0, arg1)
func_80249DD0_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            G_DD0->unk1E8 = 87.1999969f;
            G_DD0->unk1EC = (-185.600006f);
            G_DD0->unk1F0 = (-404.799988f);
            G_DD0->unk1F4 = 111.199997f;
            G_DD0->unk1F8 = (-189.100006f);
            G_DD0->unk1FC = (-429.200012f);
            func_8011AAF4(D_8025902C, 0x387, arg0, 0, 1, 0.0f, G_DD0->unk1E8, G_DD0->unk1EC, G_DD0->unk1F0, 0.0f, G_DD0->unk1F4, G_DD0->unk1F8, G_DD0->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800179B0(D_80253300);
            func_8013A1B4(arg1, D_80253088, 0xFFFFFF);
            func_800058DC(arg0, func_80249F30);
        }
    }
}
#undef G_DD0
#undef D_80253300
#undef D_8025902C
#undef func_80249F30

#define func_800058DC func_800058DC__func_80249F30
#define func_80249FC4 func_80249FC4__func_80249F30

extern void func_800058DC(void *arg0, void *arg1);
extern void func_80249FC4();
extern func_8024AA38_Struct D_802530A0;
extern u8 D_80253410[];

void func_80249F30(void *arg0, s32 arg1) {
    s32 field;

    field = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550(arg1, field) != 0) {
        if (func_800178E8() != 0) {
            func_800179B0(D_80253410);
            func_8013A1B4(arg1, D_802530A0, 0xFFFFFF);
            func_800058DC(arg0, func_80249FC4);
        }
    }
}
#undef func_800058DC
#undef func_80249FC4

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_80249FC4.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_80249FC4.s","D_8025906C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_80249FC4.s")

#define func_8024A120 func_8024A120__func_80249FC4

typedef struct func_80249FC4_Arg {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x3C];
    s16 unk9C;
} func_80249FC4_Arg;
typedef struct func_80249FC4_G {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80249FC4_G;
extern u8 D_8025906C[];
extern func_8024AA38_Struct D_802530AC;

extern void func_8024A120();
#define G ((func_80249FC4_G *)&D_801BBBF0)

void func_80249FC4(arg0, arg1)
func_80249FC4_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            G->unk1E8 = 109.300003f;
            G->unk1EC = (-186.100006f);
            G->unk1F0 = (-425.299988f);
            G->unk1F4 = 113.300003f;
            G->unk1F8 = -184.0f;
            G->unk1FC = (-439.100006f);
            func_8011AAF4(D_8025906C, 0x3B0, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 21.2000008f, -1, -1);
            func_8013A1B4(arg1, D_802530AC, 0xFFFFFF);
            arg0->unk9C = 0;
            func_800058DC(arg0, func_8024A120);
        }
    }
}
#undef func_8024A120

#define func_8024A224 func_8024A224__func_8024A120

typedef struct func_8024A120_Sub {
    u8 pad[4];
    f32 unk4;
} func_8024A120_Sub;

typedef struct func_8024A120_Node {
    u8 pad[0x2C];
    func_8024A120_Sub *unk2C;
} func_8024A120_Node;

typedef struct func_8024A120_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x3C];
    u16 unk9C;
} func_8024A120_Obj;

typedef struct func_8024A120_G {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024A120_G;

#define GG ((func_8024A120_G *)&D_801BBBF0)

extern func_8024AA38_Struct D_802530B8;
extern void func_8024A224();

void func_8024A120(func_8024A120_Obj *arg0, func_8024A120_Node **arg1) {
    s32 t;

    t = arg0->unk5C;
    if (arg0->unk9C++ == 0) {
        (*arg1)->unk2C->unk4 = 112.5f;
    }
    if (func_80010550((s32)arg1, t) != 0) {
        GG->unk1E8 = 114.400002f;
        GG->unk1EC = (-190.699997f);
        GG->unk1F0 = (-425.0f);
        GG->unk1F4 = 118.400002f;
        GG->unk1F8 = (-188.600006f);
        GG->unk1FC = (-438.700012f);
        func_8013A1B4(arg1, D_802530B8, 0xFFFFFF);
        arg0->unk9C = 0;
        func_800058DC(arg0, func_8024A224);
    }
}
#undef func_8024A224

/* hh-block asm/nonmatchings/file015/80248340/_ro_func_8024A224.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80248340/func_8024A224.s","D_802590AC"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/_ro_func_8024A224.s")

#define func_8024A3B4 func_8024A3B4__func_8024A224
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
void func_8024A3B4(s32 arg0, s32 arg1);
extern void func_80133980(s32);
extern u8 D_802590AC[];

extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8024A224(func_8024A120_Obj *arg0, s32 arg1) {
    s32 pad;
    s32 sp58;
    s32 t = arg0->unk5C;
    if (arg0->unk9C++ >= 0xA) {
        sp58 = func_80010550(arg1, t);
        if (D_8011AAF4(D_802590AC, 0x3E0, arg0, 0, 2, 1.10300004f, GG->unk1E8, GG->unk1EC, GG->unk1F0, 1.37399995f, GG->unk1F4, GG->unk1F8, GG->unk1FC, 0.0f, 35.0f, -1, -1) == 0 && sp58 != 0) {
            func_80020718(0x1BB);
            func_80129FB8(120.0f, -190.0f, -440.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0, 0x80, 0x80, 0x80, -4, 0.100000001f, 0, 0);
            func_80133980(0x73);
            func_800058DC(arg0, func_8024A3B4);
        }
    }
}
#undef func_8024A3B4


void func_8024A3B4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


#undef func_80248B7C
