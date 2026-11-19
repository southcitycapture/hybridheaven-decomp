#include "common.h"
extern s32 D_80010550(s32, void *);
struct func_80246828_Triple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_80246828_Triple D_802484B8;
extern void func_800058DC(void *, void *);
extern s32 func_8012A564(void *, s32);
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_8012CE9C(s32, void *, struct func_802438E4_Table, s32);
extern void func_802438E4();
extern void func_802445F8();
struct func_80246478_Child {
    u8 pad0[0x78];
    s16 unk78;
};


struct func_80244518_StructObj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
};

void func_80244518(struct func_80244518_StructObj *arg0, s32 arg1) {
    struct func_80246478_Child *temp_s1;

    temp_s1 = arg0->unk5C;
    if (func_8012A564(arg0, 0x436A0000) == 0) {
        temp_s1->unk78 = 1;
        arg0->unk2C &= ~0x80;
        func_800058DC(arg0, func_802445F8);
        return;
    }
    if (func_8012CE9C(arg1, temp_s1, *(struct func_802438E4_Table *)&D_802484B8, 10) == 0) {
        D_80010550(arg1, temp_s1);
        if (arg0->unk94-- == 0) {
            temp_s1->unk78 = 1;
            func_800058DC(arg0, func_802438E4);
        }
    }
}
