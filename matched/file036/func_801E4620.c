#include "common.h"

s32 func_801D6FC0(void);

s32 func_801E4620(s32 arg0, s32 arg1) {
    if (func_801D6FC0() != 0) {
        return 0x1B;
    }
    return 0x1A;
}
