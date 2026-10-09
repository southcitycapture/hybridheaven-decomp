#include "context.h"
extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

struct func_801E5764_StructC {
    u8 pad0[0x12];
    u16 unk12;
};

struct func_801E5764_StructB {
    u8 pad0[0x2C];
    struct func_801E5764_StructC *unk2C;
};

struct func_801E5764_StructA {
    u8 pad0[8];
    struct func_801E5764_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E5764_StructB *unk24;
};

s32 func_801E5764(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        ((struct func_801E5764_StructA *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1CF8;
        func_801CC470(1, 0x01B8001B, 0, 0x100, 1.0f);
        return 4;
    }
    return 3;
}
