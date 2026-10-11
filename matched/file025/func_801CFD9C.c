#include "context.h"
extern s32 D_801DAEB0;
extern s32 D_801DAEF4;
extern void func_80006214();

extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);

void func_801CFD9C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801DAEB0);
        func_801C3370(D_801DAEB0, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DAEF4 = 1;
        return;
    }
    D_801DAEF4 = 0;
}
