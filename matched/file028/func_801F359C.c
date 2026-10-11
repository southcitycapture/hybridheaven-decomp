#include "common.h"

s32 func_801D2F40(void);

s32 func_801F359C(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0x3;
    }
    return 0x2;
}
