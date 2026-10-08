#include "common.h"

extern void D_8038C158();

s32 func_801E1CA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x90F560) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}
