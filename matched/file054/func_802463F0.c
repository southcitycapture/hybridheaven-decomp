#include "context.h"
struct func_802463F0_StructI {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[8];
    f32 unk18, unk1C, unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
};
struct func_802463F0_StructN {
    u8 pad0[0x30];
    struct func_802463F0_StructI *unk30;
};
struct func_802463F0_StructO {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    f32 unk90, unk94, unk98, unk9C;
};
struct func_802463F0_StructL { func_802408F0_V v; s32 w; };
extern u8 D_80246990[];
void func_80246598(void *arg0, s32 arg1);
extern s32 func_8012D918(void *, s32, s16, s32, s32);

void func_802463F0(struct func_802463F0_StructO *arg0, struct func_802463F0_StructN **arg1) {
    s32 l[4];
    *(func_802408F0_V *)l = D_80164F40;
    l[1] =0x80000600;
    func_80005E44(arg0, l);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D918(arg0, 0x2DD, 0x14, 0, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80246990 | 0x40000000;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unk9C;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xC;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xD8;
    (*arg1)->unk30->unk4D = 0x20;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk3C = 0;
    func_800058DC(arg0, (void (*)(void))func_80246598);
}
