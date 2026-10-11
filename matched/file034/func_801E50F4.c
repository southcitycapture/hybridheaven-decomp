#include "common.h"

s32 func_801CE284(void);

s32 func_801E50F4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1E;
    }
    return 0x1D;
}
