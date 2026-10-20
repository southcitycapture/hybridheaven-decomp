#include "context.h"
extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C();


s32 func_801E8998(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 11;
    }
    return 12;
}
