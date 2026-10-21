#include "context.h"
void func_80256EA8(s32 arg0, void **arg1);

typedef struct func_80256CB0_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256CB0_StructI;
typedef struct func_80256CB0_StructM {
    u8 pad0[0x30];
    func_80256CB0_StructI *unk30;
} func_80256CB0_StructM;
typedef struct func_80256CB0_StructA {
    u8 pad0[0x90];
    u16 unk90;
} func_80256CB0_StructA;
typedef struct func_80256CB0_StructP {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80256CB0_StructP;
typedef struct func_80256CB0_StructB {
    u8 pad0[0x2C];
    func_80256CB0_StructP *unk2C;
} func_80256CB0_StructB;
typedef struct func_80256CB0_StructG {
    u8 pad0[0xE0];
    func_80256CB0_StructB *unkE0;
} func_80256CB0_StructG;
extern void func_8012D814(void *, s32, s32, s32, s32);
extern f32 D_8025DC70;
extern f64 D_8025DC78;
extern u8 D_802599D0[];

void func_80256CB0(func_80256CB0_StructA *arg0, func_80256CB0_StructM **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(func_80257B10_V *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 0x3F800000, 1);
    k = D_8025DC70;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (u32)D_802599D0 | 0x40000000;
    (*arg1)->unk30->unk4 = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unk4;
    (*arg1)->unk30->unk8 = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unk8 + D_8025DC78;
    (*arg1)->unk30->unkC = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unkC;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xB4;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80256EA8);
}
