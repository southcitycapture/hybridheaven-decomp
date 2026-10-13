#include "context.h"

struct func_801E28C8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E28C8(s32 arg0, s32 arg1) {
    if ((((struct func_801E28C8_Struct *)func_801BF6B0(7))->unkC < 0x3F) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}
