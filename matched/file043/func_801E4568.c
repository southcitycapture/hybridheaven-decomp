#include "context.h"
extern s32 D_801E9720;
extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
s32 func_801CE274();
extern s32 func_801CE284();


s32 func_801E4568(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E9720;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 8;
case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x04100036, 0, 0, 30.0f);
        D_801E9720 = 1;
    }
    goto ret8;
case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100036, 0, 0x100, 10.0f);
        return 9;
    }
ret8:
    return 8;
}
