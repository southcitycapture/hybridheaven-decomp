#include "common.h"

extern s32 func_801C1B1C();

s32 func_801EE8F8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1E;
    }
    return 0x1F;
}
