#include "common.h"
extern u8 D_80164F40[];
extern u8 D_80388E98[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8012C6B4(s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, s32, s32, s32);
struct func_80380F94_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x40 - 0x3E];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    u8 unk90;
    u8 pad3[0x94 - 0x91];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};
struct func_803813A8_Struct16 { s32 a, b, c, d; };
struct func_803813A8_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad3[0x8];
    u32 unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803813A8_StructOut {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
};


void func_803820EC(struct func_80380F94_Struct *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp20;

    sp20 = *(struct func_803813A8_Struct16 *) D_80164F40;
    sp20.b = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012CF8C(arg0, (s32) (*arg1)->unk30 + 0x40, 0x374, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (s32) D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk18 = 0.01f;
    (*arg1)->unk30->unk1C = 0.01f;
    (*arg1)->unk30->unk20 = 0.01f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = func_8012C6B4(0xBF) + 0x40;
    (*arg1)->unk30->unk4D = func_8012C6B4(0xBF) + 0x40;
    (*arg1)->unk30->unk4E = func_8012C6B4(0xBF) + 0x40;
    arg0->unkA0 = func_8012C6B4(0x2000);
}
