#include "context.h"

typedef struct func_801EA01C_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801EA01C_Struct;

s32 func_801EA01C(s32 arg0, s32 arg1) {
    if ((((func_801EA01C_Struct *) func_801BF6B0(7))->unkC < 0x98) || (func_801C1B1C() == 0)) {
        return 0x3B;
    }
    return 0x3C;
}
