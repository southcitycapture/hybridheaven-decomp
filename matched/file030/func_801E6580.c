#include "common.h"

extern s32 func_801D2C10(void);

s32 func_801E6580(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x9;
    }
    return 0x8;
}
