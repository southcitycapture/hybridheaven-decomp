#include "common.h"

extern void func_801D271C(s32 arg0);
extern s32 func_801D278C(void);
extern void func_801CC470(s32 arg0, u32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 D_801F4D08;

s32 func_801F1048(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F4D08;
    if (state == 0) {
        goto block_0;
    }
    if (state == 1) {
        goto block_1;
    }
    return 0x10;
block_0:
    func_801D271C(1);
    func_801CC470(2, 0x03200006, 0, 0x1000, 5.0f);
    D_801F4D08 = 1;
    goto done;
block_1:
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 0x11;
    }
done:
    return 0x10;
}
