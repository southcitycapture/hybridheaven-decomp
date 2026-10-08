#include "common.h"

extern s32 func_80126E88(s32);

s32 func_80149014(void) {
    if (func_80126E88(0x113) != 0) {
        return 1;
    }
    return 0;
}
