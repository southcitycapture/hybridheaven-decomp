#include "context.h"
extern s32 func_801C0B8C(u64);
extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801EC708(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_801CC4D8(1, 0x0320001A, 0, 1, 15.0f);
        return 5;
    }
    return 4;
}
