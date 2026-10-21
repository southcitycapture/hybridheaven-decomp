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


s32 func_800178E8();                                /* extern */

s32 func_8013E794(void) {
    if (func_800178E8() != 0) {
        return 1;
    }
    return 0;
}


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


typedef struct func_8013ECE0_Struct190 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_8013ECE0_Struct190;

typedef struct func_8013ECE0_Struct30 {
    u8 unk0[0x15C];
    s32 unk15C;
} func_8013ECE0_Struct30;

extern void func_8001B204();
extern func_8013ECE0_Struct190 D_801812F0;
extern func_8013ECE0_Struct30 D_80181308;
extern u8 D_8018ED1C[];
extern u8 D_8018ED24[];
extern u8 D_8018ED2C[];
extern u8 D_8018ED34[];

void func_8013ECE0(u8 arg0, u8 arg1) {
    func_8013ECE0_Struct190 sp190;
    func_8013ECE0_Struct30 sp30;

    sp190 = D_801812F0;
    sp30 = D_80181308;
    func_8001B204(((u8 *) &sp190)[arg0 * 12], ((u8 *) &sp190)[arg0 * 12 + 1], ((u8 *) &sp190)[arg0 * 12 + 2], D_8018ED1C, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[0]);
    func_8001B204(((u8 *) &sp190)[arg0 * 12 + 3], ((u8 *) &sp190)[arg0 * 12 + 4], ((u8 *) &sp190)[arg0 * 12 + 5], D_8018ED24, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[1]);
    func_8001B204(((u8 *) &sp190)[arg0 * 12 + 6], ((u8 *) &sp190)[arg0 * 12 + 7], ((u8 *) &sp190)[arg0 * 12 + 8], D_8018ED2C, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[2]);
    func_8001B204(((u8 *) &sp190)[arg0 * 12 + 9], ((u8 *) &sp190)[arg0 * 12 + 10], ((u8 *) &sp190)[arg0 * 12 + 11], D_8018ED34, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[3]);
}


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

extern u8 D_801BEBA8[];

u8 func_801402AC(void) {
    u8 var_v1;
    u8 *temp_v0;

    temp_v0 = &D_801BEBA8[(u8)D_801BEC01 * 8];
    var_v1 = 0;
    if (temp_v0[4] == 1) {
        var_v1 = temp_v0[6];
    }
    return var_v1;
}



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


extern u8 D_801804F8[];

void func_80140368(void) {
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC02 = 1;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_8013E700(D_801BEB80);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800179B0(D_801804F8);
    func_801426B0();
    func_8014307C(0, 0xFF, D_801BEB84);
}

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

extern u8 D_800692B0[];
extern void func_80143AC4(s32 a0, s32 a1, s32 a2, void *a3);

void func_80140E88(u8 arg0, u8 arg1, s32 arg2) {
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x800) && ((u8)D_801BEC05 > 0)) {
        if ((u8)D_801BEC04 == 1) {
            D_801BEC05 = (u8)D_801BEC05 - 1;
            D_801BEC04 = 0;
        } else {
            D_801BEC05 = (u8)D_801BEC05 - 1;
            func_80143AC4(0, 1, ((u8)D_801BEC05) * 8 + arg2, &D_801BEC05);
            D_801BEC03 = 1;
        }
    }
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x400) && ((u8)D_801BEC05 < arg1 - 1)) {
        if ((u8)D_801BEC04 == 0) {
            D_801BEC04 = 1;
            D_801BEC05 = (u8)D_801BEC05 + 1;
            return;
        }
        D_801BEC05 = (u8)D_801BEC05 + 1;
        func_80143AC4(0, 0, ((u8)D_801BEC05) * 8 + arg2, &D_801BEC05);
        D_801BEC03 = 1;
    }
}


void func_80140FC8(u8 arg0, s32 arg1, s32 arg2) {
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x800) && (D_801BEC01 > 0)) {
        if (D_801BEC00 == 1) {
            D_801BEC01 -= 1;
            D_801BEC00 = 0;
        } else {
            D_801BEC01 = D_801BEC01 - 1;
            func_80143AC4(1, 1, (D_801BEC01 * 8) + arg2, &D_801BEC01);
            D_801BEBFF = 1;
        }
    }
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x400) && (D_801BEC01 < ((u8)arg1 - 1))) {
        if (D_801BEC00 == 0) {
            D_801BEC00 = 1;
            D_801BEC01 += 1;
            return;
        }
        D_801BEC01 = D_801BEC01 + 1;
        func_80143AC4(1, 0, (D_801BEC01 * 8) + arg2, &D_801BEC01);
        D_801BEBFF = 1;
    }
}


