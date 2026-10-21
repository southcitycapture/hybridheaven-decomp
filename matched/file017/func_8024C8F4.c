#include "context.h"

extern void func_8012D814(s32, s32, s32, s32, s32);
extern void func_8024CA74();
extern u8 D_80175C58[];
extern f32 D_8025D02C;

void func_8024C8F4(s32 arg0, func_8024A610_Node **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(func_8024A610_V *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44((void *) arg0, &sp28);
    func_80006214((void *) arg0);
    func_8012C89C((void *) arg0, 0, 0x4B2, 0);
    func_8012D814(arg0, 0x4B2, 1, 0x3F800000, 1);
    k = D_8025D02C;
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32) ((u32) &D_80175C58 | 0x40000000);
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
    func_800058DC(arg0, func_8024CA74);
}
