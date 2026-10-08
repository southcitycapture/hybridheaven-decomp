#include "common.h"


extern void func_80005444(s32, s32, s32, s32, s32);
extern void func_80005624(void *);
extern void func_80016DF0(void);
extern void func_8001F204(void *, s32);
extern void func_80020744(s32);
extern u8 D_80163518[];
extern u8 D_8038F800[];
extern u8 func_801BF1A0[];

void func_80107A50(s32 arg0, s32 arg1) {
    func_80020744(1);
    func_8001F204(func_801BF1A0, D_8038F800 - func_801BF1A0);
    func_80016DF0();
    func_80005444(0x64, 0x12C, 0x190, 0xC8, 0x12C);
    func_80005624(D_80163518);
}


extern void func_80002364(s32, s32, s32, s32);
extern void func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_80107B60(void);
extern u8 D_80044090[];
extern u8 D_80044220[];
extern u8 D_80044420[];
extern s8 D_801BBAC4;
extern s8 D_801BBAC5;
extern s8 D_801BBAC6;
extern s8 D_801BBAC7;
extern s8 D_801BBAC8;

void func_80107AC0(void *arg0, s32 arg1) {
    func_80005670(arg0, D_80044420);
    func_80005670(arg0, D_80044220);
    func_80005670(arg0, D_80044090);
    D_801BBAC4 = 1;
    D_801BBAC5 = 1;
    D_801BBAC6 = 0;
    D_801BBAC7 = 0;
    D_801BBAC8 = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_80107B60);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80107A50/func_80107B60.s")


extern s32 func_800178E8(void);

void func_801081F8(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_801BBAC4 = 1;
        D_801BBAC5 = 1;
        func_800058DC(arg0, func_80107B60);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80107A50/func_80108244.s")

