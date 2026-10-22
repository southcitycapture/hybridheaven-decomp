#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248340.s")


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
extern void func_800058DC(void *, void *);
extern void func_801339D0(s32);
s32 func_80133A24(s32);
extern void *D_8025A2B0;
struct func_8024A434_StructBBF0;
extern struct func_8024A434_StructBBF0 D_801BBBF0;
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

struct func_802488BC_Struct3 { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802488BC_Struct2 { u8 pad[0x2C]; struct func_802488BC_Struct3 *unk2C; };
struct func_802488BC_Struct1 { u8 pad[0x24]; struct func_802488BC_Struct2 *unk24; };
struct func_802488BC_Struct4 { u8 pad[0xE0]; struct func_802488BC_Struct2 *unkE0; u8 pad2[0x104]; f32 unk1E8, unk1EC, unk1F0, unk1F4, unk1F8, unk1FC; };
extern u8 D_80258DC0[];
extern u8 D_80258E00[];
extern f64 D_802590F0;
extern f64 D_802590F8;
extern f32 D_80259100, D_80259104, D_80259108, D_8025910C, D_80259110;
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
    G->unk1F4 = (f32)((f64)c + (f64)(S->unk24->unk2C->unk4 - c) * D_802590F0);
    G->unk1F8 = (f32)((f64)a + (f64)((S->unk24->unk2C->unk8 + 15.0f) - a) * D_802590F0);
    G->unk1FC = (f32)((f64)b + (f64)(S->unk24->unk2C->unkC - b) * D_802590F0);
    func_8011AAF4(D_80258DC0, 0x196, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, (f32)((f64)arg0->unk90 + ((f64)S->unk24->unk2C->unkC + 30.0)), 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
    arg0->unk90 = (f32)((f64)arg0->unk90 * D_802590F8);
    if (S->unk24->unk2C->unkC < -250.0f) {
        G->unk1E8 = D_80259100;
        G->unk1EC = D_80259104;
        G->unk1F0 = D_80259108;
        G->unk1F4 = D_8025910C;
        G->unk1F8 = -187.0f;
        G->unk1FC = D_80259110;
        func_8011AAF4(D_80258E00, 0x1A5, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
        G->unkE0->unk2C->unkC = G->unkE0->unk2C->unkC - 20.0f;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80248B7C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248B7C.s")

extern void func_801518D4(s32, s32, s32);
extern void func_80020718(s32);
extern u8 D_80258ED0[];
extern f32 D_8025913C;
extern f32 D_80259140;
extern f32 D_80259144;
extern f32 D_80259148;
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
            G(0x1F0) = D_8025913C;
            G(0x1F4) = D_80259140;
            G(0x1F8) = D_80259144;
            G(0x1FC) = D_80259148;
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
extern f32 D_80259174;

void func_8024965C(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 40.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 40.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, D_80259174, 35.0f) == 0) {
        func_8011AAF4(D_80258F90, 0x2BD, (void *)arg0, 2, 1, 0.0f, D_801BBCD8->p->f30, D_801BBCD8->p->f34, D_801BBCD8->p->f38, 0.0f, D_801BBCD8->p->f3C, D_801BBCD8->p->f40, D_801BBCD8->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        D_801BC3D8[0x3BA] = 0;
        func_800208C4(0x26);
        func_800208C4(0x32);
        func_800058DC((void *)arg0, (void *)func_80249810);
    }
}


void func_80249810(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_80249854();

void func_8024981C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_80249854);
}

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
extern void func_80249970();

void func_8024990C(func_8024990C_Obj *arg0, func_8024990C_Inner **arg1) {
    void *tmp;

    tmp = arg0->unk5C;
    func_80010550(arg1, tmp);
    if (((*arg1)->unk2C)->unk4 >= 80.0f) {
        func_800058DC(arg0, func_80249970);
    }
}


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
extern f64 D_80259178;

void func_802499E8(struct func_802499E8_Arg *arg0, void **arg1) {
    s32 val;

    val = arg0->unk5C;
    func_80010550(arg1, val);
    if ((f64) ((struct func_802499E8_Struct *) *arg1)->unk2C->unkC <= D_80259178) {
        func_8013A1B4((s32) arg1, D_80253070, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80249A84);
    }
}

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

extern func_8024AA38_Struct D_80253088;
struct func_80249CF8_Obj;
void func_80249CF8(struct func_80249CF8_Obj *arg0, s32 arg1);
extern u8 D_80253164[];
extern u8 D_80258FEC[];
extern f32 D_80259180;
extern f32 D_80259184;
extern f32 D_80259188;
extern f32 D_8025918C;
extern f32 D_80259190;
extern f32 D_80259194;

void func_80249B54(func_80249A84_Struct *arg0, func_80249854_Inner **arg1) {
    s32 t = arg0->unk5C;
    u16 *p = (u16 *)&arg0->unk9C;
    s32 first = (*p)++ == 0;
    if (first) {
        (*arg1)->unk2C->unk12 = 0;
    }
    if (func_80010550((s32)arg1, t) != 0 && func_800178E8() != 0) {
        struct func_802486B4_Struct *g = (struct func_802486B4_Struct *)&D_801BBBF0;
        g->unk1E8 = D_80259180;
        g->unk1EC = D_80259184;
        g->unk1F0 = D_80259188;
        g->unk1F4 = D_8025918C;
        g->unk1F8 = D_80259190;
        g->unk1FC = D_80259194;
        func_8011AAF4(D_80258FEC, 0x359, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80253164);
        func_8013A1B4(arg1, D_80253088, 0xFFFFFF);
        func_800058DC(arg0, func_80249CF8);
        return;
    }
    func_801C3C60(arg0, 0x40A00000);
}


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249DD0.s")


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
extern f32 D_802591B0, D_802591B4, D_802591B8, D_802591BC, D_802591C0, D_802591C4;
extern void func_8024A120();
#define G ((func_80249FC4_G *)&D_801BBBF0)

void func_80249FC4(arg0, arg1)
func_80249FC4_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            G->unk1E8 = D_802591B0;
            G->unk1EC = D_802591B4;
            G->unk1F0 = D_802591B8;
            G->unk1F4 = D_802591BC;
            G->unk1F8 = -184.0f;
            G->unk1FC = D_802591C0;
            func_8011AAF4(D_8025906C, 0x3B0, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, D_802591C4, -1, -1);
            func_8013A1B4(arg1, D_802530AC, 0xFFFFFF);
            arg0->unk9C = 0;
            func_800058DC(arg0, func_8024A120);
        }
    }
}


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

