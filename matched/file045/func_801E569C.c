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
extern void func_801CC470(s32, s32, s32, s32, f32);
typedef struct func_801E569C_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E569C_StructE;
typedef struct func_801E569C_StructD {
    u8 pad0[0x2C];
    func_801E569C_StructE *unk2C;
} func_801E569C_StructD;
typedef struct func_801E569C_StructC {
    u8 pad0[0x24];
    func_801E569C_StructD *unk24;
} func_801E569C_StructC;
typedef struct func_801E569C_StructB {
    u8 pad0[0x8];
    func_801E569C_StructC *unk8;
} func_801E569C_StructB;
typedef struct func_801E569C_StructA {
    u8 pad0[0x8];
    func_801E569C_StructB *unk8;
} func_801E569C_StructA;
s32 func_801E569C(s32 arg0, s32 arg1) {
    func_801E569C_StructD *temp_v0;

    temp_v0 = ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = (-224.300003f);
        ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = (-23.1000004f);
        ((func_801E569C_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xBBB;
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
