#include "context.h"

struct func_80245244_Child {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80245244_Obj {
    u8 pad0[0x5C];
    struct func_80246478_Child *unk5C;
    u8 pad1[0x34];
    s16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};

extern u8 D_801BBFAC[];
extern void func_80245290();

void func_80245244(struct func_80245244_Obj *arg0, s32 arg1) {
    struct func_80245244_Child *child;

    child = (struct func_80245244_Child *) arg0->unk5C;
    if (D_801BBFAC[0x78] != 2) {
        child->unk78 = 1;
        arg0->unk94 = arg0->unkA4;
        func_800058DC(arg0, func_80245290);
    }
}
