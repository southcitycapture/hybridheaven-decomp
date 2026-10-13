#include "context.h"
s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CE284();

s32 func_801E48F0(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 20.0f);
        return 4;
    }
    return 3;
}
