#include "common.h"

extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);
extern s32 func_801D51F0(s32 a0);
extern s32 D_801EA7AC;

s32 func_801E70C8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480069, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0xE;
}
