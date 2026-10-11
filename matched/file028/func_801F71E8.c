#include "common.h"

s32 func_801D2C10(void);

s32 func_801F71E8(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x7;
    }
    return 0x6;
}
