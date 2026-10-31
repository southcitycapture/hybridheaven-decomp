#include "common.h"
u8 func_801D12B8_bss_prefix[8];
extern void func_8012D894(void *arg0, s32 arg1, s32 arg2);


typedef struct func_801D12B8_Struct { f32 unk0; s32 unk4; } func_801D12B8_Struct;
extern func_801D12B8_Struct D_801DB0B4[];
s64 D_801E1358;
extern u32 D_801E1360;
extern f64 D_801DD4A0;
extern u64 func_801C0B2C();
extern f64 func_80034C24(u64);

void func_801D12B8(void *arg0) {
    u64 d;

    d = func_801C0B2C() - D_801E1358;
    if (D_801DB0B4[D_801E1360].unk0 <= func_80034C24(d) / D_801DD4A0) {
        if (D_801DB0B4[D_801E1360].unk4 == 0) goto c0;
        if (D_801DB0B4[D_801E1360].unk4 == 1) goto c1;
        if (D_801DB0B4[D_801E1360].unk4 != 2) goto end;
        if (1) goto c2;
    c0:
        func_8012D894(arg0, 0x140, 3);
        goto end;
    c1:
        func_8012D894(arg0, 0x140, 4);
        goto end;
    c2:
        func_8012D894(arg0, 0x140, 5);
    end:
        D_801E1360++;
        if (D_801E1360 >= 0xF) {
            D_801E1358 = func_801C0B2C(D_801E1360);
        }
        D_801E1360 %= 15;
    }
}
