#include "common.h"

extern s32 D_801DAAC4;

s32 func_801CC334(void) {
    return (D_801DAAC4 = D_801DAAC4 + 1) < 0xA;
}
