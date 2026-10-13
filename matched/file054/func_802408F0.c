#include "context.h"

typedef struct { s32 w[4]; } func_802408F0_V;

typedef struct func_802408F0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_Inner;

typedef struct func_802408F0_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_802408F0_Inner *unk30;
} func_802408F0_Node;

typedef struct func_802408F0_Args {
    func_802408F0_Node *unk0;
    func_802408F0_Node *unk4;
    func_802408F0_Node *unk8;
    func_802408F0_Node *unkC;
    func_802408F0_Node *unk10;
    func_802408F0_Node *unk14;
    func_802408F0_Node *unk18;
} func_802408F0_Args;

extern void func_800058DC(void *, void (*)(void));
extern s32 func_80005670(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8015105C(s32);
extern func_802408F0_V D_80164F40;
extern struct func_80246730_Struct D_801BBBF0;
extern u8 D_8017AF38[];
extern u8 D_802467D4[];
extern f32 D_80248108;
extern s32 D_80248800;
extern s32 D_80248804;
extern s32 D_80248808;
extern void func_80240EBC();

#define C(i) (((u8 *) &D_801BBBF0)[i])

void func_802408F0(void *arg0, func_802408F0_Args *arg1) {
    s32 sp38[4];

    *(func_802408F0_V *) sp38 = D_80164F40;
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4D8, 0);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x400;
    arg1->unk0->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk0->unk30->unk4C = C(0xF32);
    arg1->unk0->unk30->unk4D = C(0xF33);
    arg1->unk0->unk30->unk4E = C(0xF34);
    arg1->unk0->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 1, 0x4D8, 1);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4 = 0.0f;
    arg1->unk4->unk30->unk8 = 0.0f;
    arg1->unk4->unk30->unkC = -177.0f;
    arg1->unk4->unk30->unk4C = C(0xF32);
    arg1->unk4->unk30->unk4D = C(0xF33);
    arg1->unk4->unk30->unk4E = C(0xF34);
    arg1->unk4->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 2, 0x4D8, 2);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk8->unk30->unk4 = 0.0f;
    arg1->unk8->unk30->unk8 = 0.0f;
    arg1->unk8->unk30->unkC = -177.0f;
    arg1->unk8->unk30->unk4C = C(0xF32);
    arg1->unk8->unk30->unk4D = C(0xF33);
    arg1->unk8->unk30->unk4E = C(0xF34);
    arg1->unk8->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 3, 0x4D8, 4);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unkC->unk30->unk4 = 47.0f;
    arg1->unkC->unk30->unk8 = 5.0f;
    arg1->unkC->unk30->unkC = 75.0f;
    arg1->unkC->unk30->unk4C = C(0xF32);
    arg1->unkC->unk30->unk4D = C(0xF33);
    arg1->unkC->unk30->unk4E = C(0xF34);
    arg1->unkC->unk30->unk4F = C(0xF35);
    arg1->unkC->unk22 = 0;
    func_8012C89C(arg0, 4, 0x4D8, 4);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x400;
    arg1->unk10->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk10->unk30->unk4 = D_80248108;
    arg1->unk10->unk30->unk8 = 31.0f;
    arg1->unk10->unk30->unkC = 41.0f;
    arg1->unk10->unk30->unk4C = C(0xF32);
    arg1->unk10->unk30->unk4D = C(0xF33);
    arg1->unk10->unk30->unk4E = C(0xF34);
    arg1->unk10->unk30->unk4F = C(0xF35);
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x4D8, 3);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x400;
    arg1->unk14->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk14->unk30->unk4 = 0.0f;
    arg1->unk14->unk30->unk8 = 82.0f;
    arg1->unk14->unk30->unkC = 0.0f;
    arg1->unk14->unk30->unk4C = C(0xF32);
    arg1->unk14->unk30->unk4D = C(0xF33);
    arg1->unk14->unk30->unk4E = C(0xF34);
    arg1->unk14->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 6, 0x4D8, 3);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x400;
    arg1->unk18->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk18->unk30->unk4 = 0.0f;
    arg1->unk18->unk30->unk8 = 82.0f;
    arg1->unk18->unk30->unkC = -50.0f;
    arg1->unk18->unk30->unk4C = C(0xF32);
    arg1->unk18->unk30->unk4D = C(0xF33);
    arg1->unk18->unk30->unk4E = C(0xF34);
    arg1->unk18->unk30->unk4F = C(0xF35);
    D_80248800 = func_8015105C(0x29);
    D_80248804 = func_8015105C(0x11B);
    D_80248808 = func_80005670(arg0, D_802467D4);
    func_800058DC(arg0, func_80240EBC);
}
