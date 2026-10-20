#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801D2C00();
extern s32 func_801D2C10(void);
extern s32 D_801EBD88;

s32 func_801E874C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EBD88;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 5;
case0:
    func_801CC470(2, 0x0320001C, 0, 0, 10.0f);
    D_801EBD88 = 1;
    goto end;
case1:
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320001F, 0, 0, 30.0f);
        D_801EBD88 = 2;
    }
    goto end;
case2:
    if (func_801D2C00() == 0) {
        return 6;
    }
    goto end;
end:
    return 5;
}
