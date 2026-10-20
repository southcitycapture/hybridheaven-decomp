#include "common.h"


extern u8 D_80248DC0[][3];

void func_80241010(u8 *arg0, u8 *arg1, u8 *arg2, u8 arg3) {
    u8 *temp_v0;

    if (arg3 >= 9) {
        arg3 = 0;
    }
    temp_v0 = D_80248DC0[arg3];
    *arg0 = temp_v0[0];
    *arg1 = temp_v0[1];
    *arg2 = temp_v0[2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/func_80241054.s")


struct func_80241304_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};

extern void *func_80005670(s32 arg0, void *arg1);
extern u8 D_80248E78[];

void *func_80241304(s32 arg0, s32 arg1) {
    struct func_80241304_Struct *temp_v0;

    temp_v0 = func_80005670(arg0, D_80248E78);
    if (temp_v0 != NULL) {
        temp_v0->unk2C = arg1;
    }
    return temp_v0;
}


typedef struct func_80241340_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 unk34;
    u8 unk35;
} func_80241340_Struct;

extern s32 func_800058DC(void *, void *);
extern void func_80241378();

void func_80241340(func_80241340_Struct *arg0, s32 arg1) {
    arg0->unk34 = 0;
    arg0->unk35 = 0;
    arg0->unk30 = arg0->unk2C;
    func_800058DC(arg0, func_80241378);
}

extern u8 D_801BCAE0[];
extern void func_802415B8(s32, s32);
extern void func_80241054(void *, void *, void *, u8, s32, f32);
struct func_80241378_Struct2 { u8 pad[0x6C]; u8 unk6C; };
typedef struct func_80241378_Data {
    u8 unk0, unk1, unk2, unk3, unk4;
    u8 pad[3];
    u8 *unk8;
} func_80241378_Data;
typedef struct func_80241378_Struct {
    u8 pad0[0xC];
    struct func_80241378_Struct2 *unkC;
    u8 pad1[0x20];
    func_80241378_Data *unk30;
    u8 unk34;
    u8 unk35;
} func_80241378_Struct;

void func_80241378(func_80241378_Struct *arg0, s32 arg1) {
    func_80241378_Data *s1;
    u8 *v1;
    f32 f;

    s1 = arg0->unk30;
    v1 = s1->unk8;
    if (arg0->unk35 == 0) goto c0;
    if (arg0->unk35 == 1) goto c1;
    if (arg0->unk35 == 2) goto c2;
c0:
    func_80241010(D_801BCAE0 + 0x30, D_801BCAE0 + 0x31, D_801BCAE0 + 0x32, s1->unk0);
    func_80241010(D_801BCAE0 + 0x33, D_801BCAE0 + 0x34, D_801BCAE0 + 0x35, s1->unk1);
    func_80241010(D_801BCAE0 + 0x39, D_801BCAE0 + 0x3A, D_801BCAE0 + 0x3B, s1->unk2);
    arg0->unk34 = 0;
    arg0->unk35 = arg0->unk35 + 1;
c1:
    arg0->unk34 = arg0->unk34 + 1;
    if (s1->unk3 < arg0->unk34) {
        arg0->unk34 = 0;
        arg0->unk35 = arg0->unk35 + 1;
    }
    goto end;
c2:
    f = ((f64)(u32)arg0->unk34 + 1.0) / ((f64)(u32)s1->unk4 + 1.0);
    func_80241054(D_801BCAE0 + 0x30, D_801BCAE0 + 0x31, D_801BCAE0 + 0x32, s1->unk0, v1[0], f);
    func_80241054(D_801BCAE0 + 0x33, D_801BCAE0 + 0x34, D_801BCAE0 + 0x35, s1->unk1, v1[1], f);
    func_80241054(D_801BCAE0 + 0x39, D_801BCAE0 + 0x3A, D_801BCAE0 + 0x3B, s1->unk2, v1[2], f);
    arg0->unk34 = arg0->unk34 + 1;
    if (arg0->unk34 >= s1->unk4) {
        arg0->unk34 = 0;
        arg0->unk35 = 0;
        arg0->unk30 = (func_80241378_Data *)v1;
    }
end:
    if (arg0->unkC->unk6C != 0) {
        func_800058DC(arg0, func_802415B8);
    }
}


extern void func_80005700(s32 arg0, s32 arg1);

void func_802415B8(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

void func_80241640(s32 arg0, s32 arg1);
extern struct func_8024175C_Struct D_801BBBF0;
struct func_8024175C_Struct {
    u8 pad[0xF26];
    s8 unkF26;
};

extern u8 D_80248DDC[];

typedef struct func_802415D8_Struct {
    u8 pad[0xF26];
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 pad2[0x3];
    s8 unkF2C;
    s8 unkF2D;
    s8 unkF2E;
} func_802415D8_Struct;

void func_802415D8(s32 arg0, s32 arg1)
{
  func_802415D8_Struct *g;
  g = (func_802415D8_Struct *) (&D_801BBBF0);
 g->unkF26 = 0x40; g->unkF28 = -0xF;
  g->unkF27 = 0x40;
  g->unkF2C = -0x40;
  g->unkF2D = -0x40;
  g->unkF2E = -0xF;
 func_80241304(arg0, (s32) D_80248DDC); func_800058DC(arg0, &func_80241640);
}


void func_80241640(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_80248E3C[];

typedef struct func_8024164C_Struct {
    u8 pad[0xF26];
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 pad2[0x3];
    s8 unkF2C;
    s8 unkF2D;
    s8 unkF2E;
} func_8024164C_Struct;

void func_8024164C(s32 arg0, s32 arg1)
{
  func_8024164C_Struct *g;
  g = (func_8024164C_Struct *) (&D_801BBBF0);
 g->unkF26 = 0x40; g->unkF28 = -0x1A;
  g->unkF27 = 0x40;
  g->unkF2C = -0x40;
  g->unkF2D = -0x40;
  g->unkF2E = -0x1A;
 func_80241304(arg0, (s32) D_80248E3C); func_800058DC(arg0, &func_80241640);
}


extern u8 D_80248E54[];

typedef struct func_802416B4_Struct {
    u8 pad[0xF26];
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 pad2[0x3];
    s8 unkF2C;
    s8 unkF2D;
    s8 unkF2E;
} func_802416B4_Struct;

void func_802416B4(s32 arg0, s32 arg1)
{
  func_802416B4_Struct *g;
  g = (func_802416B4_Struct *) (&D_801BBBF0);
 g->unkF26 = 0x40; g->unkF28 = -0x1A;
  g->unkF27 = 0x40;
  g->unkF2C = -0x40;
  g->unkF2D = -0x40;
  g->unkF2E = -0x1A;
 func_80241304(arg0, (s32) D_80248E54); func_800058DC(arg0, &func_80241640);
}

void func_8024175C(s32 arg0, s32 arg1);

void func_8024171C(s32 arg0, s32 arg1) {
    ((u8 *)&D_801BBBF0)[0xF26] = 0x10;
    ((u8 *)&D_801BBBF0)[0xF27] = 0;
    ((u8 *)&D_801BBBF0)[0xF28] = 0;
    func_800058DC((void *)arg0, (void *)func_8024175C);
}




void func_8024175C(s32 arg0, s32 arg1) {
    D_801BBBF0.unkF26 = D_801BBBF0.unkF26 + 4;
    if (D_801BBBF0.unkF26 >= 0x70) {
        D_801BBBF0.unkF26 = 0x10;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80241010/_pad_16.s")

