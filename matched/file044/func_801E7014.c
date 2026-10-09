#include "context.h"
extern u8 D_801DAB14[];

typedef struct func_801E7014_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E7014_Leaf;

typedef struct func_801E7014_Mid {
    u8 pad0[0x2C];
    func_801E7014_Leaf *unk2C;
} func_801E7014_Mid;

typedef struct func_801E7014_Top {
    u8 pad0[0x24];
    func_801E7014_Mid *unk24;
} func_801E7014_Top;

typedef struct func_801E7014_Root {
    u8 pad0[0x8];
    func_801E7014_Top *unk8;
} func_801E7014_Root;

s32 func_801E7014(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50910) != 0) {
        ((func_801E7014_Root *)*(u8 **)D_801DAB14)->unk8->unk24->unk2C->unk4 = 48.0f;
        ((func_801E7014_Root *)*(u8 **)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E7014_Root *)*(u8 **)D_801DAB14)->unk8->unk24->unk2C->unkC = -48.0f;
        ((func_801E7014_Root *)*(u8 **)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1A38;
        return 0x19;
    }
    return 0x18;
}
