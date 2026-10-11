#include "common.h"

s32 func_801D6FC0(void);

s32 func_801E43E0(s32 arg0, s32 arg1) {
    if (func_801D6FC0() != 0) {
        return 0x10;
    }
    return 0xF;
}
