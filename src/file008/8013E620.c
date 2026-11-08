#include "common.h"

#define D_801BEBD8 D_801BEBD8__func_8013E620
#define D_801BEBDC D_801BEBDC__func_8013E620
#define func_8014150C func_8014150C__func_8013E620
extern u8 D_801BEBD8[];
extern u8 D_801BEBDC[];

s32 func_8014150C(u8 arg0, u8 *arg1);

typedef struct func_8013E620_Struct {
    u8 pad[4];
    u8 unk4, unk5, unk6, unk7;
    u16 unk8;
    u8 unkA, unkB;
} func_8013E620_Struct;

#define F8013E620_Q ((func_8013E620_Struct *)(D_801BEBD8 + i * 8))

s32 func_8013E620(void) {
    s32 i;
    s32 v;

    v = 0;
    if (func_8014150C(1, D_801BEBDC) == 0) {
        for (i = 0; i < 4; i++) {
            if ((F8013E620_Q->unk4 == 1) && (F8013E620_Q->unk6 == 0xFF)) {
                if (F8013E620_Q->unkB == 0) v |= 1;
                if (F8013E620_Q->unkB == 1) v |= 2;
                if (F8013E620_Q->unkB == 2) v |= 4;
            }
        }
    }
    return v;
}
#undef F8013E620_Q
#undef D_801BEBD8
#undef D_801BEBDC
#undef func_8014150C


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

#define func_800179B0 func_800179B0__func_8013E7C0
#define func_8013E700 func_8013E700__func_8013E7C0

extern void func_80002364(u32 a0, s32 a1, s32 a2, s32 a3);
extern void func_800179B0(void *p);
extern void func_8013E700(void *p);
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
#undef func_800179B0
#undef func_8013E700

#define D_80089474 D_80089474__func_8013E850
#define D_80180598 D_80180598__func_8013E850
#define D_80180668 D_80180668__func_8013E850
#define D_801806E4 D_801806E4__func_8013E850
#define D_8018071C D_8018071C__func_8013E850
#define D_801BBF42 D_801BBF42__func_8013E850
#define func_800023A8 func_800023A8__func_8013E850
#define func_80017990 func_80017990__func_8013E850
#define func_80140E88 func_80140E88__func_8013E850
#define func_8014115C func_8014115C__func_8013E850
#define func_801411D0 func_801411D0__func_8013E850
#define func_8014150C func_8014150C__func_8013E850
#define func_80142B28 func_80142B28__func_8013E850
#define func_80142FC4 func_80142FC4__func_8013E850
#define func_80143B5C func_80143B5C__func_8013E850
extern u16 D_80089474[];
extern u16 D_801BBF42;
extern void func_800023A8(s32);
extern void func_80017990(void *);
void func_80140E88(u8 arg0, u8 arg1, s32 arg2);
s32 func_8014115C(void);
s32 func_801411D0(void);
s32 func_8014150C(u8 arg0, u8 *arg1);
extern void func_80142B28(u8, u8);
extern void func_80142FC4(void);
extern s32 func_80143B5C(void);


extern u8 D_80180668[];
extern u8 D_80180598[];
extern u8 D_801806E4[];
extern u8 D_8018071C[];

s32 func_8013E850(void)
{
    u16 v;

    if (func_800178E8() == 0) return 0;
    if (*(u8 *)&D_801BEC03 == 1U) {
        func_80142FC4();
        if (func_80143B5C() != 0) D_801BEC03 = 0;
        return 0;
    }
    switch (*(u8 *)&D_801BEBCC) {
    case 0:
        if (D_801BBF42 == 0) {
            func_8014307C(0, (u8)func_8014150C(1, D_801BEB84), D_801BEB84);
            D_801BEBCC = 2;
        }
        if (D_801BBF42 == 2) D_801BEBCC = 1;
        break;
    case 1:
        func_800023A8(0);
        return 2;
    case 2:
        if (D_80089474[2] & 0xB000) {
            if (func_8014115C() != 0) {
                func_80017990(D_80180668);
            } else {
                D_801BEBCC = 3;
                func_80017990(D_80180598);
            }
        }
        func_80140E88(0, 4, (s32)D_801BEB84);
        func_80142B28(0, (u8)D_801BEC04);
        return 0;
    case 3:
        if (D_801BBF42 == 0) D_801BEBCC = 4;
        if (D_801BBF42 == 2) D_801BEBCC = 1;
        break;
    case 4:
        if (func_801411D0() == 0) {
            D_801BEBCC = 5;
            func_80017990(D_801806E4);
        } else {
            D_801BEBCC = 1;
            func_80017990(D_8018071C);
        }
        return 0;
    case 5:
        func_800023A8(0);
        return 1;
    }
    return 0;
}
#undef D_80089474
#undef D_80180598
#undef D_80180668
#undef D_801806E4
#undef D_8018071C
#undef D_801BBF42
#undef func_800023A8
#undef func_80017990
#undef func_80140E88
#undef func_8014115C
#undef func_801411D0
#undef func_8014150C
#undef func_80142B28
#undef func_80142FC4
#undef func_80143B5C


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

#define func_80140E88 func_80140E88__func_8013EB2C
#define func_8014150C func_8014150C__func_8013EB2C

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
#undef func_80140E88
#undef func_8014150C


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

#define func_8001B204 func_8001B204__func_8013EEF8

extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_8018ED4C[];
extern u8 D_8018ED50[];

void func_8013EEF8(u8 arg0) {
    if (!arg0) {
        func_8001B204(0xF, 0, 0, D_8018ED4C);
        return;
    }
    func_8001B204(0x13, 0, 0, D_8018ED50);
}
#undef func_8001B204

#define D_801BEBCC D_801BEBCC__func_8013EF54
#define D_801BEC03 D_801BEC03__func_8013EF54
#define D_801BEC04 D_801BEC04__func_8013EF54
#define D_801BEC05 D_801BEC05__func_8013EF54
#define func_800179B0 func_800179B0__func_8013EF54

extern void func_800179B0(void *p);
extern void func_80142840(void);
extern u8 D_801812A0[];
extern u8 D_801BEBCC;
extern u8 D_801BEBCD;
extern u8 D_801BEBFF;
extern u8 D_801BEC00;
extern u8 D_801BEC01;
extern u8 D_801BEC03;
extern u8 D_801BEC04;
extern u8 D_801BEC05;

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
#undef D_801BEBCC
#undef D_801BEC03
#undef D_801BEC04
#undef D_801BEC05
#undef func_800179B0

