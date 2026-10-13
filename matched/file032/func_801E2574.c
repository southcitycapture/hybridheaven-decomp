#include "context.h"
s32 func_801C1B1C(void);

struct func_801E2574_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E2574(s32 arg0, s32 arg1) {
    if ((((struct func_801E2574_Struct *)func_801BF6B0(7))->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}
