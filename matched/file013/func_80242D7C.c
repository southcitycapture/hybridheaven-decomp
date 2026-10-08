#include "common.h"

typedef struct func_80242D7C_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_80242D7C_StructB;

typedef struct func_80242D7C_StructA {
    u8 pad0[0x2C];
    func_80242D7C_StructB *unk2C;
} func_80242D7C_StructA;

typedef struct func_80242D7C_StructC {
    u8 pad0[0xE0];
    func_80242D7C_StructA *unkE0;
    u8 pad1[0xB9A - 0xE4];
    u16 unkB9A;
} func_80242D7C_StructC;

extern func_80242D7C_StructC D_801BBBF0;
extern f32 D_80249B30;

void func_80242D7C(void) {
    D_801BBBF0.unkE0->unk2C->unk4 = D_80249B30;
    D_801BBBF0.unkE0->unk2C->unkC = -328.0f;
    D_801BBBF0.unkB9A = 0;
}
