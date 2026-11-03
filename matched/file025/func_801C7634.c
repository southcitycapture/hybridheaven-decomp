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
extern void func_80005700();
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
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
extern s32 D_801DA5E8[];

void func_801C7634(func_801C7634_Struct *arg0, func_801C6580_Struct2 **arg1) {
    f32 r;
    u32 idx;
    f32 sp24;
    f32 sp20;
    func_801C6580_Struct4 *v;
    s32 a;

    r = (f32)arg0->unkB0 / (f32)arg0->unkB2;
    idx = (u32)(8.0f * r);
    if (++arg0->unkA8 > arg0->unkAA) {
        idx &= 7;
        func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x475, D_801DA5E8[idx]);
        (*arg1)->unk22 = 1;
        v = D_801BBCD8->unk2C;
        sp24 = v->unk3C - v->unk30;
        sp20 = v->unk44 - v->unk38;
        a = func_8001EF38(sp24, sp20);
        (*arg1)->unk30->unk12 = (s16)(a + 0x1000) & 0x1FFF;
        (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(sp24 * sp24 + sp20 * sp20)) & 0x1FFF;
        (*arg1)->unk30->unk8 = (*arg1)->unk30->unk8 + arg0->unkAC;
        (*arg1)->unk30->unk4C = (*arg1)->unk30->unk4C + 1;
        (*arg1)->unk30->unk4D = (*arg1)->unk30->unk4D + 1;
        (*arg1)->unk30->unk4E = (*arg1)->unk30->unk4E + 1;
        (*arg1)->unk30->unk4C = (*arg1)->unk30->unk4C & 0xFF;
        (*arg1)->unk30->unk4D = (*arg1)->unk30->unk4D & 0xFF;
        (*arg1)->unk30->unk4E = (*arg1)->unk30->unk4E & 0xFF;
        if (++arg0->unkB0 > arg0->unkB2) {
            func_80005700(arg0);
        }
    }
}
