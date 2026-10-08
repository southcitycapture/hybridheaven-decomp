#include "common.h"

extern void func_800058DC(s32 arg0, void *arg1);
extern void func_801BFFCC();
extern void func_801BF598();
extern s32 D_801D8CF4;
extern s32 D_801D8CF8;

void func_801BF54C(s32 arg0, s32 arg1) {
    if (D_801D8CF8 == 0) {
        func_801BFFCC();
    }
    D_801D8CF4 = 0;
    func_800058DC(arg0, func_801BF598);
}
