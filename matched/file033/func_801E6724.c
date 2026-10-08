#include "common.h"

extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D5938(s32 a0);
extern s32 D_801F2DB4;

s32 func_801E6724(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200047, 0, 0, 5.0f);
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0x13;
}
