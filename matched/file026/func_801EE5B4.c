#include "context.h"

extern f32 D_801FC8E8;

struct func_801EE5B4_Fx {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801EE5B4_Obj {
    u8 pad0[0x2C];
    struct func_801EE5B4_Fx *unk2C;
};

struct func_801EE5B4_Node {
    u8 pad0[0x8];
    struct func_801EE5B4_Node *unk8;
    u8 pad1[0x18];
    struct func_801EE5B4_Obj *unk24;
};

s32 func_801EE5B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -197.0f;
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8E8;
        ((struct func_801EE5B4_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x01B8001C, 0, 0, 4.0f);
        return 4;
    }
    return 3;
}
