#include "context.h"

extern f32 D_80208B40;
extern f32 D_80208B44;

struct func_801F4D18_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F4D18_Ent {
    u8 pad0[0x2C];
    struct func_801F4D18_Pos *unk2C;
};

struct func_801F4D18_Link {
    u8 pad0[8];
    struct func_801F4D18_Link *unk8;
    u8 pad1[0x18];
    struct func_801F4D18_Ent *unk24;
};

s32 func_801F4D18(s32 arg0, s32 arg1) {
    struct func_801F4D18_Ent *temp_v0;

    temp_v0 = ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_80208B40;
        ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208B44;
        ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(2, 0x02A80002, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
