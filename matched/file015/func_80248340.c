#include "context.h"
typedef struct { u8 pad0[4]; f32 f4; f32 f8; f32 fC; s16 h10; s16 h12; s16 h14; u8 pad16[2]; f32 f18; f32 f1C; f32 f20; s32 w24; u8 pad28[8]; s32 w30; u8 pad34[0x18]; u8 b4C; u8 b4D; u8 b4E; u8 b4F; } func_80248340_S3;
typedef struct { u8 pad[0x30]; func_80248340_S3 *unk30; } func_80248340_S2;
typedef struct { func_80248340_S2 *unk0; func_80248340_S2 *unk4; func_80248340_S2 *unk8; } func_80248340_S1;
typedef struct { u8 pad[0x74]; s32 w74; f32 f78; f32 f7C; f32 f80; s16 h84; s16 h86; s16 h88; } func_80248340_S0;
typedef struct { s32 a; s32 b; s32 c; s32 d; } func_80248340_V;
typedef struct { u8 pad[0xBA2]; u8 bBA2; u8 pad2[0xF32 - 0xBA3]; u8 bF32; u8 bF33; u8 bF34; u8 bF35; } func_80248340_G;
extern func_80248340_V D_80164F40;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern s32 func_8000C3B0(void *);
extern void func_800058DC(void *, void *);
extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
s32 func_80133A24(s32);
struct func_802486B4_Arg;
void func_802486B4(struct func_802486B4_Arg *arg0, s32 arg1);
extern void func_80249810(s32, s32);
struct func_8024A434_StructBBF0;
extern struct func_8024A434_StructBBF0 D_801BBBF0;

void func_80248340(func_80248340_S0 *arg0, func_80248340_S1 *arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x70) == 0) {
            func_80248340_V sp;
            sp = D_80164F40;
            sp.b = 0x80000C00;
            func_80005E44(arg0, &sp);
            func_80005E44(arg0, &sp);
            func_80005E44(arg0, &sp);
            func_80006214(arg0);
            arg1->unk0->unk30->f4 = 0.0f;
            arg1->unk0->unk30->f8 = 0.0f;
            arg1->unk0->unk30->fC = 0.0f;
            arg1->unk0->unk30->h10 = 0;
            arg1->unk0->unk30->h12 = 0;
            arg1->unk0->unk30->h14 = 0;
            func_8012C89C(arg0, 1, 0x28A, 7);
            arg1->unk4->unk30->w24 = 0x13;
            arg1->unk4->unk30->w30 = func_8000C3B0(arg1->unk4);
            arg1->unk4->unk30->f20 = 1.0f;
            arg1->unk4->unk30->f18 = arg1->unk4->unk30->f1C = arg1->unk4->unk30->f20;
            arg1->unk4->unk30->f4 = 100.0f;
            arg1->unk4->unk30->f8 = -202.0f;
            arg1->unk4->unk30->fC = -230.0f;
            arg1->unk4->unk30->h12 = 0;
            arg1->unk4->unk30->w24 |= 0x400;
            arg1->unk4->unk30->b4C = ((func_80248340_G *)&D_801BBBF0)->bF32;
            arg1->unk4->unk30->b4D = ((func_80248340_G *)&D_801BBBF0)->bF33;
            arg1->unk4->unk30->b4E = ((func_80248340_G *)&D_801BBBF0)->bF34;
            arg1->unk4->unk30->b4F = ((func_80248340_G *)&D_801BBBF0)->bF35;
            func_8012C89C(arg0, 2, 0x28A, 7);
            arg1->unk8->unk30->w24 = 0x13;
            arg1->unk8->unk30->w30 = func_8000C3B0(arg1->unk8);
            arg1->unk8->unk30->f20 = 1.0f;
            arg1->unk8->unk30->f18 = arg1->unk8->unk30->f1C = arg1->unk8->unk30->f20;
            arg1->unk8->unk30->f4 = 100.0f;
            arg1->unk8->unk30->f8 = -202.0f;
            arg1->unk8->unk30->fC = -290.0f;
            arg1->unk8->unk30->h12 = 0;
            arg1->unk8->unk30->w24 |= 0x400;
            arg1->unk8->unk30->b4C = ((func_80248340_G *)&D_801BBBF0)->bF32;
            arg1->unk8->unk30->b4D = ((func_80248340_G *)&D_801BBBF0)->bF33;
            arg1->unk8->unk30->b4E = ((func_80248340_G *)&D_801BBBF0)->bF34;
            arg1->unk8->unk30->b4F = ((func_80248340_G *)&D_801BBBF0)->bF35;
            arg0->w74 = func_8012C97C(0x28A, 8);
            arg0->f78 = 0.0f;
            arg0->f7C = 0.0f;
            arg0->f80 = 0.0f;
            arg0->h84 = 0;
            arg0->h86 = 0;
            arg0->h88 = 0;
            ((func_80248340_G *)&D_801BBBF0)->bBA2 = 1;
            func_800058DC(arg0, func_802486B4);
            return;
        }
        func_800058DC(arg0, func_80249810);
    }
}
