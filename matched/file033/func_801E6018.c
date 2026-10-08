#include "context.h"

struct func_801E6018_Out {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};

struct func_801E6018_Ext {
    u8 pad0[0x2C];
    struct func_801E6018_Out *unk2C;
};

struct func_801E6018_Obj {
    u8 pad0[0x8];
    struct func_801E6018_Obj *unk8;
    u8 pad1[0x24 - 0xC];
    struct func_801E6018_Ext *unk24;
};

extern f32 D_801F4828;
extern f32 D_801F482C;
extern f32 D_801F4830;

s32 func_801E6018(s32 arg0, s32 arg1) {
    struct func_801E6018_Ext *temp_v0;

    temp_v0 = ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801F4828;
        ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = D_801F482C;
        ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F4830;
        ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x0320003C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
