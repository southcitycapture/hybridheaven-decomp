#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDBF0.s")


extern s32 func_801BF968(void);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_801CDCD0();
extern s32 D_801DABCC;

void func_801CDC8C(s32 arg0, s32 arg1) {
    D_801DABCC = 1;
    if (func_801BF968() != 0) {
        func_800058DC(arg0, func_801CDCD0);
    }
}


extern void func_801BF850(void *arg0, s32 arg1, void *arg2);
extern u8 D_801DABC0[];
extern u8 D_801E1188[];
extern s32 D_801DAC48;
extern s32 D_801DAC4C;

void func_801CDCD0(s32 arg0, s32 arg1) {
    D_801DAC48 = arg0;
    D_801DAC4C = arg1;
    func_801BF850(D_801DABC0, 5, D_801E1188);
}



s32 func_801CDD14(void) {
    return D_801DABCC;
}


extern s32 D_801DABD0;

s32 func_801CDD20(void) {
    return (D_801DABD0 = D_801DABD0 + 1) < 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDD3C.s")


extern void func_801C26C4(s32 arg0, void *arg1);
extern u8 D_801E1110[];

void func_801CDDF8(void) {
    D_801DABD0 = 0;
    func_801C26C4(0xA, D_801E1110);
}


void func_801CDE28(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_801CDE34(s32 arg0, s32 arg1) {
    s32 temp = D_801DAC48;

    func_800058DC(temp, (void *) func_801CDC8C);
}


void func_801CDE68(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

