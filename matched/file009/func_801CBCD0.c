#include "context.h"

extern u8 D_801E0CA0[];

void func_801CBCD0(s8 arg0, s32 arg1, s8 arg2) {
    D_801E0CA0[0x10] = arg0;
    D_801E0CA0[0x11] = arg2;
}
