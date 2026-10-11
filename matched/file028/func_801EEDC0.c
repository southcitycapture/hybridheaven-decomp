#include "common.h"

s32 func_801D1B90(void);

s32 func_801EEDC0(s32 arg0, s32 arg1) {
    if (func_801D1B90() != 0) {
        return 0x6;
    }
    return 0x5;
}
