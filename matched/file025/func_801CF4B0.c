#include "common.h"
extern s32 D_801DADE4;
extern s32 D_801E1230;
extern void func_8012D844(void *, s32, s32);

extern s64 func_801C0B2C();
extern s32 D_801DAE04;
u8 func_801CF5A0_bss_prefix[0x38];
u64 D_801E1258;
u8 func_801CF700_bss_prefix[0x8];
u64 D_801E1268;
extern s32 D_801E1270;

void func_801CF4B0(s32 arg0) {
    D_801DADE4 = arg0;
    if (D_801DADE4 != 0) {
        D_801DAE04 = 1;
        D_801E1268 = func_801C0B2C();
        D_801E1270 = 0;
        return;
    }
    func_8012D844((void *)D_801E1230, 0x30, 0);
}
