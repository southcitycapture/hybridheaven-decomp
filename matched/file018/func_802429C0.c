#include "common.h"
struct func_80242C60_Cfg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_80242C60_Cfg D_80258D8C;
void func_800058DC(void *, void (*)());
extern s32 func_80010550();
s32 func_8012CE9C(s32, void *, struct func_80242C60_Cfg, s32);
s32 func_80133A24(s32);
struct func_80242A5C_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_80242A5C_Mid {
    u8 pad0[0x2C];
    struct func_80242A5C_Leaf *unk2C;
};
struct func_80242B30_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80242A5C_Top {
    u8 pad0[0x24];
    struct func_80242A5C_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    struct func_80242B30_Inner *unk5C;
    u8 pad60[0x94 - 0x60];
    s16 unk94;
};
void func_80242A5C(struct func_80242A5C_Top *arg0, s32 arg1);


void func_802429C0(struct func_80242A5C_Top *arg0, s32 arg1) {
    struct func_80242B30_Inner *sp24;

    sp24 = arg0->unk5C;
    if (func_8012CE9C(arg1, sp24, D_80258D8C, 0x14) == 0) {
        func_80010550(arg1, sp24);
        if (func_80133A24(0x13E) != 0) {
            sp24->unk78 = 1;
            arg0->unk94 = 0x50;
            func_800058DC(arg0, func_80242A5C);
        }
    }
}
