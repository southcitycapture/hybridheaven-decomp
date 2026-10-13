#include "context.h"

typedef struct func_801E6E1C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6E1C_Struct;

s32 func_801E6E1C(s32 arg0, s32 arg1) {
    if ((((func_801E6E1C_Struct *) func_801BF6B0(7))->unkC < 0x52) || (func_801C1B1C() == 0)) {
        return 0x3E;
    }
    return 0x3F;
}
