#include "common.h"

typedef struct func_801E4428_StructTop {
    u8 pad0[0x8];
    struct func_801E4428_StructMid *unk8;
} func_801E4428_StructTop;

typedef struct func_801E4428_StructMid {
    u8 pad0[0x24];
    struct func_801E4428_StructLow *unk24;
} func_801E4428_StructMid;

typedef struct func_801E4428_StructLow {
    u8 pad0[0x2C];
    struct func_801E4428_StructFl *unk2C;
} func_801E4428_StructLow;

typedef struct func_801E4428_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E4428_StructFl;

extern func_801E4428_StructTop *D_801DAB14;
extern void func_801CC470(s32, s32, s32, s32, f32);
s32 func_801C0B8C(u64 time);

s32 func_801E4428(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x870A50) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -86.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 113.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x138E;
        func_801CC470(0, 0x03480066, 0, 1, 1.0f);
        return 7;
    }
    return 6;
}
