#include "common.h"

extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D271C(s32);

s32 func_801F15B0(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200012, 0, 0x1000, 3.0f);
    return 0x1E;
}
