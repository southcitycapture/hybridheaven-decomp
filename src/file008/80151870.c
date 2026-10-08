#include "common.h"


s32 func_80002A94(u8);
s32 func_80002BAC(u8);
extern s16 D_801BF190[];

s32 func_80151870(u8 arg0) {
    u8 temp_a0;

    temp_a0 = arg0;
    if (temp_a0 < 2) {
        D_801BF190[temp_a0] = 0;
        if (func_80002A94(temp_a0) == 0 && func_80002BAC(temp_a0) == 0) {
            return 1;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151870/func_801518D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151870/func_80151990.s")


extern s32 func_800058DC(s32, void *);
extern void func_80151AE0(void);

void func_80151A88(s32 arg0, s32 arg1) {
    u8 var_s0;

    var_s0 = 0;
    do {
        func_80151870(var_s0);
        var_s0++;
    } while (var_s0 < 2);
    func_800058DC(arg0, func_80151AE0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151870/func_80151AE0.s")

