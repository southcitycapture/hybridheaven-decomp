#include "context.h"

struct func_801E64C8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E64C8(s32 arg0, s32 arg1) {
    if ((((struct func_801E64C8_Struct *) func_801BF6B0(7))->unkC < 0x2B) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}
