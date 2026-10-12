#include "context.h"

struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_802070F4_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_802070F4_Outer {
    u8 pad0[0x30];
    struct func_802070F4_Inner *unk30;
};
struct func_802070F4_Arg0 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x54];
    s16 unk92;
};

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern struct func_802070F4_Local D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern f32 D_8021A804;

void func_802070F4(void *arg0, struct func_802070F4_Outer **arg1) {
    struct func_802070F4_Local sp28;
    f32 temp_fv0;
    struct func_802070F4_Inner *temp_v0;

    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xDA, 0);
    (*arg1)->unk30->unk24 = 0x13;
    (*arg1)->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk20 = D_8021A804;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk24 = temp_v0->unk24 | 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    ((struct func_802070F4_Arg0 *) arg0)->unk3C = 0;
    ((struct func_802070F4_Arg0 *) arg0)->unk92 = 0;
}
