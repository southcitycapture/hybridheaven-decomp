#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file073/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file073/8038CFC0/func_8038D7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file073/8038CFC0/func_8038D8FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file073/8038CFC0/func_8038D98C.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DC0C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

