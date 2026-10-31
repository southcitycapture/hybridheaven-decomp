#include "common.h"
u8 func_801CF5A0_bss_prefix[0x38];
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C();
extern f64 func_80034C24(s64);
struct func_801CF5A0_Struct { f32 a; s32 b; };
extern struct func_801CF5A0_Struct D_801DAE10[];
extern f64 D_801DD450;
u64 D_801E1258;
extern u32 D_801E1260;

void func_801CF5A0(void *arg0) {
    s64 d;
    s32 b;

    d = func_801C0B2C() - D_801E1258;
    if (D_801DAE10[D_801E1260].a <= func_80034C24(d) / D_801DD450) {
        b = D_801DAE10[D_801E1260].b;
        if (b == 0) goto c0;
        if (b == 1) goto c1;
        if (b != 2) goto dj;
        if (1) goto c2;
    c0:
        func_8012D844(arg0, 0x30, 0);
        if (1) goto dj;
    c1:
        func_8012D844(arg0, 0x30, 1);
        if (1) goto dj;
    c2:
        func_8012D844(arg0, 0x30, 2);
    dj:
        D_801E1260++;
        if (D_801E1260 >= 0xF) {
            D_801E1258 = func_801C0B2C();
        }
        D_801E1260 %= 15;
    }
}
