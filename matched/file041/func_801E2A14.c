#include "common.h"

extern void D_8038C158();

s32 func_801E2A14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0121EAC0) != 0) {
        D_8038C158();
        return 0x21;
    }
    return 0x20;
}
