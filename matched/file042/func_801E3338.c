#include "context.h"
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

typedef struct func_801E3338_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3338_StructFl;

typedef struct func_801E3338_StructLow {
    u8 pad0[0x2C];
    func_801E3338_StructFl *unk2C;
} func_801E3338_StructLow;

typedef struct func_801E3338_StructMid {
    u8 pad0[0x24];
    func_801E3338_StructLow *unk24;
} func_801E3338_StructMid;

typedef struct func_801E3338_StructTop {
    u8 pad0[0x8];
    func_801E3338_StructMid *unk8;
} func_801E3338_StructTop;

s32 func_801E3338(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D400) != 0) {
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unk4 = -2.0f;
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unkC = 205.0f;
        ((func_801E3338_StructTop *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1AD8;
        func_801CC4D8(0, 0x03480066, 0, 0, 5.0f);
        return 6;
    }
    return 5;
}
