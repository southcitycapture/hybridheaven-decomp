#include "common.h"

typedef struct func_801CA640_Struct { u8 a; u8 p1; u16 b; u8 c; u8 d; u8 e; u8 p2; } func_801CA640_Struct;
typedef struct func_801CA640_Struct2 { func_801CA640_Struct e[11]; } func_801CA640_Struct2;
extern func_801CA640_Struct2 D_801CE384;
extern void func_8012FE50(s32, s32, s32, s32, s32);
typedef struct func_801CA640_Arg { u8 pad[0x2C]; u8 unk2C; } func_801CA640_Arg;

void func_801CA640(func_801CA640_Arg *arg0) {
    func_801CA640_Struct *p;
    func_801CA640_Struct2 sp;
    u8 i;
    sp = D_801CE384;
    i = arg0->unk2C;
    p = &sp.e[i];
    func_8012FE50(p->a, p->b, p->c, p->d, p->e);
}


typedef struct func_801CA6C8_Struct {
    u8 pad0[0x26];
    u8 unk26;
    u8 pad27;
    s16 unk28;
    s16 unk2A;
} func_801CA6C8_Struct;

extern void func_8001B194(u8, s16, s16, s32);
extern void func_8001B204(u8, s16, s16, void *, ...);
extern u8 D_801CF620[];

void func_801CA6C8(func_801CA6C8_Struct *arg0, s16 arg1, u8 arg2) {
    s16 temp_s0;
    s32 var_a3;

    temp_s0 = arg0->unk2A + arg1 + 0x78;
    if ((temp_s0 < 0x6B) || (temp_s0 >= 0xBA)) {
        func_8001B204(arg0->unk26, 0, 0, D_801CF620);
        return;
    }
    func_8001B204(arg0->unk26, arg0->unk28, temp_s0, (void *) ((u8 *) arg0 + 8), 0, (s32) arg2);
    var_a3 = 0;
    if (temp_s0 < 0x78) {
        var_a3 = (temp_s0 - 0x78) & 0xFF;
    }
    if ((temp_s0 + 0xD) >= 0xBA) {
        var_a3 = (temp_s0 - 0xAC) & 0xFF;
    }
    func_8001B194(arg0->unk26, arg0->unk28, temp_s0, var_a3);
}

extern void func_800058DC();
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80116E80(s32);
extern void func_80126930(s32);

extern void func_80002364();
extern u8 D_801CF624[];
extern s16 D_801CFDE4;
extern s8 D_801CFDE0;
extern s8 D_801CFDE1;
extern s8 D_801CFDE2;
extern void func_801CA874();

void func_801CA7A4(s32 arg0, s32 arg1) {
    func_80126930(0);
    D_801CFDE4 = 0;
    D_801CFDE0 = 0;
    D_801CFDE1 = 0;
    D_801CFDE2 = 0;
    func_80116E80(0x100);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_8001A804(0, D_801CF624, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CA874);
}


typedef struct func_801CA874_Struct {
    u8 pad0[0x28];
    s16 unk28;
} func_801CA874_Struct;

extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_801CF64C[];
extern void func_801CAA20();

void func_801CA874(s32 arg0, func_801CA874_Struct **arg1) {
    u8 sp67;
    u8 i;
    func_801CA874_Struct *p;

    i = 0;
    do {
        func_80146208(arg0, &sp67, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x20, 0x40, 0, 0, 0, 0x228, i);
        func_80145348(arg0, 0xD, 0xD);
        i++;
    } while (i < 8);
    func_80146208(arg0, &sp67, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x10, 0x40, 0, 0, 0, 0x228, i);
    func_80145348(arg0, 0xD, 0xD);
    for (i = 0; i < 9; i++) {
        arg1[i]->unk28 = 0x100;
    }
    func_8001A804(0, D_801CF64C, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CAA20);
}


extern u8 D_801BBBF0[];
extern void func_801CAA68();

