/* starting point: func_801E63A8 (file045), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801EE068_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EE068_Struct;

s32 func_801C1B1C(void);

s32 func_801EE068(s32 arg0, s32 arg1) {
    if ((((func_801EE068_Struct *)func_801BF6B0(7))->unkC < 0x38) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}
