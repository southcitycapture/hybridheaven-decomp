#include "context.h"

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80212EAC_Inner;
typedef struct {
    u8 pad0[0x30];
    func_80212EAC_Inner *unk30;
} func_80212EAC_Outer;
typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80212EAC_Arg0;
extern u8 D_80217CE0[];
extern f32 D_8021ADC0;

void func_80212EAC(func_80212EAC_Arg0 *arg0, func_80212EAC_Outer **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(struct func_802070F4_Local *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    k = D_8021ADC0;
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80217CE0 | 0x40000000;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xDC;
    (*arg1)->unk30->unk4C = 0x66;
    (*arg1)->unk30->unk4D = 0xCD;
    (*arg1)->unk30->unk4E = 0x4C;
}