void func_801CAA20(s32 arg0, s32 arg1) {
    if (D_801BBBF0[0x164] == 0 && D_801BBBF0[0x17E] == 8) {
        func_800058DC(arg0, func_801CAA68);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAA68.s")


void func_801CACE4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_800023A8();
extern u8 D_801BBF0A[];
extern u8 D_801CE3DC[];

void func_801CACF0(s32 arg0, s32 arg1) {
    u8 *temp;
    s32 idx;

    idx = (u8)D_801CFDE0;
    if (idx == 0) {
        D_801BBF0A[0x33] = 0;
    } else {
        D_801BBF0A[0x33] = 1;
    }
    temp = D_801CE3DC + idx * 0x30;
    (*(void (**)())(temp + 4))(temp);
    func_800023A8(0);
    func_800058DC(arg0, func_801CACE4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAD70.s")


extern u8 D_801BBCDC[];
extern u8 D_801CFDF0[];
extern u8 D_801CFDF3;
extern u8 D_801CFDF4;
extern u8 func_801CAEEC[];
extern void func_80005700();

void func_801CAE00(s32 arg0, s32 arg1) {
    u8 i;
    s32 r;

    for (i = 0; i < 3; i++) {
        D_801CFDF0[i] = 0;
    }
    D_801BBCDC[0xB] = 0;
    r = func_8013E620();
    if (r != 0) {
        r &= 0xF;
        if (r & 2) {
            D_801CFDF3 = 1;
        } else {
            D_801CFDF3 = 0;
        }
        if (r & 4) {
            D_801CFDF4 = 1;
        } else {
            D_801CFDF4 = 0;
        }
        if (D_801CFDF3 | D_801CFDF4) {
            func_800058DC(arg0, func_801CAEEC);
            return;
        }
        func_80005700(arg0);
        return;
    }
    func_80005700(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAEEC.s")


extern u8 D_801CF738[];
extern void func_801CB0D0();

void func_801CB038(s32 arg0, s32 arg1) {
    func_80126930(0);
    func_80116E80(0x100);
    func_8001A804(0, D_801CF738, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CB0D0);
}


typedef struct func_801CB0D0_Struct {
    u8 pad0[0x28];
    s16 unk28;
} func_801CB0D0_Struct;

extern u8 D_801CF760[];
extern void func_801CB27C();

void func_801CB0D0(s32 arg0, func_801CB0D0_Struct **arg1) {
    u8 sp67;
    u8 i;
    func_801CB0D0_Struct *p;

    i = 0;
    do {
        func_80146208(arg0, &sp67, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x20, 0x40, 0, 0, 0, 0x228, i);
        func_80145348(arg0, 0xD, 0xD);
        i++;
    } while (i < 8);
    func_80146208(arg0, &sp67, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x10, 0x40, 0, 0, 0, 0x228, i);
    func_80145348(arg0, 0xD, 0xD);
    for (i = 0; i < 9; i++) {
        arg1[i]->unk28 = 0x100;
    }
    func_8001A804(0, D_801CF760, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CB27C);
}

extern s32 func_8013E620();
void func_801CB550(s32 arg0, s32 arg1);
extern u8 D_801BBC0D;
extern u8 D_801CF788[], D_801CF79C[], D_801CF7C4[], D_801CF7E0[], D_801CF7F8[], D_801CF810[], D_801CF824[], D_801CF840[], D_801CF85C[], D_801CF878[], D_801CF894[], D_801CF8B4[], D_801CF8D0[], D_801CF8F4[], D_801CF910[];

void func_801CB27C(s32 arg0, s32 arg1) {
    s32 sp4C;

    if (D_801BBBF0[0x164] == 0 && D_801BBBF0[0x17E] == 8) {
        sp4C = func_8013E620() & 0xF;
        func_8001B204(0, 0x7D0, 0x50, D_801CF788, 4);
        func_8001A804(0, D_801CF79C, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0x80, 0, 0, 0, 0x80);
        if (D_801BBC0D == 0) goto c0;
        if (D_801BBC0D == 1) goto c1;
        if (D_801BBC0D != 2) goto end;
        goto c2;
    c0:
        func_8001B204(1, 0x7D0, 0x82, D_801CF7C4, 4);
        func_8001B204(2, 0x7D0, 0x96, D_801CF7E0, 4);
        goto end;
    c1:
        if (sp4C & 2) {
            func_8001B204(1, 0x7D0, 0x6E, D_801CF7F8, 4);
            func_8001B204(2, 0x7D0, 0x82, D_801CF810, 4);
            func_8001B204(3, 0x7D0, 0x96, D_801CF824, 4);
            func_8001B204(4, 0x7D0, 0xAA, D_801CF840, 4);
        } else {
            func_8001B204(1, 0x7D0, 0x82, D_801CF85C, 4);
            func_8001B204(2, 0x7D0, 0x96, D_801CF878, 4);
        }
        goto end;
    c2:
        if (sp4C & 4) {
            func_8001B204(1, 0x7D0, 0x78, D_801CF894, 4);
            func_8001B204(2, 0x7D0, 0x96, D_801CF8B4, 4);
            func_8001B204(3, 0x7D0, 0xAA, D_801CF8D0, 4);
        } else {
            func_8001B204(1, 0x7D0, 0x82, D_801CF8F4, 4);
            func_8001B204(2, 0x7D0, 0x96, D_801CF910, 4);
        }
    end:
        func_800058DC(arg0, func_801CB550);
    }
}


extern u16 D_80089474[];

void func_801CB550(s32 arg0, s32 arg1) {
    if (D_80089474[2] & 0xB000) {
        func_8012FE50(0x17, 0x73, 1, 1, 0);
    }
}

