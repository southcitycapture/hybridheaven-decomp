#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file070/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file070/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file070/8038CFC0/func_8038D7E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file070/8038CFC0/func_8038D918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file070/8038CFC0/func_8038D990.s")


extern void func_8022A824(s32 arg0);
extern void func_8022A834(s32 arg0);

void func_8038DC2C(s32 arg0, s16 *arg1) {
    if (arg1[3] >= 0x64) {
        func_8022A824(arg0);
        return;
    }
    func_8022A834(arg0);
}

