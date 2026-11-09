#include "common.h"

extern s32 func_801CEDE4(void);
extern void func_801CED5C(s32);
extern s32 D_801E9800;
s32 func_801E6D90(s32 arg0, s32 arg1) {
    s32 state;
    state = D_801E9800;
    if (state != 0) {
        if (state != 1) {
            if (state != 2) return 0x3D;
            goto state2;
        }
        goto state1;
    }
    state = func_801CEDE4() != 0;
state0:
    if (state) {
        D_801E9800 = 1;
        goto done;
    }
    if ((u32)D_801E9800 >= 0) goto done;
state1:
    D_801E9800 = 2;
    goto done;
state2:
    func_801CED5C(0);
    return 0x3E;
done:
    return 0x3D;
}
