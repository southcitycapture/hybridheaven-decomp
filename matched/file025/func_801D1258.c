#include "common.h"
extern s32 D_801E1330;
extern s32 D_801E1334;
extern void func_8012D894(void *arg0, s32 arg1, s32 arg2);

extern u64 func_801C0B2C();
extern s32 D_801DB0AC;
u8 func_801D12B8_bss_prefix[8];
s64 D_801E1358;
extern s32 D_801E1360;

void func_801D1258(s32 arg0) {
    D_801E1334 = arg0;
    if (D_801E1334 != 0) {
        D_801DB0AC = 0;
        D_801E1358 = func_801C0B2C();
        D_801E1360 = 0;
        return;
    }
    func_8012D894((void *)D_801E1330, 0x140, 3);
}
