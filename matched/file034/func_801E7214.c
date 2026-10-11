#include "common.h"

s32 func_801D0408(void);

s32 func_801E7214(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x1B;
    }
    return 0x1A;
}
