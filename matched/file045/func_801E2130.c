#include "context.h"
struct func_801E337C_Node {
    u8 pad0[0x8];
    struct func_801E337C_Mid *unk8;
};
struct func_801E337C_Mid {
    u8 pad0[0x24];
    struct func_801E337C_Obj *unk24;
};
struct func_801E337C_Obj {
    u8 pad0[0x2C];
    struct func_801E337C_Data *unk2C;
};
struct func_801E337C_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};
extern struct func_801E337C_Node *D_801DAB14;
extern void func_801CC470(s32, s32, s32, s32, f32);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);

struct func_801E2130_Struct1 {
    u8 pad0[0x8];
    struct func_801E2130_Struct2 *unk8;
};
struct func_801E2130_Struct2 {
    u8 pad0[0x24];
    struct func_801E2130_Struct3 *unk24;
};
struct func_801E2130_Struct3 {
    u8 pad0[0x2C];
    struct func_801E2130_Struct4 *unk2C;
};
struct func_801E2130_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    u16 unk12;
};

extern f32 D_801E8C88;
extern f32 D_801E8C8C;
extern f32 D_801E8C90;
extern f32 D_801E8C94;

s32 func_801E2130(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unk4 = -113.0f;
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 10.5f;
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unkC = 30.0f;
        ((struct func_801E2130_Struct1 *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_8038BE98(D_801E8C88);
        func_8038BD50(D_801E8C8C, -2.5f, 42.0f);
        D_8038BD88(D_801E8C90, D_801E8C94, 31.6f);
        func_801CC470(0, 0x02A80037, 0, 1, 1.0f);
        return 8;
    }
    return 7;
}
