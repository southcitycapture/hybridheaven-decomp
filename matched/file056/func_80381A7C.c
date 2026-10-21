#include "context.h"

struct func_80381A7C_A0 { u8 pad0[0x3C]; s16 unk3C; u8 pad1[0x56]; f32 unk94; f32 unk98; f32 unk9C; };
extern u8 D_80388E98[];
extern f32 D_80389AF4;
extern f32 D_80389AF8;

void func_80381A7C(struct func_80381A7C_A0 *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(struct func_803813A8_Struct16 *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 3);
    k = D_80389AF4;
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = D_80389AF8;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    arg0->unk3C = 0;
}
