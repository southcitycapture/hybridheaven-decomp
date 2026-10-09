#include "context.h"
extern s32 D_801E85F4;
extern void func_801CC470(s32, s32, s32, s32, f32);
s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CE274();
s32 func_801CE284(void);
extern void func_801CE3D0(s32 arg0);

s32 func_801E5B94(s32 arg0, s32 arg1) {
    s32 state = D_801E85F4;

    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0xA;

case0:
    if (func_801CE284() == 0) {
        goto ret10;
    }
    func_801CE3D0(0);
    func_801CC4D8(0, 0x03480053, 0, 0, 5.0f);
    D_801E85F4 = 1;
    goto ret10;

case1:
    if (func_801CE274() != 0) {
        goto ret10;
    }
    func_801CC470(0, 0x03480053, 0, 0x100, 9.0f);
    return 0xB;

ret10:
    return 0xA;
}
