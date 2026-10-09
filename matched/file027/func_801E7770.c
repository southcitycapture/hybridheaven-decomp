#include "context.h"
extern u8 *D_801DAB14;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
void func_801D03EC();

typedef struct func_801E7770_Node {
    u8 pad0[8];
    struct func_801E7770_Node *unk8;
    u8 pad1[0x18];
    struct func_801E7770_Mid *unk24;
} func_801E7770_Node;

typedef struct func_801E7770_Mid {
    u8 pad0[0x2C];
    struct func_801E7770_Leaf *unk2C;
} func_801E7770_Mid;

typedef struct func_801E7770_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E7770_Leaf;

extern f32 D_801F58D0;

s32 func_801E7770(s32 arg0, s32 arg1) {
    func_801D03EC(0);
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = 12.0f;
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F58D0;
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
    func_801CC470(3, 0x03480089, 0, 0x100, 5.0f);
    return 5;
}
