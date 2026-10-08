#include "context.h"

typedef struct func_801E6154_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E6154_StructC;

typedef struct func_801E6154_StructB {
    u8 pad0[0x2C];
    func_801E6154_StructC *unk2C;
} func_801E6154_StructB;

typedef struct func_801E6154_StructA {
    u8 pad0[8];
    struct func_801E6154_StructA *unk8;
    u8 pad1[0x18];
    func_801E6154_StructB *unk24;
} func_801E6154_StructA;

#define func_801E6154_SUB (((func_801E6154_StructA *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24)

s32 func_801E6154(s32 arg0, s32 arg1) {
    func_801E6154_StructB *temp_v0;

    temp_v0 = func_801E6154_SUB;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        func_801E6154_SUB->unk2C->unk8 = 0.0f;
        func_801E6154_SUB->unk2C->unkC = 0.0f;
        func_801E6154_SUB->unk2C->unk12 = 0;
        func_801CC470(6, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
