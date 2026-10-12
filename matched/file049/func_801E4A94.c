#include "context.h"

typedef struct func_801E4A94_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E4A94_StructE;

typedef struct func_801E4A94_StructD {
    u8 pad0[0x2C];
    func_801E4A94_StructE *unk2C;
} func_801E4A94_StructD;

typedef struct func_801E4A94_StructC {
    u8 pad0[0x24];
    func_801E4A94_StructD *unk24;
} func_801E4A94_StructC;

typedef struct func_801E4A94_StructB {
    u8 pad0[0x8];
    func_801E4A94_StructC *unk8;
} func_801E4A94_StructB;

typedef struct func_801E4A94_StructA {
    u8 pad0[0x8];
    func_801E4A94_StructB *unk8;
} func_801E4A94_StructA;

extern f32 D_801E7724;
extern f32 D_801E7728;

s32 func_801E4A94(s32 arg0, s32 arg1) {
    func_801E4A94_StructD *temp_v0;

    temp_v0 = ((func_801E4A94_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E7724;
        ((func_801E4A94_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E4A94_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E7728;
        ((func_801E4A94_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xD55;
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
