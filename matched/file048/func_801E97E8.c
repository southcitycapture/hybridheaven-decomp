#include "common.h"

s32 func_8001791C(void);

s32 func_801E97E8(s32 arg0, s32 arg1) {
    if (func_8001791C() != 0) {
        return 0x10;
    }
    return 0x11;
}
