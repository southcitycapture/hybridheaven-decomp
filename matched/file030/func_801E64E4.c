#include "context.h"

extern s32 func_801C1B1C();

struct func_801E64E4_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E64E4(s32 arg0, s32 arg1) {
    if ((((struct func_801E64E4_Struct *)func_801BF6B0(7))->unkC < 7) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}
