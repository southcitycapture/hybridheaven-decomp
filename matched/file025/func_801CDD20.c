#include "common.h"

extern s32 D_801DABD0;

s32 func_801CDD20(void) {
    return (D_801DABD0 = D_801DABD0 + 1) < 0xA;
}
