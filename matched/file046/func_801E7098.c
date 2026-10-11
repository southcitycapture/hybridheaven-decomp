#include "common.h"

s32 func_801D3708(void);

s32 func_801E7098(s32 arg0, s32 arg1) {
    if (func_801D3708() != 0) {
        return 0x2D;
    }
    return 0x2C;
}
