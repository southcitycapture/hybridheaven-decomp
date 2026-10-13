/* starting point: func_801E6D0C (file046), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E4C34_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4C34_Struct;

s32 func_801E4C34(s32 arg0, s32 arg1) {
    if ((((func_801E4C34_Struct *) func_801BF6B0(7))->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x1E;
    }
    return 0x1F;
}
