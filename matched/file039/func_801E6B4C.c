#include "context.h"

typedef struct func_801E6B4C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6B4C_Struct;

s32 func_801E6B4C(s32 arg0, s32 arg1) {
    if ((((func_801E6B4C_Struct *) func_801BF6B0(7))->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}
