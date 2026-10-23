#include "common.h"


extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001B204();
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



extern u8 D_8018F1BC[];
extern u8 D_8018F1D4[];
extern u8 D_8018F1E4[];

void func_80142778(void) {
    func_80142570();
    func_8001B204(7, 0x7D0, 0x1C, D_8018F1BC, 3);
    func_8001B204(0xB, 0x26, 0x30, D_8018F1D4);
    func_8001A804(6, D_8018F1E4, 0x20, 0x42, 0x7A, 0x5C, 1, 0x40, 0x40, 0x40, 0x80, 0x90, 0x90, 0x90, 0x80);
}


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

struct func_80142B28_Struct { u8 b[4]; };
extern struct func_80142B28_Struct D_801814B0;
extern u8 D_8018F364[], D_8018F370[], D_8018F37C[], D_8018F388[];

void func_80142B28(u8 arg0, u8 arg1) {
    struct func_80142B28_Struct sp2C;
    extern void func_8001A804();

    sp2C = D_801814B0;
    if (arg1 == 0) {
        func_8001A804(sp2C.b[(arg0 & 1) * 2], D_8018F364, 0, 0xFF, 0, 0xFF);
    } else {
        func_8001A804(sp2C.b[(arg0 & 1) * 2], D_8018F370, 0x80, 0x80, 0x80, 0x80);
    }
    if (arg1 == 1) {
        func_8001A804(sp2C.b[(arg0 & 1) * 2 + 1], D_8018F37C, 0, 0xFF, 0, 0xFF);
        return;
    }
    func_8001A804(sp2C.b[(arg0 & 1) * 2 + 1], D_8018F388, 0x80, 0x80, 0x80, 0x80);
}


extern u8 D_8018F394[], D_8018F3A0[], D_8018F3AC[], D_8018F3B8[], D_8018F3C4[], D_8018F3D0[], D_8018F3DC[], D_8018F3E8[];
extern u8 D_8018F3F4[], D_8018F400[], D_8018F40C[], D_8018F418[], D_8018F424[], D_8018F430[], D_8018F43C[], D_8018F448[];

void func_80142C50(u8 arg0, u8 arg1) {
    s32 v;
    extern void func_8001A804();
    v = arg0 * 2 + arg1;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v != 3) goto end;
    goto c3;
c0:
    func_8001A804(1, D_8018F394, 0, 0xFF, 0, 0xFF);
    func_8001A804(2, D_8018F3A0, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F3AC, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F3B8, 0x80, 0x80, 0x80, 0x80);
    goto end;
c1:
    func_8001A804(1, D_8018F3C4, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F3D0, 0, 0xFF, 0, 0xFF);
    func_8001A804(3, D_8018F3DC, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F3E8, 0x80, 0x80, 0x80, 0x80);
    goto end;
c2:
    func_8001A804(1, D_8018F3F4, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F400, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F40C, 0, 0xFF, 0, 0xFF);
    func_8001A804(4, D_8018F418, 0x80, 0x80, 0x80, 0x80);
    goto end;
c3:
    func_8001A804(1, D_8018F424, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F430, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F43C, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F448, 0, 0xFF, 0, 0xFF);
end:
    return;
}

typedef struct func_80142F2C_Struct { u8 b[2][2]; } func_80142F2C_Struct;
extern func_80142F2C_Struct D_801814B4;
extern u8 D_8018F454[];
extern u8 D_8018F460[];

