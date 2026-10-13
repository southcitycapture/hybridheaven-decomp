#include "context.h"
struct func_801E27E0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};
extern struct func_801E27E0_Struct *func_801BF6B0(s32);
s32 func_801C1B1C();

s32 func_801E1D58(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 4) || (func_801C1B1C() == 0)) {
        return 4;
    }
    return 5;
}
