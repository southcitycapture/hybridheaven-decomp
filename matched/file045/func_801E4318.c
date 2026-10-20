#include "context.h"
struct func_801E4318_ChainNode {
    u8 pad0[8];
    struct func_801E4318_ChainNode *unk8;
    u8 padC[0x18];
    struct func_801E4318_ChainNode *unk24;
    u8 pad28[4];
    struct func_801E337C_Data *unk2C;
};

#define ROOT ((struct func_801E4318_ChainNode *)D_801DAB14)

s32 func_801E4318(s32 arg0, s32 arg1) {
    extern f32 D_801E8CCC;
    extern f32 D_801E8CD0;
    extern f32 D_801E8CD4;
    extern f32 D_801E8CD8;
    extern f32 D_801E8CDC;
    extern f32 D_801E8CE0;
    extern f32 D_801E8CE4;
    func_8038BEC8(5.0f);
    func_8038BE98(D_801E8CCC);
    func_8038BD50(D_801E8CD0, 12.5f, -10.8f);
    D_8038BD88(D_801E8CD4, 14.5f, -40.2f);
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E8CD8;
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ROOT->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E8CDC;
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CC470(2, 0x03200039, 0, 1, 1.0f);
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E8CE0;
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E8CE4;
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x120;
    func_801CC470(3, 0x0320001A, 0, 0x100, 10.0f);
    return 8;
}
