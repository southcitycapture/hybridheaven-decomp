#include "context.h"

struct func_801E4EE0_Ret {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E4EE0_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
};

struct func_801E4EE0_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E4EE0_Leaf *unk30;
};

struct func_801E4EE0_Obj {
    u8 pad0[0x1C];
    struct func_801E4EE0_Mid *unk1C;
};

extern struct func_801E4EE0_Obj *D_8038D8D0;
extern f32 D_801EDD0C;
extern f32 D_801EDD10;

s32 func_801E4EE0(s32 arg0, s32 arg1) {
    if (((struct func_801E4EE0_Ret *) func_801BF6B0(0))->unkC >= 0x11) {
        D_8038D8D0->unk1C->unk30->unk4 = D_801EDD0C;
        D_8038D8D0->unk1C->unk30->unk8 = 10.5f;
        D_8038D8D0->unk1C->unk30->unkC = D_801EDD10;
        D_8038D8D0->unk1C->unk30->unk12 = 0x1B57;
        D_8038D8D0->unk1C->unk30->unk4B = 0xFF;
        D_8038D8D0->unk1C->unk22 = 1;
        func_801C1000(3, 7);
        return 6;
    }
    return 5;
}
