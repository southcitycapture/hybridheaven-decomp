#include "common.h"
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_8024A610_V;
extern func_8024A610_V D_80164F40;
extern u8 D_801BBBF0[];
extern void func_800058DC(s32, void (*)());
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, u16);
extern void func_8012CF8C(void *, void *, s32, s32);
struct func_8024C794_Arg {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_8024C794_Inner {
    u8 pad[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_8024C794_Obj {
    u8 pad[0x30];
    struct func_8024C794_Inner *unk30;
};
void func_8024C794(struct func_8024C794_Arg *arg0, struct func_8024C794_Obj **arg1);


typedef struct func_8024C5B4_StructInner {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad16[2];
    f32 unk18, unk1C, unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
} func_8024C5B4_StructInner;
typedef struct func_8024C5B4_StructNode {
    u8 pad[0x30];
    func_8024C5B4_StructInner *unk30;
} func_8024C5B4_StructNode;
typedef struct func_8024C5B4_StructCtx {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    f32 unk90, unk94, unk98;
} func_8024C5B4_StructCtx;
extern u8 D_80258FE0[];
extern f32 D_8025D028;

void func_8024C5B4(func_8024C5B4_StructCtx *arg0, func_8024C5B4_StructNode **arg1) {
    func_8024A610_V sp20 = D_80164F40;

    sp20.b = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x4B3, 0);
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (u32) D_80258FE0 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk18 = 0.06f;
    (*arg1)->unk30->unk1C = 0.06f;
    (*arg1)->unk30->unk20 = 0.06f;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    arg0->unk3C = 0;
    *(s16 *)&arg0->unk90 = 0;
    func_800058DC((s32)arg0, func_8024C794);
}
