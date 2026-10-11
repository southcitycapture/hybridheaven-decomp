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

s32 func_801EF100(s32 arg0, s32 arg1) {
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -22.0f;
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 3.0f;
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -28.0f;
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x200;

    func_801CC470(5, 0x03480023, 0, 1, 1.0f);
    return 5;
}
