#include "context.h"

typedef struct func_802461B8_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802461B8_StructI;
typedef struct func_802461B8_StructN {
    u8 pad0[0x30];
    func_802461B8_StructI *unk30;
} func_802461B8_StructN;
typedef struct func_802461B8_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_802461B8_Struct;

extern s32 func_8012D918(void *, s32, s16, s32, s32);
extern u8 D_80246990[];
extern u8 func_80246360[];

void func_802461B8(func_802461B8_Struct *arg0, func_802461B8_StructN **arg1) {
    func_802408F0_V sp28;

    sp28 = D_80164F40;
    sp28.w[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D918(arg0, 0x2DD, 0, 0, 0);
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
    func_800058DC(arg0, (void (*)(void))func_80246360);
}
