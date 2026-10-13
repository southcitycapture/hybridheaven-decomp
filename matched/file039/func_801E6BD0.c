#include "context.h"

struct func_801E6BD0_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E6BD0(s32 arg0, s32 arg1) {
    if ((((struct func_801E6BD0_Struct *)func_801BF6B0(7))->unkC < 0x4A) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}
