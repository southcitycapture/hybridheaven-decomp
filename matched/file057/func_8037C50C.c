#include "common.h"

extern u8 D_801BBBF0[];

void func_8037C50C(void) {
    u8 *p = D_801BBBF0;

    p[0x71C] |= 0x10;
    p[0xAB8] |= 0x10;
}
