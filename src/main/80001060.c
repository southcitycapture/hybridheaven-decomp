#include "common.h"


extern u16 D_80037758;

u16 func_80001060(void) {
    return D_80037758;
}


extern u16 D_80037754;

u16 func_8000106C(void) {
    return D_80037754;
}

#define func_80001124 func_80001124__main

extern void func_80028B10(void);
extern s32 func_8002C0B0(void);
extern void func_80001124(void *arg0);
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
#undef func_80001124

#define func_800011B0 func_800011B0__func_80001124
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
extern void func_800011B0(s32 arg0);
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
#undef func_800011B0

#define func_80001060 func_80001060__func_800011B0
#define func_80001BB0 func_80001BB0__func_800011B0
u16 func_80001060(void);

typedef struct func_800011B0_StructClient {
    struct func_800011B0_StructClient *next;
    void *messageQueue;
} func_800011B0_StructClient;
extern void func_80000460(void *, s32, s32);
extern s32 func_800006FC(void *);
extern void func_80000934(void *, void *, void *);
extern void func_80001454(void);
extern void func_80001BB0(void);
extern void func_80001BC0(void);
extern void func_80001E70(void);
extern void func_800020B0(void);
extern void func_8000290C(void);
extern void func_8000469C(s32, void *);
extern void func_80005444(s32, s32, s32, s32, s32);
extern void func_80005624(void *);
extern void func_80007B70(void);
extern void func_80016DF0(void);
extern void func_8001F204(void *, s32);
extern s32 func_800266B0(void *, s16 **, s32);
extern void func_80030610(void *, void *, s32);
extern void func_80032890(s32);
extern void func_80133AAC(s32);
extern s32 D_80037730;
extern s16 D_8003774C;
extern u16 D_80037748;
extern u8 D_8005C268[];
extern u8 D_8005C280[];
extern u8 D_8005C288[];
extern u8 D_8005C2A0[];
extern u8 D_8005C4B0[];
extern s32 D_8005CD78;
extern u8 D_800CE9C0[];
extern u8 D_800F41C0[];
extern u8 D_800F51C0[];
extern u8 D_80107830[];
extern u8 D_80162DD0[];
extern u8 D_8038F800[];
extern u8 func_801BF1A0[];

void func_800011B0(s32 arg0) {
    s16 event;
    func_800011B0_StructClient client;
    s16 *sp30;

    sp30 = NULL;
    func_80001E70();
    func_80007B70();
    func_80001BC0();
    func_80030610(D_8005C268, D_8005C280, 1);
    func_80030610(D_8005C288, D_8005C2A0, 0x40);
    func_80001060();
    if (func_80001060() != 0) {
        if (D_80000300 == 2) {
            func_80000460(D_8005C4B0, 0x25, 1);
        } else {
            func_80000460(D_8005C4B0, 9, 1);
        }
    } else if (D_80000300 == 2) {
        func_80000460(D_8005C4B0, 0x1C, 1);
    } else {
        func_80000460(D_8005C4B0, 0, 1);
    }
    D_80037730 = 0;
    func_80000934(D_8005C4B0, &client, D_8005C288);
    D_8005CD78 = func_800006FC(D_8005C4B0);
    if (func_80001060() != 0) {
        func_80032890(0xAA);
    } else {
        func_80032890(0x4A);
    }
    func_800020B0();
    func_80016DF0();
    func_8000469C(2, D_800CE9C0);
    func_8000469C(4, D_800F41C0);
    func_8000469C(5, D_8038F800);
    func_8000469C(7, D_800F51C0);
    func_8000469C(8, D_80107830);
    func_8001F204(func_801BF1A0, D_8038F800 - func_801BF1A0);
    func_80005444(0xA, 0x64, 0xA, 0xA, 0xA);
    func_80005624(D_80162DD0);
    func_80133AAC(2);
    do {
        func_800266B0(D_8005C288, &sp30, 1);
        event = *sp30;
        switch (event) {
        case 1:
            func_8000290C();
            if (D_80037748 == 0) {
                func_80001454();
            } else {
                func_80001BB0();
            }
            continue;
        case 2:
            continue;
        case 3:
            D_80037748 = 1;
            D_8003774C = 0;
            continue;
        }
    } while (1);
}
#undef func_80001060
#undef func_80001BB0

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

