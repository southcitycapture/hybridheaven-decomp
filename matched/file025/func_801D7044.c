#include "common.h"
extern s32 D_801E1770;
extern s32 D_801E1774;
extern s32 func_8012D894(void *, s32, s32);

extern u64 func_801C0B2C();
extern s32 D_801DBA30;
u8 func_801D70FC_bss_prefix[8];
u64 D_801E1798;
extern s32 D_801E17A0;

void func_801D7044(s32 arg0) {
    D_801E1774 = arg0;
    if (D_801E1774 != 0) {
        D_801DBA30 = 0;
        D_801E1798 = func_801C0B2C();
        D_801E17A0 = 0;
        return;
    }
    func_8012D894((void *)D_801E1770, 0x140, 6);
}
