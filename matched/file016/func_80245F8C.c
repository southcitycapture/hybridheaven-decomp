#include "common.h"
typedef struct func_80242080_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80242080_Struct3;
extern func_80242080_Struct3 D_80164F40;
void func_80005E44(void *, void *);
extern s32 D_80006214(void *);
#define func_80006214 D_80006214
void func_8012C89C(void *, s32, s32, s32);
typedef struct func_80243204_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    u16 unk3C;
    u8 pad2[0x2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad3[0x28];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad4[0x6];
    u8 unk90;
    u8 pad5;
    u16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 pad6[0x2];
    s32 unkA8;
} func_80243204_Struct;
void func_802467B0(f32 arg0, f32 arg1, s32 arg2, s32 arg3);


typedef struct func_80245F8C_StructInner {
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
    u8 pad34[0x17];
    u8 unk4B;
} func_80245F8C_StructInner;

typedef struct func_80245F8C_StructOuter {
    u8 pad0[0x30];
    func_80245F8C_StructInner *unk30;
} func_80245F8C_StructOuter;

typedef struct func_80245F8C_StructLocal {
    s32 unk0;
    s32 unk4;
    func_80242080_Struct3 args;
} func_80245F8C_StructLocal;
extern void func_8012D918(void *, s32, s32, s32, s32);
extern u8 D_80249A58[];
extern f32 D_8024F0C8;

void func_80245F8C(func_80243204_Struct *arg0, func_80245F8C_StructOuter **arg1) {
    func_80245F8C_StructLocal sp30;
    func_80245F8C_StructInner *temp_v0;
    f32 scale;

    sp30.args = D_80164F40;
    sp30.args.unk4 = 0x80000600;
    func_80005E44(arg0, &sp30.args);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    scale = D_8024F0C8;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->unk30->unk18 = scale;
    (*arg1)->unk30->unk1C = scale;
    (*arg1)->unk30->unk20 = scale;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    arg0->unk92 = 0;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x313);
}
