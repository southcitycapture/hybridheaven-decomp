#include "context.h"

extern f32 D_801EA5B4;

typedef struct func_801E8D48_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E8D48_StructD;

typedef struct func_801E8D48_StructC {
    u8 pad0[0x2C];
    func_801E8D48_StructD *unk2C;
} func_801E8D48_StructC;

typedef struct func_801E8D48_StructB {
    u8 pad0[0x24];
    func_801E8D48_StructC *unk24;
} func_801E8D48_StructB;

typedef struct func_801E8D48_StructA {
    u8 pad0[0x8];
    func_801E8D48_StructB *unk8;
} func_801E8D48_StructA;

s32 func_801E8D48(s32 arg0, s32 arg1) {
    func_801E8D48_StructD *temp_v0;

    if (func_801CE284() != 0) {
        return 0x2D;
    }
    if (++D_801EA000 == 0x24) {
        temp_v0 = ((func_801E8D48_StructA *)D_801DAB14)->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67C, D_801EA5B4, 1.0f);
    }
    return 0x2C;
}
