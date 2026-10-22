#include "common.h"

extern f32 D_8018CC40;
extern f32 D_8018CD28;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_8018CC28;
extern f64 D_8018CC30;
extern f64 D_8018CC38;
extern f64 D_8018CC48;
extern f64 D_8018CC98;
extern f64 D_8018CCA0;
extern f64 D_8018CCA8;
extern f64 D_8018CCB0;
extern f64 D_8018CCB8;
extern f64 D_8018CCC0;
extern f64 D_8018CCC8;
extern f64 D_8018CCD0;
extern f64 D_8018CCD8;
extern f64 D_8018CCE0;
extern f64 D_8018CCE8;
extern f64 D_8018CCF0;
extern f64 D_8018CCF8;
extern f64 D_8018CD00;
extern f64 D_8018CD08;
extern f64 D_8018CD10;
extern f64 D_8018CD18;
extern f64 D_8018CD20;
extern s32 D_8017B3E0;
extern s32 func_80005700();
extern s32 func_8000C3B0(void *);
extern s32 func_8012F41C(void *, s32, s32, s32, s32);
extern s8 func_8012C6B4(s32);
extern u8 D_8008DA88[];
extern u8 D_8017B4F8[];
extern u8 D_8017B558[];
extern u8 func_801283AC[];
extern void func_800058DC(void *, void *);
extern void func_80127E3C();
extern void func_80128028();
extern void func_80128208();
extern void func_80128714();
extern void func_80128A90();
extern void func_80128E0C();
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
extern void func_8012D844(void *, s32, s32);
extern void func_8013A334(s32 *, void *, void *, u16);


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


void func_80127D70(func_80127D70_StructArg *arg0, func_80127D70_StructC **arg1) {
    arg0->unk90 = 0xF8;
    func_8012C89C(arg0, 0, 3, 1);
    func_8012D814(arg0, 1, 4, 0x3F800000, 2);
    arg0->unk24->unk30->unk24 = 0x60012;
    (*arg1)->unk30->unk30 = func_8012F41C(arg0, 0xFF, 0xFF, 0xFF, 0x50) | 0x40000000 | 0x20000000;
    arg0->unk24->unk24 = 0x80000300;
    func_800058DC(arg0, func_80127E3C);
}


void func_80127E3C(func_80127D70_StructArg *arg0, s32 arg1) {
    arg0->unk90 = (u32)((f64)arg0->unk90 - D_8018CC28);
    func_8012F41C(arg0, 0xFF, 0xFF, 0xFF, arg0->unk90);
    if ((f64)arg0->unk90 < D_8018CC30) {
        func_80005700();
    }
}


typedef struct func_80127F78_Struct {
    u8 pad0[0x24];
    func_80127D70_StructA *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
} func_80127F78_Struct;


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


typedef struct func_80128028_StructArg {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x5C];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
} func_80128028_StructArg;

typedef struct func_80128028_StructB {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80128028_StructB;

typedef struct func_80128028_StructA {
    u8 pad0[0x30];
    func_80128028_StructB *unk30;
} func_80128028_StructA;

void func_80128028(func_80128028_StructArg *arg0, func_80128028_StructA **arg1) {
    func_80128028_StructB *temp_v0;

    if ((arg0->unk30 & 0x20) || (temp_v0 = (*arg1)->unk30, ((s32) temp_v0->unk4B < (s32) arg0->unk93))) {
        func_80005700(arg0);
        return;
    }
    temp_v0->unk48 = (u8) (temp_v0->unk48 - arg0->unk90);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk49 = (u8) (temp_v0->unk49 - arg0->unk91);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4A = (u8) (temp_v0->unk4A - arg0->unk92);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - arg0->unk93);
}


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


typedef struct func_80128208_Struct {
    u8 pad0[0x30];
    s32 unk30;
} func_80128208_Struct;

void func_80128208(func_80128208_Struct *arg0, s32 arg1) {
    if (arg0->unk30 & 0x20) {
        func_80005700(arg0);
    }
}


typedef struct func_8012823C_Struct30 {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    u8 pad20[0x4];
    u32 w24;
    u8 pad28[0x8];
    s32 w30;
    u8 pad34[0x14];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
} func_8012823C_Struct30;

typedef struct func_8012823C_Struct24 {
    u8 pad0[0x30];
    func_8012823C_Struct30 *p30;
} func_8012823C_Struct24;

