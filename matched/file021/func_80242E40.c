#include "context.h"

struct func_80242E40_Y {
    f32 pad0[6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80242E40_X {
    u8 pad0[0x30];
    struct func_80242E40_Y *unk30;
};
extern u8 func_80242FE8[];
struct func_8024345C_Struct;
extern struct func_8024345C_Struct D_801BBBF0;
extern void func_80020744(s32);
extern void func_802436A8();
extern void func_8012636C(void *, s32);

void func_80242E40(void *arg0, struct func_80242E40_X **arg1) {
    struct func_80242E40_Y *v;
    f32 t;
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_800062F8(*arg1, 0x80000C00);
    func_8012636C(arg0, 0);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    func_8012C89C(arg0, 0, 0x501, 0x12);
    func_8012D918(arg0, 0x500, 0, 0, 0);
    (*arg1)->unk30->unk20 = 1.0f;
    v = (*arg1)->unk30;
    t = v->unk20;
    v->unk1C = t;
    (*arg1)->unk30->unk18 = t;
    if (func_80133A24(0x1A1) != 0) {
        func_8012D918(arg0, 0x500, 1, 0, 0);
        ((u8 *)&D_801BBBF0)[0xF23] = 0x96;
        ((u8 *)&D_801BBBF0)[0xF24] = 1;
        ((u8 *)&D_801BBBF0)[0xF25] = 1;
        func_800058DC((s32)arg0, func_802436A8);
    } else {
        func_800058DC((s32)arg0, func_80242FE8);
    }
}
