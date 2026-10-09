#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80027A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80027BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80027D04.s")


extern void func_80026300(void *, s32, s32);
extern void func_80030610(void *, void *, s32);
extern s32 D_80049950;
extern u8 D_800CBF60[];
extern u8 D_800CBF68[];

void func_80027E60(void) {
    D_80049950 = 1;
    func_80030610(D_800CBF68, D_800CBF60, 1);
    func_80026300(D_800CBF68, 0, 0);
}


extern void func_800266B0(void *, void *, s32);

void func_80027EB0(void) {
    s32 sp1C;

    if (D_80049950 == 0) {
        func_80027E60();
    }
    func_800266B0(D_800CBF68, &sp1C, 1);
}



void func_80027EF4(void) {
    func_80026300(D_800CBF68, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80027F20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80028090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80028160.s")

