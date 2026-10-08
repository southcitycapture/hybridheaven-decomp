#include "context.h"

extern void func_8013643C(void);

void func_801363C8(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80020744(0x3DE);
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        func_800058DC((void *)arg0, (void *)func_8013643C);
    }
}
