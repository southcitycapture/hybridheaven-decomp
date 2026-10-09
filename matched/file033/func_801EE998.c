#include "context.h"

void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801D58DC(void);
s32 func_801D58EC(void);
extern s32 D_801F362C;

s32 func_801EE998(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F362C;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x2C;

case0:
    func_801CC4D8(2, 0x0320004E, 0, 0, 3.0f);
    D_801F362C = 1;
    goto done;

case1:
    if (func_801D58DC() != 0) {
        goto done;
    }
    func_801CC470(2, 0x0320004E, 0, 0, 6.0f);
    D_801F362C = 2;
    goto done;

case2:
    if (func_801D58EC() != 0) {
        return 0x2D;
    }
    goto done;

done:
    return 0x2C;
}
