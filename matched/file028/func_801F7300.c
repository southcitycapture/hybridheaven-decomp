#include "common.h"

s32 func_801D2C10(void);

s32 func_801F7300(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0xC;
    }
    return 0xB;
}
