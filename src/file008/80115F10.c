#include "common.h"


typedef struct func_80115F10_StructC {
    /* 0x00 */ u8 pad0[0x4];
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0C */ f32 z;
    /* 0x10 */ u8 pad10[0x14];
    /* 0x24 */ f32 f24;
    /* 0x28 */ f32 f28;
    /* 0x2C */ u8 pad2C[0x4];
    /* 0x30 */ f32 f30;
    /* 0x34 */ f32 f34;
    /* 0x38 */ f32 f38;
    /* 0x3C */ f32 f3C;
    /* 0x40 */ f32 f40;
    /* 0x44 */ f32 f44;
} func_80115F10_StructC;

typedef struct func_80115F10_StructB {
    /* 0x00 */ u8 pad0[0x24];
    /* 0x24 */ struct func_80115F10_StructB *p24;
    /* 0x28 */ u8 pad28[4];
    /* 0x2C */ func_80115F10_StructC *p2C;
} func_80115F10_StructB;

typedef struct func_80115F10_StructA {
    /* 0x000 */ u8 pad0[0x54];
    /* 0x054 */ func_80115F10_StructB *unk54;
    /* 0x058 */ u8 pad58[0x88];
    /* 0x0E0 */ func_80115F10_StructB *unkE0;
    /* 0x0E4 */ func_80115F10_StructB *unkE4;
    /* 0x0E8 */ func_80115F10_StructB *unkE8;
    /* 0x0EC */ u8 padEC[4];
    /* 0x0F0 */ s32 unkF0;
    /* 0x0F4 */ u8 padF4;
    /* 0x0F5 */ u8 unkF5;
    /* 0x0F6 */ u8 padF6[0x1A3];
    /* 0x299 */ u8 unk299;
    /* 0x29A */ u8 pad29A[2];
    /* 0x29C */ f32 unk29C;
    /* 0x2A0 */ f32 unk2A0;
    /* 0x2A4 */ u8 pad2A4[0x1A4];
    /* 0x448 */ func_80115F10_StructB **unk448;
    /* 0x44C */ u8 pad44C[0xBE5];
    /* 0x1031 */ u8 unk1031;
} func_80115F10_StructA;

extern void func_800058DC(func_80115F10_StructB *, void *);
extern void func_80005E44(func_80115F10_StructB *, void *);
extern void func_8011A7FC(void);
extern void func_80123270(f32 *, f32 *, f32 *, s16 *);
extern void func_8012329C(f32 *, f32 *, f32 *, s16 *);
extern void func_80123360(f32, f32, f32, f32, f32, f32, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *, void *);
extern f32 D_80163C20;
extern f32 D_80163C24;
extern f32 D_80163C28;
extern u8 D_80163C78[];
extern u8 D_801BBB40[];
extern f32 D_801BBB5C;
extern f32 D_801BBB60;
extern f32 D_801BBB64;
extern f32 D_801BBB68;
extern f32 D_801BBB6C;
extern f32 D_801BBB70;
extern func_80115F10_StructA D_801BBBF0;
extern void func_80116150();
extern void func_801166C8();

void func_80115F10(func_80115F10_StructB *arg0, s32 arg1) {
    s16 sp56;
    func_80115F10_StructC *temp_v0;

    func_80005E44(arg0, D_80163C78);
    D_801BBBF0.unk54 = arg0;
    D_801BBBF0.unkE4 = D_801BBBF0.unk54;
    D_801BBBF0.unkE8 = D_801BBBF0.unkE4->p24;
    if ((D_801BBBF0.unkE0 != NULL) && (D_801BBBF0.unkF0 != 0) && (D_801BBBF0.unkF5 != 0)) {
        D_801BBB5C = D_801BBBF0.unkE0->p2C->x;
        D_801BBB60 = D_801BBBF0.unkE0->p2C->y;
        D_801BBB64 = D_801BBBF0.unkE0->p2C->z;
        D_801BBB68 = (*D_801BBBF0.unk448)->p24->p2C->x;
        D_801BBB6C = (*D_801BBBF0.unk448)->p24->p2C->y;
        D_801BBB70 = (*D_801BBBF0.unk448)->p24->p2C->z;
    } else {
        func_80123270(&D_801BBB5C, &D_801BBB60, &D_801BBB64, &sp56);
        func_8012329C(&D_801BBB68, &D_801BBB6C, &D_801BBB70, &sp56);
    }
    func_80123360(D_801BBB5C, D_801BBB60, D_801BBB64, D_801BBB68, D_801BBB6C, D_801BBB70, &D_801BBBF0.unkE8->p2C->f30, &D_801BBBF0.unkE8->p2C->f34, &D_801BBBF0.unkE8->p2C->f38, &D_801BBBF0.unkE8->p2C->f3C, &D_801BBBF0.unkE8->p2C->f40, &D_801BBBF0.unkE8->p2C->f44, D_801BBB40);
    D_80163C20 = D_801BBBF0.unkE8->p2C->f3C;
    D_80163C24 = D_801BBBF0.unkE8->p2C->f40;
    D_80163C28 = D_801BBBF0.unkE8->p2C->f44;
    func_8011A7FC();
    D_801BBBF0.unk299 = 0;
    D_801BBBF0.unkE8->p2C->f24 = D_801BBBF0.unk29C;
    D_801BBBF0.unkE8->p2C->f28 = D_801BBBF0.unk2A0;
    if (D_801BBBF0.unk1031 == 0) {
        func_800058DC(arg0, func_80116150);
        return;
    }
    func_800058DC(arg0, func_801166C8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115F10/D_80188A10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115F10/func_80116150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115F10/func_801166C8.s")

