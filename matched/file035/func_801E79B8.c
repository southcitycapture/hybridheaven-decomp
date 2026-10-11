#include "common.h"

s32 func_801C5B2C(void);

s32 func_801E79B8(s32 arg0, s32 arg1) {
    if (func_801C5B2C() != 0) {
        return 0x7;
    }
    return 0x6;
}