extern void func_801439C0(s32 a0, s32 a1, void *a2);

void func_80141108(void)
{
  u8 *new_var;
  s32 off;
  ;
  ;
  new_var = D_801BEB80;
  func_801439C0(1, 1, new_var + (((((u8) D_801BEC05) << 3) + ((((u8) D_801BEC04) << 3) * (-1))) + 4));
}


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



s32 func_801411D0(void)
{
  u8 x;
  s32 y = *((u8 *) (&D_801BEC02));
  if (((*((u8 *) (&D_801BEC02))) == 1) && (D_801BEB84[(*((u8 *) (&D_801BEC05))) * 8] == 1))
  {
    return func_801415C4(*((u8 *) (&D_801BEC02)), *((u8 *) (&D_801BEC05)));
  }
  if ((y == 2) && (D_801BEBAC[(*((u8 *) (&D_801BEC05))) * 8] == 1))
  {
    return func_801415C4(*((u8 *) (&D_801BEC02)), *((u8 *) (&D_801BEC05)));
  }
  return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141268.s")


u8 func_80142240(u8 arg0);

u8 func_801414B0(u8 arg0) {
    u8 r;
    r = 0;
    if (arg0 == 1) goto a;
    if (arg0 != 2) goto d;
    goto b;
a:
    return func_80142240(0);
b:
    return func_80142240(1);
d:
    return r;
}

u8 func_801422E4(u8 arg0, s32 arg1);

extern u8 func_80142350();

s32 func_8014150C(u8 arg0, u8 *arg1) {
    u8 r;
    r = 0;
    if (arg0 == 1) goto a;
    if (arg0 != 2) goto d;
    goto b;
a:
    return func_801422E4(0, (s32)arg1);
b:
    return func_801422E4(1, (s32)arg1);
d:
    return r;
}



u8 func_80141568(u8 arg0) {
    u8 r;
    r = 0;
    if (arg0 == 1) goto a;
    if (arg0 != 2) goto d;
    goto b;
a:
    return func_80142350(0);
b:
    return func_80142350(1);
d:
    return r;
}

u8 func_801423C8(u8 arg0, u8 arg1);

s32 func_801415C4(arg0, arg1)
u8 arg0;
u8 arg1;
{
    if (arg0 == 1) goto l1;
    if (arg0 != 2) goto l3;
    goto l2;
l1:
    return func_801423C8(0, arg1);
l2:
    return func_801423C8(1, arg1);
l3:
    return 0;
}

u8 func_80142450(u8 arg0, u8 arg1);

s32 func_80141628(arg0, arg1)
u8 arg0;
u8 arg1;
{
    if (arg0 == 1) goto l1;
    if (arg0 != 2) goto l3;
    goto l2;
l1:
    return func_80142450(0, arg1);
l2:
    return func_80142450(1, arg1);
l3:
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_8014168C.s")



s32 func_80141934(u8 arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 buf[25];

    var_v0 = func_8014150C(arg0, buf);
    var_v1 = var_v0 & 0xFF;
    if (var_v0 == 2) {
        var_v0 = func_8014150C(arg0, buf);
        var_v1 = var_v0 & 0xFF;
    }
    if (((buf[0] + buf[8] + buf[16] + buf[24]) == 0) && (var_v0 == 0)) {
        var_v1 = 0xFD;
    }
    return var_v1;
}

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


extern s32 func_80002BE0(u8);
extern void func_80141BD0(s32, s32);

u8 func_80142350(arg0, arg1)
    u8 arg0;
    s32 arg1;
{
    u8 r;
    s32 sp20;
    s32 v;

    v = func_80002BE0(arg0);
    r = v;
    if (v == 0) {
        sp20 = func_8001F430(0x100);
        func_80141BD0(arg1, sp20);
        r = func_800032E0(arg0, 0, 0, 0x100, sp20);
        func_8001F540(sp20);
    }
    return r;
}


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

