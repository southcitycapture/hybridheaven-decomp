#include "context.h"
extern struct func_801E3BE0_Struct *func_801BF6B0(s32);

s32 func_801E3B90(s32 arg0, s32 arg1) {
    if (*(s32 *)((u8 *)func_801BF6B0(0) + 0xC) >= 0x1A) {
        D_801E8414 = 0;
        return 8;
    }
    func_801E375C();
    return 7;
}
