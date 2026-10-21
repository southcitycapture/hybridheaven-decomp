#include "context.h"

extern struct func_801E337C_Node *D_801DAB14;
extern void func_801CC470(s32, s32, s32, s32, f32);

struct func_801E337C_StructQE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E337C_StructQD {
    u8 pad0[0x2C];
    struct func_801E337C_StructQE *unk2C;
};

struct func_801E337C_StructQC {
    u8 pad0[0x24];
    struct func_801E337C_StructQD *unk24;
};

struct func_801E337C_StructQB {
    u8 pad0[8];
    struct func_801E337C_StructQC *unk8;
};

s32 func_801E337C(s32 arg0, s32 arg1) {
    struct func_801E337C_StructQD *temp_v0;

    temp_v0 = (*(struct func_801E337C_StructQB **)&D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.5f;
        (*(struct func_801E337C_StructQB **)&D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E337C_StructQB **)&D_801DAB14)->unk8->unk24->unk2C->unkC = -9.0f;
        (*(struct func_801E337C_StructQB **)&D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
        return 3;
    }
    return 2;
}
