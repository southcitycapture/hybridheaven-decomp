#include "common.h"

extern void D_8038C158();

s32 func_801E276C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x1B;
    }
    return 0x1A;
}
