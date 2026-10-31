#include "common.h"
u8 func_801D0B64_bss_prefix[8];
extern void func_8012D844(void *a0, s32 a1, s32 a2);

struct func_801D0B64_Struct { f32 unk0; s32 unk4; };
extern u64 func_801C0B2C();
extern f64 func_80034C24(u64);
extern struct func_801D0B64_Struct D_801DAFF0[];
extern f64 D_801DD470;
u64 D_801E1318;
extern u32 D_801E1320;

void func_801D0B64(s32 arg0) {
    u64 diff;

    diff = func_801C0B2C() - D_801E1318;
    if ((f64)D_801DAFF0[D_801E1320].unk0 <= func_80034C24(diff) / D_801DD470) {
        if (D_801DAFF0[D_801E1320].unk4 == 0) goto case0;
        if (D_801DAFF0[D_801E1320].unk4 == 1) goto case1;
        if (D_801DAFF0[D_801E1320].unk4 != 2) goto end;
        goto case2;
case0:
        func_8012D844((void *)arg0, 0x57, 0);
        goto end;
case1:
        func_8012D844((void *)arg0, 0x57, 1);
        goto end;
case2:
        func_8012D844((void *)arg0, 0x57, 2);
end:
        D_801E1320 = D_801E1320 + 1;
        if (D_801E1320 >= 0xF) {
            D_801E1318 = func_801C0B2C();
        }
        D_801E1320 = D_801E1320 % 15;
    }
}
