#include "common.h"
extern s32 D_801DB648;
extern s32 D_801DB640;
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C();
extern s32 D_801DB68C;
u64 D_801E1670;
extern s32 D_801E1678;

void func_801D51F0(s32 arg0) {
    if ((D_801DB648 = arg0) != 0) {
        D_801DB68C = 0;
        D_801E1670 = func_801C0B2C();
        D_801E1678 = 0;
        return;
    }
    func_8012D844((void *)D_801DB640, 0x118, 0);
}
