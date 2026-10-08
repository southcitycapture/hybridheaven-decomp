#include "common.h"

struct func_801E5DF4_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E5DF4_Struct *func_801BF6B0();
extern s32 func_801C1B1C();

s32 func_801E5DF4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x36) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}
