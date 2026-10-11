#include "common.h"

s32 func_801D2F40(void);

s32 func_801F7880(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0xB;
    }
    return 0xA;
}
