#include "context.h"
extern void func_80010550(s32, void *, void *, s32);
extern void func_80020744(s32, void *, void *);
extern s32 func_8012CE9C(s32, s32, struct func_80246828_Triple, s32);
extern s32 func_801268F4(s32);
extern void func_801FBB30();

struct func_80245F30_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};

extern s32 func_80133A24(s32);
extern void func_801339D0(s32);
extern struct func_80246828_Triple D_802484C4;
extern void func_80245FE4();

void func_80245F30(struct func_80245F30_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();
    extern void func_80020744();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484C4, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        if (func_80133A24(0x4B) != 0) {
            func_801339D0(0x4B);
            func_801268F4(0);
            func_80020744(0x6B0);
            arg0->unk94 = arg0->unkA4;
            func_801FBB30();
            func_800058DC(arg0, func_80245FE4);
        }
    }
}
