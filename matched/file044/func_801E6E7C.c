#include "context.h"
s32 func_801C1B1C(void);

struct func_801E6E7C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E6E7C(s32 arg0, s32 arg1) {
    if ((((struct func_801E6E7C_Struct *) func_801BF6B0(7))->unkC < 7) || (func_801C1B1C() == 0)) {
        return 15;
    }
    return 0x10;
}
