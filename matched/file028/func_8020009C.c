#include "common.h"

s32 func_801D2C10(void);

s32 func_8020009C(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x4;
    }
    return 0x3;
}
