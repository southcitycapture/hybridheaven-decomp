#include "context.h"

typedef struct func_801E8148_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E8148_StructE;

typedef struct func_801E8148_StructD {
    u8 pad0[0x2C];
    func_801E8148_StructE *unk2C;
} func_801E8148_StructD;

typedef struct func_801E8148_StructC {
    u8 pad0[0x24];
    func_801E8148_StructD *unk24;
} func_801E8148_StructC;

typedef struct func_801E8148_StructB {
    u8 pad0[0x8];
    func_801E8148_StructC *unk8;
} func_801E8148_StructB;

typedef struct func_801E8148_StructA {
    u8 pad0[0x8];
    func_801E8148_StructB *unk8;
} func_801E8148_StructA;

extern f32 D_801EDDE4;
extern f32 D_801EDDE8;

s32 func_801E8148(s32 arg0, s32 arg1) {
    func_801E8148_StructD *temp_v0;

    temp_v0 = (*(func_801E8148_StructA **) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801EDDE4;
        (*(func_801E8148_StructA **) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(func_801E8148_StructA **) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801EDDE8;
        (*(func_801E8148_StructA **) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xC2D;
        func_801CC470(1, 0x03480012, 0, 0x11, 1.0f);
        return 2;
    }
    return 1;
}
