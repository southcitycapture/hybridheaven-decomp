#include "context.h"

extern s32 func_801D2C10();
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern s32 D_801EB9FC;

s32 func_801E6B30(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto state0;
    }
    if (D_801EB9FC == 1) {
        goto state1;
    }
    if (D_801EB9FC == 2) {
        goto state2;
    }
    return 0x1B;

state0:
    func_801CC470(2, 0x03200034, 0, 0, 4.0f);
    D_801EB9FC = 1;
state1:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x03200035, 0, 0, 4.0f);
        D_801EB9FC = 2;
    }
    goto done;

state2:
    if (func_801D2C10() != 0) {
        return 0x1C;
    }

done:
    return 0x1B;
}