/* hh-block asm/nonmatchings/file008/8013E620/_mrg_keep_tail_e6273fde8d5ebf47.s {"functions":["func_8013EFF0"],"rodata":[],"rodata_bytes":[2149117732,5695028,296]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/_mrg_keep_tail_e6273fde8d5ebf47.s")


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

#define func_800179B0 func_800179B0__func_80140368
#define func_8013E700 func_8013E700__func_80140368

extern void func_800179B0(void *p);
extern void func_8013E700(void *p);
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
#undef func_800179B0
#undef func_8013E700

#define D_80180598 D_80180598__func_801403F8
#define D_80180668 D_80180668__func_801403F8
#define D_801806E4 D_801806E4__func_801403F8
#define D_8018071C D_8018071C__func_801403F8
#define D_801BEBCC D_801BEBCC__func_801403F8
#define D_801BEC03 D_801BEC03__func_801403F8
#define D_801BEC04 D_801BEC04__func_801403F8
#define func_80140E88 func_80140E88__func_801403F8
#define func_8014115C func_8014115C__func_801403F8
#define func_801411D0 func_801411D0__func_801403F8
#define func_8014150C func_8014150C__func_801403F8
void func_80140E88(u8 arg0, u8 arg1, s32 arg2);
s32 func_8014115C(void);
s32 func_801411D0(void);
s32 func_8014150C(u8 arg0, u8 *arg1);


extern u8 D_801BEBCC;
extern u8 D_801BEC03;
extern u8 D_801BEC04;
extern u8 D_80180668[];
extern u8 D_80180598[];
extern u8 D_801806E4[];
extern u8 D_8018071C[];

s32 func_801403F8(void)
{
    if (func_800178E8() == 0) {
        return 0;
    }
    if (D_801BEC03 == 1) {
        func_80142FC4();
        if (func_80143B5C() != 0) {
            D_801BEC03 = 0;
        }
        return 0;
    }
    switch (D_801BEBCC) {
    case 0:
        func_8014307C(0, (u8)func_8014150C(1, D_801BEB84), D_801BEB84);
        if (D_801BBF42 == 0) {
            D_801BEBCC = 2;
        }
        if (D_801BBF42 == 1) {
            D_801BEBCC = 5;
        }
        if (D_801BBF42 == 2) {
            D_801BEBCC = 1;
        }
        break;
    case 1:
        func_800023A8(0);
        return 2;
    case 2:
        if (D_80089474[2] & 0xB000) {
            if (func_8014115C() != 0) {
                func_80017990(D_80180668);
            } else {
                D_801BEBCC = 3;
                func_80017990(D_80180598);
            }
        }
        func_80140E88(0, 4, (s32)D_801BEB84);
        func_80142B28(0, D_801BEC04);
        return 0;
    case 3:
        if (D_801BBF42 == 0) {
            D_801BEBCC = 4;
        }
        if (D_801BBF42 == 2) {
            D_801BEBCC = 1;
        }
        break;
    case 4:
        if (func_801411D0() == 0) {
            D_801BEBCC = 5;
            func_80017990(D_801806E4);
        } else {
            D_801BEBCC = 1;
            func_80017990(D_8018071C);
        }
        return 0;
    case 5:
        func_800023A8(0);
        return 1;
    }
    return 0;
}
#undef D_80180598
#undef D_80180668
#undef D_801806E4
#undef D_8018071C
#undef D_801BEBCC
#undef D_801BEC03
#undef D_801BEC04
#undef func_80140E88
#undef func_8014115C
#undef func_801411D0
#undef func_8014150C

#define D_801BEBCD D_801BEBCD__func_80140600
#define D_801BEBFF D_801BEBFF__func_80140600
#define func_80002364 func_80002364__func_80140600
#define func_8014307C func_8014307C__func_80140600

extern void func_80002364(u32, s32, s32, s32);
extern void func_80142A58(void);
extern void func_8014307C(s32, s32, void *);
extern u8 D_80180B38[];
extern s8 D_801BEBCD;
extern u8 D_801BEBD8[];
extern u8 D_801BEBDC[];
extern s8 D_801BEBFF;

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
#undef D_801BEBCD
#undef D_801BEBFF
#undef func_80002364
#undef func_8014307C


#define D_80089494 D_80089494__func_801406A4
#define D_8014168C D_8014168C__func_801406A4
#define D_80180B54 D_80180B54__func_801406A4
#define D_80180BA8 D_80180BA8__func_801406A4
#define D_80180DD8 D_80180DD8__func_801406A4
#define D_80180E80 D_80180E80__func_801406A4
#define D_80180F28 D_80180F28__func_801406A4
#define D_80180F94 D_80180F94__func_801406A4
#define D_80181010 D_80181010__func_801406A4
#define D_801810D4 D_801810D4__func_801406A4
#define D_8018110C D_8018110C__func_801406A4
#define D_80181150 D_80181150__func_801406A4
#define D_80181214 D_80181214__func_801406A4
#define D_801812E8 D_801812E8__func_801406A4
#define D_8018ED54 D_8018ED54__func_801406A4
#define D_8018ED7C D_8018ED7C__func_801406A4
#define D_8018EDA4 D_8018EDA4__func_801406A4
#define D_8018EDCC D_8018EDCC__func_801406A4
#define D_8018EE08 D_8018EE08__func_801406A4
#define D_8018EE44 D_8018EE44__func_801406A4
#define D_8018EE80 D_8018EE80__func_801406A4
#define D_8018EEBC D_8018EEBC__func_801406A4
#define D_8018EEE4 D_8018EEE4__func_801406A4
#define D_801BBF44 D_801BBF44__func_801406A4
#define D_801BEBAC D_801BEBAC__func_801406A4
#define D_801BEBFE D_801BEBFE__func_801406A4
#define func_8001A804 func_8001A804__func_801406A4
#define func_80140E88 func_80140E88__func_801406A4
#define func_80140FC8 func_80140FC8__func_801406A4
#define func_8014150C func_8014150C__func_801406A4
#define func_80142F2C func_80142F2C__func_801406A4
#define func_801439C0 func_801439C0__func_801406A4
extern u8 D_801BEBAC[];
void func_80140E88(u8 arg0, u8 arg1, s32 arg2);
void func_80140FC8(u8 arg0, s32 arg1, s32 arg2);
s32 func_8014150C(u8 arg0, u8 *arg1);
extern void func_801439C0(s32 a0, s32 a1, void *a2);


#define D_801BEBCC (*(u8 *)&D_801BEBCC)
#define D_801BEC02 (*(u8 *)&D_801BEC02)
#define D_801BEC03 (*(u8 *)&D_801BEC03)
#define D_801BEC04 (*(u8 *)&D_801BEC04)
#define D_801BEC05 (*(u8 *)&D_801BEC05)
extern void func_80142F2C(s32);
extern s32 func_8001A804();
extern s32 D_8014168C(u8, u8, u8, u8);
extern u16 D_80089494;
extern u16 D_801BBF44;
extern u8 D_801BEBFE;
extern u8 D_80180BA8[];
extern u8 D_80180B54[];
extern u8 D_80181214[];
extern u8 D_80180DD8[];
extern u8 D_80180E80[];
extern u8 D_80180F28[];
extern u8 D_80180F94[];
extern u8 D_80181010[];
extern u8 D_801810D4[];
extern u8 D_8018110C[];
extern u8 D_80181150[];
extern u8 *D_801812E8[];
extern u8 D_8018ED54[];
extern u8 D_8018ED7C[];
extern u8 D_8018EDA4[];
extern u8 D_8018EDCC[];
extern u8 D_8018EE08[];
extern u8 D_8018EE44[];
extern u8 D_8018EE80[];
extern u8 D_8018EEBC[];
extern u8 D_8018EEE4[];

s32 func_801406A4(void)
{
    if (func_800178E8() == 0) {
        return 0;
    }
    if ((u8)D_801BEC03 == 1) {
        func_80142F2C(0);
        if (func_80143B5C() != 0) {
            D_801BEC03 = 0;
        }
        return 0;
    }
    if (D_801BEBFF == 1) {
        func_80142F2C(1);
        if (func_80143B5C() != 0) {
            D_801BEBFF = 0;
        }
        return 0;
    }
    switch (*(u8 *)&D_801BEBCC) {
    case 0:
        D_801BEC04 = 0;
        D_801BEC05 = 0;
        D_801BEC00 = 0;
        D_801BEC01 = 0;
        if (D_80089494 == 1) {
            func_80017990(D_80180BA8);
        } else {
            func_80017990(D_80180B54);
        }
        D_801BEBCC = 1;
        break;
    case 1:
        func_8014150C(1, D_801BEB84);
        func_8014150C(2, D_801BEBAC);
        switch (D_801BBF42) {
        default:
            return 0;
        case 0:
            func_80017990(D_80181214);
            D_801BEBCC = 9;
            break;
        case 1:
            D_801BEC02 = 0;
            D_801BEBFE = 0;
            D_801BEBCC = 4;
            break;
        case 2:
            D_801BEC02 = 1;
            D_801BEBFE = 1;
            D_801BEBCC = 4;
            break;
        case 3:
            func_8014307C(0, 0, D_801BEBDC);
            func_8014307C(1, 0, D_801BEBDC);
            func_80017990(D_80180DD8);
            func_8001A804(9, D_8018ED54, 0xA6, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
            D_801BEBCC = 2;
            break;
        }
        break;
    case 2:
        if (D_80089474[2] & 0xB000) {
            D_801BEC02 = (u8)D_801BEC05;
            func_80017990(D_80180E80);
            func_8001A804(9, D_8018ED7C, 0x20, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
            D_801BEBCC = 3;
        }
        func_80140E88(0, 2, (s32)D_801BEBDC);
        func_80142B28(0, D_801BEC04);
        return 0;
    case 3:
        if (D_80089474[2] & 0xB000) {
            D_801BEBFE = D_801BEC01;
            D_801BEBCC = 4;
        }
        func_80140FC8(0, 2, (s32)D_801BEBDC);
        func_80142B28(1, D_801BEC00);
        return 0;
    case 4:
        D_801BEC04 = 0;
        D_801BEC05 = 0;
        D_801BEC00 = 0;
        D_801BEC01 = 0;
        func_8014307C(0, 0, D_801812E8[(u8)D_801BEC02]);
        func_8014307C(1, 0, D_801812E8[D_801BEBFE]);
        func_80017990(D_80180F28);
        func_8001A804(9, D_8018EDA4, 0xA6, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
        if (D_801BEC02 == 0 && D_801BEBFE == 0) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EDCC, 1, 0, 1, 0);
        }
        if (D_801BEC02 == 0 && D_801BEBFE == 1) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EE08, 1, 0, 1, 0);
        }
        if (D_801BEC02 == 1 && D_801BEBFE == 0) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EE44, 1, 0, 1, 0);
        }
        if (D_801BEC02 == 1 && D_801BEBFE == 1) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EE80, 1, 0, 1, 0);
        }
        D_801BEBCC = 5;
        break;
    case 5:
        if (D_80089474[2] & 0xB000) {
            func_80017990(D_80180F94);
            func_8001A804(9, D_8018EEBC, 0x20, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
            D_801BEBCC = 6;
        }
        func_80140E88(0, 4, (s32)D_801812E8[(u8)D_801BEC02]);
        func_80142B28(0, D_801BEC04);
        return 0;
    case 6:
        if (D_80089474[2] & 0xB000) {
            func_80017990(D_80181010);
            func_8001A804(9, D_8018EEE4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            D_801BEBCC = 7;
        }
        func_80140FC8(0, 4, (s32)D_801812E8[D_801BEBFE]);
        func_80142B28(1, D_801BEC00);
        return 0;
    case 7:
        if (D_801BBF44 == 0) {
            if (D_8014168C((u8)(D_801BEC02 + 1), (u8)(D_801BEBFE + 1), (u8)D_801BEC05, D_801BEC01) == 0 &&
                func_8014150C(D_801BEBFE + 1, D_801812E8[D_801BEBFE]) == 0) {
                func_801439C0(1, 1, D_801812E8[D_801BEBFE] + (D_801BEC01 - D_801BEC00) * 8);
                func_80017990(D_801810D4);
            } else {
                func_80017990(D_8018110C);
            }
        } else {
            func_80017990(D_80181150);
        }
        D_801BEBCC = 8;
        break;
    case 8:
        if (D_801BBF44 == 0) {
            D_801BEBCC = 9;
        } else {
            D_801BEBCC = 0;
        }
        break;
    case 9:
        return 1;
    }
    return 0;
}
#undef D_801BEBCC
#undef D_801BEC02
#undef D_801BEC03
#undef D_801BEC04
#undef D_801BEC05
#undef D_80089494
#undef D_8014168C
#undef D_80180B54
#undef D_80180BA8
#undef D_80180DD8
#undef D_80180E80
#undef D_80180F28
#undef D_80180F94
#undef D_80181010
#undef D_801810D4
#undef D_8018110C
#undef D_80181150
#undef D_80181214
#undef D_801812E8
#undef D_8018ED54
#undef D_8018ED7C
#undef D_8018EDA4
#undef D_8018EDCC
#undef D_8018EE08
#undef D_8018EE44
#undef D_8018EE80
#undef D_8018EEBC
#undef D_8018EEE4
#undef D_801BBF44
#undef D_801BEBAC
#undef D_801BEBFE
#undef func_8001A804
#undef func_80140E88
#undef func_80140FC8
#undef func_8014150C
#undef func_80142F2C
#undef func_801439C0

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

#define D_80141568 D_80141568__func_80141268
#define D_80141628 D_80141628__func_80141268
#define D_8017DC88 D_8017DC88__func_80141268
#define D_801BBBF8 D_801BBBF8__func_80141268
#define D_801BBBFA D_801BBBFA__func_80141268
#define D_801BBC0D D_801BBC0D__func_80141268
#define func_80108280 func_80108280__func_80141268
extern s32 func_80108280(void);
extern s32 D_80141568(u8, void *);
extern s32 D_80141628(u8, u8);
extern u16 D_8017DC88;
extern u16 D_801BBBF8;
extern u16 D_801BBBFA;
extern u8 D_801BBC0D;

typedef struct func_80141268_StructData {
    u8 pad[4];
    u8 unk4, unk5, unk6, unk7;
    u16 unk8;
    u8 unkA, unkB;
} func_80141268_StructData;

typedef struct func_80141268_StructRec {
    u8 a, b, c, d;
    u16 e;
    u8 f, g;
} func_80141268_StructRec;

typedef struct func_80141268_StructH {
    u8 hdr[4];
    func_80141268_StructRec rec[1];
} func_80141268_StructH;

typedef struct func_80141268_StructG {
    u8 unk0;
    u8 pad1[7];
    u16 unk8;
    u16 unkA;
    u8 padC[0x11];
    u8 unk1D;
} func_80141268_StructG;

#define G ((func_80141268_StructG *)&D_801BBBF0)
#define P1 ((func_80141268_StructData *)(D_801BEB80 + (u8)D_801BEC05 * 8))
#define P2 ((func_80141268_StructData *)(D_801BEBA8 + (u8)D_801BEC05 * 8))

s32 func_80141268(void) {
    u8 result;
    s32 v;
    func_80141268_StructRec *r;

    if ((u8)D_801BEC02 == 1) {
        v = D_80141628(1, (u8)D_801BEC05);
        result = v;
        if (v == 0) {
            P1->unk4 = 1;
            P1->unk5 = 1;
            if (G->unk0 == 0) {
                P1->unk6 = func_80108280() >> 8;
            } else {
                P1->unk6 = 0xFF;
            }
            P1->unk7 = D_8017DC88;
            P1->unk8 = G->unkA;
            P1->unkA = G->unk8 & 0xFF;
            P1->unkB = G->unk1D;
            v = D_80141568(1, D_801BEB84);
            result = v;
        }
        if (v == 0) {
            r = &((func_80141268_StructH *)D_801BEB80)->rec[(u8)D_801BEC05 - (u8)D_801BEC04];
            func_8014307C(0, result, r);
        }
    }
    if ((u8)D_801BEC02 == 2) {
        v = D_80141628(2, (u8)D_801BEC05);
        result = v;
        if (v == 0) {
            P2->unk4 = 1;
            P2->unk5 = 1;
            if (*(u8 *)&D_801BBBF0 == 0) {
                P2->unk6 = func_80108280() >> 8;
            } else {
                P2->unk6 = 0xFF;
            }
            P2->unk7 = D_8017DC88;
            P2->unk8 = D_801BBBFA;
            P2->unkA = D_801BBBF8 & 0xFF;
            P2->unkB = D_801BBC0D;
            v = D_80141568(2, D_801BEBAC);
            result = v;
        }
        if (v == 0) {
            r = &((func_80141268_StructH *)D_801BEBA8)->rec[(u8)D_801BEC05 - (u8)D_801BEC04];
            func_8014307C(0, result, r);
        }
    }
    return result;
}
#undef G
#undef P1
#undef P2
#undef D_80141568
#undef D_80141628
#undef D_8017DC88
#undef D_801BBBF8
#undef D_801BBBFA
#undef D_801BBC0D
#undef func_80108280

#define func_80142240 func_80142240__func_801414B0

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
#undef func_80142240

#define func_801422E4 func_801422E4__func_8014150C
#define func_80142350 func_80142350__func_8014150C
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
#undef func_801422E4
#undef func_80142350

#define func_80142350 func_80142350__func_80141568

extern u8 func_80142350();

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
#undef func_80142350

#define func_801423C8 func_801423C8__func_801415C4
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
#undef func_801423C8

#define func_80142450 func_80142450__func_80141628
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
#undef func_80142450

#define D_801422E4 D_801422E4__func_8014168C
#define D_80142350 D_80142350__func_8014168C
#define D_801BEC10 D_801BEC10__func_8014168C
#define D_801BEC30 D_801BEC30__func_8014168C
#define func_800031EC func_800031EC__func_8014168C
#define func_800032E0 func_800032E0__func_8014168C
#define func_8001F430 func_8001F430__func_8014168C
#define func_8001F540 func_8001F540__func_8014168C
#define func_801422E4 func_801422E4__func_8014168C
extern s32 func_800031EC(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u8 func_800032E0(u8, s32, s32, s32, s32);
s32 func_8001F430(s32);
void func_8001F540(s32);
u8 func_801422E4(u8 arg0, s32 arg1);


typedef struct func_8014168C_Struct { u8 b[8]; } func_8014168C_Struct;
extern func_8014168C_Struct D_801BEC10[];
extern func_8014168C_Struct D_801BEC30[];
extern u8 D_80142350(u8, func_8014168C_Struct *);
extern u8 D_801422E4(u8, func_8014168C_Struct *);

u8 func_8014168C(arg0, arg1, arg2, arg3)
    u8 arg0;
    u8 arg1;
    u8 arg2;
    u8 arg3;
{
    u8 r;
    s32 sp20;
    func_8014168C_Struct *p;

    r = 0;
    sp20 = func_8001F430(0xD00);
    if (arg0 == 1) goto a1;
    if (arg0 != 2) goto b0;
    if (1) goto a2;
a1:
    r = func_801422E4(0, (s32)D_801BEC10);
    if (r == 0) {
        r = func_800031EC(0, 0, (arg2 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
    if (1) goto b0;
a2:
    r = func_801422E4(1, (s32)D_801BEC10);
    if (r == 0) {
        r = func_800031EC(1, 0, (arg2 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
b0:
    if (r != 0) goto end;
    switch (arg1) {
    case 1: goto c1;
    case 2: goto c2;
    default: goto end;
    }
c1:
    r = D_801422E4(0, D_801BEC30);
    p = D_801BEC30;
    if (r == 0) {
        p[arg3] = D_801BEC10[arg2];
        r = D_80142350(0, p);
    }
    if (r == 0) {
        r = func_800032E0(0, 0, (arg3 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
    if (1) goto end;
c2:
    r = func_801422E4(1, (s32)D_801BEC30);
    if (r == 0) {
        D_801BEC30[arg3] = D_801BEC10[arg2];
        r = D_80142350(1, D_801BEC30);
    }
    if (r == 0) {
        r = func_800032E0(1, 0, (arg3 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
end:
    func_8001F540(sp20);
    return r;
}
#undef D_801422E4
#undef D_80142350
#undef D_801BEC10
#undef D_801BEC30
#undef func_800031EC
#undef func_800032E0
#undef func_8001F430
#undef func_8001F540
#undef func_801422E4

#define func_8014150C func_8014150C__func_80141934

s32 func_8014150C(u8, u8 *);

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
#undef func_8014150C

#define D_80181480 D_80181480__func_801419A4

typedef struct func_801419A4_StructData {
    u8 bytes[13];
} func_801419A4_StructData;

extern func_801419A4_StructData D_80181480;

void func_801419A4(s32 arg0) {
    s32 i;
    u16 sum;
    func_801419A4_StructData data;

    data = D_80181480;
    {
        u8 *p;

        i = 0;
        p = (u8 *)arg0;
        do {
            i++;
            *p++ = 0;
        } while (i < 256);
    }
    for (i = 0; i < 13; i++) {
        ((u8 *)arg0)[i] = data.bytes[i];
    }
    sum = 0;
    for (i = 0; i < 255; i++) {
        sum += ((u8 *)arg0)[i];
    }
    ((u8 *)arg0)[i] = sum;
}
#undef D_80181480


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

#define D_8008DC18 D_8008DC18__func_80141D08
#define func_80144E68 func_80144E68__func_80141D08
#define func_8014B8DC func_8014B8DC__func_80141D08
#define func_8014C294 func_8014C294__func_80141D08
#define func_8014C2A0 func_8014C2A0__func_80141D08
extern void func_80144E68(u8 **);
extern void func_8014B8DC(void);
extern u8 *func_8014C294(void);
extern s32 func_8014C2A0(void);
extern u8 D_8008DC18[];

typedef struct func_80141D08_Struct {
    u8 pad0[2];
    s16 unk2;
    s16 unk4;
    u16 unk6;
    s16 unk8;
    s16 unkA;
    u8 padC[2];
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s8 unk16;
    u8 unk17;
    s8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
    u8 unk1D;
    u8 pad1E[0x16E];
    u16 unk18C;
    u8 pad18E[0x20F];
    u8 unk39D;
} func_80141D08_Struct;

s32 func_80141D08(s32 arg0) {
    u8 *sp2C;
    u8 sp2B;
    s32 count;
    s32 i;
    u8 *q;
    u8 *p;

    i = 0;
    count = 0;
    q = (u8 *)arg0;
    do {
        i++;
        count += *q;
        count &= 0xFFFF;
        q++;
    } while (i < 0xCFF);
    if ((count & 0xFF) != *q) {
        sp2B = 0xE;
    } else {
        sp2B = 0;
        sp2C = (u8 *)arg0;
        func_80144E68(&sp2C);
        sp2C = D_8008DC18 + 8;
        count = 0x64;
        i = 0;
        p = (u8 *)arg0 + 0x300;
        do {
            sp2C[i++] = *p++;
        } while (i < count);
        func_8014B8DC();
        sp2C = func_8014C294();
        count = func_8014C2A0();
        i = 0;
        if (count > 0) {
            do {
                sp2C[i++] = *p++;
            } while (i < count);
        }
#define STATE ((func_80141D08_Struct *)&D_801BBBF0)
        STATE->unk2 = (p[0] << 8) + p[1];
        STATE->unk4 = (p[2] << 8) + p[3];
        p += 0x1C;
        STATE->unk6 = (p[-0x18] << 8) + p[-0x17];
        STATE->unkE = (p[-0x16] << 8) + p[-0x15];
        STATE->unk10 = (p[-0x14] << 8) + p[-0x13];
        STATE->unk12 = (p[-0x12] << 8) + p[-0x11];
        STATE->unk14 = (p[-0x10] << 8) + p[-0xF];
        STATE->unk16 = (p[-0xE] << 8) + p[-0xD];
        STATE->unk18 = (p[-0xC] << 8) + p[-0xB];
        STATE->unk8 = (p[-10] << 8) + p[-9];
        STATE->unk19 = p[-8];
        STATE->unk17 = p[-7];
        STATE->unk39D = p[-6];
        STATE->unkA = (p[-5] << 8) + p[-4];
        STATE->unk1A = p[-3];
        STATE->unk1B = p[-2];
        STATE->unk1C = p[-1];
        STATE->unk1D = p[0];
        STATE->unk18C = STATE->unk6;
    }
    return sp2B;
}
#undef STATE
#undef D_8008DC18
#undef func_80144E68
#undef func_8014B8DC
#undef func_8014C294
#undef func_8014C2A0

#define D_8008DC18 D_8008DC18__func_80141F28
#define D_8014B8DC D_8014B8DC__func_80141F28
#define func_80126968 func_80126968__func_80141F28
#define func_80141268_StructG func_80141268_StructG__func_80141F28
#define func_80144C40 func_80144C40__func_80141F28
#define func_8014C294 func_8014C294__func_80141F28
#define func_8014C2A0 func_8014C2A0__func_80141F28
#define G ((func_80141268_StructG *)&D_801BBBF0)
extern u8 D_8008DC18[];
typedef struct func_80141268_StructG {
    u8 unk0;
    u8 pad1[7];
    u16 unk8;
    u16 unkA;
    u8 padC[0x11];
    u8 unk1D;
} func_80141268_StructG;
#define G ((func_80141268_StructG *)&D_801BBBF0)
extern u8 *func_8014C294(void);
extern s32 func_8014C2A0(void);


typedef struct func_80141F28_Struct {
    u8 pad0[2];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u8 padC[2];
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 unk16;
    u8 unk17;
    s8 unk18;
    s8 unk19;
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
    u8 unk1D;
    u8 pad1E[0x39D - 0x1E];
    u8 unk39D;
} func_80141F28_Struct;
extern void func_80144C40(u8 **);
extern void func_80126968(u8 *, s32);
extern void D_8014B8DC(u8 *);

#undef G
#define G (*(func_80141F28_Struct *)&D_801BBBF0)
#define W (arg0[k++])

#define arg0 ((u8 *)arg)
void func_80141F28(s32 arg) {
    u8 *buf;
    s32 i;
    s32 n;
    u16 sum;
    s32 k;

    for (i = 0; i < 0xD00;) {
        arg0[i++] = 0;
    }
    buf = arg0;
    func_80144C40(&buf);
    buf = D_8008DC18 + 8;
    n = 100;
    k = 0x300;
    for (i = 0; i < n; i++) {
        arg0[k++] = buf[i];
    }
    D_8014B8DC(arg0 + k);
    buf = func_8014C294();
    n = func_8014C2A0();
    for (i = 0; i < n; i++) {
        arg0[k++] = buf[i];
    }
    func_80126968(arg0 + k, n);
    W = G.unk2 >> 8;
    W = G.unk2 & 0xFF;
    W = G.unk4 >> 8;
    W = G.unk4 & 0xFF;
    W = G.unk6 >> 8;
    W = G.unk6 & 0xFF;
    W = G.unkE >> 8;
    W = G.unkE & 0xFF;
    W = G.unk10 >> 8;
    W = G.unk10 & 0xFF;
    W = G.unk12 >> 8;
    W = G.unk12 & 0xFF;
    W = G.unk14 >> 8;
    W = G.unk14 & 0xFF;
    W = G.unk16 >> 8;
    W = G.unk16 & 0xFF;
    W = G.unk18 >> 8;
    W = G.unk18 & 0xFF;
    W = G.unk8 >> 8;
    W = G.unk8 & 0xFF;
    W = G.unk19;
    W = G.unk17;
    W = G.unk39D;
    W = G.unkA >> 8;
    W = G.unkA & 0xFF;
    W = G.unk1A;
    W = G.unk1B;
    W = G.unk1C;
    arg0[k] = G.unk1D;
    sum = 0;
    for (i = 0; i < 0xCFF; i++) {
        sum += arg0[i];
    }
    *(arg0 + i) = sum;
}
#undef W
#undef arg0
#undef D_8008DC18
#undef D_8014B8DC
#undef func_80126968
#undef func_80141268_StructG
#undef func_80144C40
#undef func_8014C294
#undef func_8014C2A0


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

#define func_8001F430 func_8001F430__func_801422E4
#define func_8001F540 func_8001F540__func_801422E4
#define func_80141A74 func_80141A74__func_801422E4

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
#undef func_8001F430
#undef func_8001F540
#undef func_80141A74

#define func_80141BD0 func_80141BD0__func_80142350

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
#undef func_80141BD0


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

#define func_8001F430 func_8001F430__func_801424D0
#define func_8001F540 func_8001F540__func_801424D0
#define func_8014217C func_8014217C__func_801424D0

extern s32 func_8001F430(s32 size);
extern void func_8001F540(s32 ptr);
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
#undef func_8001F430
#undef func_8001F540
#undef func_8014217C

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013E620/_pad_16.s")


/* Original readonly objects; named loads retain their original addresses. */





