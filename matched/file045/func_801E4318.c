#include "common.h"

extern void D_8038BD88(f32, f32, f32);
struct func_801E337C_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};
struct func_801E337C_Obj {
    u8 pad0[0x2C];
    struct func_801E337C_Data *unk2C;
};
struct func_801E337C_Mid {
    u8 pad0[0x24];
    struct func_801E337C_Obj *unk24;
};
struct func_801E337C_Node {
    u8 pad0[0x8];
    struct func_801E337C_Mid *unk8;
};
extern struct func_801E337C_Node *D_801DAB14;
struct func_801E4318_ChainNode {
    u8 pad0[8];
    struct func_801E4318_ChainNode *unk8;
    u8 padC[0x18];
    struct func_801E4318_ChainNode *unk24;
    u8 pad28[4];
    struct func_801E337C_Data *unk2C;
};
#define ROOT ((struct func_801E4318_ChainNode *)D_801DAB14)
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern void func_8038BEC8(f32);
s32 func_801E4318(s32 arg0, s32 arg1) {

    func_8038BEC8(5.0f);
    func_8038BE98(33.2999992f);
    func_8038BD50((-193.600006f), 12.5f, -10.8f);
    D_8038BD88((-199.600006f), 14.5f, -40.2f);
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk4 = (-201.699997f);
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ROOT->unk8->unk8->unk8->unk24->unk2C->unkC = (-30.1000004f);
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CC470(2, 0x03200039, 0, 1, 1.0f);
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = (-201.199997f);
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = (-40.9000015f);
    ROOT->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x120;
    func_801CC470(3, 0x0320001A, 0, 0x100, 10.0f);
    return 8;
}
