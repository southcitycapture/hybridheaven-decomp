#include "context.h"
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
extern void func_80010550(s32, void *);
void func_80243488(struct func_80246478_Obj *arg0, s32 arg1);
extern s32 func_80133A24(s32);
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_8012CE9C(s32, void *, struct func_802438E4_Table, s32);
struct func_80246828_Triple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern void func_801FBB30();
extern struct func_80246828_Triple D_802484C4;

void func_802433EC(struct func_80246478_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (s32) arg0->unk5C;
    if (func_8012CE9C(arg1, (void *) temp_a1, *(struct func_802438E4_Table *) &D_802484C4, 1) == 0) {
        func_80010550(arg1, (void *) temp_a1);
        if (func_80133A24(0x47) != 0) {
            func_801FBB30();
            arg0->unk94 = 0x12C;
            func_800058DC(arg0, &func_80243488);
        }
    }
}
