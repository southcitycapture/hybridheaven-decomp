#include "common.h"
typedef struct func_80242080_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80242080_Struct3;
extern func_80242080_Struct3 D_80164F40;
extern u8 D_80249A58[];
void func_80005E44(void *, void *);
extern s32 D_80006214(void *);
#define func_80006214 D_80006214
void func_8012C89C(void *, s32, s32, s32);
void func_802467B0(f32 arg0, f32 arg1, s32 arg2, s32 arg3);

extern f32 D_8024F0B8;
typedef struct func_80245B20_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80245B20_StructB;
typedef struct func_80245B20_StructA {
    u8 pad0[0x30];
    func_80245B20_StructB *unk30;
} func_80245B20_StructA;
typedef struct func_80245B20_StructP {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80245B20_StructP;
typedef struct func_80245B20_StructColor {
    s32 full;
    s32 dim;
} func_80245B20_StructColor;
extern void func_8012D918(void *, s32, s32, s32, s32);

void func_80245B20(func_80245B20_StructP *arg0, func_80245B20_StructA **arg1) {
    func_80242080_Struct3 sp;
    f32 k;
    func_80245B20_StructColor color;
    sp = D_80164F40;
    sp.unk4 = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    k = D_8024F0B8;
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    color.full = 0xFF;
    color.dim = 0xC8;
    (*arg1)->unk30->unk48 = color.full;
    (*arg1)->unk30->unk49 = color.dim;
    (*arg1)->unk30->unk4A = color.dim;
    (*arg1)->unk30->unk4B = color.full;
    (*arg1)->unk30->unk4C = color.full;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x315);
}
