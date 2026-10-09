#include "context.h"

extern s32 D_802073A4;

typedef struct func_801F7EFC_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801F7EFC_Vec;

typedef struct func_801F7EFC_Mid {
    u8 pad0[0x2C];
    func_801F7EFC_Vec *unk2C;
} func_801F7EFC_Mid;

typedef struct func_801F7EFC_Node {
    u8 pad0[8];
    struct func_801F7EFC_Node *unk8;
    u8 pad1[0x18];
    func_801F7EFC_Mid *unk24;
} func_801F7EFC_Node;

s32 func_801F7EFC(s32 arg0, s32 arg1) {
    func_801F7EFC_Node **pp;
    if (func_801C0B8C(0x39FBBF) != 0) {
        pp = (func_801F7EFC_Node **)&D_801DAB14;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -1.0f;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 49.0f;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x01680003, 0, 0x1100, 1.0f);
        D_802073A4 = 0;
        return 5;
    }
    return 4;
}
