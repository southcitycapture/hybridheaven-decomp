#include "context.h"

typedef struct func_8002059C_C { u8 pad[0x8]; s32 v8; } func_8002059C_C;
typedef struct func_8002059C_B { u8 pad[0x10]; func_8002059C_C *p10; } func_8002059C_B;
typedef struct func_8002059C_A { u8 pad[0xC]; func_8002059C_B *arr[1]; } func_8002059C_A;
typedef struct func_8002059C_T { u8 pad[4]; func_8002059C_A *p4; } func_8002059C_T;
typedef struct func_8002059C_S {
    u8 pad[0xC];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 padF;
    u8 pad10[4];
    s32 unk14;
    u8 pad18[0xB0 - 0x18];
    f32 unkB0;
    u16 unkB4;
    u16 unkB6;
} func_8002059C_S;
typedef struct func_8002059C_L { s16 a; s16 b; s8 c; } func_8002059C_L;

extern u32 D_801B5520;
extern void *D_800CBDA4;
extern s32 D_800498F0;
extern u8 D_800CBBE0[];
extern void func_80022528(void);
extern func_8002059C_T *D_80096A98[];
extern s32 D_800CBE08;
extern u8 D_801B62A0[];
extern s32 func_800288C8(s32, void *, func_8002059C_L *);
extern void func_80033D20(s32, void *, s32, f32, s32, s32, s32, s32);
extern s32 func_80030930(s32, s32, s32);

#define P ((func_8002059C_S *)D_800CBDA4)

void func_8002059C(void) {
    func_8002059C_L sp70;
    u8 pad[0x8];
    s32 i;
    func_8002059C_A *a;
    func_8002059C_B *b;
    func_8002059C_C *c;

    for (i = 0; i < 16; i++) {
        sp70.a = 0xA;
        sp70.b = 0;
        sp70.c = 0;
        func_800288C8(D_800498F0, &D_800CBBE0[i * 0x1C], &sp70);
        D_800CBDA4 = (u8 *)&D_801B5520 + i * 0xD8;
        ((func_8002059C_S *)D_800CBDA4)->unkD = 0;
        P->unkC = P->unkD;
        a = D_80096A98[P->unkC]->p4;
        b = a->arr[P->unkD];
        c = b->p10;
        P->unk14 = c->v8;
        P->unkB0 = 1.0f;
        P->unkB4 = 0;
        P->unkB6 = 0;
        P->unkE = 1;
        func_80033D20(D_800498F0, &D_800CBBE0[i * 0x1C], P->unk14, 1.0f, 0, 0x40, 0, 0);
    }
    func_80022528();
    D_800CBE08 = func_80030930(D_800498F0, 0, 0);
}
