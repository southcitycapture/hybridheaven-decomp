#include "context.h"
extern s32 D_801F2CD8;
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();
extern s32 func_801CE284();


s32 func_801E5644(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0xC;

case0:
    func_801CC4D8(0, 0x03480027, 0, 0, 15.0f);
    D_801F2CD8 = 1;
    goto done;

case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480027, 0, 0, 4.0f);
        D_801F2CD8 = 2;
    }
    goto done;

case2:
    if (func_801CE284() == 0) {
        goto done;
    }
    return 0xD;

done:
    return 0xC;
}
