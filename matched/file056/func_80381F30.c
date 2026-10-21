#include "context.h"
struct func_80381F30_Arg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern u8 D_80388E98[];
extern f64 D_80389B08;
extern f64 D_80389B10;
void func_80381F30(struct func_80381F30_Arg0 *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp30;
    f32 t;

    sp30 = D_80164F40;
    sp30.b = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 4);
    func_8012D814(arg0, 1, 1, 1.0f, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    t = (f64)func_8012C6B4(0x3C) / D_80389B08 + D_80389B10;
    (*arg1)->unk30->unk20 = t;
    (*arg1)->unk30->unk1C = t;
    (*arg1)->unk30->unk18 = t;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0x8C;
    (*arg1)->unk30->unk4C = 0x40;
    (*arg1)->unk30->unk4D = 0x40;
    (*arg1)->unk30->unk4E = 0x40;
    arg0->unk3C = 0;
}
