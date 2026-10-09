#include "context.h"
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CE274();

s32 func_801E5FBC(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480044, 0, 0, 4.0f);
        return 0xB;
    }
    return 0xA;
}
