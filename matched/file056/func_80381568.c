#include "context.h"

extern void func_8012CF8C(void *, s32, s32, s32);
extern u8 D_80388E98[];
extern f32 D_80389AE8;

void func_80381568(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp;

    *(struct func_803813A8_Struct16 *)&sp = D_80164F40;
    sp.a[1] = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x374, 0);
    k = D_80389AE8;
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
}
