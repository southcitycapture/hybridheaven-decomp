#include "common.h"

void func_80006214(s32 arg0);
void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern s32 D_801DBB80;
extern s32 D_801E1BB0;

void func_801D8A14(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E1BB0);
        func_801C3370(D_801E1BB0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DBB80 = 1;
        return;
    }
    D_801DBB80 = 0;
}
