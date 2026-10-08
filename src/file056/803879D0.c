#include "common.h"


extern u16 D_8017DC40;

s32 func_803879D0(u8 arg0, u16 arg1) {
    s32 temp_lo;

    temp_lo = (D_8017DC40 * arg0) / 100;
    if (temp_lo < arg1) {
        return arg1;
    }
    return temp_lo & 0xFFFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/func_80387A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/func_80387DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/func_80387ED0.s")


extern void func_800058DC(s32, void *);
extern u8 D_801BCC25;
extern void func_80387F48(void);

void func_80387F10(s32 arg1, s32 arg2) {
    if (D_801BCC25 == 1) {
        func_800058DC(arg1, func_80387F48);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/func_80387F48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/func_80388388.s")


typedef struct func_80388444_Struct {
    u8 pad[0xB0];
    s32 unkB0;
} func_80388444_Struct;

extern void func_80005700(void *);
extern void func_80126E88(s32, void *);

void func_80388444(func_80388444_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        func_80126E88(0x12F, arg0);
        func_80005700(arg0);
    }
}

