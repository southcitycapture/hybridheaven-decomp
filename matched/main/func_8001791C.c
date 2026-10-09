#include "context.h"

extern u8 D_801BBBF0[];

s32 func_8001791C(void) {
    if (*(u16 *)(D_801BBBF0 + 0x354) == *(u16 *)(D_801BBBF0 + 0x352)) {
        return 1;
    }
    return 0;
}
