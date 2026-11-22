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
struct func_801E5B00_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_801E5B00_Obj {
    u8 pad0[0x2C];
    struct func_801E5B00_Data *unk2C;
};
struct func_801E5B00_Node {
    u8 pad0[0x8];
    struct func_801E5B00_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5B00_Obj *unk24;
};
s32 func_801E5B00(s32 arg0, s32 arg1) {
    struct func_801E5B00_Obj *temp_v0;

    temp_v0 = ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = (-201.699997f);
        ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = (-30.1000004f);
        ((struct func_801E5B00_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x0320003A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
