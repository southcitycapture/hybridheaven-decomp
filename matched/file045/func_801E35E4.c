#include "context.h"

extern f32 D_801E8C9C;
extern s32 D_801CC470(s32, s32, s32, s32, f32);

struct func_801E35E4_StructData {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E35E4_StructObj {
    u8 pad0[0x2C];
    struct func_801E35E4_StructData *unk2C;
};
struct func_801E35E4_StructMid {
    u8 pad0[0x24];
    struct func_801E35E4_StructObj *unk24;
};
struct func_801E35E4_StructHead {
    u8 pad0[8];
    struct func_801E35E4_StructMid *unk8;
};

#define H ((struct func_801E35E4_StructHead *)func_801DAAF0.unk24)

s32 func_801E35E4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        H->unk8->unk24->unk2C->unk12 = 0x1800;
        D_801CC470(0, 0x0168003F, 0, 0x100, 1.0f);
        func_8038D33C(H->unk8->unk24->unk2C->unk4, H->unk8->unk24->unk2C->unk8, H->unk8->unk24->unk2C->unkC, 0x677, D_801E8C9C, 1.0f);
        return 9;
    }
    return 8;
}
