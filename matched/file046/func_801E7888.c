#include "common.h"

s32 func_801D20BC(void);

s32 func_801E7888(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        return 0x1C;
    }
    return 0x1B;
}
