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


void func_80140E88(u8 arg0, u8 arg1, s32 arg2);
s32 func_8014150C(u8 arg0, u8 *arg1);
extern void func_800023A8(s32);
extern void func_80002A94(s32);
extern void func_80017990(void *);
extern s32 func_80141268(void);
extern void func_80142B28(u8, u8);
extern void func_80142FC4(void);
extern s32 func_80143B5C(void);
extern u16 D_80089474[];
extern u8 D_801808E8[];
extern u8 D_801809CC[];
extern u8 D_80180A04[];
extern u16 D_801BBF42;

s32 func_8013EB2C(void) {
    s32 state;
    if (func_800178E8() == 0) return 0;
    if (*(u8 *)&D_801BEC03 == 1) {
        func_80142FC4();
        if (func_80143B5C() != 0) D_801BEC03 = 0;
        return 0;
    }
    state = *(u8 *)&D_801BEBCC;
    if (state == 0) goto state0;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 0;
state0:
    if (D_801BBF42 == 0) {
        func_8014307C(0, func_8014150C(1, D_801BEB84) & 0xFF, D_801BEB84);
        D_801BEBCC = 1;
    }
    if (D_801BBF42 == 2) D_801BEBCC = 3;
    goto done;
state1:
    if (D_80089474[2] & 0xB000) {
        func_80017990(D_801808E8);
        D_801BEBCC = 2;
    }
    func_80140E88(0, 4, (s32)D_801BEB84);
    func_80142B28(0, *(u8 *)&D_801BEC04);
    return 0;
state2:
    if (D_801BBF42 == 0) {
        if (func_80141268() == 0) func_80017990(D_801809CC);
        else func_80017990(D_80180A04);
    }
    D_801BEBCC = 3;
    goto done;
state3:
    func_80002A94(0);
    func_800023A8(0);
    return 1;
done:
    return 0;
}


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


typedef struct func_80141A74_StructHeader {
    u8 bytes[13];
} func_80141A74_StructHeader;
typedef struct func_80141A74_StructRecord {
    u8 a, b, c, d;
    u16 e;
    u8 f, g;
} func_80141A74_StructRecord;
extern func_80141A74_StructHeader D_80181490;

s32 func_80141A74(s32 arg0, s32 arg1) {
    s32 i;
    u16 sum;
    s16 result;
    func_80141A74_StructHeader header;

    header = D_80181490;
    for (i = 0, result = 0; i < 13; i++) {
        if (((u8 *)arg1)[i] != header.bytes[i]) {
            result = 14;
        }
    }
    if (result == 0) {
        i = 0;
        sum = 0;
        for (; i < 255; ) {
            sum += ((u8 *)arg1)[i++];
        }
        if ((sum & 0xFF) != ((u8 *)arg1)[i]) {
            result = 14;
        }
        if (result == 0) {
            for (i = 0; i < 4; i++) {
                ((func_80141A74_StructRecord *)arg0)[i].a = ((u8 *)arg1)[16 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].b = ((u8 *)arg1)[17 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].c = ((u8 *)arg1)[18 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].d = ((u8 *)arg1)[19 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].e = (((u8 *)arg1)[20 + i * 8] << 8) + ((u8 *)arg1)[21 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].f = ((u8 *)arg1)[22 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].g = ((u8 *)arg1)[23 + i * 8];
            }
        }
    }
    return result;
}


typedef struct func_80141BD0_StructEntry {
    u8 a, b, c, d;
    u16 e;
    u8 f, g;
} func_80141BD0_StructEntry;

typedef struct func_80141BD0_StructHdr {
    u8 b[13];
} func_80141BD0_StructHdr;

extern func_80141BD0_StructHdr D_801814A0;

void func_80141BD0(s32 arg0, s32 arg1) {
    s32 i;
    u16 sum;
    u16 pad;
    func_80141BD0_StructHdr data;

    data = D_801814A0;
    for (i = 0; i < 256;) {
        ((u8 *)arg1)[i++] = 0;
    }
    for (i = 0; i < 13; i++) {
        ((u8 *)arg1)[i] = data.b[i];
    }
    for (i = 0; i < 4; i++) {
        ((u8 *)arg1)[16 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].a;
        ((u8 *)arg1)[17 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].b;
        ((u8 *)arg1)[18 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].c;
        ((u8 *)arg1)[19 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].d;
        ((u8 *)arg1)[20 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].e >> 8;
        ((u8 *)arg1)[21 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].e & 0xFF;
        ((u8 *)arg1)[22 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].f;
        ((u8 *)arg1)[23 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].g;
    }
    sum = 0;
    for (i = 0; i < 255; i++) {
        sum += ((u8 *)arg1)[i];
    }
    ((u8 *)arg1)[i] = sum;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141D08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/func_80141F28.s")


extern void func_80144E68(u8 **);
extern void func_80145014(u8 **);

s32 func_8014217C(u8 arg0, s32 arg1) {
    u8 *sp2C;
    u8 result;
    u16 sum;
    s32 i;

    sum = 0;
    for (i = 0; i < 0xCFF; i++) {
        sum += ((u8 *)arg1)[i];
    }
    if ((u8)sum != ((u8 *)arg1)[i]) {
        result = 0xE;
    } else {
        result = 0;
        sp2C = (u8 *)arg1;
        if (arg0 & 1) {
            func_80145014(&sp2C);
        } else {
            func_80144E68(&sp2C);
        }
    }
    return result;
}


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

