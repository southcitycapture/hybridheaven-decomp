#include "context.h"

struct func_801E1FB8_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E1FB8(s32 arg0, s32 arg1) {
    if ((((struct func_801E1FB8_Struct *)func_801BF6B0(7))->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 8;
    }
    return 9;
}
