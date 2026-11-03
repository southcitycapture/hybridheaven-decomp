#include "common.h"
extern s32 D_801DAFC0;
extern s32 D_801E1300;
extern void func_8012D844(void *a0, s32 a1, s32 a2);

extern u64 func_801C0B2C(void);
extern s32 D_801DAFE0;
u8 func_801D0B64_bss_prefix[8];
u64 D_801E1318;
extern s32 D_801E1320;

void func_801D0B04(s32 arg0) {
    D_801DAFC0 = arg0;
    if (D_801DAFC0 != 0) {
        D_801DAFE0 = 0;
        D_801E1318 = func_801C0B2C();
        D_801E1320 = 0;
    } else {
        func_8012D844((void *) D_801E1300, 0x57, 0);
    }
}
