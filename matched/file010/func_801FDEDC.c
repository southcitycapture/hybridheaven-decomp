#include "context.h"

struct func_801FDEDC_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
};

extern void func_801FDF1C();

void func_801FDEDC(struct func_801FDEDC_Struct *arg0, s32 arg1) {
    if (arg0->unkB0++ >= 0x1F) {
        func_800058DC(arg0, func_801FDF1C);
    }
}
