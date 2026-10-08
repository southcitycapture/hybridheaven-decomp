#include "common.h"

s32 func_801CE274();
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 D_801E9720;

s32 func_801E4AC4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348004D, 0, 2, 6.0f);
        D_801E9720 = 0;
        return 0x1C;
    }
    return 0x1B;
}
