#include "common.h"

s32 func_801D11D4(void);

s32 func_801E69C4(s32 arg0, s32 arg1) {
    if (func_801D11D4() != 0) {
        return 0xA;
    }
    return 0x9;
}
