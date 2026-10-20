#include "common.h"

extern s32 func_801C1B1C(void);

s32 func_801E6474(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}