typedef struct func_8012823C_Struct {
    u8 pad0[0x24];
    func_8012823C_Struct24 *p24;
    u8 pad28[4];
    s32 flags;
    u8 pad30[0x10];
    f32 f40;
    f32 f44;
    f32 f48;
    u8 pad4C[0x44];
    u8 b90;
} func_8012823C_Struct;


void func_8012823C(func_8012823C_Struct *arg0, func_8012823C_Struct24 **arg1) {
    arg0->b90 = 0xF8;
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D844(arg0, 1, 0);
    arg0->p24->p30->w24 = 0x6000F;
    (*arg1)->p30->w30 = func_8000C3B0(arg0->p24);
    arg0->p24->p30->b4B = 0x80;
    arg0->p24->p30->b48 = 0xFF;
    arg0->p24->p30->b49 = 0;
    arg0->p24->p30->b4A = 0xFF;
    arg0->flags |= 0x20;
    arg0->f40 = ((f64)(f32)func_8012C6B4(0xC8) - 100.0) / D_8018CC38;
    arg0->f44 = D_8018CC40;
    arg0->f48 = ((f64)(f32)func_8012C6B4(0xC8) - 100.0) / D_8018CC48;
    (*arg1)->p30->f18 = 0.0f;
    (*arg1)->p30->f1C = 0.0f;
    func_800058DC(arg0, func_801283AC);
}

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


typedef struct func_80128714_StructE {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
} func_80128714_StructE;
typedef struct func_80128714_StructF {
    u8 pad0[0x30];
    func_80128714_StructE *unk30;
} func_80128714_StructF;
typedef struct func_80128714_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94;
} func_80128714_Struct;

void func_80128714(func_80128714_Struct *arg0, func_80128714_StructF **arg1) {
    f64 v;

    arg0->unk90 = (u32)((f64)(u32)arg0->unk90 - D_8018CC98);
    (*arg1)->unk30->unk4B = arg0->unk90;
    v = arg0->unk94;
    if (v < 1.0) {
        arg0->unk94 = v + D_8018CCA0;
    }
    arg0->unk92 = arg0->unk92 + 5;
    if (arg0->unk92 < 0x169) {
        arg0->unk92 = arg0->unk92 - 0x168;
    }
    (*arg1)->unk30->unk18 += arg0->unk94 * (D_8018CCB8 + D_8018CCB0 * func_8001EAD0((s16)(s32)(arg0->unk92 / D_8018CCA8)));
    (*arg1)->unk30->unk1C += arg0->unk94 * (D_8018CCD0 + D_8018CCC8 * func_8001EB64((s16)(s32)(arg0->unk92 / D_8018CCC0)));
    if ((f64)(u32)arg0->unk90 < D_8018CCD8) {
        func_80005700(arg0);
    }
}


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


typedef struct func_80128A90_Struct30 {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    u8 pad20[0x2B];
    u8 b4B;
} func_80128A90_Struct30;
typedef struct func_80128A90_StructB {
    u8 pad0[0x30];
    func_80128A90_Struct30 *p30;
} func_80128A90_StructB;
typedef struct func_80128A90_StructArg {
    u8 pad0[0x90];
    u8 b90;
    u8 pad91;
    s16 s92;
    f32 f94;
} func_80128A90_StructArg;

void func_80128A90(func_80128A90_StructArg *arg0, func_80128A90_StructB **arg1) {
    arg0->b90 -= D_8018CCE0;
    (*arg1)->p30->b4B = arg0->b90;
    if (arg0->f94 < D_8018CCE8) {
        arg0->f94 = arg0->f94 + D_8018CCF0;
    }
    arg0->s92 = arg0->s92 + 0x14;
    if (arg0->s92 < 0x169) {
        arg0->s92 = arg0->s92 - 0x168;
    }
    (*arg1)->p30->f18 += arg0->f94 * (D_8018CD00 + 0.5 * func_8001EAD0((s16)(arg0->s92 / D_8018CCF8)));
    (*arg1)->p30->f1C += arg0->f94 * (D_8018CD10 + 0.5 * func_8001EB64((s16)(arg0->s92 / D_8018CD08)));
    if (arg0->b90 < D_8018CD18) {
        func_80005700(arg0);
    }
}


