#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029D30/func_80029D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029D30/func_80029E30.s")


extern void func_80029E30(void *p);
extern void func_80029D30(void *p, s32 arg1);

void func_80029EB8(s32 arg0) {
    s32 sp18[16];

    func_80029E30(sp18);
    func_80029D30(sp18, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029D30/func_80029EE8.s")

