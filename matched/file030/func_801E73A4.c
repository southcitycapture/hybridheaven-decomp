#include "common.h"

extern s32 func_801C1B1C();

s32 func_801E73A4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}