/* unprototyped, compatible with context.h prototype; needed in-file before the later definition */


typedef struct func_80128D1C_StructO {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
} func_80128D1C_StructO;

typedef struct func_80128D1C_StructP {
    u8 pad0[0x30];
    func_80128D1C_StructO *unk30;
} func_80128D1C_StructP;

typedef struct func_80128D1C_StructB {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80128D1C_StructB;

typedef struct func_80128D1C_StructA {
    u8 pad0[0x30];
    func_80128D1C_StructB *unk30;
} func_80128D1C_StructA;

typedef struct func_80128D1C_Arg0 {
    u8 pad0[0x24];
    func_80128D1C_StructA *unk24;
    u8 pad1[0x14];
    u16 unk3C;
    u8 pad2[0x52];
    u8 unk90;
} func_80128D1C_Arg0;

void func_80128D1C(func_80128D1C_Arg0 *arg0, func_80128D1C_StructP **arg1) {
    s32 temp;
    func_80128D1C_StructO *obj;

    temp = arg0->unk3C;
    arg0->unk3C = temp - 1;
    if (temp == 0) {
        func_8012C89C(arg0, 0, 3, 3);
        obj = (*arg1)->unk30;
        obj->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) D_8017B558 | 0x40000000;
        arg0->unk24->unk30->unk4B = 0x80;
        arg0->unk24->unk30->unk48 = 0xFF;
        arg0->unk24->unk30->unk49 = 0x50;
        arg0->unk24->unk30->unk4A = 0;
        (*arg1)->unk30->unk18 = 0.0f;
        (*arg1)->unk30->unk1C = 0.0f;
        (*arg1)->unk30->unk20 = 0.0f;
        arg0->unk90 = 0x50;
        func_800058DC(arg0, func_80128E0C);
    }
}



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


typedef struct func_801293C8_S3 { u8 pad[0x48]; u8 b48, b49, b4A; } func_801293C8_S3;
typedef struct func_801293C8_S2 { u8 pad[0x30]; func_801293C8_S3 *unk30; } func_801293C8_S2;
typedef struct func_801293C8_S1 { u8 pad[0x24]; func_801293C8_S2 *unk24; u8 pad2[0x74]; f32 unk9C; } func_801293C8_S1;
typedef struct func_801293C8_G { u8 pad[0x30]; u16 unk30; u8 pad2[0xB6E]; u16 unkBA0; } func_801293C8_G;
typedef struct func_801293C8_A { u8 pad[0xC]; u16 unkC; } func_801293C8_A;
typedef struct func_801293C8_Arg { u8 pad[0x5C]; func_801293C8_A *unk5C; } func_801293C8_Arg;

extern func_801293C8_S1 *func_8012A0F0(void *, s32, s32, s32, f32, s32);
extern func_801293C8_G D_801BBBF0;

void func_801293C8(func_801293C8_Arg *arg0, f32 arg1) {
    func_801293C8_A *a2;
    func_801293C8_S1 *r;
    f32 sp3C;
    s32 v;
    u8 pad[8];
    s32 sp24[3];

    a2 = arg0->unk5C;
    if (arg1 != 0.0f) { v = 1; } else { v = 7; }
    if (!(D_801BBBF0.unk30 & v)) {
        D_801BBBF0.unkBA0 += 3;
        if (D_801BBBF0.unkBA0 >= a2->unkC) {
            D_801BBBF0.unkBA0 = (D_801BBBF0.unkBA0 % 3) + 1;
        }
        sp3C = ((f32)func_8012C6B4(10) + 1.0) / 10.0;
        func_8013A334(sp24, D_8008DA88, a2, D_801BBBF0.unkBA0);
        r = func_8012A0F0(arg0, sp24[0], sp24[1], sp24[2], sp3C, 7);
        if (r != NULL) {
            if (arg1 != 0.0f) {
                r->unk24->unk30->b48 = 0xFF;
                r->unk24->unk30->b49 = 0xFF;
                r->unk24->unk30->b4A = 0xFF;
                r->unk9C = arg1;
                return;
            }
            r->unk24->unk30->b48 = 0xFF;
            r->unk24->unk30->b49 = 0xFF;
            r->unk24->unk30->b4A = 0xC8;
            r->unk9C = 0.0f;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80127D70/func_80129554.s")

