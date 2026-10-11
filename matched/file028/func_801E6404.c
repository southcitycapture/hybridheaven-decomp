#include "common.h"

s32 func_801D4AE8(void);

s32 func_801E6404(s32 arg0, s32 arg1) {
    if (func_801D4AE8() != 0) {
        return 0x6;
    }
    return 0x5;
}
