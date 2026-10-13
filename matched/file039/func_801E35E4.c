/* starting point: func_801ED034 (file033), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E35E4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E35E4_Struct;

s32 func_801E35E4(s32 arg0, s32 arg1) {
    if ((((func_801E35E4_Struct *)func_801BF6B0(7))->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0x3D;
    }
    return 0x3E;
}
