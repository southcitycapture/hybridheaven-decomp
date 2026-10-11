#include "common.h"
extern s32 func_801C0B8C(u64);

void D_8038C158();

s32 func_801E1D28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x124F80) != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}
