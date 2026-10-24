#include "common.h"


extern u16 D_80037758;

u16 func_80001060(void) {
    return D_80037758;
}


extern u16 D_80037754;

u16 func_8000106C(void) {
    return D_80037754;
}


extern void func_80028B10(void);
extern s32 func_8002C0B0(void);
extern void func_80001124(void *);
extern void func_80028260(void *, s32, void (*)(void *), void *, void *, s32);
extern void func_80034C90(void *);
extern s32 D_80000300;
extern u8 D_80057BD0[];
extern u8 D_80059D80[];

void main(void) {
    func_80028B10();
    if (D_80000300 == 0) {
        for (;;) {
        }
    }
    if (func_8002C0B0() == 0x400000) {
        D_80037754 = 0;
        D_80037758 = 0;
    } else {
        D_80037754 = 1;
        D_80037758 = 1;
    }
    func_80028260(D_80057BD0, 1, func_80001124, 0, D_80059D80, 9);
    func_80034C90(D_80057BD0);
}

#if __LINE__ == 2
void func_80001124_alignment(void) {
}
void func_80001124_alignment2(void) {
}
void func_80001124_alignment3(void) {
}
#endif

extern void func_8002AC60(s32, void *, void *, s32);
extern void func_80030B60(s32, s32);
extern void func_800011B0(void *);
extern u8 D_8005BF30[];
extern u8 D_8005BF48[];

void func_80001124(void *arg0) {
    func_8002AC60(0x96, D_8005BF30, D_8005BF48, 0xC8);
    func_80028260(D_80059D80, 5, func_800011B0, arg0, D_8005BF30, 0xA);
    func_80034C90(D_80059D80);
    func_80030B60(0, 0);
    for (;;) {
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80001060/func_800011B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80001060/func_80001454.s")

typedef struct func_80001B30_Struct {
    u8 pad[0x40];
    s32 unk40;
} func_80001B30_Struct;
typedef struct func_80001B30_Struct2 {
    u8 pad[0x10000];
    func_80001B30_Struct sub;
    u8 pad2[0x10048 - 0x10044];
} func_80001B30_Struct2;
extern func_80001B30_Struct2 D_800692B0[];
extern u8 D_800892B0[];
extern func_80001B30_Struct2 *D_8008D5BC;
extern func_80001B30_Struct *D_8008D5C0;
extern s32 *D_8008D5C4;
extern s32 D_8008D5C8;
extern s32 D_8008D5CC;

void func_80001B30(void) {
    D_8008D5BC = &D_800692B0[*(s16 *)(D_800892B0 + 0x9C)];
    D_8008D5C0 = &D_800692B0[*(s16 *)(D_800892B0 + 0x9C)].sub;
    D_8008D5C8 = D_800692B0[*(s16 *)(D_800892B0 + 0x9C)].sub.unk40;
    D_8008D5C4 = &D_8008D5C0->unk40;
    D_8008D5CC = D_8008D5C8 + (*(u16 *)(D_800892B0 + 0x90) << 6);
}


void func_80001BB0(void) {
}

