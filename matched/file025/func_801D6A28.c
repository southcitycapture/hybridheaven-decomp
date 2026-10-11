#include "context.h"

extern void func_80006214(s32);
extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);
extern s32 D_801DB978;
extern s32 D_801E1730;

void func_801D6A28(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801E1730);
        func_801C3370(D_801E1730, arg1, arg2, arg3, (s32) arg4, 1, arg5, 0);
        D_801DB978 = 1;
        return;
    }
    D_801DB978 = 0;
}
