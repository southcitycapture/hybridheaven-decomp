#include "context.h"

struct func_801E2034_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E2034(s32 arg0, s32 arg1) {
    if ((((struct func_801E2034_Struct *) func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}
