#include "context.h"

s32 func_801E2890(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x85) {
        goto ret22;
    }
    if (func_801C1B1C() != 0) {
        goto call;
    }
ret22:
    return 0x22;
call:
    func_8038BED4();
    return 0x23;
}
