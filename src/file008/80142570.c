#include "common.h"


extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8001B204();
extern u8 D_8018F0F0[];
extern u8 D_8018F0F4[];
extern u8 D_8018F11C[];
extern u8 D_8018F144[];

void func_80142570(void) {
    s32 i;

    for (i = 0; i < 0x1C; i++) {
        func_8001B204(i & 0xFF, 0, 0, D_8018F0F0);
    }
    for (i = 0; i < 8; i++) {
        func_8001A804(i & 0xFF, D_8018F0F4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    func_8001A804(8, D_8018F11C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8001A804(9, D_8018F144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}



extern u8 D_8018F16C[];
extern u8 D_8018F184[];
extern u8 D_8018F194[];

void func_801426B0(void) {
    func_80142570();
    func_8001B204(7, 0x7D0, 0x1C, D_8018F16C, 3);
    func_8001B204(0xB, 0x26, 0x30, D_8018F184);
    func_8001A804(6, D_8018F194, 0x20, 0x42, 0x7A, 0x5C, 1, 0x40, 0x40, 0x40, 0x80, 0x90, 0x90, 0x90, 0x80);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80142778.s")


extern u8 D_8018F20C[];
extern u8 D_8018F230[];
extern u8 D_8018F254[];
extern u8 D_8018F27C[];
extern u8 D_8018F2A4[];
extern u8 D_8018F2CC[];

void func_80142840(void) {
    func_80142570();
    func_8001B204(7, 0x7D0, 0x1C, D_8018F20C, 3);
    func_8001B204(0xB, 0x26, 0x30, D_8018F230);
    func_8001A804(6, D_8018F254, 0x20, 0x42, 0x7A, 0x5C, 1, 0x40, 0x40, 0x40, 0x80, 0x90, 0x90, 0x90, 0x80);
    func_8001A804(7, D_8018F27C, 0xA6, 0x42, 0x7A, 0x5C, 1, 0x40, 0x40, 0x40, 0x80, 0x90, 0x90, 0x90, 0x80);
    func_8001A804(0, D_8018F2A4, 0x20, 0xA6, 0x7A, 0x35, 1, 0x40, 0x40, 0x40, 0x80, 0xC0, 0xC0, 0xC0, 0xC0);
    func_8001A804(8, D_8018F2CC, 0xA6, 0xA6, 0x7A, 0x35, 1, 0x40, 0x40, 0x40, 0x80, 0xC0, 0xC0, 0xC0, 0xC0);
}



extern u8 D_8018F2F4[];
extern u8 D_8018F30C[];
extern u8 D_8018F33C[];

void func_80142A58(void) {
    func_80142570();
    func_8001B204(7, 0x7D0, 0x1C, D_8018F2F4, 3);
    func_8001B204(0xB, 0x26, 0x30, D_8018F30C, 1);
    func_8001A804(6, D_8018F33C, 0x20, 0x42, 0x7A, 0x5C, 1, 0x40, 0x40, 0x40, 0x80, 0x90, 0x90, 0x90, 0x80);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80142B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80142C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80142F2C.s")


extern u8 D_8018F46C[];
extern u8 D_8018F478[];
extern u8 D_8018F484[];
extern u8 D_8018F490[];

void func_80142FC4(void) {
    extern void func_8001A804();

    func_8001A804(1, D_8018F46C, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F478, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F484, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F490, 0x80, 0x80, 0x80, 0x80);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_8014307C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_801439C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80143AC4.s")


s32 func_80143D38();
s32 func_80143F5C();
s32 func_8014418C();
s32 func_801443B0();
extern u8 D_801BEC50;

u8 func_80143B5C(void) {
    u8 var_v1;

    var_v1 = 0;
    if (D_801BEC50 == 0) {
        goto case0;
    }
    if (D_801BEC50 == 1) {
        goto case1;
    }
    if (D_801BEC50 == 2) {
        goto case2;
    }
    if (D_801BEC50 != 3) {
        goto done;
    }
    goto case3;
case0:
    if (func_80143D38() != 0) {
        var_v1 = 1;
    }
    goto done;
case1:
    if (func_80143F5C() != 0) {
        var_v1 = 1;
    }
    goto done;
case2:
    if (func_8014418C() != 0) {
        var_v1 = 1;
    }
    goto done;
case3:
    if (func_801443B0() != 0) {
        var_v1 = 1;
    }
done:
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80143C08.s")


typedef struct func_80143D38_StructWords {
    s32 w0;
    s32 w1;
    s32 w2;
} func_80143D38_StructWords;

extern func_80143D38_StructWords D_801814EC;
extern s16 D_801BEC52;
void func_801444B0(s32 a0);
void func_80144A4C(s32 a0, s16 a1, s16 a2, s32 a3, s32 a4);

s32 func_80143D38(void) {
    union {
        func_80143D38_StructWords w;
        s16 h[6];
    } sp;

    sp.w = D_801814EC;
    D_801BEC52 += 8;
    func_80144A4C(5, sp.h[0], (s16) (sp.h[1] - D_801BEC52), 0x42, 0x9E);
    func_80144A4C(1, sp.h[2], (s16) (sp.h[3] - D_801BEC52), 0x42, 0x9E);
    func_80144A4C(2, sp.h[4], (s16) (sp.h[5] - D_801BEC52), 0x42, 0x9E);
    if (D_801BEC52 >= 0x2E) {
        func_801444B0(5);
        return 1;
    }
    return 0;
}


typedef struct func_80143E38_StructHalves {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s32 pad;
} func_80143E38_StructHalves;

typedef struct func_80143E38_StructWords {
    s32 w0;
    s32 w1;
    s32 w2;
} func_80143E38_StructWords;

extern func_80143E38_StructWords D_801814F8;
extern void func_8014456C(s32 a0, s16 a1, s16 a2, u8 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

void func_80143E38(u8 *arg0) {
    func_80143E38_StructHalves sp38;

    *(func_80143E38_StructWords *) &sp38 = D_801814F8;
    D_801BEC52 = 6;
    func_8014456C(1, sp38.x0, sp38.y0, arg0[0], arg0[2], arg0[3], ((u16 *) arg0)[2], arg0[6], arg0[7]);
    func_80144A4C(1, sp38.x0, sp38.y0, 0x42, 0x9E);
    func_8014456C(2, sp38.x1, sp38.y1, arg0[8], arg0[0xA], arg0[0xB], ((u16 *) arg0)[6], arg0[0xE], arg0[0xF]);
    func_8014456C(5, sp38.x2, sp38.y2, arg0[0x10], arg0[0x12], arg0[0x13], ((u16 *) arg0)[10], arg0[0x16], arg0[0x17]);
}


typedef struct func_80143F5C_Struct {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
} func_80143F5C_Struct;

extern func_80143F5C_Struct D_80181504;

s32 func_80143F5C(void) {
    func_80143F5C_Struct sp;
    s32 var_v0;

    sp = D_80181504;
    D_801BEC52 += 8;
    func_80144A4C(1, sp.x0, (s16) (sp.y0 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(2, sp.x1, (s16) (sp.y1 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(5, sp.x2, (s16) (sp.y2 + D_801BEC52), 0x42, 0x9E);
    var_v0 = 0;
    if (D_801BEC52 >= 0x2E) {
        func_801444B0(5);
        return 1;
    }
    return var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_8014405C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_8014418C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_8014428C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_801443B0.s")


extern u8 D_8018F624[];
extern u8 D_8018F634[];
extern u8 D_8018F638[];
extern u8 D_8018F63C[];
extern u8 D_8018F640[];

void func_801444B0(s32 a0) {
    s32 temp_s0;
    u8 *arg;
    extern void func_8001A804();

    arg = (u8 *) &a0 + 3;
    func_8001A804(*arg, D_8018F624, 0, 0, 0, 0, 0);
    temp_s0 = *arg * 4;
    func_8001B204(temp_s0 & 0xFF, 0, 0, D_8018F634);
    func_8001B204((temp_s0 + 1) & 0xFF, 0, 0, D_8018F638);
    func_8001B204((temp_s0 + 2) & 0xFF, 0, 0, D_8018F63C);
    func_8001B204((temp_s0 + 3) & 0xFF, 0, 0, D_8018F640);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_8014456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80144A4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80144C40.s")


typedef struct { u8 b[0x9C]; u16 h; } func_80144E68_StructA;
typedef struct { u8 b[7]; } func_80144E68_StructB;
typedef struct { u8 a; u8 pad; u16 h; u8 c; u8 pad2; } func_80144E68_StructC;
typedef struct { u8 pad[4]; u8 b; u8 pad2[3]; } func_80144E68_StructD;
typedef struct { u8 pad[2]; u8 b; } func_80144E68_StructE;

extern u8 D_8017DC40[];
extern u8 D_8017DD7C[];
extern func_80144E68_StructB D_8017DF14[];
extern func_80144E68_StructD D_8017E004[];
extern func_80144E68_StructC D_80183CE0[];

void func_80144E68(u8 **arg0) {
    u8 i;
    u8 *p;

    *(func_80144E68_StructA *)D_8017DC40 = *(func_80144E68_StructA *)*arg0;
    *arg0 += 0x9E;
    for (i = 0; i < 0x56; i++) {
        D_80183CE0[i].a = *(*arg0)++;
        D_80183CE0[i].h = *(*arg0)++;
        D_80183CE0[i].c = *(*arg0)++;
    }
    for (i = 0; i < 0x2D; i++) {
        D_8017E004[i].b = *(*arg0)++;
    }
    for (i = 0; i < 3; i++) {
        D_8017DF14[i] =*(func_80144E68_StructB *)*arg0;
        *arg0 += 7;
    }
    for (i = 0; i < 6; i++) {
        p = D_8017DD7C + i;
        p[2] = *(*arg0)++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80142570/func_80145014.s")

