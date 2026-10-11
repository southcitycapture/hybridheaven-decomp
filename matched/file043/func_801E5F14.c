#include "common.h"

extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CED5C(s32 a0);

s32 func_801E5F14(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8002B, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x1E;
}
