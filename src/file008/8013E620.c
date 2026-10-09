#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8013E620.s")


void func_8013E700(void *arg0) {
    u8 *p = arg0;

    p[0x0] = 0;
    p[0x1] = 0;
    p[0x2] = 0;
    p[0xC] = 0;
    p[0xD] = 0;
    p[0xE] = 0;
    p[0xF] = 0;
    *(u16 *)(p + 0x10) = 0;
    p[0x12] = 0;
    p[0x14] = 0;
    p[0x15] = 0;
    p[0x16] = 0;
    p[0x17] = 0;
    *(u16 *)(p + 0x18) = 0;
    p[0x1A] = 0;
    p[0x1C] = 0;
    p[0x1D] = 0;
    p[0x1E] = 0;
    p[0x1F] = 0;
    *(u16 *)(p + 0x20) = 0;
    p[0x22] = 0;
    p[0x4] = 0;
    p[0x5] = 0;
    p[0x6] = 0;
    p[0x7] = 0;
    *(u16 *)(p + 0x8) = 0;
    p[0xA] = 0;
}


extern void func_800179B0(void *);
extern u8 D_80180280[];

void func_8013E770(void) {
    func_800179B0(D_80180280);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8013E794.s")


extern void func_80002364(u32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801426B0(void);
extern void func_8014307C(s32 a0, s32 a1, void *p);
extern u8 D_80180458[];
extern u8 D_801BEB80[];
extern u8 D_801BEB84[];
extern s8 D_801BEBCC;
extern s8 D_801BEC02;
extern s8 D_801BEC03;
extern s8 D_801BEC04;
extern s8 D_801BEC05;

void func_8013E7C0(void) {
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC02 = 1;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_8013E700(D_801BEB80);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800179B0(D_80180458);
    func_801426B0();
    func_8014307C(0, 0xFF, D_801BEB84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8013E850.s")


s32 func_8013EA54(void) {
    s32 sp4;
    u8 *temp_v0;

    temp_v0 = &D_801BEB80[(u8) D_801BEC05 * 8];
    if (temp_v0[4] == 1) {
        sp4 = temp_v0[6];
    }
    return sp4;
}


extern void func_80142778(void);
extern u8 D_8018079C[];
extern s8 D_801BBBF0;

void func_8013EA94(void) {
    D_801BBBF0 = 0;
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC02 = 1;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_8013E700(D_801BEB80);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800179B0(D_8018079C);
    func_80142778();
    func_8014307C(0, 0xFF, D_801BEB84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8013EB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8013ECE0.s")


extern void func_8001B204();
extern u8 D_8018ED3C[];
extern u8 D_8018ED44[];

void func_8013EE48(u8 arg0, u8 arg1) {
    if (arg0 == 0) {
        func_8001B204(0xF, 0x22, (s16) ((arg1 * 0xD) + 0xA7), D_8018ED3C, 4);
        return;
    }
    func_8001B204(0x13, 0xA8, (s16) ((arg1 * 0xD) + 0xA7), D_8018ED44, 4);
}


extern u8 D_8018ED4C[];
extern u8 D_8018ED50[];

void func_8013EEF8(u8 arg0) {
    if (!arg0) {
        func_8001B204(0xF, 0, 0, D_8018ED4C);
        return;
    }
    func_8001B204(0x13, 0, 0, D_8018ED50);
}


extern void func_80142840(void);
extern u8 D_801812A0[];
extern u8 D_801BEBCD;
extern u8 D_801BEBFF;
extern u8 D_801BEC00;
extern u8 D_801BEC01;

void func_8013EF54(void) {
    D_801BEBCD = 0;
    D_801BEBFF = 0;
    D_801BEC00 = 0;
    D_801BEC01 = 0;
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_80002364(0x0C000C0C, 10, 2, 0);
    func_80002364(0x0C000C0C, 10, 2, 1);
    func_800179B0(D_801812A0);
    func_80142840();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8013EFF0.s")


u8 func_80140274(void) {
    u8 var_v1;
    u8 *temp_v0;

    temp_v0 = &D_801BEB80[(u8)D_801BEC05 * 8];
    var_v1 = 0;
    if (temp_v0[4] == 1) {
        var_v1 = temp_v0[6];
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_801402AC.s")



void func_801402E4(void) {
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_8013E700(D_801BEB80);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800179B0(D_80180458);
    func_80142778();
    func_8014307C(0, 0xFF, D_801BEB84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80140368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_801403F8.s")


extern void func_80142A58(void);
extern u8 D_80180B38[];
extern u8 D_801BEBD8[];
extern u8 D_801BEBDC[];

void func_80140600(void) {
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEBCD = 0;
    D_801BEBFF = 0;
    D_801BEBD8[4] = 3;
    D_801BEBD8[12] = 4;
    func_800179B0(D_80180B38);
    func_8014307C(0, 0xFF, D_801BEBDC);
    func_8014307C(1, 0xFF, D_801BEBDC);
    func_80142A58();
    func_80002364(0x0C000C0C, 0xA, 2, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_801406A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80140E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80140FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141108.s")


extern u8 D_801BEBAC[];

s32 func_8014115C(void) {
    if (*(u8 *)&D_801BEC02 == 1 && D_801BEB84[*(u8 *)&D_801BEC05 * 8] == 1) {
        return 0;
    }
    if (*(u8 *)&D_801BEC02 == 2 && D_801BEBAC[*(u8 *)&D_801BEC05 * 8] == 1) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_801411D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_801414B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8014150C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_801415C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141628.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8014168C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_801419A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141A74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141D08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8014217C.s")


s32 func_80002DBC(u8, s32, u8 *);
u8 func_80002EF0(u8, s32, s32);
void func_8000303C(u8, u8);
u8 func_800032E0(u8, s32, s32, s32, s32);
s32 func_8001F430(s32);
void func_8001F540(s32);
void func_801419A4(s32);

u8 func_80142240(u8 arg0) {
    u8 pad[4];
    u8 sp2B;
    u8 sp2A;
    s32 sp24;

    sp2B = func_80002EF0(arg0, 0, 0x3500);
    if ((sp2B == 0) || (sp2B == 0xC)) {
        sp24 = func_8001F430(0x100);
        func_801419A4(sp24);
        sp2B = func_800032E0(arg0, 0, 0, 0x100, sp24);
        if ((sp2B != 0) && (func_80002DBC(arg0, 0, &sp2A) == 0)) {
            func_8000303C(arg0, sp2A);
        }
        func_8001F540(sp24);
    }
    return sp2B;
}


extern s32 func_8001F430(s32 size);
extern void func_8001F540(s32 ptr);
extern s32 func_800031EC(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80141A74(s32 a0, s32 a1);

u8 func_801422E4(u8 arg0, s32 arg1) {
    u8 var;
    s32 sp20;
    s32 temp;

    sp20 = func_8001F430(0x100);
    temp = func_800031EC(arg0, 0, 0, 0x100, sp20);
    var = temp;
    if (temp == 0) {
        var = func_80141A74(arg1, sp20);
    }
    func_8001F540(sp20);
    return var;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80142350.s")


extern s32 func_80141D08(s32 a0);

u8 func_801423C8(u8 arg0, u8 arg1) {
    u8 var_v1;
    s32 sp20;
    s32 temp_v0;

    sp20 = func_8001F430(0xD00);
    temp_v0 = func_800031EC(arg0, 0, ((arg1 * 0xD00) + 0x100) & 0xFFFF, 0xD00, sp20);
    var_v1 = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = func_80141D08(sp20);
    }
    func_8001F540(sp20);
    return var_v1;
}


extern void func_80141F28(s32 a0);

u8 func_80142450(u8 arg0, u8 arg1) {
    u8 sp27;
    s32 sp20;
    u8 temp_v0;

    sp20 = func_8001F430(0xD00);
    func_80141F28(sp20);
    temp_v0 = func_800032E0(arg0, 0, ((arg1 * 0xD00) + 0x100) & 0xFFFF, 0xD00, sp20);
    sp27 = temp_v0;
    func_8001F540(sp20);
    return sp27;
}


extern s32 func_8014217C(u8 arg0, s32 arg1);

u8 func_801424D0(u8 arg0, u8 arg1, u8 arg2) {
    u8 sp27;
    s32 sp20;
    s32 ret;

    sp20 = func_8001F430(0xD00);
    ret = func_800031EC(arg0, 0, ((arg1 * 0xD00) + 0x100) & 0xFFFF, 0xD00, sp20);
    sp27 = ret;
    if (ret == 0) {
        sp27 = func_8014217C(arg2, sp20);
    }
    func_8001F540(sp20);
    return sp27;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/_pad_16.s")

