#include "common.h"
extern s32 D_801DB590;
extern s32 D_801E1600;
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C();
extern s32 D_801DB5B0;
u8 func_801D4AF8_bss_prefix[8];
u64 D_801E1618;
extern s32 D_801E1620;

void func_801D4A0C(s32 arg0) {
    if ((D_801DB590 = arg0) != 0) {
        D_801DB5B0 = 0;
        D_801E1618 = func_801C0B2C();
        D_801E1620 = 0;
        return;
    }
    func_8012D844((void *)D_801E1600, 0x30, 0);
}
