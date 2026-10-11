#include "common.h"

s32 func_801D51F0(s32 arg0);
s32 func_801D51A4(void);

s32 func_801ED12C(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 65;
    }
    return 64;
}
