#include "common.h"

extern s32 func_801C5414(s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32);
extern f32 D_801F47BC;

s32 func_801E454C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35000) != 0) {
        func_801C5414(0, 0xC0C00000, 0x41700000, 0xC2200000, 0, 0, 0, D_801F47BC, 0.5f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0xF;
    }
    return 0xE;
}
