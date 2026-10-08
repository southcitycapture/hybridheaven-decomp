#include "common.h"

extern u8 D_801BBBF0[];

void func_8037C530(void) {
    D_801BBBF0[0x71C] = D_801BBBF0[0x71C] & 0xEF;
    D_801BBBF0[0xAB8] = D_801BBBF0[0xAB8] & 0xEF;
}
