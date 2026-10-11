#include "common.h"


extern void func_8013B570(s32, s32, s32, s32, s32);
extern s32 D_801DB880;
extern s32 D_801DB89C;
extern s32 D_801DB8A0;
extern s32 D_801DB8A8;
extern s32 D_801DB884;
extern s32 D_801E16F0;
extern void func_801D606C(void);

void func_801D6000(s32 arg0, s32 arg1) {
    D_801E16F0 = arg0;
    D_801DB89C = 0;
    D_801DB8A0 = 0;
    D_801DB8A8 = 1;
    D_801DB880 = 0;
    D_801DB884 = 0;
    func_8013B570(arg0, 0x36, 0, 4, (s32)func_801D606C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D606C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D60C8.s")



s32 func_801D62C0(void) {
    return D_801DB8A0 != 0;
}



s32 func_801D62D0(void) {
    if (D_801DB8A0 != 0) {
        return 0;
    }
    if (D_801DB89C != 0) {
        return 0;
    }
    return D_801DB8A8;
}

extern u8 D_801E16F8;

u8 *func_801D6310(void) {
    return &D_801E16F8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D631C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D637C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D63E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D6514.s")

