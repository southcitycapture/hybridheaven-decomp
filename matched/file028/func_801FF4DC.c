#include "context.h"
extern void func_801C48A4(f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, u8 *, s32);
extern u8 D_801D8FA0[];

extern f32 D_80208DDC;
extern s32 D_80207A4C;

s32 func_801FF4DC(s32 arg0, s32 arg1) {
    f32 k;
    if (D_80207A4C == 1) {
        return 0x3D;
    }
    if (func_801C0B8C(0xA4CB80) != 0) {
        func_801C48A4(0.0f, 6.0f, -17.0f, 0, 0, 0, 0.5f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        D_80207A4C = 1;
        func_801C48A4(25.0f, 7.0f, -16.0f, 0, 0, 0, 1.0f, 0.5f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(-3.0f, 3.0f, -16.0f, 0, 0, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(16.0f, 0.0f, -16.0f, 0, 0, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(16.0f, 5.0f, -17.0f, 0, 0, 0, 0.5f, 0.5f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(7.0f, 3.0f, -15.0f, 0, 0, 0, 0.5f, 0.5f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        k = D_80208DDC;
        func_801C48A4(9.0f, 5.0f, -16.0f, 0, 0, 0, k, k, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        return 0x3E;
    }
    return 0x3D;
}
