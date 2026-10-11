#include "common.h"

extern s32 func_80126E88(s32);

s32 func_801491D0(void) {
    if (func_80126E88(0x124) != 0) {
        return 1;
    }
    return 0;
}
