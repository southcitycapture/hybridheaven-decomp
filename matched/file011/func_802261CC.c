#include "context.h"
struct func_802261CC_V {
    s32 a, b, c;
};
struct func_802261CC_In {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0xB0 - 0xE];
    struct func_802261CC_V unkB0;
    struct func_802261CC_V unkBC;
};
struct func_802261CC_Arg {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x4C - 0x28];
    u8 unk4C;
    u8 pad4D;
    u8 unk4E;
    u8 pad4F[0x5C - 0x4F];
    struct func_802261CC_In *unk5C;
    u8 pad60[3];
    u8 unk63;
};
struct func_802261CC_Out {
    u8 pad0[8];
    f32 unk8;
    f32 unkC;
};
struct func_802261CC_G {
    u8 pad0[0x2C];
    s32 unk2C;
};
extern s32 func_80126944();
extern void func_80223B2C(struct func_802261CC_Arg *, struct func_802261CC_Out *, struct func_802261CC_V, struct func_802261CC_V);
extern f64 D_8023F008;
extern f64 D_8023F010;

s32 func_802261CC(struct func_802261CC_Arg *arg0, struct func_802261CC_G **arg1) {
    struct func_802261CC_In *in;
    s32 a0;
    struct func_802261CC_Out sp;
    u8 old;
    u8 s1;

    in = arg0->unk5C;
    s1 = 0;
    if (func_80126944() != 1) return 0;
    if (in == NULL) return 0;
    if (arg0->unk63 == 0) return 0;
    if (arg0->unk24 == 0) return 0;
    if (*arg1 == NULL) return 0;
    if (((s32 *)arg1)[in->unkC - 1] == 0) return 0;
    func_80223B2C(arg0, &sp, in->unkB0, in->unkBC);
    old = arg0->unk4C;
    a0 = (*arg1)->unk2C;
    arg0->unk4C = (u32)((f64)sp.unk8 + D_8023F008);
    if (func_802257F4(a0, old, arg0->unk4C)) s1 = 2;
    if (func_802257F4(a0, -old, -arg0->unk4C)) s1 |= 1;
    old = arg0->unk4E;
    arg0->unk4E = (u32)((f64)sp.unkC + D_8023F010);
    if (func_80225930(a0, old, arg0->unk4E)) s1 |= 8;
    if (func_80225930(a0, -old, -arg0->unk4E)) s1 |= 4;
    return s1;
}
