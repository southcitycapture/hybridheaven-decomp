#include "common.h"
extern void func_8012D844(void *, s32, s32);
extern f64 func_80034C24();
extern u64 func_801C0B2C();
extern f64 D_801DD580;
u8 func_801D4AF8_bss_prefix[8];
u64 D_801E1618;
extern u32 D_801E1620;

struct func_801D4AF8_Struct {
    f32 unk0;
    s32 unk4;
};
extern struct func_801D4AF8_Struct D_801DB5BC[];

void func_801D4AF8(void *arg0) {
    u64 d;
    u32 n;
    s32 t;

    d = func_801C0B2C() - D_801E1618;
    if (D_801DB5BC[D_801E1620].unk0 <= func_80034C24(d) / D_801DD580) {
        t = D_801DB5BC[D_801E1620].unk4;
        if (t == 0) goto c0;
        if (t == 1) goto c1;
        if (t != 2) goto end;
        if (1) goto c2;
    c0:
        func_8012D844(arg0, 0x30, 0);
        goto end;
    c1:
        func_8012D844(arg0, 0x30, 1);
        goto end;
    c2:
        func_8012D844(arg0, 0x30, 2);
    end:
        n = ++D_801E1620;
        if (n >= 0xF) {
            D_801E1618 = func_801C0B2C();
        }
        D_801E1620 %= 15;
    }
}
