#include "common.h"

extern void D_8038C158();

s32 func_801E29B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF1B30) != 0) {
        D_8038C158();
        return 0x2C;
    }
    return 0x2B;
}
