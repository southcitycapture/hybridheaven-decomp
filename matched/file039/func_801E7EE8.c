#include "common.h"

extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D51F0(s32);
extern s32 D_801EA7AC;

s32 func_801E7EE8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480068, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x30;
}
