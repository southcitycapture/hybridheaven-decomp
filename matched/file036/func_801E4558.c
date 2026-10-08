#include "common.h"

extern s32 *func_801BF6B0(s32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E4558(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)[3] >= 0xA) {
        func_801CC4D8(1, 0x01B80042, 0, 0, 15.0f);
        return 0x19;
    }
    return 0x18;
}
