#include "context.h"
extern f32 D_801E772C;
typedef struct func_801E510C_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E510C_StructC;
typedef struct func_801E510C_StructBB {
    u8 pad[0x2C];
    func_801E510C_StructC *unk2C;
} func_801E510C_StructBB;
typedef struct func_801E510C_StructB {
    u8 pad[0x24];
    func_801E510C_StructBB *unk24;
} func_801E510C_StructB;
typedef struct func_801E510C_StructA {
    u8 pad[8];
    func_801E510C_StructB *unk8;
} func_801E510C_StructA;
typedef struct func_801E510C_Struct {
    u8 pad[8];
    func_801E510C_StructA *unk8;
} func_801E510C_Struct;
#define R2 (*(func_801E510C_Struct **)&D_801DAB14)

s32 func_801E510C(s32 arg0, s32 arg1) {
    u32 v;
    f32 q;
    f32 k;
    func_801E510C_StructC *c;

    if (func_801C1088(4, 1, 0x87) != 0) {
        func_801C10D8(4, 1);
        return 0x16;
    }
    v = func_801C1134(4, 1);
    q = (f32)v;
    q = q / 135.0f;
    *(f32 *)&R2->unk8->unk8->unk24->unk2C->unkC = 83.5f * q + 105.5f;
    if (func_801CEE30(0x01B8001B, 0x18) != 0 || func_801CEE30(0x01B8001B, 0x3C) != 0) {
        c = R2->unk8->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, c->unkC, 0x67D, D_801E772C, 1.0f);
    }
    return 0x15;
}
