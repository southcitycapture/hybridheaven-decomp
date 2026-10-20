#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80028B10/func_80028B10.s")


extern s8 D_800CC214;
extern s8 D_800CC215;
extern s8 D_800CC216;
extern s8 D_800CC217;
extern s8 D_800CC218;
extern u8 D_800CC28C;
extern s8 D_800CC28D;
extern s8 D_800CC28E;
extern s8 D_800CC28F;
extern s8 D_800CC290;

#define R(a) (*(volatile s32 *)(a))

void func_80028DB8(void) {
    D_800CC214 = 7;
    D_800CC215 = R(0xA4600014);
    D_800CC218 = R(0xA4600018);
    D_800CC216 = R(0xA460001C);
    D_800CC217 = R(0xA4600020);
    D_800CC28C = 7;
    D_800CC28D = R(0xA4600024);
    D_800CC290 = R(0xA4600028);
    D_800CC28E = R(0xA460002C);
    D_800CC28F = R(0xA4600030);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80028B10/_pad_96.s")

