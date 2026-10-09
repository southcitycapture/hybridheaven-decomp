#include "context.h"

extern s32 func_801CEDE4(void);
extern s32 func_801CEDD4(void);
extern void func_801CED5C(s32 a0);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E84B8;

s32 func_801E58A8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E84B8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 8;

case0:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 3.0f);
        D_801E84B8 = 1;
    }
    goto ret8;

case1:
    if (func_801CEDD4() != 0) {
        goto ret8;
    }
    func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
    return 9;

ret8:
    return 8;
}
