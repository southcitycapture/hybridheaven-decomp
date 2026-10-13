#include "context.h"

struct func_801E2734_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E2734(s32 arg0, s32 arg1) {
    if ((((struct func_801E2734_Struct *)func_801BF6B0(7))->unkC < 0x63) || (func_801C1B1C() == 0)) {
        return 0x1F;
    }
    return 0x20;
}
