#include "common.h"

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
extern void D_8038BD88(f32, f32, f32);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern void func_8038BEC8(f32);
s32 func_801E4060(s32 arg0, s32 arg1) {
    struct func_801E4060_StructD {
        u8 pad0[0x4];
        f32 unk4;
        f32 unk8;
        f32 unkC;
        u8 pad10[0x2];
        s16 unk12;
    };
    struct func_801E4060_StructN {
        u8 pad0[0x8];
        struct func_801E4060_StructN *unk8;
        u8 pad0C[0x18];
        struct func_801E4060_StructN *unk24;
        u8 pad28[0x4];
        struct func_801E4060_StructD *unk2C;
    };

#define P ((struct func_801E4060_StructN *)D_801DAB14)
    func_8038BEC8(5.0f);
    func_8038BE98(33.2999992f);
    func_8038BD50((-223.100006f), 12.8999996f, -3.9f);
    D_8038BD88((-223.800003f), 13.8000002f, -35.9f);
    func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
    P->unk8->unk8->unk8->unk24->unk2C->unk4 = -217.0f;
    P->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    P->unk8->unk8->unk8->unk24->unk2C->unkC = (-33.9000015f);
    P->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xC8;
    func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = (-236.899994f);
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = (-39.2999992f);
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CC470(3, 0x0320001A, 0, 0x100, 10.0f);
    return 5;
#undef P
}
