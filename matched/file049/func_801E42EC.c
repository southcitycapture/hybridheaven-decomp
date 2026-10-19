#include "context.h"

typedef struct func_801E42EC_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E42EC_StructC;
typedef struct func_801E42EC_StructB {
    u8 pad[0x2C];
    func_801E42EC_StructC *unk2C;
} func_801E42EC_StructB;
typedef struct func_801E42EC_StructA {
    u8 pad[0x24];
    func_801E42EC_StructB *unk24;
} func_801E42EC_StructA;
typedef struct func_801E42EC_Struct {
    u8 pad[8];
    func_801E42EC_StructA *unk8;
} func_801E42EC_Struct;

extern f32 D_801E7700;
extern f32 D_801E7704;
extern f32 D_801E7708;
extern f32 D_801E770C;

#define ROOT (*(func_801E42EC_Struct **)&D_801DAB14)

s32 func_801E42EC(s32 arg0, s32 arg1) {
    f32 t;

    if (func_801C1088(4, 0, 0xF) != 0) {
        func_801C10D8(4, 0);
        return 0xF;
    }
    t = (f32)(u32)func_801C1134(4, 0) / 15.0f;
    ROOT->unk8->unk24->unk2C->unk4 = D_801E7700 * t + -2.5f;
    ROOT->unk8->unk24->unk2C->unkC = D_801E7704 * t + D_801E7708;
    if (func_801CE2D0(0x01B8001B, 0x18) != 0 || func_801CE2D0(0x01B8001B, 0x3C) != 0) {
        func_801E42EC_StructC *c = ROOT->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x67D, D_801E770C, 1.0f);
    }
    return 0xE;
}
