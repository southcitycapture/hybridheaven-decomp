#include "context.h"

extern f32 D_801FC904;

struct func_801EF144_Fl {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EF144_Node2 {
    u8 pad0[0x2C];
    struct func_801EF144_Fl *unk2C;
};

struct func_801EF144_Node {
    u8 pad0[8];
    struct func_801EF144_Node *unk8;
    u8 pad1[0x18];
    struct func_801EF144_Node2 *unk24;
};

#define FUNC_801EF144_FL (((struct func_801EF144_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C)

s32 func_801EF144(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        FUNC_801EF144_FL->unk4 = -206.0f;
        FUNC_801EF144_FL->unk8 = 0.0f;
        FUNC_801EF144_FL->unkC = 3.0f;
        FUNC_801EF144_FL->unk12 = 0xC2D;
        func_801CC470(4, 0x01B8000B, 0, 0x1000, D_801FC904);
        return 4;
    }
    return 3;
}
