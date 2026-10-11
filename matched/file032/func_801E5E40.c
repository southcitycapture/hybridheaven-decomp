#include "context.h"

struct func_801E5E40_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E5E40(s32 arg0, s32 arg1) {
    if ((((struct func_801E5E40_Struct *)func_801BF6B0(7))->unkC < 0x7E) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}
