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
struct func_801E6460_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E6460_Struct2 {
    u8 pad0[0x2C];
    struct func_801E6460_Struct3 *unk2C;
};
struct func_801E6460_Struct1 {
    u8 pad0[8];
    struct func_801E6460_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801E6460_Struct2 *unk24;
};
s32 func_801E6460(s32 arg0, s32 arg1) {
    struct func_801E6460_Struct2 *temp_v0;

    temp_v0 = ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = (-201.199997f);
        ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = (-40.9000015f);
        ((struct func_801E6460_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x120;
        func_801CC470(3, 0x0320001A, 0, 0x100, 7.0f);
        return 2;
    }
    return 1;
}
