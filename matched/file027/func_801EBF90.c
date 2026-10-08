#include "common.h"

struct func_801EBF90_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801EBF90_Struct *func_801BF6B0();
extern s32 func_801C1B1C();

s32 func_801EBF90(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x38) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}
