#include "common.h"
struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_802070F4_Local D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_801FC830(f32, f32, f32, f32, s32);


typedef struct func_80207E60_StructInner {
    u8 pad0[0x4];
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
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80207E60_StructInner;

typedef struct func_80207E60_StructOuter {
    u8 pad0[0x30];
    func_80207E60_StructInner *unk30;
} func_80207E60_StructOuter;

typedef struct func_80207E60_StructArg0 {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[0xAC - 0xA0];
    u8 unkAC;
} func_80207E60_StructArg0;

extern f32 D_8021A83C;

void func_80207E60(func_80207E60_StructArg0 *arg0, func_80207E60_StructOuter **arg1) {
    struct func_802070F4_Local sp38;
    func_80207E60_StructInner *model;
    f32 k;
    f32 x;
    f32 y;

    sp38 = D_80164F40;
    sp38.unk4 = 0x80000900;
    func_80005E44(arg0, &sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD1, 0);
    k = D_8021A83C;
    model = (*arg1)->unk30;
    model->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    if (arg0->unkAC & 1) {
        arg0->unk90 = 9;
    }
    arg0->unk92 = 0;
    x = arg0->unk94;
    y = arg0->unk98;
    func_801FC830(x, y, arg0->unk9C, 400.0f, 0x316);
}
