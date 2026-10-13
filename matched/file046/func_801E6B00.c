/* starting point: func_801E6BF8 (file041), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E6B00_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6B00_Struct;

s32 func_801E6B00(s32 arg0, s32 arg1) {
    if ((((func_801E6B00_Struct *)func_801BF6B0(7))->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x1B;
    }
    return 0x1C;
}
