#include "context.h"

struct func_80242A6C_Inner {
    u8 pad[0x10];
    u32 unk10;
};
struct func_80242A6C_Arg0 {
    u8 pad[0x38];
    struct func_80242A6C_Inner *unk38;
    u8 pad2[0x90 - 0x3C];
    u16 unk90;
};
struct func_80242A6C_Y {
    u8 pad0[0x18];
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
struct func_80242A6C_X {
    u8 pad0[0x30];
    struct func_80242A6C_Y *unk30;
};
extern s32 D_80257150;
struct func_8024345C_Struct;
extern struct func_8024345C_Struct D_801BBBF0;
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, u32);
extern void func_80020744(s32);
void func_80242BE8(void *arg0, s32 arg1);
void func_80242DD8(void *arg0, s32 arg1);

void func_80242A6C(struct func_80242A6C_Arg0 *arg0, struct func_80242A6C_X **arg1) {
    u32 v;
    struct func_80242A6C_Y *y;
    f32 f;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    D_80257150 = 0;
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    func_8012C784(arg0, 0, (arg0->unk38->unk10 >> 8) & 0xFF);
    func_8012D918(arg0, 0x500, 0, 0, 0);
    (*arg1)->unk30->unk20 = 1.0f;
    y = (*arg1)->unk30;
    f = y->unk20;
    y->unk1C = f;
    (*arg1)->unk30->unk18 = f;
    v = arg0->unk38->unk10;
    if ((v >> 24) != 0) {
        func_800058DC((s32)arg0, func_80242DD8);
        return;
    }
    arg0->unk90 = ((v >> 16) & 0xFF) * 2;
    func_800058DC((s32)arg0, func_80242BE8);
}
