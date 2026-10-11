#include "common.h"

typedef struct func_801E734C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E734C_Struct;

void *func_801BF6B0();
s32 func_801C1B1C();

s32 func_801E734C(s32 arg0, s32 arg1) {
    if ((((func_801E734C_Struct *)func_801BF6B0(7))->unkC < 0x1A) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}
