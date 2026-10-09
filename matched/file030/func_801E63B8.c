#include "context.h"
extern s32 D_801EB9FC;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
s32 func_801D2C10(void);

s32 func_801E63B8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EB9FC;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 4;
case0:
    func_801CC470(2, 0x03200033, 0, 0, 3.0f);
    D_801EB9FC = 1;
    goto ret4;
case1:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x03200034, 0, 0, 3.0f);
        D_801EB9FC = 2;
    }
    goto ret4;
case2:
    if (func_801D2C10() == 0) {
        goto ret4;
    }
    return 5;
ret4:
    return 4;
}
