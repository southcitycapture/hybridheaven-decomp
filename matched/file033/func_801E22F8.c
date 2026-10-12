#include "context.h"
extern struct func_801E295C_Struct *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);


s32 func_801E22F8(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 15;
    }
    return 16;
}
