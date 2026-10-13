#include "context.h"

typedef struct func_801E6C8C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6C8C_Struct;

s32 func_801E6C8C(s32 arg0, s32 arg1) {
    if ((((func_801E6C8C_Struct *)func_801BF6B0(7))->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x3A;
    }
    return 0x3B;
}
