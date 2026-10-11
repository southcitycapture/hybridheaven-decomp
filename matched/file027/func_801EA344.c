#include "common.h"

s32 func_801C1B1C();

s32 func_801EA344(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7F;
    }
    return 0x80;
}
