#include "context.h"

struct func_80207238_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80207238_Struct0 {
    u8 pad0[0x30];
    struct func_80207238_Struct1 *unk30;
};
struct func_80207238_Struct2 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
struct func_80207238_Struct3 {
    struct func_802070F4_Local a;
    s32 b;
};
extern void func_8012D8C8(void *, s32, s32, s32, s32, s32);
extern s32 func_8012C6B4(s32);
extern u8 D_80217B00[];
extern f64 D_8021A808;
extern f64 D_8021A810;

void func_80207238(struct func_80207238_Struct2 *arg0, struct func_80207238_Struct0 **arg1) {
    struct func_802070F4_Local sp30;
    struct func_80207238_Struct1 *v1;

    sp30 = D_80164F40;
    sp30.unk4 = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 4);
    func_8012D8C8(arg0, 1, 3, 0x40000000, 0, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (s32)D_80217B00 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = (f32)((f64)func_8012C6B4(0x32) / D_8021A808 + D_8021A810);
    v1 = (*arg1)->unk30;
    v1->unk20 = v1->unk18;
    (*arg1)->unk30->unk1C = v1->unk18;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xE6;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk3C = 0;
}
