#include "context.h"

struct func_80381084_StructArg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_80381084_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_80381084_StructOuter {
    u8 pad0[0x30];
    struct func_80381084_StructInner *unk30;
};

struct func_80381084_StructCopy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_8017B5A8[];
extern f32 D_80389AC8;
extern f32 D_80389ACC;

void func_80381084(struct func_80381084_StructArg0 *arg0, struct func_80381084_StructOuter **arg1) {
    register f32 fv;
    struct { s32 a[3]; } sp20;

    *(struct func_80381084_StructCopy *)&sp20 = *(struct func_80381084_StructCopy *)&D_80164F40;
    sp20.a[1] = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    fv = D_80389AC8;
    (*arg1)->unk30->unk24 |= 0x100;
    (*arg1)->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = fv;
    (*arg1)->unk30->unk1C = fv;
    (*arg1)->unk30->unk20 = D_80389ACC;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk48 = 0x40;
    (*arg1)->unk30->unk49 = 0x80;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xAC;
}