void func_80142F2C(u8 arg0) {
    extern void func_8001A804();
    func_80142F2C_Struct sp24;

    sp24 = D_801814B4;
    func_8001A804(sp24.b[arg0 & 1][0], D_8018F454, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(sp24.b[arg0 & 1][1], D_8018F460, 0x80, 0x80, 0x80, 0x80);
}


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

extern void func_8014456C(s32 a0, s16 a1, s16 a2, u8 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

typedef struct func_801439C0_StructE {
    u8 p0;
    u8 a;
    u8 p2;
    u8 b;
    s16 c;
    u8 pad[4];
} func_801439C0_StructE;
typedef struct func_801439C0_Struct {
    func_801439C0_StructE e[2];
} func_801439C0_Struct;
extern func_801439C0_Struct D_801814CC;

void func_801439C0(u8 arg0, u8 arg1, u8 *arg2) {
    func_801439C0_Struct sp;

    sp = D_801814CC;
    if (arg1 == 1) {
        func_8014456C(sp.e[arg0 & 1].a, sp.e[arg0 & 1].c, 0x48, arg2[0], arg2[2], arg2[3], *(u16 *)(arg2 + 4), arg2[6], arg2[7]);
        func_8014456C(sp.e[arg0 & 1].b, sp.e[arg0 & 1].c, 0x76, arg2[8], arg2[10], arg2[11], *(u16 *)(arg2 + 12), arg2[14], arg2[15]);
    }
}


extern void func_80143C08(s32 arg0);
extern void func_80143E38(u8 *arg0);
extern void func_8014405C(s32 arg0);
extern void func_8014428C(u8 *arg0);
extern u8 D_801BEC50;

void func_80143AC4(u8 arg0, u8 arg1, s32 arg2) {
    s32 temp;

    temp = (D_801BEC50 = arg0 * 2 + arg1);
    if (temp == 0) goto case0;
    if (temp == 1) goto case1;
    if (temp == 2) goto case2;
    if (temp != 3) goto end;
    goto case3;
case0:
    func_80143C08(arg2);
    goto end;
case1:
    func_80143E38((u8 *)arg2);
    goto end;
case2:
    func_8014405C(arg2);
    goto end;
case3:
    func_8014428C((u8 *)arg2);
end:
    ;
}


s32 func_80143D38();
s32 func_80143F5C();
s32 func_8014418C();
s32 func_801443B0();

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

extern s16 D_801BEC52;
void func_80144A4C(s32 a0, s16 a1, s16 a2, s32 a3, s32 a4);

typedef struct func_80143C08_Struct {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    s16 e;
    s16 f;
} func_80143C08_Struct;

extern func_80143C08_Struct D_801814E0;

void func_80143C08(s32 arg0)
{
  u8 *sp3C;
  func_80143C08_Struct sp40;
  sp40 = D_801814E0;
  sp3C = (u8 *) (arg0 - 0x10);
  D_801BEC52 = 6;
  func_8014456C(5, sp40.a, sp40.b, *sp3C, *((u8 *) (arg0 - 0xE)), *((u8 *) (arg0 - 0xD)), *((u16 *) (arg0 - 0xC)), *((u8 *) (arg0 - 0xA)), *((u8 *) (arg0 - 0x9)));
  sp3C = (u8 *) (arg0 - ((unsigned int) 0x10));
  func_8014456C(1, sp40.c, sp40.d, sp3C[8], sp3C[0xA], sp3C[0xB], *((u16 *) (sp3C + 0xC)), sp3C[0xE], sp3C[0xF]);
  func_8014456C(2, sp40.e, sp40.f, sp3C[0x10], sp3C[0x12], sp3C[0x13], *((u16 *) (sp3C + 0x14)), sp3C[0x16], sp3C[0x17]);
  func_80144A4C(2, sp40.e, sp40.f, 0x42, 0x9E);
}


typedef struct func_80143D38_StructWords {
    s32 w0;
    s32 w1;
    s32 w2;
} func_80143D38_StructWords;

extern func_80143D38_StructWords D_801814EC;
void func_801444B0(s32 a0);

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


typedef struct func_8014405C_Struct {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    s16 e;
    s16 f;
} func_8014405C_Struct;

extern func_8014405C_Struct D_80181510;

void func_8014405C(s32 arg0)
{
  u8 *sp3C;
  func_8014405C_Struct sp40;
  sp40 = D_80181510;
  sp3C = (u8 *) (arg0 - 0x10);
  D_801BEC52 = 6;
  func_8014456C(5, sp40.a, sp40.b, *sp3C, *((u8 *) (arg0 - 0xE)), *((u8 *) (arg0 - 0xD)), *((u16 *) (arg0 - 0xC)), *((u8 *) (arg0 - 0xA)), *((u8 *) (arg0 - 0x9)));
  sp3C = (u8 *) (arg0 - ((unsigned int) 0x10));
  func_8014456C(3, sp40.c, sp40.d, sp3C[8], sp3C[0xA], sp3C[0xB], *((u16 *) (sp3C + 0xC)), sp3C[0xE], sp3C[0xF]);
  func_8014456C(4, sp40.e, sp40.f, sp3C[0x10], sp3C[0x12], sp3C[0x13], *((u16 *) (sp3C + 0x14)), sp3C[0x16], sp3C[0x17]);
  func_80144A4C(4, sp40.e, sp40.f, 0x42, 0x9E);
}


typedef struct func_8014418C_StructWords {
    s32 w0;
    s32 w1;
    s32 w2;
} func_8014418C_StructWords;

extern func_8014418C_StructWords D_8018151C;

s32 func_8014418C(void) {
    union {
        func_8014418C_StructWords w;
        s16 h[6];
    } sp;

    sp.w = D_8018151C;
    D_801BEC52 += 8;
    func_80144A4C(5, sp.h[0], (s16) (sp.h[1] - D_801BEC52), 0x42, 0x9E);
    func_80144A4C(3, sp.h[2], (s16) (sp.h[3] - D_801BEC52), 0x42, 0x9E);
    func_80144A4C(4, sp.h[4], (s16) (sp.h[5] - D_801BEC52), 0x42, 0x9E);
    if (D_801BEC52 >= 0x2E) {
        func_801444B0(5);
        return 1;
    }
    return 0;
}


typedef struct func_8014428C_StructHalves {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s32 pad;
} func_8014428C_StructHalves;

typedef struct func_8014428C_StructWords {
    s32 w0;
    s32 w1;
    s32 w2;
} func_8014428C_StructWords;

extern func_8014428C_StructWords D_80181528;

void func_8014428C(u8 *arg0) {
    func_8014428C_StructHalves sp38;

    *(func_8014428C_StructWords *) &sp38 = D_80181528;
    D_801BEC52 = 6;
    func_8014456C(3, sp38.x0, sp38.y0, arg0[0], arg0[2], arg0[3], ((u16 *) arg0)[2], arg0[6], arg0[7]);
    func_80144A4C(3, sp38.x0, sp38.y0, 0x42, 0x9E);
    func_8014456C(4, sp38.x1, sp38.y1, arg0[8], arg0[0xA], arg0[0xB], ((u16 *) arg0)[6], arg0[0xE], arg0[0xF]);
    func_8014456C(5, sp38.x2, sp38.y2, arg0[0x10], arg0[0x12], arg0[0x13], ((u16 *) arg0)[10], arg0[0x16], arg0[0x17]);
}


typedef struct func_801443B0_Struct {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
} func_801443B0_Struct;

extern func_801443B0_Struct D_80181534;

s32 func_801443B0(void) {
    func_801443B0_Struct sp;
    s32 var_v0;

    sp = D_80181534;
    D_801BEC52 += 8;
    func_80144A4C(3, sp.x0, (s16) (sp.y0 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(4, sp.x1, (s16) (sp.y1 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(5, sp.x2, (s16) (sp.y2 + D_801BEC52), 0x42, 0x9E);
    var_v0 = 0;
    if (D_801BEC52 >= 0x2E) {
        func_801444B0(5);
        return 1;
    }
    return var_v0;
}


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

void func_80144C40(u8 **arg0) { typedef struct { u16 a; u8 b; u8 c; u16 d; } func_80144C40_StructDelta; typedef struct { u8 b[0x9C]; u16 h; } func_80144C40_StructA; typedef struct { u8 b[7]; } func_80144C40_StructB; typedef struct { u8 a; u8 pad; u16 h; u8 c; u8 pad2; } func_80144C40_StructC; typedef struct { u8 pad[4]; u8 b; u8 pad2[3]; } func_80144C40_StructD; typedef struct { u8 pad[2]; u8 b; } func_80144C40_StructE; extern func_80144C40_StructDelta func_80181580; extern func_80144C40_StructDelta func_8017DDA4; extern func_80144C40_StructB func_8017DF14[]; extern func_80144C40_StructD func_8017E004[]; extern func_80144C40_StructC func_80183CE0[]; extern u8 func_8017DC40[]; extern u8 func_8017DD7C[];
    u8 i;
    func_80144C40_StructDelta temp;

    temp = func_80181580;
    *(u16 *)(func_8017DC40 + 0x9C) += func_8017DDA4.a;
    func_8017DC40[0x88] += func_8017DDA4.b;
    func_8017DC40[0x89] += func_8017DDA4.c;
    *(u16 *)(func_8017DC40 + 0x8A) += func_8017DDA4.d;
    func_8017DDA4 = temp;
    *(func_80144C40_StructA *)*arg0 = *(func_80144C40_StructA *)func_8017DC40;
    *arg0 += 0x9E;
    for (i = 0; i < 0x56; i++) {
        **arg0 = func_80183CE0[i].a;
        *arg0 += 1;
        **arg0 = *(s16 *)&func_80183CE0[i].h;
        *arg0 += 1;
        **arg0 = func_80183CE0[i].c;
        *arg0 += 1;
    }
    for (i = 0; i < 0x2D; i++) {
        **arg0 = func_8017E004[i].b;
        *arg0 += 1;
    }
    for (i = 0; i < 3; i++) {
        *(func_80144C40_StructB *)*arg0 = func_8017DF14[i];
        *arg0 += 7;
    }
    for (i = 0; i < 6; i++) {
        **arg0 = ((func_80144C40_StructE *)(func_8017DD7C + i))->b;
        *arg0 += 1;
    }
}


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

#define D_80183CE0 D_80183CE0__func_80145014

typedef struct func_80145014_StructA { s16 b[0x4F]; } func_80145014_StructA;
typedef struct func_80145014_StructB { u8 a; u8 pad; u16 b; u8 c; } func_80145014_StructB;
typedef struct func_80145014_StructC { u8 b[7]; } func_80145014_StructC;

extern u8 D_8017DCDE[];
extern func_80145014_StructC D_8017DF2C[];
extern u8 D_80183CE0[];
extern u8 D_801BBBF0[];

void func_80145014(u8 **arg0) {
    u8 i;
    func_80145014_StructB *p;

    *(func_80145014_StructA *)D_8017DCDE = *(func_80145014_StructA *)*arg0;
    *arg0 += 0x9E;
    for (i = 0; i < 0x56; i++) {
        p = (func_80145014_StructB *)(D_80183CE0 + 0x204) + i;
        p->a = *(*arg0)++;
        p->b = *(*arg0)++;
        p->c = *(*arg0)++;
    }
    for (i = 0; i < 0x2D; i++) {
        (D_801BBBF0 + 0xB20)[i] = *(*arg0)++;
    }
    for (i = 0; i < 3; i++) {
        D_8017DF2C[i] = *(func_80145014_StructC *)*arg0;
        *arg0 += 7;
    }
    for (i = 0; i < 6; i++) {
        (D_8017DD7C + 8)[i] = *(*arg0)++;
    }
}
#undef D_80183CE0

