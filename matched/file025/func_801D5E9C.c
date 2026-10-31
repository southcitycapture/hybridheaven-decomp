#include "common.h"
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C();
extern f64 func_80034C24(u64);
struct func_801D5E9C_Struct { f32 unk0; s32 unk4; };
extern struct func_801D5E9C_Struct D_801DB808[];
extern f64 D_801DD5B0;
u64 D_801E16E0[1];
extern u32 D_801E16E8;

void func_801D5E9C(void *arg0) {
    u64 d;
    s32 t;

    d = func_801C0B2C() - D_801E16E0[0];
    if ((f64)D_801DB808[D_801E16E8].unk0 <= func_80034C24(d) / D_801DD5B0) {
        t = D_801DB808[D_801E16E8].unk4;
        if (t == 0) goto c0;
        if (t == 1) goto c1;
        if (t != 2) goto end;
        goto c2;
    c0:
        func_8012D844(arg0, 0x2D, 0);
        goto end;
    c1:
        func_8012D844(arg0, 0x2D, 1);
        goto end;
    c2:
        func_8012D844(arg0, 0x2D, 2);
    end:
        D_801E16E8++;
        if (D_801E16E8 >= 0xF) {
            D_801E16E0[0] = func_801C0B2C();
        }
        D_801E16E8 %= 15;
    }
}
