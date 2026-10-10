#include "context.h"
void *func_801BF6B0();
s32 func_801C1B1C();

struct func_801E229C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E229C(s32 arg0, s32 arg1) {
    if ((((struct func_801E229C_Struct *) func_801BF6B0(7))->unkC < 0x15) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}
