#include "common.h"

s32 D_801CF3CC(void);

s32 func_801E5F4C(s32 arg0, s32 arg1) {
    if (D_801CF3CC() != 0) {
        return 0x14;
    }
    return 0x13;
}
