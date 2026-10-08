#include "common.h"


extern s32 func_80126CC0(s32 arg0, void *arg1);
extern s32 func_8015105C(s32 arg0);
extern void func_800058DC(s32 arg0, void *arg1, s32 arg2);
extern void func_80126EAC(void);
extern void func_80244998(void);
extern s32 D_8025A290;
extern s8 D_801BBBF0[];

void func_80244930(s32 arg0, s32 arg1) {
    s8 *p;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        D_8025A290 = func_8015105C(0x57);
        p = D_801BBBF0;
        p[0xBA2] = 1;
        p[0xBA4] = 1;
        func_800058DC(arg0, func_80244998, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/func_80244998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/func_80244A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/func_80244AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/func_80244B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/func_80244B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/func_80244BF0.s")

