#include "context.h"
extern void *func_801BF6B0(s32);
extern s32 func_801C1B1C();


s32 func_801E6E70(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x3F;
    }
    return 0x40;
}
