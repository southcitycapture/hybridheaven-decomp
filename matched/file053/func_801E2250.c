#include "context.h"

s32 func_801E2250(s32 arg0, s32 arg1) {
    s32 *temp;

    temp = (s32 *) func_801BF6B0(7);
    if ((temp[3] < 0x2C) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}
