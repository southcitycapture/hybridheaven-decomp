#include "context.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D3620(void);
extern s32 func_801D3630(void);
extern s32 D_801ED0F8;

s32 func_801E9F9C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801ED0F8;
    if (state == 0) goto state0;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    return 0x12;

state0:
    if (func_801D3630() != 0) {
        func_801CC4D8(2, 0x0320005A, 0, 0, 5.0f);
        D_801ED0F8 = 1;
    }
    goto done;
state1:
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x0320005A, 0, 0, 10.0f);
        D_801ED0F8 = 2;
    }
    goto done;
state2:
    if (func_801D3630() != 0) {
        return 0x13;
    }
done:
    return 0x12;
}
