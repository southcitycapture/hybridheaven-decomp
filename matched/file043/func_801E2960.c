/* starting point: func_801E6CB8 (file046), whose assembly is 95% the same as this function's */
#include "context.h"

extern s32 func_801C1B1C();

struct func_801E2960_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E2960(s32 arg0, s32 arg1) {
    if ((((struct func_801E2960_Struct *)func_801BF6B0(7))->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 31;
    }
    return 32;
}
