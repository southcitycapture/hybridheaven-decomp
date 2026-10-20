#include "context.h"

struct func_80245E80_StructObj {
    u8 pad0[0x5C];
    void *unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xC];
    u16 unkA2;
    u16 unkA4;
};

void func_80245E80(struct func_80245E80_StructObj *arg0, s32 arg1)
{
    void *child;
    u16 old;
    u16 next;

    child = arg0->unk5C;
    if (func_8012CE9C(arg1, child, *(struct func_802438E4_Table *)&D_802484C4, 10) == 0) {
        func_80010550(arg1, child);
        old = arg0->unkA2;
        arg0->unkA2 = old - 1;
        if (old == 0) {
            arg0->unkA2++;
            func_801268F4(0);
            arg0->unk94 = arg0->unkA4;
            func_801FBB30();
            func_800058DC(arg0, func_80245FE4);
        }
    }
}
