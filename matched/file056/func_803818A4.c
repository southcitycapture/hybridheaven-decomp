#include "context.h"

extern u8 D_80388EF8[];
extern f32 D_80389AF0;

void func_803818A4(struct func_803816EC_StructArg0 *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp20;

    sp20 = D_80164F40;
    sp20.b = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B4, 0);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x4B4, 1);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = D_80389AF0;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    arg0->unkA8 = D_80388EF8[0];
    arg0->unk3C = 0;
    arg0->unkA6 = 0;
    if (D_80388EF8[0] == 0) {
        D_80388EF8[0] = 1;
        return;
    }
    D_80388EF8[0] = 0;
}
