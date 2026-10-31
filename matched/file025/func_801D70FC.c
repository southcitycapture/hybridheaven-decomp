#include "common.h"
u8 func_801D70FC_bss_prefix[8];
extern s32 func_8012D894(void *, s32, s32);

struct func_801D70FC_Struct { f32 unk0; s32 unk4; };
extern u64 func_801C0B2C();
extern f64 func_80034C24(u64);
extern struct func_801D70FC_Struct D_801DBA38[];
extern f64 D_801DD5E0;
u64 D_801E1798;
extern u32 D_801E17A0;

void func_801D70FC(void *arg0) {
    u64 d;
    s32 v;

    d = func_801C0B2C() - D_801E1798;
    if ((f64)D_801DBA38[D_801E17A0].unk0 <= func_80034C24(d) / D_801DD5E0) {
        v = D_801DBA38[D_801E17A0].unk4;
        do {
            if (v == 0) goto c0;
            if (v == 1) goto c1;
            if (v != 2) break;
            goto c2;
        c0:
            func_8012D894(arg0, 0x140, 6);
            break;
        c1:
            func_8012D894(arg0, 0x140, 4);
            break;
        c2:
            func_8012D894(arg0, 0x140, 5);
        } while (0);
        if (++D_801E17A0 >= 0x10) {
            D_801E1798 = func_801C0B2C();
        }
        D_801E17A0 = D_801E17A0 & 0xF;
    }
}
