#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E4738(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_801CC470(0, 0x01B80022, 0, 0x100, 3.0f);
        return 0xA;
    }
    return 9;
}
