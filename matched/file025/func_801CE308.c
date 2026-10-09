#include "context.h"
extern s32 D_801DAC50;
extern s32 D_801DAC7C;
extern void func_80006214();

extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);

void func_801CE308(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801DAC50);
        func_801C3370(D_801DAC50, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DAC7C = 1;
        return;
    }
    D_801DAC7C = 0;
}
