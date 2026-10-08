#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_803698D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369F54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A874.s")


void func_800058DC(s32, void *);                    /* extern */
void func_80224AC4(s32, s32);                       /* extern */
void func_80369F54(s32 *, s32, s32);                /* extern */
s32 func_8036A680(s32, s32, s32, s32);              /* extern */
extern void func_8036AC14();

void func_8036A8EC(s32 arg0, s32 arg1) {
    s32 sp18[4];

    func_80369F54(&sp18[1], arg0, arg1);
    func_80224AC4(arg0, 0);
    if (func_8036A680(arg0, arg1, sp18[1], sp18[3]) != 0) {
        func_800058DC(arg0, func_8036AC14);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AA8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AC14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AFBC.s")


extern void func_80010550(s32, s32);
extern void func_800111E0(s32, s32);
extern void func_8013AE20(s32, s32, s32);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

void func_8036B0D4(void *arg0, s32 arg1) {
    s32 sp1C;
    u8 *var_v0;

    sp1C = *(s32 *) ((u8 *) arg0 + 0x5C);
    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    var_v0[0x32] = var_v0[0x32] & 0xFF1F;
    func_8013AE20((s32) arg0, arg1, 0);
    func_800111E0(arg1, sp1C + 0x22);
    func_80010550(arg1, sp1C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B14C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B6D4.s")


typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;

extern s32 func_80368E58(s32, s32, s16, u8);
extern func_8036B7EC_Struct *func_803698D0(void *);

void func_8036B7EC(s32 arg0, s32 arg1) {
    void *var_a0;
    func_8036B7EC_Struct *temp_v0;

    if (arg0 != D_801BBCCC) {
        var_a0 = D_801BC03C;
    } else {
        var_a0 = D_801BC3D8;
    }
    temp_v0 = func_803698D0(var_a0);
    func_80368E58(arg0, arg1, temp_v0->unkC, (temp_v0->unk0 << 13) >> 30);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036BA40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036BBBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036BF18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036BF98.s")


struct func_8036C054_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D9 - 0x34];
    u8 unk2D9;
};

void *func_8035FEC8(u8, void *);
void func_80360394(s32, s32, s32, u8);
extern u8 D_80387A40[];
extern u8 D_8038CC61;

void func_8036C054(s32 arg0, s32 arg1, s32 arg2) {
    struct func_8036C054_Struct *var_v1;
    u8 var_a0;
    u8 var_a3;

    if (arg1 == D_801BBCCC) {
        var_v1 = (struct func_8036C054_Struct *) D_801BC03C;
    } else {
        var_v1 = (struct func_8036C054_Struct *) D_801BC3D8;
    }
    var_a0 = var_v1->unk2D9;
    if ((var_a0 == 0x40) && (D_8038CC61 != 0)) {
        var_a0 = (var_a0 | 0x80) & 0xFF;
    }
    var_a3 = ((u8 *) func_8035FEC8(var_a0, D_80387A40))[1];
    if ((((u32) (var_v1->unk30 << 9) >> 0x1E) == 3) && ((s32) var_a3 < 4)) {
        var_a3 = (var_a3 ^ 1) & 0xFF;
    }
    func_80360394(arg0, arg1, arg2, var_a3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C2F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C358.s")


extern void func_800058DC(s32, void *);
extern s32 func_80224F5C(s32, s32);
extern void func_8036A5AC(s32, s32, s32, s32);
extern void func_8036C358(s32 *, s32, s32);
extern void func_8036C6E0(void);

void func_8036C67C(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;

    func_8036C358(&sp1C, arg0, arg1);
    if (func_80224F5C(arg0, arg1) == 0) {
        func_8036A5AC(arg0, arg1, sp1C, sp24);
        func_800058DC(arg0, func_8036C6E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036CA40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036CC5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036D30C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036D7FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036D938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036D9F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036DB90.s")


extern void func_8036DF48(void);

void func_8036DD08(s32 arg0, s32 arg1) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC3D8;
    } else {
        var_v0 = D_801BC03C;
    }
    if ((((u32) *(u32 *) (var_v0 + 0x30)) << 0xB) >> 0x1E != 0) {
        func_800058DC(arg0, func_8036DF48);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036DD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036DF48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E780.s")

