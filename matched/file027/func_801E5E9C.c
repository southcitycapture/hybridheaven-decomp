#include "common.h"

extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D2034(s32 arg0);

s32 func_801E5E9C(s32 arg0, s32 arg1) {
    func_801D2034(1);
    func_801CC470(1, 0x03480006, 0, 0, 3.0f);
    return 0x19;
}
