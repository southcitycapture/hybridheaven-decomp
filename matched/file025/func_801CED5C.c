#include "common.h"
extern s32 D_801DAD10;
extern s32 D_801E11F0;
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C();
extern s32 D_801DAD30;
u8 func_801CEF20_bss_prefix[0x8];
u64 D_801E1218;
extern s32 D_801E1220;

void func_801CED5C(s32 arg0) {
    if ((D_801DAD10 = arg0) != 0) {
        D_801DAD30 = 0;
        D_801E1218 = func_801C0B2C();
        D_801E1220 = 0;
        return;
    }
    func_8012D844((void *)D_801E11F0, 0x2D, 0);
}
