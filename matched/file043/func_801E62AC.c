/* starting point: func_801E6DE4 (file046), whose assembly is 95% the same as this function's */
#include "context.h"

struct func_801E62AC_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E62AC(s32 arg0, s32 arg1) {
    if ((((struct func_801E62AC_Struct *) func_801BF6B0(7))->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x25;
    }
    return 0x26;
}
