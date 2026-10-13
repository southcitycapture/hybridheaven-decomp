/* starting point: func_801E2DA0 (file043), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E65B0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E65B0_Struct;

s32 func_801E65B0(s32 arg0, s32 arg1) {
    if ((((func_801E65B0_Struct *)func_801BF6B0(7))->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 0x2B;
    }
    return 0x2C;
}
