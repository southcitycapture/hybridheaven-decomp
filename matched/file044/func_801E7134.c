#include "common.h"

s32 func_801CE274();
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
void func_801C1000(s32 a0, s32 a1);
void func_801C8794(f32 f, s32 a1);
extern s32 D_801ECEE4;

s32 func_801E7134(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B80034, 0, 0, 1.0f);
        func_801C1000(4, 0);
        func_801C8794(10.0f, D_801ECEE4);
        return 0x1B;
    }
    return 0x1A;
}
