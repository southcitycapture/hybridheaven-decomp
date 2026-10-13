#include "context.h"

struct func_801E6A08_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E6A08(s32 arg0, s32 arg1) {
    if ((((struct func_801E6A08_Struct *) func_801BF6B0(7))->unkC < 0x1F) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}
