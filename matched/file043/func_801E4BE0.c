#include "context.h"

typedef struct func_801E4BE0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4BE0_Struct;

s32 func_801E4BE0(s32 arg0, s32 arg1) {
    if ((((func_801E4BE0_Struct *)func_801BF6B0(7))->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}
