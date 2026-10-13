#include "context.h"

typedef struct func_801E4E6C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4E6C_Struct;

s32 func_801E4E6C(s32 arg0, s32 arg1) {
    if ((((func_801E4E6C_Struct *)func_801BF6B0(7))->unkC < 0x71) || (func_801C1B1C() == 0)) {
        return 0x2B;
    }
    return 0x2C;
}
