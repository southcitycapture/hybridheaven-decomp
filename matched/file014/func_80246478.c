#include "common.h"

struct func_80246478_Child {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80246478_Sub {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80246478_Mid {
    u8 pad0[0x2C];
    struct func_80246478_Sub *unk2C;
};

struct func_80246478_Obj {
    u8 pad0[0x24];
    struct func_80246478_Mid *unk24;
    u8 pad1[0x34];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
};

extern void func_800058DC(void *, void *);
extern void func_80010550(s32, void *, void *, s32);
extern void func_80020744(s32, void *, void *);
extern void func_80246510();

void func_80246478(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *temp_a1;
    struct func_80246478_Sub *temp_v0;
    s16 temp_v1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1, arg0, arg1);
    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 - 0.5);
    temp_v1 = arg0->unk94;
    arg0->unk94 = (s16) (temp_v1 - 1);
    if (temp_v1 == 0) {
        temp_a1->unk78 = 1;
        func_80020744(0x668, temp_a1, arg0);
        func_800058DC(arg0, &func_80246510);
    }
}
