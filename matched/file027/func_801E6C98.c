#include "common.h"

struct func_801E6C98_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E6C98_Struct *func_801BF6B0();
extern s32 func_801C1B1C();

s32 func_801E6C98(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x56) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}
