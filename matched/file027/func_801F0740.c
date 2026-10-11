#include "context.h"

typedef struct func_801F0740_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801F0740_StructE;

typedef struct func_801F0740_StructD {
    u8 pad0[0x2C];
    func_801F0740_StructE *unk2C;
} func_801F0740_StructD;

typedef struct func_801F0740_StructC {
    u8 pad0[0x24];
    func_801F0740_StructD *unk24;
} func_801F0740_StructC;

typedef struct func_801F0740_StructB {
    u8 pad0[8];
    func_801F0740_StructC *unk8;
} func_801F0740_StructB;

typedef struct func_801F0740_StructA {
    u8 pad0[8];
    func_801F0740_StructB *unk8;
} func_801F0740_StructA;

extern f32 D_801F5A3C;

s32 func_801F0740(s32 arg0, s32 arg1) {
    func_801F0740_StructD *temp_v0;

    temp_v0 = ((func_801F0740_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801F0740_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801F0740_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801F5A3C;
        ((func_801F0740_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
