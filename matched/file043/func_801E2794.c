/* starting point: func_801E2574 (file046), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E2794_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2794_Struct;

s32 func_801E2794(s32 arg0, s32 arg1) {
    if ((((func_801E2794_Struct *) func_801BF6B0(7))->unkC < 0x1F) || (func_801C1B1C() == 0)) {
        return 0x1A;
    }
    return 0x1B;
}
