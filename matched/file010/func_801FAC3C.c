#include "context.h"

struct func_801FAC3C_B {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x4B - 0x34];
    u8 unk4B;
};
struct func_801FAC3C_A {
    u8 pad0[0x24];
    struct func_801FAC3C_A *unk24;
    u8 pad28[8];
    struct func_801FAC3C_B *unk30;
    u8 pad34[0x72 - 0x34];
    u16 unk72;
};
extern s32 func_80126B14(void *, void *, u16, s32);
extern u8 D_80216F98[];
extern f32 D_80218E28;
extern f32 D_80218E2C;
struct func_801FADFC_Struct;
void func_801FADFC(struct func_801FADFC_Struct *arg0, s32 arg1);

void func_801FAC3C(struct func_801FAC3C_A *arg0, struct func_801FAC3C_A **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(struct func_801FA6FC_Local *)&sp20 = D_80164F40;
    if (func_80126B14(arg0, func_80126EAC, arg0->unk72, 0x227) != 0) {
        func_8001F74C(arg0);
        sp20.a[1] = 0x800002FF;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C((s32)arg0, 0, 0x227, 2);
        k = D_80218E28;
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (u32)D_80216F98 | 0x40000000;
        (*arg1)->unk30->unk4 = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unk4;
        (*arg1)->unk30->unk8 = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unk8;
        (*arg1)->unk30->unkC = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unkC;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = D_80218E2C;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk10 = 0;
        (*arg1)->unk30->unk12 = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unk12;
        (*arg1)->unk30->unk14 = 0;
        (*arg1)->unk30->unk4B = 0;
        func_800058DC((s32)arg0, func_801FADFC);
    }
}
