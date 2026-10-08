#include "common.h"

extern s32 D_801DAAC0;

s32 func_801CC318(void) {
    return (D_801DAAC0 = D_801DAAC0 + 1) < 0xA;
}
