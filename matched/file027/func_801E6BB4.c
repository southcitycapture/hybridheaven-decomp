#include "common.h"

extern s32 func_801D271C(s32);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E6BB4(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200003, 0, 0, 3.0f);
    return 0x15;
}
