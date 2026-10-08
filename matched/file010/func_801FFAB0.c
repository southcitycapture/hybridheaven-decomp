#include "common.h"

struct func_801FFAB0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_801FFAB0_StructO {
    u8 pad0[0x30];
    struct func_801FFAB0_StructX *unk30;
};

struct func_801FFAB0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AD28[];
extern f32 D_80219560;

void func_801FFAB0(struct func_801FFAB0_StructA *arg0, struct func_801FFAB0_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFAB0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x20F, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219560;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}
