#include "context.h"

extern s32 func_801C1B1C(void);

struct func_801EA0D4_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801EA0D4(s32 arg0, s32 arg1) {
    if ((((struct func_801EA0D4_Struct *)func_801BF6B0(7))->unkC < 0x17) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}
