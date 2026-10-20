#include "context.h"
struct func_80242C60_Cfg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
s32 func_8012CE9C(s32, void *, struct func_80242C60_Cfg, s32);
extern s32 func_80010550();
struct func_80242B30_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80242B30_Struct {
    u8 pad0[0x5C];
    struct func_80242B30_Inner *unk5C;
    u8 pad1[0x94 - 0x60];
    u16 unk94;
};
void func_80242B30(struct func_80242B30_Struct *arg0, s32 arg1);
extern struct func_80242C60_Cfg D_80258DA4;
extern void func_80127430(f32, f32, s32, s32, f32, f32);
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
struct func_80242A5C_Top {
    u8 pad0[0x24];
    struct func_80242A5C_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    struct func_80242B30_Inner *unk5C;
    u8 pad60[0x94 - 0x60];
    s16 unk94;
};
extern f32 D_8025BF5C;
void func_80242A5C(struct func_80242A5C_Top *arg0, s32 arg1) {
    struct func_80242B30_Inner *p = arg0->unk5C;
    struct func_80242A5C_Leaf *l;
    if (func_8012CE9C(arg1, p, D_80258DA4, 10) == 0) {
        func_80010550(arg1, p);
        if (arg0->unk94--) {
        } else {
            p->unk78 = 1;
            l = arg0->unk24->unk2C;
            func_80127430(l->unk4, l->unk8, l->unkC, 0x668, D_8025BF5C, 1.0f);
            func_800058DC(arg0, func_80242B30);
        }
    }
}
