#include "common.h"

extern s32 func_801CE274();

s32 func_801E5F18(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        return 0x8;
    }
    return 0x7;
}
