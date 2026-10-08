#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038D800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038D97C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038DA0C.s")


struct func_8038DC3C_Struct1 {
    u8 pad[6];
    s16 unk6;
};

struct func_8038DC3C_Struct2 {
    u8 pad[0xA5];
    u8 unkA5;
};

void func_8038DC3C(struct func_8038DC3C_Struct2 *arg0, struct func_8038DC3C_Struct1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 2;
        return;
    }
    arg0->unkA5 = 0;
}

