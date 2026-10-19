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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802488BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248E18.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249B54.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A224.s")


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
extern void func_80020718(s32);
extern void func_80133980(s32);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A4EC.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A644.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AC24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ACB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AD4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ADE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AF34.s")


struct func_8024B024_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x1E];
    s32 unk5C;
};

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

