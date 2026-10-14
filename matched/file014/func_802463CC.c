#include "context.h"
void func_80246478(struct func_80246478_Obj *arg0, s32 arg1);
struct func_80246828_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};

void func_802463CC(struct func_80246828_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, *(struct func_802438E4_Table *)&D_802484C4, 1) == 0) {
        func_80010550(arg1, temp_a1);
        if (func_80133A24(0x4E) == 0) {
            func_8012A94C(arg0, 0x80);
            return;
        }
        arg0->unk94 = 0xA0;
        func_801FBB30();
        func_800058DC(arg0, &func_80246478);
    }
}
