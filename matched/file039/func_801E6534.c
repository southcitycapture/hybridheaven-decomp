#include "common.h"

s32 func_801CE284(void);

s32 func_801E6534(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x13;
    }
    return 0x12;
}
