#include "common.h"

s32 func_801CE284(void);

s32 func_80200528(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x8;
    }
    return 0x7;
}
