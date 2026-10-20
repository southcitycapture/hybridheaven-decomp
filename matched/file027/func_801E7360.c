#include "common.h"

extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
extern s32 func_801C1B1C();

s32 func_801E7360(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x7C) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}
