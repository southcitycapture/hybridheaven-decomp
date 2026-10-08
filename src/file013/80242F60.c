#include "common.h"


typedef struct func_80242F60_Struct {
    u8 pad0[6];
    u16 unk6;
} func_80242F60_Struct;

void func_80242F60(func_80242F60_Struct *arg0) {
    arg0->unk6 = (u16) (arg0->unk6 | 0x10);
}


void func_80242F70(u8 *arg0) {
    *(u16 *) (arg0 + 0x6) = *(u16 *) (arg0 + 0x6) & 0xFFEF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80242F80.s")


typedef struct func_80242FD0_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80242FD0_StructB;

typedef struct func_80242FD0_StructC {
    u8 pad0[0x2C];
    func_80242FD0_StructB *unk2C;
} func_80242FD0_StructC;

typedef struct func_80242FD0_StructA {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
} func_80242FD0_StructA;

extern func_80242FD0_StructC *D_801BBCD0;

s32 func_80242FD0(func_80242FD0_StructA *arg0) {
    func_80242FD0_StructB *temp_v0;
    func_80242FD0_StructB *temp_v1;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = D_801BBCD0->unk2C;
    temp_v1 = arg0->unk24->unk2C;
    temp_fv0 = temp_v0->unk4;
    temp_fv1 = temp_v1->unk4;
    if (temp_fv0 < temp_fv1) {
        var_fa0 = -(temp_fv0 - temp_fv1);
    } else {
        var_fa0 = temp_fv0 - temp_fv1;
    }
    if (var_fa0 < 50.0f) {
        temp_fv0 = temp_v0->unkC;
        temp_fv1 = temp_v1->unkC;
        if (temp_fv0 < temp_fv1) {
            var_fa0_2 = -(temp_fv0 - temp_fv1);
        } else {
            var_fa0_2 = temp_fv0 - temp_fv1;
        }
        if (var_fa0_2 < 50.0f) {
            return 1;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80243070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_8024310C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_802431C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_8024342C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80243578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80243688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_8024373C.s")


typedef struct func_8024388C_StructD {
    s32 a;
    s32 b;
    s32 c;
} func_8024388C_StructD;

extern void func_8012636C(void *, s32);
extern void func_8013A1B4(s32, func_8024388C_StructD, s32);
extern void func_800058DC(void *, void *);
extern void func_80243930(void);
extern func_8024388C_StructD D_8017DC2C;

void func_8024388C(u8 *arg0, s32 arg1) {
    u8 *sp2C;

    sp2C = *(u8 **)(arg0 + 0x5C);
    func_8012636C(arg0, 0);
    *(s16 *)(sp2C + 0x78) = 1;
    *(f32 *)(*(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C) + 0xC) = -30.0f;
    arg0[0x94] = 0;
    arg0[0x91] = 0;
    func_8013A1B4(arg1, D_8017DC2C, 0xE00000);
    func_800058DC(arg0, (void *)func_80243930);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80243930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80243A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80243B70.s")


extern void func_80127430(f32, f32, s32, s32, f32, f32);

typedef struct func_80243C6C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    s32 unk98;
} func_80243C6C_Struct;

void func_80243C6C(func_80243C6C_Struct *arg0, s32 arg1) {
    if (((s32) arg0->unk3C % 180) == 0) {
        func_80127430(arg0->unk90, arg0->unk94, arg0->unk98, 0x660, 1.5f, 1.0f);
    }
    arg0->unk3C = (u16) (arg0->unk3C + 1);
}

