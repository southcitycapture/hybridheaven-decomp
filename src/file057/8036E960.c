#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036E960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036EA3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036EA80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036EBB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F084.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F0F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F40C.s")


typedef struct func_8036F528_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad1[0x33 - 0x14];
    u8 unk33;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
} func_8036F528_Struct;

typedef struct func_8036F528_Vec {
    s32 x;
    s32 y;
    f32 z;
} func_8036F528_Vec;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern func_8036F528_Vec D_80387B7C;
void func_8013A2E0(s32, func_8036F528_Vec);
void func_800058DC(s32, void *);
void func_8036F5E8(void);

void func_8036F528(s32 arg0, s32 arg1) {
    func_8036F528_Struct *var_v0;
    s32 sp28;
    func_8036F528_Vec sp1C;
    s32 sp18;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_8036F528_Struct *) D_801BC03C;
    } else {
        var_v0 = (func_8036F528_Struct *) D_801BC3D8;
    }
    sp1C = D_80387B7C;
    sp1C.z = var_v0->unk10;
    func_8013A2E0(arg1, sp1C);
    var_v0->unk390 = 2;
    var_v0->unk33 = (u8) ((var_v0->unk33 & 0xFFE7) | 0x10);
    func_800058DC(arg0, &func_8036F5E8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F898.s")


extern void func_80011198(s32, void *);
extern void func_8013AE20(void *, s32, s32);
extern void func_803602D4(void *, s32, void *);
extern s32 D_8038CC14;
extern void func_8036FAA0(void);

void func_8036F9B0(void *arg0, s32 arg1) {
    u8 *var_v0;
    u8 *var_v1;
    u8 *temp_a2;

    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    temp_a2 = *(u8 **) ((u8 *) arg0 + 0x5C);
    D_8038CC14 = 0;
    var_v0[0x32] = (u8) (var_v0[0x32] & 0xFF1F);
    var_v0[0x2E8] = 0;
    var_v0[0x32C] = 0;
    var_v0[0x2DE] = 0;
    *(f32 *) (var_v0 + 0x2EC) = 1.0f;
    var_v1[0x2F8] = 0;
    var_v0[0x2F8] = 0;
    var_v0[0x2FA] = 0;
    var_v0[0x394] = 0;
    func_803602D4(arg0, arg1, temp_a2);
    temp_a2[0x84] = 0;
    *(f32 *) (var_v0 + 0x2F4) = 0.0f;
    func_80011198(arg1, temp_a2);
    func_8013AE20(arg0, arg1, 0);
    func_800058DC((s32) arg0, (void *) func_8036FAA0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036FAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036FB74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036FEA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036FF7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8037036C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_803704DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_80370500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8037073C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_80370884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_803709A8.s")

