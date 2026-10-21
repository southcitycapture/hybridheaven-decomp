#include "context.h"
extern u8 D_80388E98[];
extern f32 D_80389B24;
extern void func_8012D918(void *, s32, s32, s32, s32);
void func_8038259C(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;
    *(struct func_803813A8_Struct16 *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B5, 0);
    func_8012D918(arg0, 0x4B5, 2, 0, 0);
    k = D_80389B24;
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xF3;
    (*arg1)->unk30->unk4A = 0x22;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x66;
    (*arg1)->unk30->unk4E = 0;
}
