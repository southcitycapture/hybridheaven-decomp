#include "common.h"

extern s32 func_801C5414(s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32);
extern f32 D_801F4804;
extern f32 D_801F4808;

s32 func_801E4ED8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCC77BF) != 0) {
        func_801C5414(2, 0xC0400000, 0x41500000, 0xC2180000, 0, 0, 0, D_801F4804, D_801F4808, 0xC8, 0x64, 0x28, 0xFF, 0xFF, 0xFF, 3, 1);
        return 0xC;
    }
    return 0xB;
}
