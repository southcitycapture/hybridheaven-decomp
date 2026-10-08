#include "common.h"

typedef struct func_801E3D90_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E3D90_StructE;

typedef struct func_801E3D90_StructD {
    u8 pad0[0x2C];
    func_801E3D90_StructE *unk2C;
} func_801E3D90_StructD;

typedef struct func_801E3D90_StructC {
    u8 pad0[0x24];
    func_801E3D90_StructD *unk24;
} func_801E3D90_StructC;

typedef struct func_801E3D90_StructB {
    u8 pad0[8];
    func_801E3D90_StructC *unk8;
} func_801E3D90_StructB;

typedef struct func_801E3D90_StructA {
    u8 pad0[8];
    func_801E3D90_StructB *unk8;
} func_801E3D90_StructA;

extern func_801E3D90_StructA *D_801DAB14;
extern f32 D_80208848;
s32 func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E3D90(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_80208848;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0320001A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
