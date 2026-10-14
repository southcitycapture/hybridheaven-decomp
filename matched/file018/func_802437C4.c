#include "context.h"

extern struct func_80242C60_Cfg D_80258DA4;
extern s32 func_8012A94C(void *, s32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern f32 D_8025BF70;
extern void func_802438BC();

struct func_802437C4_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_802437C4_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_802437C4_Mid {
    u8 pad0[0x2C];
    struct func_802437C4_Leaf *unk2C;
};
struct func_802437C4_Struct {
    u8 pad0[0x24];
    struct func_802437C4_Mid *unk24;
    u8 pad1[0x5C - 0x28];
    struct func_802437C4_Inner *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};

void func_802437C4(struct func_802437C4_Struct *arg0, s32 arg1) {
    struct func_802437C4_Inner *sp2C;
    struct func_802437C4_Leaf *temp_v0;
    u32 one;

    one = 1;
    sp2C = arg0->unk5C;
    if ((func_80242620() == 0) && (func_80242714(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258DA4, 5) == 0)) {
        func_80010550(arg1, sp2C);
        if (func_8012A94C(arg0, 0x40) == 0) {
            temp_v0 = arg0->unk24->unk2C;
            func_80127430(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x66D, D_8025BF70, 1.0f);
            sp2C->unk78 = 1;
            arg0->unk94 = one;
            func_800058DC(arg0, func_802438BC);
        }
    }
}
