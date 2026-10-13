/* starting point: func_801E6D0C (file046), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E29B4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E29B4_Struct;

s32 func_801E29B4(s32 arg0, s32 arg1) {
    if ((((func_801E29B4_Struct *) func_801BF6B0(7))->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}
