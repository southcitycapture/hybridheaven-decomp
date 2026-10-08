#include "common.h"

s32 func_801CE274(void);
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 D_801E732C;

s32 func_801E47E0(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005F, 0, 0, 3.0f);
        D_801E732C = 0;
        return 6;
    }
    return 5;
}
