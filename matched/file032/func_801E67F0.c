#include "common.h"

s32 func_801D11D4(void);

s32 func_801E67F0(s32 arg0, s32 arg1) {
    if (func_801D11D4() != 0) {
        return 0x3;
    }
    return 0x2;
}
