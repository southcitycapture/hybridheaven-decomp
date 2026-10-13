#include "context.h"

struct func_801E621C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E621C(s32 arg0, s32 arg1) {
    if ((((struct func_801E621C_Struct *)func_801BF6B0(7))->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}
