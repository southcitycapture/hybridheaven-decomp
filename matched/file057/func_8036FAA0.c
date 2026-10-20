#include "context.h"

extern s32 func_80224AC4(void *, s32);
extern s32 func_80224F5C();
extern void func_8036FB74();

typedef struct func_8036FAA0_StructActor {
    u8 pad[0x36];
    u16 unk36;
} func_8036FAA0_StructActor;

void func_8036FAA0(func_8036FAA0_StructActor *arg0) {
    u8 *state;
    s32 result;

    if (arg0 == (void *)D_801BBCCC) {
        state = D_801BC03C;
    } else {
        state = D_801BC3D8;
    }
    state[0x392] = 0;
    result = arg0->unk36;
    if (result == 0x11D) {
        if (state[0x2D9] < 5) {
            result = (u16)func_80224AC4(arg0, 0);
        } else {
            result = 0;
        }
    } else if (result == 0x148 && state[0x2D9] < 5) {
        result = (u16)func_80224AC4(arg0, 0);
    } else {
        result = (u16)func_80224F5C(arg0);
    }
    if (result == 0) {
        func_800058DC(arg0, func_8036FB74);
    }
}
