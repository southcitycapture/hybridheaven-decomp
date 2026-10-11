#include "common.h"

s32 func_801CFD50(void);

s32 func_801E39F8(s32 arg0, s32 arg1) {
    if (func_801CFD50() != 0) {
        return 0x4;
    }
    return 0x3;
}
