#include "common.h"

extern s32 func_80126E88(s32);

s32 func_80149178(void) {
    if (func_80126E88(0x122) != 0) {
        return 1;
    }
    return 0;
}
