#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038D4F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038D5D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038D660.s")


struct func_8038D7B8_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D7B8_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D7B8(struct func_8038D7B8_Arg0 *arg0, struct func_8038D7B8_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

