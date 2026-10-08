#include "context.h"

extern void func_80136900();

void func_80136898(s32 arg0, void *arg1) {
    if (func_800178E8() != 0) {
        *(s16 *)&D_801BBBF0.pad0[0x194] = 1;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        func_800058DC((void *)arg0, (void *)&func_80136900);
    }
}
