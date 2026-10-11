#include "common.h"

extern void *func_801BF6B0(s32);
extern s32 func_801C1B1C(void);

s32 func_801ECC30(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x8B || func_801C1B1C() == 0) {
        return 0x32;
    }
    return 0x33;
}
