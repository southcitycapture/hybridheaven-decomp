#include "context.h"

extern struct func_801E5188_Struct0 *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

struct func_801E41C8_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E41C8_StructC {
    u8 pad0[0x2C];
    struct func_801E41C8_StructD *unk2C;
};

struct func_801E41C8_StructB {
    u8 pad0[0x24];
    struct func_801E41C8_StructC *unk24;
};

struct func_801E41C8_StructA {
    u8 pad0[8];
    struct func_801E41C8_StructB *unk8;
};

s32 func_801E41C8(s32 arg0, s32 arg1) {
    struct func_801E41C8_StructC *temp_v0;

    temp_v0 = ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24->unk2C->unkC = -39.5f;
        ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348007F, 0, 0x100, 5.0f);
        return 3;
    }
    return 2;
}
