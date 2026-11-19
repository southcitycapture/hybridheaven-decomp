#include "common.h"
typedef struct func_801C6580_Struct4 {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801C6580_Struct4;
typedef struct func_801C6580_Struct5 {
    u8 pad0[0x2C];
    func_801C6580_Struct4 *unk2C;
} func_801C6580_Struct5;
extern func_801C6580_Struct5 *D_801BBCD8;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
typedef struct func_801C6580_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
} func_801C6580_Struct;
typedef struct func_801C6580_Struct3 {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C6580_Struct3;
typedef struct func_801C6580_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801C6580_Struct3 *unk30;
} func_801C6580_Struct2;
typedef struct func_801C7634_Struct {
    u8 pad0[0xA8];
    u16 unkA8;
    u16 unkAA;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
} func_801C7634_Struct;
void func_801C7634(func_801C7634_Struct *arg0, func_801C6580_Struct2 **arg1);


extern u8 D_801D9B60[];
extern u8 D_801DA5D8[];
extern void D_800058DC(void *, void *, u32);

void func_801C7424(func_801C6580_Struct *arg0, func_801C6580_Struct2 **arg1) {
    struct { f32 a; f32 z; f32 x; f32 d; } v;

    func_80005E44(arg0, D_801DA5D8);
    func_80006214(arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9B60;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x475, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    v.x = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    v.z = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(v.x * v.x + v.z * v.z)) & 0x1FFF;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(v.x, v.z) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unkA0;
    (*arg1)->unk30->unk20 = arg0->unkA4;
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xF0;
    (*arg1)->unk30->unk4D = 0xF0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk22 = 0;
    D_800058DC(arg0, (void *)func_801C7634, 0xF0);
}
