#include "context.h"

typedef struct func_801271E4_StructB {
    u8 pad0[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 pad1[5];
    s32 unk54;
} func_801271E4_StructB;
typedef struct func_801271E4_StructC {
    u8 pad[0x30];
    f32 f[6];
} func_801271E4_StructC;
typedef struct func_801271E4_StructA {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0xDC - 6];
    func_801271E4_StructB *unkDC;
    u8 pad2[0xE8 - 0xE0];
    struct { u8 pad[0x2C]; func_801271E4_StructC *unk2C; } *unkE8;
    u8 pad3[0xEF5 - 0xEC];
    u8 unkEF5;
    u8 pad4[6];
    s32 unkEFC;
} func_801271E4_StructA;
#define G ((func_801271E4_StructA *)&D_801BBBF0)
extern u8 D_8018C79C[];
extern u8 D_8018C7D4[];
extern void func_801C4A5C(void *, s32);
extern u8 func_80127374[];

s32 func_801271E4(void *arg0) {
    if (G->unk4 == 0x21) {
        func_8011AAF4(D_8018C79C, 0x69A, arg0, 0, 1, 0.0f, G->unkE8->unk2C->f[0], G->unkE8->unk2C->f[1], G->unkE8->unk2C->f[2], 0.0f, G->unkE8->unk2C->f[3], G->unkE8->unk2C->f[4], G->unkE8->unk2C->f[5], 0.0f, 35.0f, -1, -1);
    } else {
        func_8011AAF4(D_8018C7D4, 0x69C, arg0, 2, 1, 0.0f, G->unkE8->unk2C->f[0], G->unkE8->unk2C->f[1], G->unkE8->unk2C->f[2], 0.0f, G->unkE8->unk2C->f[3], G->unkE8->unk2C->f[4], G->unkE8->unk2C->f[5], 0.0f, 35.0f, -1, -1);
    }
    G->unkEF5 = 0;
    G->unkDC->unk54 = G->unkEFC;
    func_801C4A5C(G->unkDC, 0);
    G->unkDC->unk4E = 3;
    G->unkDC->unk4C = G->unkDC->unk4E;
    G->unkDC->unk4D = 0x12;
    func_800058DC((s32)G->unkDC, func_80127374);
    return 1;
}
