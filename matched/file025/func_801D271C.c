#include "common.h"
extern s32 D_801DB240;
extern s32 D_801E1400;
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C();
extern s32 D_801DB270;
u8 func_801D2140_bss_prefix[8];
u64 D_801E13E8;
u8 func_801D2140_bss_suffix[0x30];
u8 func_801D2810_bss_prefix[8];
u64 D_801E1428;
extern s32 D_801E1430;

void func_801D271C(s32 arg0) {
    if ((D_801DB240 = arg0) != 0) {
        D_801DB270 = 0;
        D_801E1428 = func_801C0B2C();
        D_801E1430 = 0;
        return;
    }
    func_8012D844((void *)D_801E1400, 0x32, 0);
}