extern f32 D_802591C8;
extern f32 D_802591CC;
extern f32 D_802591D0;
extern f32 D_802591D4;
extern f32 D_802591D8;
extern f32 D_802591DC;
extern func_8024AA38_Struct D_802530B8;
extern void func_8024A224();

void func_8024A120(func_8024A120_Obj *arg0, func_8024A120_Node **arg1) {
    s32 t;

    t = arg0->unk5C;
    if (arg0->unk9C++ == 0) {
        (*arg1)->unk2C->unk4 = 112.5f;
    }
    if (func_80010550((s32)arg1, t) != 0) {
        GG->unk1E8 = D_802591C8;
        GG->unk1EC = D_802591CC;
        GG->unk1F0 = D_802591D0;
        GG->unk1F4 = D_802591D4;
        GG->unk1F8 = D_802591D8;
        GG->unk1FC = D_802591DC;
        func_8013A1B4(arg1, D_802530B8, 0xFFFFFF);
        arg0->unk9C = 0;
        func_800058DC(arg0, func_8024A224);
    }
}

extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
void func_8024A3B4(s32 arg0, s32 arg1);
extern void func_80133980(s32);
extern u8 D_802590AC[];
extern f32 D_802591E0, D_802591E4, D_802591E8;
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8024A224(func_8024A120_Obj *arg0, s32 arg1) {
    s32 pad;
    s32 sp58;
    s32 t = arg0->unk5C;
    if (arg0->unk9C++ >= 0xA) {
        sp58 = func_80010550(arg1, t);
        if (D_8011AAF4(D_802590AC, 0x3E0, arg0, 0, 2, D_802591E0, GG->unk1E8, GG->unk1EC, GG->unk1F0, D_802591E4, GG->unk1F4, GG->unk1F8, GG->unk1FC, 0.0f, 35.0f, -1, -1) == 0 && sp58 != 0) {
            func_80020718(0x1BB);
            func_80129FB8(120.0f, -190.0f, -440.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0, 0x80, 0x80, 0x80, -4, D_802591E8, 0, 0);
            func_80133980(0x73);
            func_800058DC(arg0, func_8024A3B4);
        }
    }
}


