#include "context.h"

struct func_802005CC_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_802005CC_Struct2 {
    u8 pad0[0x2C];
    struct func_802005CC_Struct3 *unk2C;
};

struct func_802005CC_Struct1 {
    u8 pad0[8];
    struct func_802005CC_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_802005CC_Struct2 *unk24;
};

extern f32 D_80208E00;

s32 func_802005CC(s32 arg0, s32 arg1) {
    struct func_802005CC_Struct2 *temp_v0;

    temp_v0 = ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -1.0f;
        ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208E00;
        ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x03200007, 0, 0, 5.0f);
        return 2;
    }
    return 1;
}
