#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C1520.s")


struct func_801C157C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_801C1834(struct func_801C157C_Struct *, s32);
extern s32 D_801D8DB0;
extern struct func_801C157C_Struct D_801DEBF0[];
extern struct func_801C157C_Struct D_801DED70[];

void func_801C157C(s32 arg0, s32 arg1) {
    s32 i;

    i = 0;
loop_1:
    if (D_801DEBF0[i].unk0 == -1) {
        D_801DEBF0[i].unk0 = arg0;
        D_801DEBF0[i].unk4 = arg1;
        D_801DEBF0[i].unk8 = 0;
        D_801D8DB0 += 1;
    } else {
        i++;
        if (D_801DED70 != &D_801DEBF0[i]) {
            goto loop_1;
        }
    }
    func_801C1834(D_801DED70, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C15F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C166C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C16B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C16F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C175C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C1780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C1828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C1834.s")