void func_8024A3B4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


/* Forward declarations needed because this function sits before func_8024A434 in the file. */
struct func_8024A434_Arg;
void func_8024A434(struct func_8024A434_Arg *arg0, s32 arg1);

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
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



struct func_8024A434_Arg {
    u8 pad[0x3C];
    s16 unk3C;
};


extern s32 func_80005670(void *, void *);
extern s32 func_801C3D20(f32, f32, f32);
extern void *D_80253474;
extern s32 D_8025A2C0;
extern void func_8024A4EC();

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

extern s32 func_801C2FF8(void);
extern f32 D_802592E0;
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
        sp18.unk8 = D_802592E0;
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

extern s32 func_801C3B5C(void);
extern u8 D_802534DC[];
extern u8 func_8024A604[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A604.s")


extern u8 D_802591F0[];
extern s32 D_801C2F0C(s32, void *);
void func_8024A780(s32 arg0, s32 arg1);
extern f32 D_802592E4;
extern f32 D_802592E8;
extern f32 D_802592EC;
extern f32 D_802592F0;
extern f32 D_802592F4;

void func_8024A644(s32 arg0, s32 arg1) {
    struct { s16 unk00; s32 unk04; f32 unk08; u8 pad[0x14]; } sp;

    if (func_800178E8() != 0) {
        func_80133980(0x73);
        sp.unk00 = 0x1100;
        sp.unk04 = 0x0348007A;
        sp.unk08 = 10.0f;
        D_801C2F0C(4, &sp);
        GG->unk1E8 = D_802592E4;
        GG->unk1EC = D_802592E8;
        GG->unk1F0 = D_802592EC;
        GG->unk1F4 = -75.0f;
        GG->unk1F8 = D_802592F0;
        GG->unk1FC = D_802592F4;
        func_8011AAF4(D_802591F0, 0x143, (void *)arg0, 0, 1, 0.0f, GG->unk1E8, GG->unk1EC, GG->unk1F0, 0.0f, GG->unk1F4, GG->unk1F8, GG->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800058DC((void *)arg0, (void *)func_8024A780);
    }
}


extern void func_8024A7C8();

void func_8024A780(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_80020718(7);
        func_800058DC(arg0, func_8024A7C8);
    }
}


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

extern u8 D_8025922C[];
extern f32 D_802592F8;

void func_8024A7C8(void *arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 30.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 30.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, D_802592F8, 35.0f) == 0) {
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


void func_8024A984(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_8024A9C8();

void func_8024A990(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_8024A9C8);
}


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



extern void func_8024AAC4();

extern func_8024AA38_Struct D_802534A0;
extern u8 D_80253524[];

void func_8024AA38(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_802534A0, 0xFFFFFF);
        func_800179B0(D_80253524);
        func_800058DC((void *) arg0, (void *) func_8024AAC4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AAC4.s")

typedef struct func_8024AC24_Vec {
    s32 a, b, c;
} func_8024AC24_Vec;
typedef struct func_8024AC24_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024AC24_Struct;
extern func_8024AC24_Vec D_802534B8;
extern u8 D_80253738[];
extern u8 func_8024ACB8[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ACB8.s")

struct func_8024AD4C_Vec { s32 a, b, c; };
extern struct func_8024AD4C_Vec D_802534D0;
extern u8 D_802538B8[];
extern u8 func_8024ADE0[];
void func_8024AD4C(arg0, arg1)
struct func_80249CF8_Obj *arg0;
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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ADE0.s")

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



extern void func_80005700(void *);

void func_8024B024(struct func_8024B024_Struct *arg0, s32 arg1) {
    s32 value;

    value = arg0->unk5C;
    func_80010550(arg1, value);
    if (arg0->unk3C++ == 0x3C) {
        func_80133980(0x73);
        func_80005700(arg0);
    }
}

