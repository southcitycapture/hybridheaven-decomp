#include "context.h"

extern f32 D_801FC8D8;
extern f32 D_801FC8DC;

struct func_801EE1D8_Params {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801EE1D8_Node {
    u8 pad0[0x8];
    struct func_801EE1D8_Node *unk8;
    u8 pad1[0x18];
    struct func_801EE1D8_Node *unk24;
    u8 pad2[0x4];
    struct func_801EE1D8_Params *unk2C;
};

s32 func_801EE1D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06D97D3A) != 0) {
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801FC8D8;
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = -15.5f;
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8DC;
        ((struct func_801EE1D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x02A8001F, 0, 0x100, 3.0f);
        return 0x13;
    }
    return 0x12;
}
