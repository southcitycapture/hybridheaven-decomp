#include "common.h"

extern u8 D_801DAB14[];
extern void func_801CC470(s32, s32, s32, s32, f32);
typedef struct func_801EAA6C_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801EAA6C_Data;
typedef struct func_801EAA6C_Node {
    u8 pad0[8];
    struct func_801EAA6C_Node *unk8;
    u8 pad1[0x18];
    struct func_801EAA6C_Node *unk24;
    u8 pad2[4];
    func_801EAA6C_Data *unk2C;
} func_801EAA6C_Node;
s32 func_801EAA6C(s32 arg0, s32 arg1) {
    func_801EAA6C_Node **pp;

    if (func_801C0B8C(0x20CE70) != 0) {
        pp = (func_801EAA6C_Node **)D_801DAB14;
        (*pp)->unk8->unk8->unk8->unk24->unk2C->unk4 = 91.8000031f;
        (*pp)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk8->unk24->unk2C->unkC = 7.5f;
        (*pp)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1456;
        func_801CC470(2, 0x03200066, 0, 0x100, 6.0f);
        return 0x34;
    }
    return 0x33;
}
