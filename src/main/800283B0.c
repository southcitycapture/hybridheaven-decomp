#include "common.h"


extern void func_80027EB0(void);
extern void func_80027EF4(void);
extern void func_800284C0(void);
extern s32 func_800294D0(s32, void *);
extern void func_800266B0(s32, s32, s32);
extern u8 D_800CBF80[];
extern u8 D_800CBFC0;

s32 func_800283B0(s32 arg0) {
    s32 sp1C;

    func_80027EB0();
    if (D_800CBFC0 != 1) {
        func_800284C0();
        func_800294D0(1, D_800CBF80);
        func_800266B0(arg0, 0, 1);
    }
    sp1C = func_800294D0(0, D_800CBF80);
    D_800CBFC0 = 1;
    func_80027EF4();
    return sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800283B0/func_80028434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800283B0/func_800284C0.s")

