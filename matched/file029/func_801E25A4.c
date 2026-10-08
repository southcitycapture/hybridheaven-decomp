#include "common.h"

struct func_801E25A4_Struct {
    u8 pad[0xC];
    s32 unkC;
};

struct func_801E25A4_Struct *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801E25A4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x19) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}
