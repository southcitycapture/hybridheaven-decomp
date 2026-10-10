#include "context.h"
extern struct func_801E3BE0_Struct *func_801BF6B0(s32);

s32 func_801E3A28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0200B1FE) != 0) {
        D_801E8420 = 1;
    }
    if (*(s32 *)((u8 *)func_801BF6B0(0) + 0xC) >= 0x13) {
        D_801E8414 = 0;
        return 4;
    }
    func_801E375C();
    return 3;
}
