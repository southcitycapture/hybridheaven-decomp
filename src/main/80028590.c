#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80028590/func_80028590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80028590/func_800285A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80028590/func_80028694.s")


typedef struct func_80028798_Struct {
    u8 pad0[2];
    s16 unk2;
    s32 unk4;
} func_80028798_Struct;

void func_80028798(func_80028798_Struct *arg0, s32 arg1) {
    s32 var_v0;
    func_80028798_Struct *var_v1;

    var_v0 = 0;
    var_v1 = arg0;
    if (arg0->unk2 > 0) {
        do {
            var_v1->unk4 += arg1;
            var_v1 += 1;
            var_v0 += 1;
        } while (var_v0 < arg0->unk2);
    }
}

