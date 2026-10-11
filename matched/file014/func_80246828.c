#include "context.h"

struct func_80246828_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};
extern struct func_80246828_Triple D_802484C4;
extern s32 func_8012CE9C(s32, s32, struct func_80246828_Triple, s32);
extern s32 func_801268F4(s32);
extern void func_801FBB30();
extern void func_80245FE4();

void func_80246828(struct func_80246828_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484C4, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        func_801268F4(0);
        arg0->unk94 = arg0->unkA4;
        func_801FBB30();
        func_800058DC(arg0, func_80245FE4);
    }
}
