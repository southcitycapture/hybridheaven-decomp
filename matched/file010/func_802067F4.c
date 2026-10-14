#include "context.h"
extern struct func_802070F4_Local D_80164F40;
extern u8 D_8017B5A8[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);

typedef struct {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_802067F4_Inner;

typedef struct {
    u8 pad0[0x30];
    func_802067F4_Inner *unk30;
} func_802067F4_Outer;

typedef struct {
    u8 pad0[0xA0];
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_802067F4_Arg0;

extern f32 D_8021A7E0;
extern f32 D_8021A7E4;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802067F4_Local;

void func_802067F4(func_802067F4_Arg0 *arg0, func_802067F4_Outer **arg1) {
    func_802067F4_Local sp20;

    sp20 = *(func_802067F4_Local *) &D_80164F40;
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x100;
    (*arg1)->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A7E0;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A7E4;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}
