#include "common.h"

extern u8 D_801BBAE8[];
extern u8 D_801BBAEA[];
extern u8 D_801BBBF0[];

typedef struct func_8010F6E0_StructC {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    u8 pad2C[0x4];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
} func_8010F6E0_StructC;

typedef struct func_8010F6E0_StructD {
    u8 pad0[0x4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[0x8];
    f32 f18;
    f32 f1C;
    f32 f20;
} func_8010F6E0_StructD;

typedef struct func_8010F6E0_StructB {
    u8 pad0[0x22];
    u8 f22;
    u8 pad23[0xD];
    func_8010F6E0_StructD *f30;
} func_8010F6E0_StructB;

typedef struct func_8010F6E0_StructE {
    u8 pad0[0x2C];
    func_8010F6E0_StructC *f2C;
} func_8010F6E0_StructE;

typedef struct func_8010F6E0_StructA {
    u8 pad0[0x24];
    func_8010F6E0_StructE *f24;
    u8 pad28[0x68];
    f32 f90;
    f32 f94;
    f32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
} func_8010F6E0_StructA;

typedef struct func_8010F6E0_StructG {
    u8 pad0[0x54];
    void *f54;
    u8 pad58[0x8C];
    struct func_8010F6E0_StructA *fE4;
    func_8010F6E0_StructE *fE8;
    u8 padEC[0x1B0];
    f32 f29C;
    f32 f2A0;
    u8 pad2A4[0x8];
    u8 f2AC;
    u8 pad2AD[0x8];
    u8 f2B5;
} func_8010F6E0_StructG;

typedef struct func_8010F6E0_StructArg1 {
    u8 pad0[4];
    func_8010F6E0_StructB *f4;
    func_8010F6E0_StructB *f8;
} func_8010F6E0_StructArg1;

extern u8 D_80163870;
extern u8 D_80163874;
extern u8 D_80163878;
extern u8 D_8016387C;
extern u8 D_80163880;
extern f32 D_80163884;
extern u8 D_801638EC[];
extern u8 D_801638FC[];
extern f32 D_80187420;
extern f32 D_80187424;
extern void func_800058DC();
extern void func_80005E44();
extern void func_80006214();
extern void func_8001F74C();
extern void func_8011A724();
extern void func_8011A7FC();
extern void func_8011AA0C();
extern void func_8012C89C();
void func_8010FA10(void *arg0, s32 arg1);
extern void func_8010FABC();

#define G ((func_8010F6E0_StructG *)D_801BBBF0)

void func_8010F6E0(func_8010F6E0_StructA *arg0, func_8010F6E0_StructArg1 *arg1) {
    extern void func_80119F9C();
    D_8016387C = 1;
    D_80163880 = 0;
    if (G->f2AC == 1) {
        D_80163870 = D_80163874 = D_80163878 = 1;
        if (G->f2AC == 1) {
            G->f2AC = 0;
        }
    } else {
        D_80163870 = D_80163874 = D_80163878 = 0;
    }
    D_80163884 = 0.0f;
    func_80005E44(arg0, D_801638EC);
    func_80005E44(arg0, D_801638FC);
    func_80005E44(arg0, D_801638FC);
    func_80006214(arg0);
    arg1->f4->f22 = 0;
    arg1->f8->f22 = 0;
    G->f54 = arg0;
    G->fE4 = G->f54;
    G->fE8 = G->fE4->f24;
    func_8011A724(0);
    arg0->f9C = G->fE8->f2C->f3C;
    arg0->fA0 = G->fE8->f2C->f40;
    arg0->fA4 = G->fE8->f2C->f44;
    arg0->f90 = G->fE8->f2C->f30;
    arg0->f94 = G->fE8->f2C->f34;
    arg0->f98 = G->fE8->f2C->f38;
    func_80119F9C(D_801BBAE8, D_801BBAEA);
    func_8012C89C(arg0, 1, 0xCA, 1);
    arg1->f4->f30->f20 = D_80187420;
    arg1->f4->f30->f18 = arg1->f4->f30->f1C = arg1->f4->f30->f20;
    arg1->f4->f30->f4 = G->fE8->f2C->f3C;
    arg1->f4->f30->f8 = G->fE8->f2C->f40;
    arg1->f4->f30->fC = G->fE8->f2C->f44;
    func_8012C89C(arg0, 2, 0xCA, 2);
    arg1->f8->f30->f20 = D_80187424;
    arg1->f8->f30->f18 = arg1->f8->f30->f1C = arg1->f8->f30->f20;
    arg1->f8->f30->f4 = G->fE8->f2C->f3C;
    arg1->f8->f30->f8 = G->fE8->f2C->f40;
    arg1->f8->f30->fC = G->fE8->f2C->f44;
    G->fE8->f2C->f24 = G->f29C;
    G->fE8->f2C->f28 = G->f2A0;
    if (G->f2B5 == 1) {
        func_8011A7FC();
        func_800058DC(arg0, func_8010FABC);
    } else if (G->f2B5 == 2) {
        func_8011AA0C(arg0, func_8010FA10, func_8010FABC);
    } else {
        func_800058DC(arg0, func_8010FABC);
    }
    func_8001F74C(arg0);
}


extern void func_80119F9C(void *, void *, void *);
extern void func_8011AA54(void *, void *);

void func_8010FA10(void *arg0, s32 arg1) {
    func_8011AA54(arg0, func_8010FABC);
    *(f32 *)((u8 *)arg0 + 0x9C) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x3C);
    *(f32 *)((u8 *)arg0 + 0xA0) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x40);
    *(f32 *)((u8 *)arg0 + 0xA4) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x44);
    *(f32 *)((u8 *)arg0 + 0x90) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x30);
    *(f32 *)((u8 *)arg0 + 0x94) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x34);
    *(f32 *)((u8 *)arg0 + 0x98) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x38);
    func_80119F9C(D_801BBAE8, D_801BBAEA, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010F6E0/func_8010FABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010F6E0/func_801130D0.s")

