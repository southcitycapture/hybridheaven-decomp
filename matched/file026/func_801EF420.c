#include "context.h"

struct func_801EF420_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EF420_Sub {
    u8 pad0[0x2C];
    struct func_801EF420_Vec *unk2C;
};

struct func_801EF420_Node {
    u8 pad0[8];
    struct func_801EF420_Node *unk8;
    u8 pad1[0x18];
    struct func_801EF420_Sub *unk24;
};

extern f32 D_801FC910;
extern f32 D_801FC914;

s32 func_801EF420(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x066EAD7A) != 0) {
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801FC910;
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC914;
        ((struct func_801EF420_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(4, 0x01680003, 0, 0x100, 1.0f);
        return 9;
    }
    return 8;
}
