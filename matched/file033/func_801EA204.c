#include "context.h"

struct func_801EA204_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801EA204(s32 arg0, s32 arg1) {
    if ((((struct func_801EA204_Struct *)func_801BF6B0(7))->unkC < 0xA1) || (func_801C1B1C() == 0)) {
        return 0x40;
    }
    return 0x41;
}
