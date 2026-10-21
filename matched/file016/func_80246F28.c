#include "context.h"

struct func_80246F28_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
};

struct func_80246F28_Node {
    u8 pad0[0x30];
    struct func_80246F28_Obj *unk30;
};

struct func_80246F28_Arg {
    u8 pad0[0x24];
    struct func_80246F28_Node *unk24;
    u8 pad1[0x2C - 0x28];
    s32 unk2C;
    u8 pad2[0x74 - 0x30];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
};

extern u8 D_80249BC0[];
extern void func_802470A0();
extern void func_8012636C(void *arg0, s32 arg1);
extern s32 func_8012C97C(s32 arg0, s32 arg1);
extern void func_8012D918(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_80246F28(struct func_80246F28_Arg *arg0, struct func_80246B34_StructObj **arg1) {
    struct func_80246B34_StructInit sp28;
    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44((s32)arg0, &sp28);
    func_80006214((s32)arg0);
    func_8012636C(arg0, 0);
    func_8012C89C(arg0, 0, 0x3A0, 5);
    func_8012D918(arg0, 0x3A0, 7, 0, 0);
    (*arg1)->unk30->unk24 |= 0x4000;
    (*arg1)->unk30->unk30 = (s32) D_80249BC0 | 0x40000000;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x3A0, 6);
    arg0->unk78 = arg0->unk24->unk30->unk4;
    arg0->unk7C = arg0->unk24->unk30->unk8;
    arg0->unk80 = arg0->unk24->unk30->unkC;
    arg0->unk84 = 0;
    arg0->unk86 = arg0->unk24->unk30->unk12;
    arg0->unk88 = 0;
    func_8001F74C((s32) arg0);
    func_800058DC((s32) arg0, func_802470A0);
}
