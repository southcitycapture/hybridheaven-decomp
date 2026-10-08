#include "common.h"


typedef struct func_80127D70_StructB {
    u8 pad0[0x24];
    s32 unk24;
} func_80127D70_StructB;

typedef struct func_80127D70_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    func_80127D70_StructB *unk30;
} func_80127D70_StructA;

typedef struct func_80127D70_StructD {
    u8 pad0[0x30];
    s32 unk30;
} func_80127D70_StructD;

typedef struct func_80127D70_StructC {
    u8 pad0[0x30];
    func_80127D70_StructD *unk30;
} func_80127D70_StructC;

typedef struct func_80127D70_StructArg {
    u8 pad0[0x24];
    func_80127D70_StructA *unk24;
    u8 pad1[0x68];
    u8 unk90;
} func_80127D70_StructArg;

extern void func_800058DC(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
extern s32 func_8012F41C(void *, s32, s32, s32, s32);
extern void func_80127E3C(void);

void func_80127D70(func_80127D70_StructArg *arg0, func_80127D70_StructC **arg1) {
    arg0->unk90 = 0xF8;
    func_8012C89C(arg0, 0, 3, 1);
    func_8012D814(arg0, 1, 4, 0x3F800000, 2);
    arg0->unk24->unk30->unk24 = 0x60012;
    (*arg1)->unk30->unk30 = func_8012F41C(arg0, 0xFF, 0xFF, 0xFF, 0x50) | 0x40000000 | 0x20000000;
    arg0->unk24->unk24 = 0x80000300;
    func_800058DC(arg0, func_80127E3C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80127E3C.s")


typedef struct func_80127F78_Struct {
    u8 pad0[0x24];
    func_80127D70_StructA *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
} func_80127F78_Struct;

extern s32 D_8017B3E0;
extern void func_80128028(void);

void func_80127F78(func_80127F78_Struct *arg0, func_80127D70_StructC **arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        func_8012C89C(arg0, 0, 3, 2);
        arg0->unk2C |= 0x20;
        func_8012D814(arg0, 1, 4, 0x3FB33333, 2);
        arg0->unk24->unk30->unk24 = 0x60100;
        (*arg1)->unk30->unk30 = (s32) &D_8017B3E0 | 0x40000000;
        func_800058DC(arg0, func_80128028);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80128028.s")


typedef struct func_801280D4_StructQ {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x23];
    u8 unk4B;
} func_801280D4_StructQ;

typedef struct func_801280D4_StructP {
    u8 pad0[0x30];
    func_801280D4_StructQ *unk30;
} func_801280D4_StructP;

typedef struct func_801280D4_StructS {
    u8 pad0[0x30];
    void *unk30;
    u8 pad1[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_801280D4_StructS;

typedef struct func_801280D4_StructR {
    u8 pad0[0x30];
    func_801280D4_StructS *unk30;
} func_801280D4_StructR;

typedef struct func_801280D4_Arg0 {
    u8 pad0[0x24];
    func_801280D4_StructP *unk24;
    u8 pad1[0x14];
    u16 unk3C;
} func_801280D4_Arg0;

extern s8 func_8012C6B4(s32);
extern void func_80128208(void);
extern u8 D_8017B4F8[];

void func_801280D4(func_801280D4_Arg0 *arg0, func_801280D4_StructR **arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8012C89C(arg0, 0, 3, 2);
        func_8012D814(arg0, 1, 4, 0x3F800000, 2);
        arg0->unk24->unk30->unk24 = 0x60300;
        (*arg1)->unk30->unk30 = D_8017B4F8;
        arg0->unk24->unk30->unk4B = 0xFF;
        (*arg1)->unk30->unk48 = func_8012C6B4(0x1F) + 0xE0;
        (*arg1)->unk30->unk49 = func_8012C6B4(0x1F) + 0xE0;
        (*arg1)->unk30->unk4A = func_8012C6B4(0x1F);
        (*arg1)->unk30->unk4C = func_8012C6B4(0x1F) + 0xE0;
        (*arg1)->unk30->unk4D = func_8012C6B4(0x1F);
        (*arg1)->unk30->unk4E = func_8012C6B4(0x1F);
        func_800058DC(arg0, func_80128208);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80128208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_8012823C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_801283AC.s")


typedef struct func_80128630_StructB {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x4B - 0x28];
    u8 unk4B;
} func_80128630_StructB;

typedef struct func_80128630_StructA {
    u8 pad0[0x30];
    func_80128630_StructB *unk30;
} func_80128630_StructA;

typedef struct func_80128630_StructD {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad1[0x30 - 0x20];
    s32 unk30;
} func_80128630_StructD;

typedef struct func_80128630_StructC {
    u8 pad0[0x30];
    func_80128630_StructD *unk30;
} func_80128630_StructC;

typedef struct func_80128630_StructArg {
    u8 pad0[0x24];
    func_80128630_StructA *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u8 pad2[0x3C - 0x30];
    u16 unk3C;
    u8 pad3[0x90 - 0x3E];
    u8 unk90;
    u8 pad4[0x94 - 0x91];
    f32 unk94;
} func_80128630_StructArg;

extern s32 func_8000C3B0(void *);
extern void func_8012D844(void *, s32, s32);
extern void func_80128714(void);

void func_80128630(func_80128630_StructArg *arg0, func_80128630_StructC **arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        arg0->unk90 = 0xF8;
        func_8012C89C(arg0, 0, 3, 2);
        func_8012D844(arg0, 1, 0);
        arg0->unk24->unk30->unk24 = 0x6000F;
        (*arg1)->unk30->unk30 = func_8000C3B0(arg0->unk24);
        arg0->unk24->unk30->unk4B = 0x80;
        arg0->unk2C |= 0x20;
        (*arg1)->unk30->unk18 = 0.0f;
        (*arg1)->unk30->unk1C = 0.0f;
        arg0->unk94 = (f32) (f64) arg0->unk94;
        func_800058DC(arg0, (void *) func_80128714);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80128714.s")


typedef struct func_8012899C_StructZ {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x30 - 0x24];
    s32 unk30;
} func_8012899C_StructZ;

typedef struct func_8012899C_StructW {
    u8 pad0[0x30];
    func_8012899C_StructZ *unk30;
} func_8012899C_StructW;

typedef struct func_8012899C_StructY {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x20];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_8012899C_StructY;

typedef struct func_8012899C_StructX {
    u8 pad0[0x30];
    func_8012899C_StructY *unk30;
} func_8012899C_StructX;

typedef struct func_8012899C_Arg0 {
    u8 pad0[0x24];
    func_8012899C_StructX *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0x90 - 0x30];
    u8 unk90;
} func_8012899C_Arg0;

extern void func_80128A90(void);

void func_8012899C(func_8012899C_Arg0 *arg0, func_8012899C_StructW **arg1) {
    arg0->unk90 = 0xF8;
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D844(arg0, 1, 0);
    arg0->unk24->unk30->unk24 = 0x6000F;
    (*arg1)->unk30->unk30 = func_8000C3B0(arg0->unk24);
    arg0->unk24->unk30->unk4B = 0x80;
    arg0->unk24->unk30->unk48 = 0;
    arg0->unk24->unk30->unk49 = 0;
    arg0->unk24->unk30->unk4A = 0;
    arg0->unk2C = arg0->unk2C | 0x20;
    (*arg1)->unk30->unk18 = 0.0f;
    (*arg1)->unk30->unk1C = 0.0f;
    (*arg1)->unk30->unk20 = 0.0f;
    func_800058DC(arg0, func_80128A90);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80128A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80128D1C.s")


extern void func_80005700(void *);
extern f64 D_8018CD20;
extern f32 D_8018CD28;

typedef struct func_80128E0C_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
} func_80128E0C_StructB;

typedef struct func_80128E0C_StructA {
    u8 pad0[0x30];
    func_80128E0C_StructB *unk30;
} func_80128E0C_StructA;

typedef struct func_80128E0C_Arg0 {
    u8 pad0[0x24];
    func_80128E0C_StructA *unk24;
} func_80128E0C_Arg0;

void func_80128E0C(func_80128E0C_Arg0 *arg0, func_80128E0C_StructA **arg1) {
    s32 var_v1;
    f64 temp_f0;
    func_80128E0C_StructB *temp_a2;
    func_80128E0C_StructB *temp_v0;

    temp_f0 = D_8018CD20;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + temp_f0);
    (*arg1)->unk30->unk1C = D_8018CD28;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 + temp_f0);
    temp_a2 = arg0->unk24->unk30;
    var_v1 = temp_a2->unk4B;
    if (var_v1 != 0) {
        temp_a2->unk4B = (u8) (var_v1 - 0xF);
        var_v1 = arg0->unk24->unk30->unk4B;
    }
    if (var_v1 < 0xF) {
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80128EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80129040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_801293C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80129554.s")

