#include "common.h"
struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_802070F4_Local D_80164F40;
extern u8 D_80217CE0[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);


typedef struct func_80213430_StructInner {
    u8 pad0[4];
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
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80213430_StructInner;

typedef struct func_80213430_StructOuter {
    u8 pad0[0x30];
    func_80213430_StructInner *unk30;
} func_80213430_StructOuter;

typedef struct func_80213430_StructArg {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80213430_StructArg;

void func_80213430(func_80213430_StructArg *arg0, func_80213430_StructOuter **arg1) {
    struct func_802070F4_Local sp28 = D_80164F40;

    sp28.unk4 = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (s32) D_80217CE0 | 0x40000000;
    (*arg1)->unk30->unk18 = 0.002000000095f;
    (*arg1)->unk30->unk1C = 0.002000000095f;
    (*arg1)->unk30->unk20 = 0.002000000095f;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
}
