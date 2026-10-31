#include "common.h"
struct func_803813A8_Struct16 { s32 a, b, c, d; };
extern struct func_803813A8_Struct16 D_80164F40;
extern u8 D_801BBBF0[];
extern u8 D_80388E98[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, s32, s32, s32);
struct func_803813A8_StructA {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad1[0x8];
    u8 unkA8;
};
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


void func_80381204(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp;
    sp = D_80164F40;
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012CF8C(arg0, (s32)((u8 *)(*arg1)->unk30 + 0x40), 0x374, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = 0.004999999888241291f;
    (*arg1)->unk30->unk1C = 0.004999999888241291f;
    (*arg1)->unk30->unk20 = 0.004999999888241291f;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0x80;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
}
