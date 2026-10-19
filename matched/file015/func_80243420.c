#include "context.h"

typedef struct func_80243420_Vec { s32 w[4]; } func_80243420_Vec;
typedef struct func_80243420_Sub {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12;
    u8 pad14[4]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8];
    s32 unk30; u8 pad34[0x18]; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F;
} func_80243420_Sub;
typedef struct func_80243420_Mid { u8 pad0[0x30]; func_80243420_Sub *unk30; } func_80243420_Mid;
typedef struct func_80243420_Arg {
    u8 pad0[0x2C]; s32 unk2C; u8 pad30[6]; u16 unk36; u8 pad38[0x3C];
    s32 unk74; f32 unk78; f32 unk7C; f32 unk80; s16 unk84; s16 unk86; s16 unk88;
} func_80243420_Arg;
extern func_80243420_Vec D_80164F40;
extern u8 D_802523C4[], D_802523D8[], D_802523EC[];
extern s32 D_8025A280, D_8025A284, D_8025A288;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8000C3B0(void *);
extern s32 func_8012C97C(u16, s32);
extern s32 func_80005670(void *, void *);
extern void func_801339D0(s32);
extern u8 func_80243678[];

void func_80243420(func_80243420_Arg *arg0, func_80243420_Mid **arg1) {
    func_80243420_Vec sp;
    f32 t;
    sp = D_80164F40;
    sp.w[1] = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x294, 0);
    (*arg1)->unk30->unk24 |= 0x13;
    (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
    (*arg1)->unk30->unk20 = 1.0f;
    t = (*arg1)->unk30->unk20;
    (*arg1)->unk30->unk1C = t;
    (*arg1)->unk30->unk18 = t;
    (*arg1)->unk30->unk4 = -42.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = 272.0f;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    arg0->unk2C |= 0x800;
    arg0->unk78 = (*arg1)->unk30->unk4;
    arg0->unk7C = (*arg1)->unk30->unk8;
    arg0->unk80 = (*arg1)->unk30->unkC;
    arg0->unk84 = 0;
    arg0->unk86 = 0;
    arg0->unk88 = 0;
    arg0->unk74 = func_8012C97C(arg0->unk36, 1);
    func_801C3B2C(2);
    func_801C3B10(1);
    func_801339D0(0x73);
    func_801339D0(0x77);
    D_8025A280 = func_80005670(arg0, D_802523C4);
    D_8025A284 = func_80005670(arg0, D_802523D8);
    D_8025A288 = func_80005670(arg0, D_802523EC);
    func_801FBB30();
    func_80020718(0x1AD);
    func_800058DC(arg0, func_80243678);
}
