#include "context.h"
extern s32 D_801EA990;
extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D3620(void);

s32 func_801E69D8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EA990;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x19;
case0:
    if (func_801D3630() != 0) {
        func_801CC4D8(2, 0x03200056, 0, 0, 5.0f);
        D_801EA990 = 1;
    }
    goto block_9;
case1:
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200056, 0, 0x100, 20.0f);
        D_801EA990 = 2;
    }
    goto block_9;
case2:
    return 0x1A;
block_9:
    return 0x19;
}
