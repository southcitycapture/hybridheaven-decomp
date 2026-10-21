#include "common.h"


typedef struct { s32 w[4]; } func_80007BD0_V;
typedef struct {
    s16 a, b, c, d;
    func_80007BD0_V v;
    f32 f[16];
} func_80007BD0_In;
typedef struct {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    func_80007BD0_In *p;
} func_80007BD0_Struct;

extern s32 func_80130290();
extern s32 func_801302CC();
extern func_80007BD0_V D_800433B0;
extern func_80007BD0_V D_800433C0;

void func_80007BD0(func_80007BD0_Struct *arg0, f32 *arg1) {
    arg0->flag = 1;
    if (func_80130290() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433B0;
    } else if (func_801302CC(arg0, arg1) != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x5A;
        arg0->p->c = 0x260;
        arg0->p->d = 0x186;
        arg0->p->v = D_800433C0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = *(func_80007BD0_V *)((u8 *)&D_800433B0 - 0x10);
    }
    arg0->p->f[1] = arg1[0];
    arg0->p->f[2] = arg1[1];
    arg0->p->f[3] = arg1[2];
    arg0->p->f[4] = arg1[3];
    arg0->p->f[5] = arg1[4];
    arg0->p->f[6] = arg1[5];
    arg0->p->f[7] = arg1[6];
    arg0->p->f[8] = arg1[7];
    arg0->p->f[9] = arg1[8];
    arg0->p->f[10] = arg1[9];
    arg0->p->f[11] = arg1[10];
    arg0->p->f[12] = arg1[11];
    arg0->p->f[13] = arg1[12];
    arg0->p->f[14] = arg1[13];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/func_80007DE4.s")


typedef struct {
    f32 f[8];
    s16 h[3];
} func_800080D4_Src;

void func_800080D4(func_80007BD0_Struct *arg0, func_800080D4_Src *arg1) {
    arg0->flag = 1;
    if (func_80130290() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433B0;
    } else if (func_801302CC(arg0, arg1) != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x5A;
        arg0->p->c = 0x260;
        arg0->p->d = 0x186;
        arg0->p->v = D_800433C0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = *(func_80007BD0_V *)((u8 *)&D_800433B0 - 0x10);
    }
    arg0->p->f[1] = arg1->f[0];
    arg0->p->f[2] = arg1->f[1];
    arg0->p->f[3] = arg1->f[2];
    arg0->p->f[4] = arg1->f[3];
    arg0->p->f[5] = arg1->f[4];
    arg0->p->f[6] = arg1->f[5];
    arg0->p->f[7] = arg1->f[6];
    arg0->p->f[8] = arg1->f[7];
    ((s16 *)&arg0->p->f[9])[0] = arg1->h[0];
    ((s16 *)&arg0->p->f[9])[1] = arg1->h[1];
    ((s16 *)&arg0->p->f[9])[2] = arg1->h[2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/func_800082C4.s")


typedef struct { s32 w[4]; } func_800085A0_V;
typedef struct {
    s16 a, b, c, d;
    func_800085A0_V v;
    f32 f[16];
} func_800085A0_In;
typedef struct {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    func_800085A0_In *p;
} func_800085A0_S;

extern s32 func_80001060();
extern func_800085A0_V D_800433A0;
extern func_800085A0_V D_800433D0;

void func_800085A0(func_800085A0_S *arg0, f32 *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = D_800433A0;
    }
    arg0->p->f[0] = arg1[0];
    arg0->p->f[1] = arg1[1];
    arg0->p->f[2] = arg1[2];
    arg0->p->f[3] = arg1[3];
    arg0->p->f[4] = arg1[4];
    arg0->p->f[5] = arg1[5];
    arg0->p->f[6] = arg1[6];
    arg0->p->f[7] = arg1[7];
    arg0->p->f[8] = arg1[8];
    arg0->p->f[9] = arg1[9];
    arg0->p->f[10] = arg1[10];
    arg0->p->f[11] = arg1[11];
    arg0->p->f[12] = arg1[12];
    arg0->p->f[13] = arg1[13];
    arg0->p->f[14] = arg1[14];
    arg0->p->f[15] = arg1[15];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/func_80008754.s")


typedef struct func_80008A0C_StructB {
    s16 a, b, c, d;
    func_800085A0_V w;
    f32 f[10];
    s16 h[3];
} func_80008A0C_StructB;

typedef struct func_80008A0C_StructA {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[0x9];
    func_80008A0C_StructB *p;
} func_80008A0C_StructA;

typedef struct func_80008A0C_StructC {
    f32 f[10];
    s16 h[3];
} func_80008A0C_StructC;

void func_80008A0C(func_80008A0C_StructA *arg0, func_80008A0C_StructC *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->w = D_800433D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->w = D_800433A0;
    }
    arg0->p->f[0] = arg1->f[0];
    arg0->p->f[1] = arg1->f[1];
    arg0->p->f[2] = arg1->f[2];
    arg0->p->f[3] = arg1->f[3];
    arg0->p->f[4] = arg1->f[4];
    arg0->p->f[5] = arg1->f[5];
    arg0->p->f[6] = arg1->f[6];
    arg0->p->f[7] = arg1->f[7];
    arg0->p->f[8] = arg1->f[8];
    arg0->p->f[9] = arg1->f[9];
    arg0->p->h[0] = arg1->h[0];
    arg0->p->h[1] = arg1->h[1];
    arg0->p->h[2] = arg1->h[2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/func_80008B9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/D_8004C6F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/func_80008E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/func_80008F30.s")

