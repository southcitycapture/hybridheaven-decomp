#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC3D8[];
typedef struct func_8035CDA8_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035CDA8_Leaf;
typedef struct func_8035CDA8_Mid {
    u8 pad0[0x2C];
    func_8035CDA8_Leaf *unk2C;
} func_8035CDA8_Mid;
typedef struct func_8035CDA8_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035CDA8_Copy;
typedef struct func_8035CDA8_Sub {
    u8 pad0[0x1C];
    func_8035CDA8_Copy unk1C;
} func_8035CDA8_Sub;
typedef struct func_8035CDA8_Obj {
    u8 pad0[0x24];
    func_8035CDA8_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    func_8035CDA8_Sub *unk5C;
} func_8035CDA8_Obj;
typedef struct func_8035CDA8_Globals {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    func_8035CDA8_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035CDA8_Obj *unkEC;
    u8 padF0[0x47C - 0xF0];
    u32 b47C : 9;
    u32 M : 2;
    u32 r47C : 21;
    u8 pad480[0x745 - 0x480];
    u8 unk745;
    u8 pad746[0x818 - 0x746];
    u32 b818 : 9;
    u32 N : 2;
    u32 r818 : 21;
    u8 pad81C[0xB98 - 0x81C];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8035CDA8_Globals;
#define GL ((func_8035CDA8_Globals *)D_801BBBF0)


typedef struct func_8035DB6C_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8035DB6C_StructB;
typedef struct func_8035DB6C_StructA {
    u8 pad0[0x2C];
    func_8035DB6C_StructB *unk2C;
} func_8035DB6C_StructA;
typedef struct func_8035DB6C_StructO {
    u8 pad0[0x24];
    func_8035DB6C_StructA *unk24;
} func_8035DB6C_StructO;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32, f32, void *);
extern s32 func_80108480(f32, f32, f32, f32, f32, f32);

void func_8035DB6C(func_8035DB6C_StructO *arg0, s16 arg1, f32 arg2, f32 arg3, u8 arg4) {
    f32 pad1[3];
    f32 sp48;
    f32 pad2[2];
    f32 sp3C;
    f32 pad3;
    f32 sp34;
    f32 sp30;
    f32 x;
    f32 z;
    f64 d;
    f64 e;
    f64 d2;
    f64 e2;
    func_8035DB6C_StructO *o;
    func_8035DB6C_StructB *s0;
    func_8035DB6C_StructB *s1;

    if (arg0 != (func_8035DB6C_StructO *)GL->unkDC) {
        o = (func_8035DB6C_StructO *)GL->unkDC;
    } else {
        o = (func_8035DB6C_StructO *)GL->unkEC;
    }
    s0 = arg0->unk24->unk2C;
    s1 = o->unk24->unk2C;
    sp48 = func_8002FC20(arg2 * arg2 + arg3 * arg3, arg3, D_801BBBF0);
    sp34 = func_8001EB64(arg1);
    sp30 = func_8001EAD0(arg1);
    if (arg4 != 0 && *(f32 *)(D_801BC3D8 + 0x3A8) + 0.5 < sp48) {
        x = ((*(f32 *)(D_801BC3D8 + 0x3A8) + 0.5) * arg2) / sp48;
        z = ((*(f32 *)(D_801BC3D8 + 0x3A8) + 0.5) * arg3) / sp48;
    } else if (arg4 != 0 && sp48 < *(f32 *)(D_801BC3D8 + 0x3A8) - 0.5) {
        x = ((*(f32 *)(D_801BC3D8 + 0x3A8) - 0.5) * arg2) / sp48;
        z = ((*(f32 *)(D_801BC3D8 + 0x3A8) - 0.5) * arg3) / sp48;
    } else {
        x = arg2;
        z = arg3;
    }
    sp3C = s1->unk4 + z * sp30 + x * sp34;
    arg2 = s1->unkC + z * sp34 - x * sp30;
    if (func_80108480(s0->unk4, s0->unk8, s0->unkC, sp3C, s0->unk8, arg2) == 0) {
        s0->unk4 = sp3C;
        s0->unkC = arg2;
    } else {
        sp3C = s0->unk4 - (sp3C - s1->unk4);
        arg2 = s0->unkC - (arg2 - s1->unkC);
        if (func_80108480(s1->unk4, s1->unk8, s1->unkC, sp3C, s1->unk8, arg2) == 0) {
            s1->unk4 = sp3C;
            s1->unkC = arg2;
        }
    }
}