/* Readonly constants retained after the last ASM donor became C. */

static const unsigned char rodata_8013E620[] = {
    0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA3, 0xD5, 0xA3, 0xF3, 0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xE4, 0xA3, 0xE5, 0xA3, 0xE6, 0xA3, 0xE1,
    0xA3, 0xF5, 0xA3, 0xEC, 0xA3, 0xF4, 0xA1, 0xB8, 0xA3, 0xE4, 0xA3, 0xE1, 0xA3, 0xF4, 0xA3, 0xE1,
    0xA1, 0xA9, 0x00, 0x00, 0xA1, 0xA1, 0xA1, 0xB8, 0xA3, 0xD9, 0xA3, 0xE5, 0xA3, 0xF3, 0x00, 0x00,
    0xA1, 0xA1, 0xA1, 0xB8, 0xA3, 0xCE, 0xA3, 0xEF, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA3, 0xCC, 0xA3, 0xEF, 0xA3, 0xE1, 0xA3, 0xE4, 0xA3, 0xE9, 0xA3, 0xEE, 0xA3, 0xE7, 0xA1, 0xB8,
    0xA3, 0xE4, 0xA3, 0xE5, 0xA3, 0xE6, 0xA3, 0xE1, 0xA3, 0xF5, 0xA3, 0xEC, 0xA3, 0xF4, 0x00, 0x00,
    0xA3, 0xE4, 0xA3, 0xE1, 0xA3, 0xF4, 0xA3, 0xE1, 0xA1, 0xA5, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF,
    0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xE9, 0xA3, 0xF3, 0xA1, 0xB8, 0xA3, 0xEE, 0xA3, 0xEF, 0xA3, 0xF4,
    0xA1, 0xB8, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xEE, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4,
    0xA3, 0xE5, 0xA3, 0xE4, 0xA1, 0xA5, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA3, 0xD0, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xE1, 0xA3, 0xF3, 0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xE3,
    0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xEE, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4, 0x00, 0x00, 0x00, 0x00,
    0xA3, 0xC3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC,
    0xA3, 0xE5, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB, 0xA1, 0xA5, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4,
    0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xD0,
    0xA3, 0xE1, 0xA3, 0xEB, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xE9, 0xA3, 0xF3, 0xA1, 0xB8, 0xA3, 0xEE,
    0xA3, 0xEF, 0xA3, 0xF4, 0xA1, 0xB8, 0xA3, 0xF0, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xF0, 0xA3, 0xE5,
    0xA3, 0xF2, 0xA3, 0xEC, 0xA3, 0xF9, 0x00, 0x00, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xEE,
    0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4, 0xA3, 0xE5, 0xA3, 0xE4, 0xA1, 0xA5, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xD0, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xE1, 0xA3, 0xF3, 0xA3, 0xE5,
    0xA1, 0xB8, 0xA3, 0xF2, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xEE, 0xA3, 0xE5,
    0xA3, 0xE3, 0xA3, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4,
    0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xD0,
    0xA3, 0xE1, 0xA3, 0xEB, 0xA1, 0xA5, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA3, 0xD3, 0xA3, 0xEF, 0xA3, 0xED, 0xA3, 0xE5, 0xA3, 0xF4, 0xA3, 0xE8, 0xA3, 0xE9, 0xA3, 0xEE,
    0xA3, 0xE7, 0xA1, 0xB8, 0xA3, 0xEF, 0xA3, 0xF4, 0xA3, 0xE8, 0xA3, 0xE5, 0xA3, 0xF2, 0x00, 0x00,
    0xA3, 0xF4, 0xA3, 0xE8, 0xA3, 0xE1, 0xA3, 0xEE, 0xA1, 0xB8, 0xA3, 0xE1, 0xA1, 0xB8, 0xA3, 0xC3,
    0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5,
    0xA3, 0xF2, 0x00, 0x00, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB, 0xA1, 0xB8, 0xA3, 0xE9, 0xA3, 0xF3,
    0xA1, 0xB8, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xEE, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4,
    0xA3, 0xE5, 0xA3, 0xE4, 0xA1, 0xA5, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xD2, 0xA3, 0xF5,
    0xA3, 0xED, 0xA3, 0xE2, 0xA3, 0xEC, 0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xE9, 0xA3, 0xF3, 0xA1, 0xB8, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xEE,
    0xA3, 0xEE, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4, 0xA3, 0xE5, 0xA3, 0xE4, 0xA1, 0xA5, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xD4, 0xA3, 0xE8, 0xA3, 0xE5, 0xA3, 0xF2,
    0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xE9, 0xA3, 0xF3, 0xA1, 0xB8, 0xA3, 0xE1, 0x00, 0x00, 0x00, 0x00,
    0xA3, 0xF0, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xE2, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xED, 0xA1, 0xB8,
    0xA3, 0xF7, 0xA3, 0xE9, 0xA3, 0xF4, 0xA3, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xF4, 0xA3, 0xE8,
    0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF,
    0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xEF, 0xA3, 0xF2, 0x00, 0x00,
    0xA3, 0xC3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC,
    0xA3, 0xE5, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB, 0xA1, 0xA5, 0x00, 0x00,
    0xA3, 0xD2, 0xA3, 0xE5, 0xA3, 0xF0, 0xA3, 0xE1, 0xA3, 0xE9, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xC3,
    0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5,
    0xA3, 0xF2, 0x00, 0x00, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB, 0xA1, 0xA9, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xA1, 0xA1, 0xB8, 0xA3, 0xD2, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xEE,
    0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4, 0x00, 0x00, 0xA1, 0xA1, 0xA1, 0xB8, 0xA3, 0xD2, 0xA3, 0xE5,
    0xA3, 0xF0, 0xA3, 0xE1, 0xA3, 0xE9, 0xA3, 0xF2, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xC4, 0xA3, 0xE1,
    0xA3, 0xF4, 0xA3, 0xE1, 0xA1, 0xB8, 0xA3, 0xED, 0xA3, 0xE1, 0xA3, 0xF9, 0xA1, 0xB8, 0xA3, 0xE2,
    0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xEC, 0xA3, 0xEF, 0xA3, 0xF3, 0xA3, 0xF4, 0x00, 0x00, 0x00, 0x00,
    0xA3, 0xF7, 0xA3, 0xE8, 0xA3, 0xE5, 0xA3, 0xEE, 0xA1, 0xB8, 0xA3, 0xF2, 0xA3, 0xE5, 0xA3, 0xF0,
    0xA3, 0xE1, 0xA3, 0xE9, 0xA3, 0xF2, 0xA3, 0xE9, 0xA3, 0xEE, 0xA3, 0xE7, 0xA1, 0xA5, 0x00, 0x00,
    0xA1, 0xA1, 0xA1, 0xB8, 0xA3, 0xC4, 0xA3, 0xEF, 0xA3, 0xEE, 0xA1, 0xAD, 0xA3, 0xF4, 0xA1, 0xB8,
    0xA3, 0xF2, 0xA3, 0xE5, 0xA3, 0xF0, 0xA3, 0xE1, 0xA3, 0xE9, 0xA3, 0xF2, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xA1, 0xA1, 0xB8, 0xA3, 0xD2, 0xA3, 0xE5, 0xA3, 0xF0, 0xA3, 0xE1, 0xA3, 0xE9, 0xA3, 0xF2,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xD4, 0xA3, 0xE8, 0xA3, 0xE5, 0xA3, 0xF2, 0xA3, 0xE5, 0xA1, 0xB8,
    0xA3, 0xE9, 0xA3, 0xF3, 0xA1, 0xB8, 0xA3, 0xEE, 0xA3, 0xEF, 0x00, 0x00, 0xA3, 0xC8, 0xA3, 0xF9,
    0xA3, 0xE2, 0xA3, 0xF2, 0xA3, 0xE9, 0xA3, 0xE4, 0xA1, 0xB8, 0xA3, 0xC8, 0xA3, 0xE5, 0xA3, 0xE1,
    0xA3, 0xF6, 0xA3, 0xE5, 0xA3, 0xEE, 0x00, 0x00, 0xA3, 0xE7, 0xA3, 0xE1, 0xA3, 0xED, 0xA3, 0xE5,
    0xA1, 0xB8, 0xA3, 0xEE, 0xA3, 0xEF, 0xA3, 0xF4, 0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xE9, 0xA3, 0xEE,
    0xA1, 0xB8, 0xA3, 0xF4, 0xA3, 0xE8, 0xA3, 0xE5, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xEF,
    0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF2,
    0xA1, 0xB8, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB, 0xA1, 0xA5, 0x00, 0x00, 0xA3, 0xD0, 0xA3, 0xEC,
    0xA3, 0xE5, 0xA3, 0xE1, 0xA3, 0xF3, 0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xF5, 0xA3, 0xF3, 0xA3, 0xE5,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xE1, 0xA3, 0xEE, 0xA3, 0xEF, 0xA3, 0xF4, 0xA3, 0xE8, 0xA3, 0xE5,
    0xA3, 0xF2, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xEF, 0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF,
    0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF2, 0xA1, 0xB8, 0xA3, 0xD0, 0xA3, 0xE1, 0xA3, 0xEB,
    0xA1, 0xA5, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xCE, 0xA3, 0xEF, 0xA1, 0xB8, 0xA3, 0xF0,
    0xA3, 0xEC, 0xA3, 0xE1, 0xA3, 0xF9, 0xA1, 0xB8, 0xA3, 0xE4, 0xA3, 0xE1, 0xA3, 0xF4, 0xA3, 0xE1,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xE5, 0xA3, 0xF8, 0xA3, 0xE9, 0xA3, 0xF3, 0xA3, 0xF4, 0xA3, 0xF3,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xF4, 0xA3, 0xEF, 0xA1, 0xB8, 0xA3, 0xE2, 0xA3, 0xE5, 0xA1, 0xB8,
    0xA3, 0xEC, 0xA3, 0xEF, 0xA3, 0xE1, 0xA3, 0xE4, 0xA3, 0xE5, 0xA3, 0xE4, 0xA1, 0xA5, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xD3, 0xA3, 0xE5, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4,
    0xA1, 0xB8, 0xA3, 0xF0, 0xA3, 0xEC, 0xA3, 0xE1, 0xA3, 0xF9, 0xA1, 0xB8, 0xA3, 0xE4, 0xA3, 0xE1,
    0xA3, 0xF4, 0xA3, 0xE1, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xF4, 0xA3, 0xEF, 0xA1, 0xB8, 0xA3, 0xE2,
    0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xEC, 0xA3, 0xEF, 0xA3, 0xE1, 0xA3, 0xE4, 0xA3, 0xE5, 0xA3, 0xE4,
    0xA1, 0xA5, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xCE, 0xA3, 0xEF,
    0xA1, 0xB8, 0xA3, 0xE4, 0xA3, 0xE1, 0xA3, 0xF4, 0xA3, 0xE1, 0xA1, 0xB8, 0xA3, 0xF3, 0xA3, 0xE1,
    0xA3, 0xF6, 0xA3, 0xE5, 0xA3, 0xE4, 0xA1, 0xA5, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xCC, 0xA3, 0xEF, 0xA3, 0xE1, 0xA3, 0xE4,
    0xA1, 0xB8, 0xA3, 0xE4, 0xA3, 0xE1, 0xA3, 0xF4, 0xA3, 0xE1, 0xA1, 0xA9, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xA1, 0xA1, 0xB8, 0xA3, 0xD9, 0xA3, 0xE5, 0xA3, 0xF3, 0x00, 0x00, 0xA1, 0xA1, 0xA1, 0xB8,
    0xA3, 0xCE, 0xA3, 0xEF, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xEF,
    0xA3, 0xF5, 0xA3, 0xEC, 0xA3, 0xE4, 0xA1, 0xB8, 0xA3, 0xEE, 0xA3, 0xEF, 0xA3, 0xF4, 0xA1, 0xB8,
    0xA3, 0xEC, 0xA3, 0xEF, 0xA3, 0xE1, 0xA3, 0xE4, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xE4, 0xA3, 0xE1,
    0xA3, 0xF4, 0xA3, 0xE1, 0xA1, 0xA5, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA3, 0xCC, 0xA3, 0xEF, 0xA3, 0xE1, 0xA3, 0xE4, 0xA1, 0xB8, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xED,
    0xA3, 0xF0, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF4, 0xA3, 0xE5, 0xA3, 0xE4, 0xA1, 0xA5, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xD0, 0xA3, 0xEC,
    0xA3, 0xE5, 0xA3, 0xE1, 0xA3, 0xF3, 0xA3, 0xE5, 0xA1, 0xB8, 0xA3, 0xF7, 0xA3, 0xE1, 0xA3, 0xE9,
    0xA3, 0xF4, 0xA1, 0xA5, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0xA3, 0xD4, 0xA3, 0xF5, 0xA3, 0xF2, 0xA3, 0xEE, 0xA1, 0xB8, 0xA3, 0xEF,
    0xA3, 0xE6, 0xA3, 0xE6, 0xA1, 0xB8, 0xA3, 0xF0, 0xA3, 0xEF, 0xA3, 0xF7, 0xA3, 0xE5, 0xA3, 0xF2,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xE1, 0xA3, 0xEE, 0xA3, 0xE4, 0xA1, 0xB8, 0xA3, 0xE3, 0xA3, 0xEF,
    0xA3, 0xEE, 0xA3, 0xEE, 0xA3, 0xE5, 0xA3, 0xE3, 0xA3, 0xF4, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xEF,
    0xA3, 0xEE, 0xA3, 0xF4, 0xA3, 0xF2, 0xA3, 0xEF, 0xA3, 0xEC, 0xA3, 0xEC, 0xA3, 0xE5, 0xA3, 0xF2,
    0xA1, 0xB8, 0xA3, 0xF4, 0xA3, 0xEF, 0x00, 0x00, 0xA3, 0xF3, 0xA3, 0xEF, 0xA3, 0xE3, 0xA3, 0xEB,
    0xA3, 0xE5, 0xA3, 0xF4, 0xA1, 0xB8, 0xA3, 0xB2, 0xA1, 0xA5, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x73,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x73,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0xA1, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0xA1, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xA1, 0x00, 0x00,
    0xA1, 0xA1, 0x00, 0x00, 0x70, 0x78, 0x20, 0x70, 0x79, 0x20, 0x73, 0x78, 0x20, 0x73, 0x79, 0x20,
    0x73, 0x66, 0x20, 0x77, 0x72, 0x20, 0x77, 0x67, 0x20, 0x77, 0x62, 0x20, 0x77, 0x61, 0x20, 0x66,
    0x72, 0x20, 0x66, 0x67, 0x20, 0x66, 0x62, 0x20, 0x66, 0x61, 0x00, 0x00, 0x70, 0x78, 0x20, 0x70,
    0x79, 0x20, 0x73, 0x78, 0x20, 0x73, 0x79, 0x20, 0x73, 0x66, 0x20, 0x77, 0x72, 0x20, 0x77, 0x67,
    0x20, 0x77, 0x62, 0x20, 0x77, 0x61, 0x20, 0x66, 0x72, 0x20, 0x66, 0x67, 0x20, 0x66, 0x62, 0x20,
    0x66, 0x61, 0x00, 0x00, 0x70, 0x78, 0x20, 0x70, 0x79, 0x20, 0x73, 0x78, 0x20, 0x73, 0x79, 0x20,
    0x73, 0x66, 0x20, 0x77, 0x72, 0x20, 0x77, 0x67, 0x20, 0x77, 0x62, 0x20, 0x77, 0x61, 0x20, 0x66,
    0x72, 0x20, 0x66, 0x67, 0x20, 0x66, 0x62, 0x20, 0x66, 0x61, 0x00, 0x00, 0x25, 0x6D, 0xA1, 0xA1,
    0xA1, 0xA1, 0xA3, 0xCD, 0xA3, 0xC1, 0xA3, 0xD3, 0xA3, 0xD4, 0xA3, 0xC5, 0xA3, 0xD2, 0x25, 0x6D,
    0xA1, 0xA1, 0xA3, 0xB1, 0xA3, 0xD0, 0x25, 0x6D, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1,
    0xA1, 0xA1, 0xA3, 0xD3, 0xA3, 0xCC, 0xA3, 0xC1, 0xA3, 0xD6, 0xA3, 0xC5, 0x25, 0x6D, 0xA1, 0xA1,
    0xA3, 0xB1, 0xA3, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0xA1, 0xA1, 0xA1, 0xA1, 0xA3, 0xCD,
    0xA3, 0xC1, 0xA3, 0xD3, 0xA3, 0xD4, 0xA3, 0xC5, 0xA3, 0xD2, 0x25, 0x6D, 0xA1, 0xA1, 0xA3, 0xB1,
    0xA3, 0xD0, 0x25, 0x6D, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA3, 0xD3,
    0xA3, 0xCC, 0xA3, 0xC1, 0xA3, 0xD6, 0xA3, 0xC5, 0x25, 0x6D, 0xA1, 0xA1, 0xA3, 0xB2, 0xA3, 0xD0,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0xA1, 0xA1, 0xA1, 0xA1, 0xA3, 0xCD, 0xA3, 0xC1, 0xA3, 0xD3,
    0xA3, 0xD4, 0xA3, 0xC5, 0xA3, 0xD2, 0x25, 0x6D, 0xA1, 0xA1, 0xA3, 0xB2, 0xA3, 0xD0, 0x25, 0x6D,
    0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA3, 0xD3, 0xA3, 0xCC, 0xA3, 0xC1,
    0xA3, 0xD6, 0xA3, 0xC5, 0x25, 0x6D, 0xA1, 0xA1, 0xA3, 0xB1, 0xA3, 0xD0, 0x00, 0x00, 0x00, 0x00,
    0x25, 0x6D, 0xA1, 0xA1, 0xA1, 0xA1, 0xA3, 0xCD, 0xA3, 0xC1, 0xA3, 0xD3, 0xA3, 0xD4, 0xA3, 0xC5,
    0xA3, 0xD2, 0x25, 0x6D, 0xA1, 0xA1, 0xA3, 0xB2, 0xA3, 0xD0, 0x25, 0x6D, 0xA1, 0xA1, 0xA1, 0xA1,
    0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA3, 0xD3, 0xA3, 0xCC, 0xA3, 0xC1, 0xA3, 0xD6, 0xA3, 0xC5,
    0x25, 0x6D, 0xA1, 0xA1, 0xA3, 0xB2, 0xA3, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 0x20, 0x70,
    0x79, 0x20, 0x73, 0x78, 0x20, 0x73, 0x79, 0x20, 0x73, 0x66, 0x20, 0x77, 0x72, 0x20, 0x77, 0x67,
    0x20, 0x77, 0x62, 0x20, 0x77, 0x61, 0x20, 0x66, 0x72, 0x20, 0x66, 0x67, 0x20, 0x66, 0x62, 0x20,
    0x66, 0x61, 0x00, 0x00, 0x70, 0x78, 0x20, 0x70, 0x79, 0x20, 0x73, 0x78, 0x20, 0x73, 0x79, 0x20,
    0x73, 0x66, 0x20, 0x77, 0x72, 0x20, 0x77, 0x67, 0x20, 0x77, 0x62, 0x20, 0x77, 0x61, 0x20, 0x66,
    0x72, 0x20, 0x66, 0x67, 0x20, 0x66, 0x62, 0x20, 0x66, 0x61, 0x00, 0x00,
};
/* hh-owned-pool func_8013E850 8018EF0C 8018EF24 */
/* hh-owned-pool func_801403F8 8018F04C 8018F064 */
/* hh-owned-pool func_801406A4 8018F064 8018F090 */
