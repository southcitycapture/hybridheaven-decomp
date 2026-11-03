#include "common.h"
extern s32 D_801DB880;
extern s32 D_801E16F0;
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C();
extern s32 D_801DB8A4;
u8 func_801D63E0_bss_prefix[8];
u64 D_801E1708;
extern s32 D_801E1710;

void func_801D631C(s32 arg0) {
    if ((D_801DB880 = arg0) != 0) {
        D_801DB8A4 = 0;
        D_801E1708 = func_801C0B2C();
        D_801E1710 = 0;
        return;
    }
    func_8012D844((void *)D_801E16F0, 0x36, 0);
}
