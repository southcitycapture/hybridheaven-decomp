#include "common.h"
u8 func_801CEF20_bss_prefix[0x8];
extern void func_8012D844(void *, s32, s32);

extern f64 func_80034C24(u64);
extern u64 func_801C0B2C();
extern f64 D_801DD440;
u64 D_801E1218;
extern u32 D_801E1220;

struct func_801CEF20_Struct {
    f32 unk0;
    s32 unk4;
};
extern struct func_801CEF20_Struct D_801DAD64[];

void func_801CEF20(void *arg0) {
    u64 d;
    u32 n;
    s32 t;

    d = func_801C0B2C() - D_801E1218;
    if (D_801DAD64[D_801E1220].unk0 <= func_80034C24(d) / D_801DD440) {
        t = D_801DAD64[D_801E1220].unk4;
        if (t == 0) goto c0;
        if (t == 1) goto c1;
        if (t != 2) goto end;
        if (1) goto c2;
    c0:
        func_8012D844(arg0, 0x2D, 0);
        goto end;
    c1:
        func_8012D844(arg0, 0x2D, 1);
        goto end;
    c2:
        func_8012D844(arg0, 0x2D, 2);
    end:
        n = ++D_801E1220;
        if (n >= 0xF) {
            D_801E1218 = func_801C0B2C();
        }
        D_801E1220 %= 15;
    }
}
