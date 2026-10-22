#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152230/func_80152230.s")


typedef struct { s16 b[0x4F]; } func_80152240_S9E;
typedef struct { u8 b[7]; } func_80152240_S7;
typedef struct { s16 b[3]; } func_80152240_S6;
typedef struct { func_80152240_S7 e[3]; } func_80152240_S15;
typedef struct { func_80152240_S6 e[0x56]; } func_80152240_S204;
typedef struct { s32 a[10]; } func_80152240_S28;
typedef struct { s32 a; u16 b; } func_80152240_S8;
typedef struct { u8 b[6]; } func_80152240_SA4;

extern func_80152240_S9E D_801834F8;
extern func_80152240_S15 D_80183598;
extern func_80152240_S204 D_801835B0;
extern func_80152240_S28 D_801837B4;
extern func_80152240_SA4 D_801837DC;
extern func_80152240_S9E D_8017DCDE[];
extern func_80152240_S9E D_8017DC40[];
typedef struct { u8 p[4]; u8 f; u8 q[3]; } func_80152240_SE004;
extern u8 D_8017E004[];
extern func_80152240_S7 D_8017DF14[];
extern func_80152240_S7 D_8017DF2C[];
extern func_80152240_S6 D_80183CE0[2][0x56];
extern u8 D_801840E8[];
extern func_80152240_S28 D_8017DD7C;
extern func_80152240_SA4 D_8017DDA4;

void func_80152240(void) {
    func_80152240_S9E sp2F0;
    func_80152240_S15 sp2D8;
    func_80152240_S204 spD4;
    func_80152240_S28 spAC;
    func_80152240_SA4 spA4;
    u8 i;

    sp2F0 = D_801834F8;
    sp2D8 = D_80183598;
    spD4 = D_801835B0;
    spAC = D_801837B4;
    spA4 = D_801837DC;
    D_8017DC40[0] = D_8017DCDE[0] = sp2F0;
    for (i = 0; i < 0x2D; i++) {
        if (i == 0x27 || i == 0x28) {
            ((func_80152240_SE004 *)D_8017E004)[i].f = 1;
        } else {
            ((func_80152240_SE004 *)D_8017E004)[i].f = 0;
        }
    }
    for (i = 0; i < 3; i++) {
        D_8017DF14[i] = D_8017DF2C[i] = sp2D8.e[i];
    }
    for (i = 0; i < 0x56; i++) {
        D_80183CE0[0][i] = D_80183CE0[1][i] = spD4.e[i];
        D_801840E8[i] = 0;
    }
    D_8017DD7C = spAC;
    D_8017DDA4 = spA4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152230/func_80152608.s")

