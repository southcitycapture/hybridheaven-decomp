#include "context.h"

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
struct func_803813A8_StructA {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad1[0x8];
    u8 unkA8;
};
extern struct func_803813A8_Struct16 D_80164F40;
extern u8 D_80175C58[];
extern f64 D_80389AD8;
extern f64 D_80389AE0;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, f32, s32);

void func_803813A8(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp30;
    f32 t;

    sp30 = D_80164F40;
    sp30.b = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 1.0f, 1);
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x1A;
    (*arg1)->unk30->unk4E = 0x40;
    t = (f32)func_8012C6B4(0x96) / D_80389AD8 + D_80389AE0;
    (*arg1)->unk30->unk18 = t;
    (*arg1)->unk30->unk1C = t;
    (*arg1)->unk30->unk20 = t;
    arg0->unkA8 = 0;
}
