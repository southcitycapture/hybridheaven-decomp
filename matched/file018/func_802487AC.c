#include "context.h"

struct func_802487AC_StructB {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_802487AC_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_802487AC_StructB *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};

struct func_802487AC_StructC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 func_80244AB0();
extern s32 func_8012CE9C(s32, void *, struct func_802487AC_StructC, s32);
extern s16 func_8012C6B4(s32);
extern struct func_802487AC_StructC D_80258F0C;
extern void func_80248860();

void func_802487AC(struct func_802487AC_StructA *arg0, s32 arg1) {
    struct func_802487AC_StructB *sp2C;

    sp2C = arg0->unk5C;
    arg0->unk2C = (s32) (arg0->unk2C | 0x80);
    if (func_80244AB0() == 0) {
        if (func_8012CE9C(arg1, (void *) sp2C, D_80258F0C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            arg0->unk94 = func_8012C6B4(0x40);
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80248860);
        }
    }
}
