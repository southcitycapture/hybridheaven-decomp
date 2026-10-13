/* starting point: func_801E7414 (file046), whose assembly is 95% the same as this function's */
#include "context.h"

struct func_801E6F80_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E6F80(s32 arg0, s32 arg1) {
    if ((((struct func_801E6F80_Struct *)func_801BF6B0(7))->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 19;
    }
    return 20;
}
