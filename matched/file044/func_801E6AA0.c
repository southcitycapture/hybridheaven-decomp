#include "context.h"
extern u8 D_801DAB14[];
extern void func_801CC470(s32, s32, s32, s32, f32);

struct func_801E6AA0_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E6AA0_StructD {
    u8 pad0[0x2C];
    struct func_801E6AA0_StructE *unk2C;
};

struct func_801E6AA0_StructC {
    u8 pad0[0x24];
    struct func_801E6AA0_StructD *unk24;
};

struct func_801E6AA0_StructB {
    u8 pad0[8];
    struct func_801E6AA0_StructC *unk8;
};

s32 func_801E6AA0(s32 arg0, s32 arg1) {
    struct func_801E6AA0_StructD *temp_v0;

    temp_v0 = (*(struct func_801E6AA0_StructB **)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 48.0f;
        (*(struct func_801E6AA0_StructB **)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E6AA0_StructB **)D_801DAB14)->unk8->unk24->unk2C->unkC = -48.0f;
        (*(struct func_801E6AA0_StructB **)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01B80030, 0, 0x100, 4.0f);
        return 3;
    }
    return 2;
}
