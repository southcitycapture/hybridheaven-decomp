#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

s32 func_801E3FE4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(0, 0x01B8003C, 0, 1, 1.0f);
        return 0xA;
    }
    return 9;
}
