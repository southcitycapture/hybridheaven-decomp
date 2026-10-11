#include "common.h"

s32 func_801D0408(void);

s32 func_801E6960(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x5;
    }
    return 0x4;
}
