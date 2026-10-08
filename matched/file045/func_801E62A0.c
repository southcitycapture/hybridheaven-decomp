#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern s32 D_801E8500;

s32 func_801E62A0(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x03200039, 0, 0, 3.0f);
    D_801E8500 = 0;
    return 0x17;
}
