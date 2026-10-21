#include "context.h"
struct func_803816EC_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 unkA0[6];
    u16 unkA6;
    u8 unkA8;
};
extern u8 D_80388E98[];
extern f32 D_80389AEC;

void func_803816EC(struct func_803816EC_StructArg0 *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(struct func_803813A8_Struct16 *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B2, 0);
    func_8012D814(arg0, 0x4B2, 1, 1.0f, 1);
    k = D_80389AEC;
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    arg0->unkA8 = 0;
    arg0->unk3C = func_8012C6B4(4) + 4;
    arg0->unkA6 = 0;
}
