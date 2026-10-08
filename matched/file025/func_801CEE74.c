#include "common.h"

void func_80006214(s32 arg0);
void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern s32 D_801DAD3C;
extern s32 D_801E11F0;

void func_801CEE74(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E11F0);
        func_801C3370(D_801E11F0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DAD3C = 1;
        return;
    }
    D_801DAD3C = 0;
}
