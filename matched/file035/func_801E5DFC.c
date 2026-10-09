#include "context.h"
s32 func_801C0B8C(u64 time);
s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_801CE3C4(s32);
extern void func_801CE3D0(s32 arg0);

s32 func_801E5DFC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01B466BE) != 0) {
        func_801CC4D8(0, 0x03480059, 0, 0, 5.0f);
        func_801CE3C4(0);
        func_801CE3D0(0);
        return 0x12;
    }
    return 0x11;
}
