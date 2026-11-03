#include "common.h"
extern s32 D_801DB180;
extern s32 D_801E13C0;
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C();
extern s32 D_801DB1B0;
u8 func_801D2140_bss_prefix[8];
u64 D_801E13E8;
u8 func_801D2140_bss_suffix[0x30];
extern s32 D_801E13F0;

void func_801D2034(s32 arg0) {
    if ((D_801DB180 = arg0) != 0) {
        D_801DB1B0 = 0;
        D_801E13E8 = func_801C0B2C();
        D_801E13F0 = 0;
        return;
    }
    func_8012D844((void *)D_801E13C0, 0x31, 0);
}
