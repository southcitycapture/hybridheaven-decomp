#include "common.h"

s32 func_801D2F40(void);

s32 func_801EC6D8(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0x4;
    }
    return 0x3;
}
