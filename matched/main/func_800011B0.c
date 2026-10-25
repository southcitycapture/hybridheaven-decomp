#include "context.h"
#if __LINE__ == 2
extern s32 D_80037730;
void X_alignment(void) { D_80037730 = 0; }
void X_alignment2(void) { D_80037730 = 0; }
void X_alignment3(void) { D_80037730 = 0; }
#endif
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
extern s32 D_80000300;
extern s32 D_80037730;
extern s16 D_8003774C;
extern u16 D_80037748;
extern u8 D_8005C268[], D_8005C280[], D_8005C288[], D_8005C2A0[], D_8005C4B0[];
extern s32 D_8005CD78;
extern u8 D_800CE9C0[], D_800F41C0[], D_800F51C0[], D_80107830[], D_80162DD0[], D_8038F800[], func_801BF1A0[];

void func_800011B0(s32 arg0) {
    u8 pad[8];
    u8 sp34[4];
    s16 *sp30;
    s16 v;

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
    func_80000934(D_8005C4B0, sp34, D_8005C288);
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
    while (1) {
        func_800266B0(D_8005C288, &sp30, 1);
        switch (*sp30) {
        case 1:
            func_8000290C();
            if (D_80037748 == 0) {
                func_80001454();
            } else {
                func_80001BB0();
            }
            break;
        case 2:
            break;
        case 3:
            D_80037748 = 1;
            D_8003774C = 0;
            break;
        }
    }
}
