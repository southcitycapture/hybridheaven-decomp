#include "common.h"

s32 func_801D58EC(void);

s32 func_801E7778(s32 arg0, s32 arg1) {
    if (func_801D58EC() != 0) {
        return 0x3B;
    }
    return 0x3A;
}
