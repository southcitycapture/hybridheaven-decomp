#include "context.h"

extern void func_801C48A4(f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, u8 *, s32);
extern u8 D_801D8FA0[];

s32 func_801FF80C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016B28BF) != 0) {
        func_801C48A4(20.0f, 6.0f, -12.0f, 0, 0x10E, 0x157, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(21.0f, 7.0f, 9.0f, 0, 0x10E, 0x162, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(18.0f, 2.0f, 5.0f, 0, 0x10E, 0x15F, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        return 0x3F;
    }
    return 0x3E;
}
