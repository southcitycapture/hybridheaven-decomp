#include "context.h"
extern s32 D_801F2CD8;
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();


s32 func_801E54C4(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 7;
case0:
    func_801CC4D8(0, 0x04100026, 0, 0, 15.0f);
    D_801F2CD8 = 1;
    goto block_7;
case1:
    if (func_801CE274() != 0) {
        goto block_7;
    }
    func_801CC470(0, 0x04100026, 0, 0x100, 3.0f);
    return 8;
block_7:
    return 7;
}
