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
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80207E60_Inner;
typedef struct {
    u8 pad0[0x30];
    func_80207E60_Inner *unk30;
} func_80207E60_Outer;
typedef struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[0xAC - 0xA0];
    u8 unkAC;
} func_80207E60_Arg0;
extern f32 D_8021A83C;

void func_80207E60(func_80207E60_Arg0 *arg0, func_80207E60_Outer **arg1) {
    struct func_802070F4_Local sp38;
    f32 k;
    u8 pad[8];
    sp38 = D_80164F40;
    sp38.unk4 = 0x80000900;
    func_80005E44(arg0, &sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD1, 0);
    k = D_8021A83C;
    (*arg1)->unk30->unk24 |= 0x400;
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
    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x316);
}
