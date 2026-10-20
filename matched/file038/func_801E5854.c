#include "context.h"

extern s32 func_801D51A4(void);
extern s32 func_801D5194(void);
extern void func_8038D28C(s32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 D_801E6C34;

s32 func_801E5854(s32 arg0, s32 arg1)
{
    s32 state;

    state = D_801E6C34;
    if (state == 0) goto state0;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    return 4;

state0:
    if (func_801D51A4() != 0) {
        func_8038D28C(0x23E);
        func_801CC4D8(2, 0x02A80034, 0, 0, 3.0f);
        D_801E6C34 = 1;
    }
    goto done;
state1:
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x02A80034, 0, 0x100, 10.0f);
        D_801E6C34 = 2;
    }
    goto done;
state2:
    return 5;
done:
    return 4;
}
