#include "context.h"
struct func_80381D78_In { u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; s16 unk10; s16 unk12; s16 unk14; u8 pad1[2]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad2[8]; s32 unk30; u8 pad3[0x14]; u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E; };
struct func_80381D78_Out { u8 pad0[0x30]; struct func_80381D78_In *unk30; };
struct func_80381D78_A0 { u8 pad0[0x3C]; s16 unk3C; u8 pad1[0x56]; f32 unk94; f32 unk98; f32 unk9C; };
extern u8 D_80388E98[];
extern f32 D_80389B04;
extern void func_8012D918(void *, s32, s32, s32, s32);

void func_80381D78(struct func_80381D78_A0 *arg0, struct func_80381D78_Out **arg1) {
    register f32 k;
    register s32 t;
    struct { s32 a[2]; } sp28;
    *(struct func_803813A8_Struct16 *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D918(arg0, 1, 0, 0, 0);
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = func_8012C6B4(0x2000);
    (*arg1)->unk30->unk12 = func_8012C6B4(0x2000);
    t = func_8012C6B4(0x2000);
    k = D_80389B04;
    (*arg1)->unk30->unk14 = t;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0;
    (*arg1)->unk30->unk49 = 0;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk3C = 0;
}
