#include "common.h"
u8 func_801D2810_bss_prefix[8];
extern void func_8012D844(void *, s32, s32);


struct func_801D2810_Struct {
    f32 unk0;
    s32 unk4;
};
extern f64 func_80034C24(u64);
extern u64 func_801C0B2C();
extern struct func_801D2810_Struct D_801DB284[];
extern f64 D_801DD4C0;
u64 D_801E1428;
extern u32 D_801E1430;

void func_801D2810(void *arg0) {
    u64 d;
    s32 k;
    struct func_801D2810_Struct *e;

    d = func_801C0B2C() - D_801E1428;
    if ((f64)D_801DB284[D_801E1430].unk0 <= func_80034C24(d) / D_801DD4C0) {
        k = D_801DB284[D_801E1430].unk4;
        if (k == 0) goto c0;
        if (k == 1) goto c1;
        if (k != 2) goto end;
        goto c2;
c0:
        func_8012D844(arg0, 0x32, 0);
        goto end;
c1:
        func_8012D844(arg0, 0x32, 1);
        goto end;
c2:
        func_8012D844(arg0, 0x32, 2);
end:
        D_801E1430 = D_801E1430 + 1;
        if (D_801E1430 >= 0xF) {
            D_801E1428 = func_801C0B2C();
        }
        D_801E1430 = D_801E1430 % 15U;
    }
}
