#include "common.h"

extern u8 *D_801DAB14;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
struct func_801E7E80_Rec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E7E80_Node {
    u8 pad0[8];
    struct func_801E7E80_Node *unk8;
    u8 pad1[0x18];
    struct func_801E7E80_Node *unk24;
    u8 pad2[4];
    struct func_801E7E80_Rec *unk2C;
};
s32 func_801E7E80(s32 arg0, s32 arg1) {
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -1.0f;
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 10.6999998f;
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
    func_801CC470(4, 0x0348008A, 0, 0x100, 5.0f);
    return 5;
}
