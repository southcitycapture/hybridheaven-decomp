#include "context.h"

struct func_801E5A00_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E5A00(s32 arg0, s32 arg1) {
    if ((((struct func_801E5A00_Struct *)func_801BF6B0(7))->unkC < 0x52) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}
