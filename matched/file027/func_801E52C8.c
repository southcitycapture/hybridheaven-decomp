#include "common.h"

s32 func_801CFD50(void);

s32 func_801E52C8(s32 arg0, s32 arg1) {
    if (func_801CFD50() != 0) {
        return 0xB;
    }
    return 0xA;
}
