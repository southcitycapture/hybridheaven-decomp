#include "common.h"
extern s32 D_801DB718;
extern s32 D_801DB710;
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C();
extern s32 D_801DB758;
u64 D_801E16C0;
u8 func_801D5A00_bss_suffix[0x18];
extern s32 D_801E16C8;

void func_801D5938(s32 arg0) {
    if ((D_801DB718 = arg0) != 0) {
        D_801DB758 = 0;
        D_801E16C0 = func_801C0B2C();
        D_801E16C8 = 0;
        return;
    }
    func_8012D844((void *)D_801DB710, 0x34, 0);
}
