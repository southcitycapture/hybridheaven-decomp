#include "common.h"
extern s32 D_801DADE0;
extern s32 D_801E1230;
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C(void);
extern s32 D_801DAE04;
u8 func_801CF5A0_bss_prefix[0x38];
u64 D_801E1258;
extern s32 D_801E1260;

void func_801CF450(s32 arg0) {
    D_801DADE0 = arg0;
    if (D_801DADE0 != 0) {
        D_801DAE04 = 0;
        D_801E1258 = func_801C0B2C();
        D_801E1260 = 0;
    } else {
        func_8012D844((void *) D_801E1230, 0x30, 0);
    }
}
