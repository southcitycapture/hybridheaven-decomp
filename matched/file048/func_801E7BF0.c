#include "context.h"

typedef struct func_801E7BF0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E7BF0_StructC;
typedef struct func_801E7BF0_StructB {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E7BF0_StructC *unk30;
} func_801E7BF0_StructB;
typedef struct func_801E7BF0_StructA {
    u8 pad0[0x4C];
    func_801E7BF0_StructB *unk4C;
    func_801E7BF0_StructB *unk50;
} func_801E7BF0_StructA;

#define G (*(func_801E7BF0_StructA **)&D_8038D8D0)

s32 func_801E7BF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0246E2BC) != 0) {
        G->unk4C->unk30->unk4 = -50.0f;
        G->unk4C->unk30->unk8 = 0.0f;
        G->unk4C->unk30->unkC = 61.0f;
        G->unk4C->unk30->unk18 = 0.0f;
        G->unk4C->unk30->unk1C = 1.0f;
        G->unk4C->unk30->unk20 = 1.0f;
        G->unk4C->unk22 = 1;
        G->unk50->unk30->unk4 = 50.0f;
        G->unk50->unk30->unk8 = 0.0f;
        G->unk50->unk30->unkC = 61.0f;
        G->unk50->unk30->unk18 = 0.0f;
        G->unk50->unk30->unk1C = 1.0f;
        G->unk50->unk30->unk20 = 1.0f;
        G->unk50->unk22 = 1;
        func_801C1000(3, 0xB);
        return 4;
    }
    return 3;
}
