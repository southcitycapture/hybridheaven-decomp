#include "context.h"

struct func_80256BC4_StructInner {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad1[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_80256BC4_StructOuter {
    u8 pad0[0x30];
    struct func_80256BC4_StructInner *unk30;
};

struct func_80256BC4_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};

extern u8 D_801BBBF0[];
extern f64 D_8025DC60;
extern f64 D_8025DC68;

void func_80256BC4(struct func_80256BC4_StructArg0 *arg0, struct func_80256BC4_StructOuter **arg1) {
    f64 temp_fv0;
    struct func_80256BC4_StructArg0 *var_a2 = arg0;
    struct func_80256BC4_StructInner *var_v0;
    extern void func_80005700();
    extern s32 func_80133A24();

    var_a2->unk90 = var_a2->unk90 + 1;
    var_v0 = (*arg1)->unk30;
    temp_fv0 = var_v0->unk1C;
    if (temp_fv0 < D_8025DC60) {
        var_v0->unk1C = temp_fv0 + D_8025DC68;
        var_v0 = (*arg1)->unk30;
    }
    var_v0->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x139, arg1) != 0) {
        var_v0 = (*arg1)->unk30;
        var_v0->unk4B = var_v0->unk4B - 2;
        if ((s32) (*arg1)->unk30->unk4B < 2) {
            func_80005700(var_a2, arg1);
        }
    }
}
