#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file087/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file087/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file087/8038CFC0/func_8038D8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file087/8038CFC0/func_8038DA74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file087/8038CFC0/func_8038DAF8.s")


extern void func_8022A834();
extern u8 D_801BC3D8[];

void func_8038DDD4(u8 *arg0) {
    if (*(f32 *)&D_801BC3D8[0x3A8] < 15.0) {
        arg0[0xA5] = 0;
        return;
    }
    func_8022A834();
}

