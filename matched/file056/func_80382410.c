#include "common.h"
struct func_803813A8_Struct16 { s32 a, b, c, d; };
extern struct func_803813A8_Struct16 D_80164F40;
extern u8 D_80388E98[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);

struct func_80382410_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80382410_StructOut { u8 pad0[0x30]; struct func_80382410_StructIn *unk30; };
struct func_80382410_StructA { u8 pad0[0x94]; f32 unk94; f32 unk98; f32 unk9C; };
extern f32 D_80389B20;

void func_80382410(struct func_80382410_StructA *arg0, struct func_80382410_StructOut **arg1) {
    struct func_803813A8_Struct16 sp28;
    sp28 = D_80164F40;
    sp28.b = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B5, 0);
    func_8012D918(arg0, 0x4B5, 1, 0, 0);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = 0.0020000000949949026f;
    (*arg1)->unk30->unk1C = 0.0020000000949949026f;
    (*arg1)->unk30->unk20 = 0.0020000000949949026f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xF3;
    (*arg1)->unk30->unk4A = 0x22;
    (*arg1)->unk30->unk4B = 0xC0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x66;
    (*arg1)->unk30->unk4E = 0;
}
