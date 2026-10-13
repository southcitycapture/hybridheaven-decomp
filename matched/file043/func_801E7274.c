/* starting point: func_801E3968 (file039), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E7274_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7274_Struct;

s32 func_801E7274(s32 arg0, s32 arg1) {
    if ((((func_801E7274_Struct *)func_801BF6B0(7))->unkC < 0x62) || (func_801C1B1C() == 0)) {
        return 0x48;
    }
    return 0x49;
}
