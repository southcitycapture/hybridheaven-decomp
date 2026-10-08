#include "common.h"

extern void func_801BF850(void *arg0, s32 arg1, void *arg2);
extern u8 D_801DAAB0[];
extern u8 D_801E0BB0[];
extern s32 D_801DAB14;
extern s32 D_801DAB18;

void func_801CC2C8(s32 arg0, s32 arg1) {
    D_801DAB14 = arg0;
    D_801DAB18 = arg1;
    func_801BF850(D_801DAAB0, 4, D_801E0BB0);
}
