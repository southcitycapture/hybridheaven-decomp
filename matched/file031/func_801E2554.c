#include "context.h"

void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 D_801E2C00;

s32 func_801E2554(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200021, 0, 0, 30.0f);
    D_801E2C00 = 0;
    return 5;
}
