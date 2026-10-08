#include "common.h"

extern s32 D_8038D870;

s32 func_8038BA70(void) {
    return ++D_8038D870 < 0x14;
}
