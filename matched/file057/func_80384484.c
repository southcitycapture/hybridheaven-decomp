#include "context.h"

typedef struct func_80384484_Struct {
    u8 pad0[0xA9];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_80384484_Struct;

void func_80384484(func_80384484_Struct *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if ((arg0->unkB0 < 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        arg0->unkA9 = arg0->unkA9 + 1;
        if (arg0->unkA9 >= 6) {
            arg0->unkB0 = 0xC8;
            func_800058DC(arg0, func_80384514);
            return;
        }
        func_800058DC(arg0, func_80384268);
    }
}
